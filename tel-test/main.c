#include <config.h>
#include <sys/types.h>
#include <stdlib.h>
#include <progname.h>
#include <error.h>
#include <argp.h>
#include <libinetutils.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <arpa/telnet.h>

/*
 * Fix error (error: storage size of ‘hints’ isn’t known)
 * It appears that gcc isn't linking with netdb.h
 */
#include <netdb.h>

#include "general.h"
#include "ring.h"
#include "defines.h"
#include "types.h"
#include "externs.h"

extern int net;
void tninit (void);

void
dataArrivedHandler (void) {
  int data_count = ring_full_count (&netiring);

  printf ("\nGOT DATA (%d)\n", data_count);
  printf ("\n Input: ");
  for (int idx = 0; idx < data_count; idx++) {
    printf ("%c", netiring.consume[idx] & 0xff);
  } printf ("\n");

  ring_consumed (&netiring, data_count);
}

int
main (int argc, char *argv[]) {
	int err;
	char* serverToConnect = "ec2-35-161-108-53.us-west-2.compute.amazonaws.com";
	char* port = "23";
	struct addrinfo *result, *aip, hints;
	
	memset (&hints, 0, sizeof (hints));
	
	hints.ai_family 	= AF_INET;
	hints.ai_socktype 	= SOCK_STREAM;
	
	tninit ();
	err = getaddrinfo (serverToConnect, port, &hints, &result);
	if (err) {
		printf ("# Debug INFO - getaddrinfo error(%d)\n", err);
		return err;
	}
	
	aip = result;
	char buf[256];
	err = getnameinfo (aip->ai_addr, aip->ai_addrlen, buf, sizeof (buf),
			 NULL, 0, NI_NUMERICHOST);
	if (err) {
		printf ("# Debug INFO - getnameinfo error(%d)\n", err);
		return err;
	}
	
	printf ("# Debug INFO - Have IP address (%s)\n", buf);
	net = socket (aip->ai_family, SOCK_STREAM, 0);
	if (net < 0) {
		printf ("# Debug INFO - socket error(%d)\n", err);
		return net;
	}
	
	err = connect (net, (struct sockaddr *) aip->ai_addr, aip->ai_addrlen);
	if (err < 0) {
		printf ("# Debug INFO - connect error(%d)\n", err);
		return err;
	}
	printf ("# Debug INFO - Connected to (%s)\n", buf);
	
	sys_telnet_init ();
  set_terminal_enabled (FALSE);
  set_data_arrived_handler (dataArrivedHandler);
  printf ("# Debug INFO - Starting Telnet\n");
	for (;;) {
		telnet("");
	}
	
	return 0;
}

void
tninit (void) {
  init_terminal ();
  init_network ();
  init_telnet ();
  init_sys ();
}