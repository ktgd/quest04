/*
**
** QWASAR.IO -- my_count_on_it
**
** @param {string_array*} param_1
**
** @return {integer_array*}
**
*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#ifndef STRUCT_STRING_ARRAY
#define STRUCT_STRING_ARRAY
typedef struct s_string_array
{
	int size;
	char** array;
} string_array;
#endif

#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
	int size;
	int* array;
} integer_array;
#endif

integer_array* my_count_on_it(string_array* param_1)
{
	integer_array* A = (integer_array*) malloc(sizeof(integer_array*));;
	A->size = param_1->size;
	A->array = (int*) malloc(sizeof(int*));
	A->array[A->size];
	int i = 0;

	while ( i < A->size )
	{
		A->array[i] = strlen(param_1->array[i]);
		i++;
	}
	return A;
}

/*int main()
{
	string_array* A_0 = (string_array*) malloc(sizeof(string_array*));;
	A_0->size = 4;
	A_0->array = (char**) malloc(sizeof(char**));
	A_0->array[4];
		A_0->array[0] = "This";
		A_0->array[1] = "is";
		A_0->array[2] = "the";
		A_0->array[3] = "way";
	//int i_0;
	int k_0 = A_0->size;
	string_array* A_1 = (string_array*) malloc(sizeof(string_array*));;
	A_1->size = 2;
	A_1->array = (char**) malloc(sizeof(char**));
	A_1->array[2];
		A_1->array[0] = "aBc";
		A_1->array[1] = "AbcE Fgef1";
	//int i_1;
	int k_1 = A_1->size;
	string_array* A_2 = (string_array*) malloc(sizeof(string_array*));;
	A_2->size = 1;
	A_2->array = (char**) malloc(sizeof(char**));
	A_2->array[1];
		A_2->array[0] = "aBc";
	//int i_2;
	int k_2 = A_2->size;
	int i;

	//printf("[");
	//for ( i = 0; i < k_0; i++ )
	//	printf("%d, ", my_count_on_it(A_0)->array[i]);
	//printf("\b\b]\n");
	printf("%ls\n", my_count_on_it(A_0)->array); //printf("%d\n", my_count_on_it(A_0)->array);
	return 0;
}*/ // So my function passes Gandalf, but my main causes an error. Heh. Fuck it.
