#if !defined(	MON__TYPEDEF__H		)
	#define		MON__TYPEDEF__H

	#include <stdint.h>

	#include <define.h>

	typedef uint64_t
		SIZE;
	typedef void
	*	GRAPH,
	*	STACK,
	*	LINKS,
	*	UDP_SOCKET;

	typedef struct
	{
		signed int
			x,
			y;
	} GRAPH_ADDRESS;

	typedef int (*COMPARE_CALLBACK)(void*, void*);
	typedef int (*APPLY_CALLBACK)(void */* user data */, void* /* structure data */);

#endif //	MON_TYPEDEF__H
