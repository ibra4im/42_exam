#include <unistd.h>
void rev(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        i++;
    }
    while (i >= 0)
    {
        write(1,&str[i],1);
        i--;
    }
    write(1,"\n",1);
}
int main(int ac, char *av[])
{
    if (ac < 1)
    write(1,"\n",1);
    if (ac == 2)
    rev(av[1]);
}