#include<stdio.h>

int main()
{
    int n = 0, i = 0, lar1 = 0, lar2 = 0, temp = 0;
 
    printf ("Enter size of the array : ");
    scanf ("%d", &n);

    int a[n];
    
    for (i = 0; i < n; i++)
    {
        printf ("arr[%d] = ",i);
        scanf ("%d", &a[i]);
    }
 
    printf ("<-- Array Elements --> \n");
    for (i = 0; i < n; i++)
    {
        printf ("%d\n", a[i]);
    }
 
    lar1 = a[0]; 
    lar2 = a[1];
 
    if (lar1 < lar2)
    {
        temp = lar1;
        lar1 = lar2;
        lar2 = temp;
    }
 
    for (int i = 2; i < n; i++)
    {
        if (a[i] > lar1)
        {
            lar2 = lar1;
            lar1 = a[i];
        }
        else if (a[i] > lar2 && a[i] != lar1)
        {
            lar2 = a[i];
        }
    }
 
    printf ("Second Largest Element in Array is '%d'", lar2);
}