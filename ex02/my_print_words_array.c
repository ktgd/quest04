/*
**
** QWASAR.IO -- my_print_words_array
**
** @param {string_array*} param_1
**
** @return {void}
**
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
	int size;
	char** array;
} string_array;
#endif

/*int putchar(char c)
{
	return write(1, &c, 1);
}*/ // KVPB's PUTCHAR

void putstr(char* s)
{
	int i = 0;

	while (s[i] != 0)
	{
		putchar(s[i]);
		i++;
	}
} // KVPB's PUTSTR

void my_print_words_array(string_array* param_1)
{
	int n = param_1->size;
	int i = 0;

	while ( i < n )
	{
		putstr(param_1->array[i]);
		putchar('\n');
		//printf("%s\n", param_1->array[i]);
		i++;
	}
}

/*int main()
{
	string_array* A_0 = (string_array*) malloc(sizeof(string_array*));
	A_0->size = 3;
	A_0->array = (char**) malloc(sizeof(char**));
	A_0->array[3];
		A_0->array[0] = "Hello";
		A_0->array[1] = "World";
		A_0->array[2] = ".";
	string_array* A_1 = (string_array*) malloc(sizeof(string_array*));
	A_1->size = 3;
	A_1->array = (char**) malloc(sizeof(char**));
	A_1->array[3];
		A_1->array[0] = "abc";
		A_1->array[1] = "def";
		A_1->array[2] = "gh";
	string_array* A_2 = (string_array*) malloc(sizeof(string_array*));
	A_2->size = 1;
	A_2->array = (char**) malloc(sizeof(char**));
	A_2->array[1];
		A_2->array[0] = "123";
	string_array* A_3 = (string_array*) malloc(sizeof(string_array*));
	A_3->size = 3;
	A_3->array = (char**) malloc(sizeof(char**));
	A_3->array[1];
		A_3->array[0] = "";
		A_3->array[1] = "";
		A_3->array[2] = "hello";

	my_print_words_array(A_0);
	my_print_words_array(A_1);
	my_print_words_array(A_2);
	my_print_words_array(A_3);
	return 0;
}*/
