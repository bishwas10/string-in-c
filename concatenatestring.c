#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[20];
    char str2[20];
    printf ("Enter a first string");
    scanf ("%s",str1);
    printf ("Enter a second string");
    scanf ("%s",str2);
    strcat (str1,str2);
    printf ("The concantenated string is  %s",str1);

    return 0;
}