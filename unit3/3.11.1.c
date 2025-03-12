#include<stdio.h>
int main(void)
{
    unsigned short  a=65535;
    float b=0.34e39;
    printf("%hd\n",a);
    printf("%hd\n",a+1);
    printf("%f\n",b);
    printf("%f\n",b*2);
    printf("%f\n",b/2);
}