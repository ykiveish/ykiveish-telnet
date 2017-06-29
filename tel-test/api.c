#include <config.h>

#include <stdlib.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <time.h>
#include <errno.h>

#include <arpa/telnet.h>
#include <sys/select.h>

#include "ring.h"

#include "defines.h"
#include "externs.h"

Ring apiiring;
unsigned char apiibuf[2 * BUFSIZ];
unsigned char network_data_arrived;

void
init_api (void) {
	if (ring_init (&apiiring, apiibuf, sizeof apiibuf) != 1) {
		exit (EXIT_FAILURE);
	}
}

void
set_terminal_enabled (char value) {
	is_terminal_enabled = value;
}

void
set_data_arrived_handler (Callback value) {
	onDataArrived = value;
}

void
send_buffer (char * buff, int size) {

}

void
connect_server () {

}
