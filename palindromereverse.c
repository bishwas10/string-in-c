//Wap to check a string entered by the user whether the string is palindrome or not by using the library function
#include <stdio.h>
#include <string.h>
int main ()
{
    char str[30],revstr[30];
    printf ("Enter a string");
    scanf ("%s",str);
    strcpy(revstr,str);
    strrev (revstr);
    if (strcmp(str,revstr)==0)
    printf ("The entered string is Palindrome");
    else
    printf ("The entered string is not paplindrome");
    return 0;
}