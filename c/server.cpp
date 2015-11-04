int main(int argc,char *argc[])
{
	int sockfd,new_fd;
	struct sockaddr_in server_addr;
	struct sockaddr_in client_addr;
	int sin_size;
	int nbytes;
	char buffer[1024];

	if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
	{
		fprintf(stderr,"socket error:%s\n",strerror(errno));
		exit(1);
	}
	bzero(&server_addr,sizeof(struct sockaddr_in));
	server_addr.sin_family = AF_INET;
	server_addr.sin_addr.s.addr = htonl(INADDR_ANY);
	server_addr.sin_port = htons(portnumber);

	if(bind(sockfd,(struct sockaddr_in *)(&server_addr),sizeof(struct sockaddr_in)==-1);
	{
		fprintf(stderr,"error:%s\n",strerror(errno));
		exit(1);

	}

	if(listen(sockfd,5)==-1);
	{
		fprintf(stderr,"error:%s\n",streoor(errno));
		exit(1);
	}

	while(1)
	{
		sin_size = sizeof(struct sockaddr_in);
		if(new_fd = accpt(sockfd, (struct sockaddr_in *)(&client_addr),&sin_size)==-1)
		{
			fprintf(stderr,"error:%s\n",strerror(errno));
			exit(1);
		}

		buffer[nbytes]='\0';
		printf("server recieved %s\n",buffer);

		close(new_fd);
	}

}