char *ft_strcpy(char *s1,char *s2)
{
    int i = 0 ;
    while(s1[i] != '\0')
    {
        s2[i] = s1[i] ;
        i++;
    }
    s2[i] = '\0';

    return s2;
}
#include <stdio.h>
int main()
{
    char *s1 = {"hello"};
    char s2[100] ;
    ft_strcpy(s1,s2);
    printf("%s",s2); 
}