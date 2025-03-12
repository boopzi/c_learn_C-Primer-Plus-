#include<stdio.h>
int main(void)
{   
    double water;
    printf("请输入水的夸脱量：");
    scanf("%f",&water);
    printf("其中有%e个水分子\n",water*950/3e-10);
    return 0 ;
}