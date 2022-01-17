//Wap to sort names of n Employees in ascending order
#include <stdio.h>
#include <string.h>
int main ()
{
    char empname [20][20],temp[20];
    int n , i, j;
    printf ("Enter number of Employees\n");
    scanf ("%d",&n);
    for(i =0;i<n;i++)
    {
        gets (empname[i]);
    }
    for (i =0;i<n;i++)
    {
        for (j = i+1;j<n;j++)
     {
            if (strcmp(empname[i],empname[j])>0)
        {
            strcpy (temp,empname[j]);
            strcpy (empname[j],empname[i]);
            strcpy (empname[i],temp);
        }
     }  
    }
    printf ("The entered name in ascending order is:\n ");
    for (i =0;i<n;i++)
    {
        puts (empname[i]);
    }
    return 0;
}