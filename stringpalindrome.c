//Wap to check whether a string entered by the user is palindrome or not without using a library function
#include <stdio.h>
int findlength (char str[])
{
    int i = 0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}
int main ()

{
    char str[20],revstr[20];
    int i,length,flag =1;
    printf ("Enter a string:");
    scanf ("%s",str);
    length = findlength (str);
    for (i =0;i<length;i++)
    {
        revstr [i]=str[length-i-1];

    }
    i = 0;
    while (i <length)
    {
        if (str[i]!=revstr[i])
        {
            flag = 0;
            break;
        } 
        else
        flag = 1;
        i++;
    }
    if (flag ==1)
    printf ("It is palindrome \n");
    else
    printf ("It is not Palindrome \n");
    return 0;
}