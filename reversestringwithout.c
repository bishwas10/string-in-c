//Wap to reverse a string
#include <stdio.h>
int findlength (char str[])
{
    int i =0;
    while (str [i]!='\0')
    {
        i++;
    }
    return i;

}
int main ()
{
    char str[20],revstr[20];
    int i,length;
    printf ("Enter the string to be reversed");
    scanf ("%s",str);
    length = findlength (str);
    for (i =0;i <length;i++)
    {
        revstr[i]= str[length-i-1];
    }
    printf ("The reversed string id %s",revstr);
    return 0;
}