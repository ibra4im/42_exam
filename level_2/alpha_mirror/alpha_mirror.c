#include <unistd.h>

void mirror(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = 'z' - str[i] +  'a';
            write(1,&str[i],1);
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = 'Z' - str[i] + 'A';
            write(1,&str[i],1);
        }
        i++;        
    }
    write(1,"\n",1);
}
int main(int ac , char *av[])
{
    if (ac < 1)
    {
        return (write(1,"\n",1),0);
    }
    else if (ac > 1)
    mirror(av[1]);
}