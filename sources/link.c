#include <link.h>

#ifdef WIN32 /* si vous êtes sous Windows */
	#include	<winsock2.h>
#elif defined (linux) /* si vous êtes sous Linux */

	#include	<sys/types.h>
	#include	<sys/socket.h>
	#include	<netinet/in.h>
	#include	<arpa/inet.h>
	#include	<unistd.h> /* close */
	#include	<netdb.h> /* gethostbyname */
	#define		INVALID_SOCKET -1
	#define		SOCKET_ERROR -1
	#define		closesocket(s) close(s)
	typedef int
		SOCKET;
	typedef struct sockaddr_in
		SOCKADDR_IN;
	typedef struct sockaddr
		SOCKADDR;
	typedef struct in_addr
		IN_ADDR;

#else

	#error		not defined for this platform

#endif

struct LINKS
{
	SIZE
		number_tcp_socket;
	fd_set
		socket_set;
	STACK
		sockets;
};

int links_create(LINKS *pointer)
{
	if(pointer == NULL)
	{
		fprintf(stderr, "%s:%s:%s:%d:%s\n", "invalid tcp socket pointer", __FILE__, __FUNCTION__, __LINE__, "socket pointer == NULL");
		return TRUE;
	}



	return FALSE;
}

int links_add()
{

}

int link_send(LINKS link)
{

}
