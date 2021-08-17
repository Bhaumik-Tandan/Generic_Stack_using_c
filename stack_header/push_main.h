void push__19BIT0292(stack *s,void* a,int v)
{
    #include "display_fucntion.h"// it contains the disp____19BIT0292lay function
    #define t s->t__19BIT0292
    #define stack__19BIT0292 s->stack__19BIT0292
    #define d_type__19BIT0292 s->d_type__19BIT0292
    t++;
    stack__19BIT0292=realloc(stack__19BIT0292,(t+1)*sizeof(void *));//array size increased
    stack__19BIT0292[t]=a;//pointer address given to array
    d_type__19BIT0292=realloc(d_type__19BIT0292,(t+1)*sizeof(short));
    d_type__19BIT0292[t]=v;
    printf("\n");
    disp____19BIT0292(s,t,0);
    printf(" pushed");
    #undef t
    #undef stack__19BIT0292
    #undef d_type__19BIT0292
}