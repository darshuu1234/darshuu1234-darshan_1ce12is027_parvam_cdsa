#include<stdio.h>
int main()
{
    int((int "Enter the number DivisibleBy5"/n);
    int size;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    
   
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
     }
    

    printDivisibleBy5(arr, size);
return 0;
}

#include<stdio.h>
int main()
{
    int n ,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(int i=0;i<n;i++){
      if(a[i]%5==0)
      printf("\n%d",a[i]);
      
    }
    return 0;

}