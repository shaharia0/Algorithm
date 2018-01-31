#include <stdio.h>
main()
{
    int a[55],i,j,n,temp;
    printf("how many elements :");
    scanf("%d",&n);
    printf("\nenter the elements : ");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<n;i++)
    {
        temp = a[i];
        j =i;
        while ((j>0) && (temp< a[j-1]))
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
    printf("\nsported value :");
    for(i=0;i<n;i++)
    {
     printf("%d",a[i]);
    }
}
