#include <stdio.h>
int main ()
{
    char name[100],ch;
    int i =0;
    printf ("Enter a name");
    do
    {
        ch = getchar ();
        name [i] = ch;
        i++;
    } while (ch!= '\n');
    printf ("hello %s ,this is from C programmimg console",name);
    
    return 0;
}