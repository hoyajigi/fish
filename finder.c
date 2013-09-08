#ifndef _finder_c
#define _finder_c
#include<unistd.h>
#include<errno.h>

int finder(char *binary)
{
	errno=0;
	if(0==access(binary,X_OK))
		return 0;
	return 1;
}
#endif
