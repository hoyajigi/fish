#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX_PATH	100
#define LF			10

int print_prompt()
{
	char *buffer = (char *)malloc(MAX_PATH); 
	char *value = (char *)getcwd (buffer, (size_t)MAX_PATH); 

	if (value != 0)	fprintf(stdout,"fish:%s>",buffer);
		free (buffer); 
						
	return 0;
}

int main()
{
	char c;
	print_prompt();
	while((c=getchar())!=EOF)		
		if(c==LF)	print_prompt();
	return 0;
}
