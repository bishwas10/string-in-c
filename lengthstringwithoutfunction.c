//Wap to find the length of string without using library function
#include <stdio.h>
int main()
{
    char str[40];
    int i = 0,length;
    printf ("Enter a string\n");
    scanf ("%s",str);
    while (str[i]!= '\0')
    {
        i++;
    }
    length = i;
    printf ("The lenght of the string is %d",length);
    
    return 0;
}