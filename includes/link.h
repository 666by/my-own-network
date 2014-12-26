#if !defined(	MON__LINK__H	)
	#define		MON__LINK__H

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <stdint.h>

	#include <define.h>
	#include <typedef.h>

	enum LINK_REQUEST
	{
		LINK_REQUEST_PING,
		LINK_REQUEST_CONNECT,
		LINK_REQUEST_SPEED_TEST,
		LINK_REQUEST_LATENCY_TEST,
		LINK_REQUEST_SECURITY_TEST
	};

	int links_initialize	(LINKS *pointer, const char *ip_server, uint16_t port_server);
	int links_reinitialize	(LINKS *pointer, const char *ip_server, uint16_t port_server);

#endif
