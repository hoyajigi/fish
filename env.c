#ifndef _ENV
#define _ENV

#include<unistd.h>
#include<pwd.h>

#include "map_lib.h"

#define FILENAME ".fishrc"

struct map_t *_env=NULL;

char *getHomeDirectoryOfLoginUser()
{
	char *user_name;
	struct passwd *user_pw;

	user_name   = getlogin();           // 로그인 이름 구하기
	user_pw     = getpwnam( user_name); // 로그인 이름으로  사용자 정보 구하기
	return user_pw->pw_dir;
}

void loadEnv()
{
}

void saveEnv()
{
}

struct map_t *getEnv()
{
	if(_env==NULL)
		_env=map_create();
	loadEnv();
	return _env;
}

void setEnv()
{
	map_set(_env,"","");
	saveEnv();
}

#endif
