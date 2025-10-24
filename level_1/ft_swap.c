#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int tmp ;

    tmp = *a ;
    *a  = *b  ;
    *b  = tmp ;
}
int main()
{
    int a = 10 ;
    int b = 555 ;
    ft_swap(&a,&b);
    printf("a  = %d\n",a);
    printf("b  = %d",b);
}
