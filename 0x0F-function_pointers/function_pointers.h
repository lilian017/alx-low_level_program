#ifndef function_pointers_h
#define function_pointers_h

int _puchar(int c);
void print_name(char *name, void (*f)(char *));
int int_index(int *array, int size, int (*cmp)(int));


#endif