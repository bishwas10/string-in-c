//Wap to concatenate two string
#include <stdio.h>
int main ()
{
    char str1[20],str2[20];
    int i,j;
    printf ("Enter the first string\n");
    scanf ("%s",str1);
    printf ("Enter the second string \n");
    scanf ("%s",str2);
    for ( i = 0; str1[i]!='\0';++i);
    for (j =0;str2[j]!='\0';++j,++i)
    {
        str1[i]= str2[j];
    }
    str1[i] = '\0';
    printf ("The concantenated string is %s",str1);
}