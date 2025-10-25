#include <unistd.h>
void first_word(char *str)
{
    int i = 0 ;
    while (str[i] != ' ')
    {
        while (str[i] == 32 || str[i] == 9)
        i++;

        while ((str[i] != 32 && str[i] != 9)&& str[i]) 
            write(1,&str[i++],1);    
     }
     
    write(1,"\n",1);
}
int main(int ac,char **av)
{
    if (ac == 2)
    first_word(av[1]);
}