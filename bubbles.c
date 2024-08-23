#include<stdio.h>
int main(){
    int n,temp;
    printf("Enter the element number:\n ");
    scanf("%d\n",&n);
    int array[100];
        printf("Enter Array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
            
        }
        
    }
    printf("Sorted Array");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",array[i]);
    }
    
    
    return 0;
}