#if !defined(	MON__GRAPH__H	)
	#define		MON__GRAPH__H

	#include	<stdio.h>
	#include	<stdlib.h>
	#include	<string.h>
	#include	<errno.h>
	#include	<pthread.h>
	#include	<stdint.h>

	#include	<define.h>
	#include	<typedef.h>
	#include	<link.h>
	#include	<stack.h>

	int graph_create		(GRAPH *pointer, const char *ip_server, uint16_t port);

	int graph_enable		(GRAPH graph, signed int x, signed int y, int enable_or_disable);
	int graph_set_position		(GRAPH graph, signed int x, signed int y, signed int new_x, signed int new_y);
	int graph_ping			(GRAPH graph);
	int graph_find_free_space	(GRAPH, GRAPH_ADDRESS *address);
	int graph_find_path		(GRAPH graph, signed int x, signed int y);

	int graph_destroy		(GRAPH *graph);

#endif //		MON__GRAPH__H
