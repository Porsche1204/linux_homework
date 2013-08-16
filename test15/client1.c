#include<sys/types.h>
#include<sys/socket.h>
#include<stdio.h>
#include<sys/un.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int sockfd;
	int len;

	//struct sockaddr_un {
	//	sa_family_t sun_family;
	//	char        sun_path[];
	//}
	struct sockaddr_un address;

	int result;
	char ch = 'A';

	//int socket(int domain, int type, int protocol);
	//domain : AF_UNIX, AF_INET
	//type : SOCK_STREAM, SOCK_DGRAM
	//protocal : you just need 0 
	sockfd = socket(AF_UNIX, SOCK_STREAM, 0);
	
	address.sun_family = AF_UNIX;
	strcpy(address.sun_path, "server_socket");
	len = sizeof(address);

	result = connect(sockfd, (struct sockaddr *)&address, len);
	
	if(result == -1) {
		perror("oops: client1");
	}

	write(sockfd, &ch, 1);
	read(sockfd, &ch, 1);
	printf("char from server = %c\n", ch);

	close(sockfd);
	exit(0);		
}
