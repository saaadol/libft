#include <stdio.h>
void f_striteri(unsigned int i, char *s) 
{
    *s += i;
 }

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{

    unsigned int i;
    
    if (!s || !f)
        return ; 
    i = 0;
    while (s[i])
    { 
        f(i,&s[i]);
        i++;
    }
}