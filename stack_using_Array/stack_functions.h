#include "display_fucntion.h"// it contains the display function
void push(void* a,int v)
{
    t++;
    stack=realloc(stack,(t+1)*sizeof(void *));//array size increased
    stack[t]=a;//pointer address given to array
    d_type=realloc(d_type,(t+1)*sizeof(short));
    d_type[t]=v;
    printf("\n");
    disp(t,0);
    printf(" pushed");
}
void* pop()
{
    if(t==-1)
    printf("\nArray is empty");
    else
    {
        printf("\n");
        disp(t,0);
        printf(" poped");
        stack=realloc(stack,t*sizeof(void *));
        d_type=realloc(d_type,t*sizeof(short));
        return stack[t--];
    }
}

void* top()
{
    if(t==-1)
    printf("\nArray is empty");
    else{
        printf("\nTop Element is: ");
       disp(t,0);
       return stack[t];
    }
}
void* display()
{
    if(t==-1){
    printf("\nArray is empty");
    return;
    }
    printf("\nThe whole stack is\n\n");
    for(int i=t;i>=0;i--)
    disp(i,1);
    printf("|");
    for(int i=0;i<20;i++)
    printf("_");
    printf("|");

}