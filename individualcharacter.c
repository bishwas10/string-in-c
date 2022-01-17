//Wap to input string from the user and display it in console by accssing individual character
#include <stdio.h>
int main ()
{
    char str[100];
    int i = 0;
    printf ("Enter a string ");
    scanf ("%s",str);
    printf ("The Entered string is :");
    while (str[i]!='\0')
    {
        printf ("%c",str[i]);
        i++;
    }
    return 0;
}