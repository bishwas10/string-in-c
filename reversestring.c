#include <stdio.h>
int findlength (char str[])
{
    int i =0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}
void reversestring (char str [],char revstr[])
{
    int i,length;
    length = findlength (str);
    for (i =0;i <length;i++)
    revstr[i]= str[length-i-1];
    revstr[i]= '\0';
}
int main ()
{
    char str[30],revstr[30];
    int length;
    printf ("Enter a string\n");
    scanf ("%s",str);
    reversestring(str,revstr);
    printf ("Reversed string = %s\n",revstr);
    return 0;
}