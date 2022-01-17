//Wap to copy the string
#include <stdio.h>
int main ()
{
    char str1[40],str2[40];
    int i =0;
    printf ("Enter a string \n");
    scanf ("%s",str1);
    while (str1[i] != '\0')
    {
        str2[i]= str1[i];
        i++;
    }
    printf ("The copied string is %s",str2);
    return 0;

}