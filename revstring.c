//Wap to reverse the string using library function
#include <stdio.h>
#include <string.h>
int main ()
{
    char str [20],revstr[20];
    printf ("Enter a string");
    scanf ("%s",str);
    strrev(str);
    strcpy (revstr,str);
    printf ("The reversed string is %s",revstr);

    return 0;
}