#include <stdio.h>
void selectionsort (int array[],int n)
{ int min,j,temp,i;
printf("enter the values :\n");
for(i=0;i<n;i++)
{
    scanf("%d",&array[i]);
}
for (i=0;i<n;i++)
{
    min=i;
    for(j=i+1;j<n;j++)
    {
       if (array[j]<array[min])
       {
           min=j;
       }
    }
    temp = array[i];
    array[i]=array[min];
    array[min]=temp;
}


}
int main()
{
    int n;
    printf("Enter the limilt of the array: \n");
    scanf("%d",&n);
    int array[n],i;
    selectionsort (array,n);
    printf("my sorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d",array[i]);
    }
}
