#include <unistd.h>
void search(char *str,char *str1,char *str2)
{
    int i = 0 ;
    int s = 0 ;
    int t = 0 ;
    while (str[i] != '\0')
    {
        if (str[i] == str1[s])
            str[i] = str2[t];
            write(1,&str[i],1);
        i++; 
    }
    write(1,"\n",1);
}
int main(int ac, char *av[])
{
    if (ac == 4)
    {
        search(av[1],av[2],av[3]);
    }
    else if (ac > 4)
    write(1,"\n",1);
}