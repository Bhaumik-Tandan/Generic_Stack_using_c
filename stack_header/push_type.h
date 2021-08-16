void push__19BIT0292(void* a,int v)
{
    #define t t__19BIT0292
    t++;
    stack__19BIT0292=realloc(stack__19BIT0292,(t+1)*sizeof(void *));//array size increased
    stack__19BIT0292[t]=a;//pointer address given to array
    d_type__19BIT0292=realloc(d_type__19BIT0292,(t+1)*sizeof(short));
    d_type__19BIT0292[t]=v;
    printf("\n");
    disp____19BIT0292(t,0);
    printf(" pushed");
}
void pushi__19BIT0292(int a)
{
    push__19BIT0292(a,0);
}
void pushf__19BIT0292(float a)
{
    push__19BIT0292(&a,1);
}
void pushs__19BIT0292(char * a)
{
    push__19BIT0292(a,2);
}
void pushc__19BIT0292(char a)
{
    push__19BIT0292(a,3);
}