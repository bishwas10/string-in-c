//Wap to find the length of a string entered by the user using library functions
#include <stdio.h>
#include <string.h>

int main ()
{
    int length;
    char str [20];
    printf ("Enter a string");
    scanf ("%s",str);
    length = strlen(str);
    printf ("The length of the string is %d",length);

    return 0;
}