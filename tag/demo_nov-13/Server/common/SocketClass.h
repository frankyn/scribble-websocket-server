#include <cstdlib>
#include <cstring>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <netdb.h>
#include <arpa/inet.h>
#include "Logger.h"

#ifndef SOCKET_CLASS_HEADER
#define SOCKET_CLASS_HEADER

class SocketClass { 
	public:
		SocketClass ( );
		~SocketClass ( );

		int getSocket ( );
		void setNonBlocking ( int );
	protected:
		int tcpSocket ( );
		int tcpSocket ( int, int );
		//void udpSocket ( );
		//void udpSocket ( int int );
		int socketDesc;
		socklen_t tempLen;
		sockaddr tempInfo;
		sockaddr_in info;
	private:;
		int newSocket ( int, int, int );
};

#endif