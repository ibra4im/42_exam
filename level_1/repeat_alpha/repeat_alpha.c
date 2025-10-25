#include <unistd.h>
void repeat(char *str)
{
        int j ;
        int index = 0 ;
        while (str[index] != '\0')
        {
            j = 0;
            if (str[index] >= 'a' && str[index] <= 'z')
            {
                while (j < str[index] - 'a' + 1)
                {
                    write(1,&str[index],1);
                    j++;
                }
                
            }
            else if (str[index] >= 'A' && str[index] <= 'Z')
            {
                while (j < str[index] - 'A' + 1)
                {
                    write(1,&str[index],1);
                    j++;
                }
            }
            index++;
        }
        write(1,"\n",1);
}
int main(int ac, char *av[])
{
    if (ac < 1)
    write(1,"\n",1);
    if (ac == 2)
    repeat(av[1]);
}