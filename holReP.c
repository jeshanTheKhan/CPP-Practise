#include<stdio.h>
int main(){
    int row,col;
    scanf("%d",&row);
    scanf("%d",&col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i==0 || i==row-1)
            {
                printf("*");
            }
            else if (j==0 || j==col-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}