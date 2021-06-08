/*
**
** QWASAR.IO -- my_strdup
**
** @param {char*} param_1
**
** @return {char*}
**
*/

#include <string.h>
#include <stdlib.h>
#include <stddef.h>
//#include <stdio.h>

char* my_strdup( char* s )
{
//	char* s = param_1;
	int l = strlen(s) + 1;
	char* s_2 = malloc(l);

	if ( s_2 == NULL )
		return NULL;
	(void) memcpy(s_2, s, l);
	return s_2;
}

/*int main()
{
	char* s_0 = "abc";
	char* s_1 = "RaInB0";
	char* s_2 = "";
	
	printf("%s\n", s_0);
	printf("%s\n", s_1);
	printf("%s\n", s_2);
}*/
