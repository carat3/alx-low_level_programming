#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 1 always
 */
int main(void)
{
	char *msg = "and that piece of art is useful" - Dora Korpar, 2015-10-19\n";
int len ;
dprintf(1, "%s%n", msg, &len) ;
write(1, msg, len);
fprintf(stdout, "%s",msg) ;
fputs(msg, stdout) ;
fwwrite(msg,1,len,stdout) ;
system( "echo and that piece of art is useful" - Dora Korpar, 2015-10-19") ;
return(1) ;
