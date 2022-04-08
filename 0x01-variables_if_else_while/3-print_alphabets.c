#include <stdio.h>  
/**
* main - entry point
*
*Return: Always 0 (success/correct)
*
*/ 
int main(void)
{
char ch = 'a';

while(ch <= 'z')  
{
printf("%c ", ch);
ch++;
}
char rh = 'A';

while(rh <= 'Z')
{
putchar("%c", rh);
rh++;
}
printf("\n");

return (0);  
}
