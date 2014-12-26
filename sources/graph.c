#include <graph.h>

struct GRAPH
{
	pthread_t
		monitor;
	UDP_SOCKET
		udp_socket;
	struct GRAPH_ELEMENT
	{
		int64_t
			x,
			y;
		int8_t
			is_valid;
	}
		elements[5*5];
	LINKS
		links;
};

int graph_element_enable(struct GRAPH_ELEMENT *element, int is_valid, int64_t x, int64_t y)
{
	if(element == NULL)
	{
		return TRUE;
	}

	element->is_valid	= is_valid;
	element->x		= x;
	element->y		= y;

	return FALSE;
}

int graph_create(GRAPH *pointer, const char *ip_server, uint16_t port_server)
{

	struct GRAPH
	*	graph	= NULL;
	LINKS
		link	= {0};
	if(ip_server == NULL)
	{
		return TRUE;
	}

	graph = malloc(sizeof(*graph));
	if(graph == NULL)
	{
		perror(strerror(errno));
		return TRUE;
	}

	memset(graph->elements, 0, sizeof(graph->elements)*sizeof(*graph->elements));

	if(links_initialize(&(graph->links), ip_server, port_server))
	{
		return TRUE;
	}



	return FALSE;
}
