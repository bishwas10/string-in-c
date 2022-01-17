//Wap to convert a string of upper case into lower case
#include <stdio.h>
int main ()
{
    char str[20];
    int i =0;
    printf ("Enter a string\n");
    scanf ("%s",str);
    while (str [i]!= '\0')
    {
        str[i]= str[i]+32;
        i++;

    }
    printf ("The string in lower case is %s",str);
    return 0;
}