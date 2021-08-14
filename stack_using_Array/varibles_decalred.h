#include <stdio.h>
#include<stdlib.h>//header file for malloc
int t=-1; //initital value of top will be zero
void **stack;//pointer to dynamic array of void type so that is can store anydata type
short *d_type;//stores the data type of the pointer 
// 0 means int
// 1 means float
// 2 means string
// 3 means char
typedef void* (* fpt)(); //function pointer type to store datatype
fpt fp[4]; //to store all the functions
//0 push 
//1 pop 
//2 top 
//3 display whole stack