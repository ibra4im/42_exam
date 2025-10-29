#include  <unistd.h>
void camel_to_snake(char *str)
{
    int i = 0 ;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1,"_",1);
            str[i] += 32 ; 
            write(1,&str[i],1);
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            write(1,&str[i],1);
        }
        i++;
    }
    write(1,"\n",1);
}
int main (int ac, char *av[])
{
    if (ac == 2)
    {
        camel_to_snake(av[1]);
    }
    else 
    write(1,"\n",1);
    
}