#include <stdio.h>
#include<stdlib.h>//header file for malloc
int t__19BIT0292=-1; //initital value of top will be zero
void **stack__19BIT0292;//pointer to dynamic array of void type so that is can store anydata type
short *d_type__19BIT0292;//stores the data type of the pointer 
// 0 means int
// 1 means float
// 2 means string
// 3 means char
// typedef void* (* fpt___19BIT0292)(); //function pointer type to store datatype
// fpt___19BIT0292 fp__19BIT0292[3]; //to store all the functions
void* (* fp__19BIT0292[3])();
//0 push 
//1 pop 
//2 top 
//3 display whole stack