#include <unistd.h>
void rot(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
            if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            {
                str[i] += 13 ;
                write(1,&str[i],1);
            }
            else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            {
                str[i] -= 13 ;
                write(1,&str[i],1);
            }
            else
            {
                write (1,&str[i],1);
            }
            i++;
    }
    write(1,"\n",1);
}
int main(int ac , char *av[])
{
    if (ac <= 1)
    {
        write(1,"\n",1);
    }
    else 
    rot(av[1]);
    
}