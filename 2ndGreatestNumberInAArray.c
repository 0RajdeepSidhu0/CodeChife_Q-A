#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[100], n;
   
    printf("Enter size of arrey: ");
    scanf("%d", &n);
    for(int i= 0; i<n; i++)
    {
      printf("\nEnter element: ");
      scanf("%d", &a[i});
    }
    int max = a[0], max2 = a[0];
    for(int i = 0; i<n; i++)
    {
        if(max<a[i])
        {
            max2 = max;
            max = a[i];
        }
        if(a[i] == max)
        {
            continue;
        }
        if(a[i]>=max2 && a[i]<max)
        {
            max2 = a[i];
          
        }
    }
    printf("your 2nd largest number is %d.", max2);
    return 0;
 } 
