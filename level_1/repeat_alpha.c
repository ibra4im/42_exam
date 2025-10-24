#include <unistd.h>
void repeat(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        while (i > 0)
        {
            write(1,&str[i],1);
            i--;
        }
        i++;
    }
}
int main(int ac, char *av[])
{
    if (ac < 1)
    write(1,"\n",1);

    repeat(av[1]);
}