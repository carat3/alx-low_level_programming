#include <stdio.h>  
 /**
* main - entry point
*
*Return: Always 0 (success/correct)
*
*/ 
int main()  
{  
    char ch = 'a';  
  
    printf("Lowercase English Alphabets:\n");  
    while(ch <= 'z')  
    {  
        printf("%c ", ch);  
        ch++;  
    }  
    printf("\n");  
  
    return 0;  
}  
