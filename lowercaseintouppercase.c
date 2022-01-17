//Wap to convert a string of lower case into upper case
#include <stdio.h>
int main ()
{
    char str [40];
    int i = 0;
    printf ("Enter a string");
    scanf ("%s",str);
    while (str[i]!='\0')
    {
        str [i]= str[i]-32;
        i++;
    }
    printf ("The string in Upper case is %s",str);

    return 0;
}
