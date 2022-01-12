#include <stdio.h>
#include <string.h>
int main()
{
//Pyramid Pattern using name
char string[100];
int c, k, length;
printf("Enter a string\n");
gets(string);
length = strlen(string);
for ( c = 0 ; c < length ; c++ )
{
for(k = 5; k > c; k--)
{
printf(" ");
}
for( k = 0 ; k <= c ; k++ )
{
printf("%c", string[k]);
printf(" ");
}
printf("\n");
}
return 0;
}
