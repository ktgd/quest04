/*
**
** QWASAR.IO -- my_count_on_it
**
** @param {string_array*} param_1
**
** @return {integer_array*}
**
*/
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

}
