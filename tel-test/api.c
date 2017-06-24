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

Ring apioring, apiiring;
unsigned char apiobuf[2 * BUFSIZ], apiibuf[BUFSIZ];
unsigned char network_data_arrived;

void
init_api (void) {
	if (ring_init (&apioring, apiobuf, sizeof apiobuf) != 1) {
		exit (EXIT_FAILURE);
	} 

	if (ring_init (&apiiring, apiibuf, sizeof apiibuf) != 1) {
		exit (EXIT_FAILURE);
	}
}
