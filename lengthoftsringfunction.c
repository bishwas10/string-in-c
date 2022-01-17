#include <stdio.h>
int findlength (char p[])
{
    int i = 0;
    while (p[i]!= '\0')
    {
        ++i;
    }
    return i;
}

int main ()
{
    int length;
    char str [20];
    printf ("Enter a string:\n");
    scanf ("%s",&str);
    length = findlength(str);
    printf ("The length of the entered string is  %d \n",length);
    return 0;
}
