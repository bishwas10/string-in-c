#include <stdio.h>
int findgreatest (int a[],int n)
{
    int g , i;
    g = a[0];
    for (i = 0;i <n;i++)
    {
        if (a[i]>g) 
        {
            g = a[i];
        }
    }
    return g;


}
int main ()
{
    int a[10],n,i,greatest;
    printf ("Enter the number of terms:");
    scanf ("%d",&n);
    printf ("Enter %d integers numbers",n);
    for (i =0;i<n;i++)
    {
        scanf ("%d",&a[i]);

    }
    greatest = findgreatest(a,n);
    printf ("The greatest number is %d",greatest);
    return 0;

}