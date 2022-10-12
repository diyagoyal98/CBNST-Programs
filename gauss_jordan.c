/* NAME - DIYA GOYAL
   SECTION - H
   ROLLNO - 52
   UNIVERSITY ROLLNO - 2016741 
*/ 
#include<stdio.h>
#include<conio.h>
#define SIZE 10

int main()
{
    int n;
    printf("Name - Diya Goyal\nSection - H\nRollno - 52\n");
    printf("Enter order of matrix   ");
    scanf("%d",&n);
    
    float a[SIZE][SIZE];
    float tmp[SIZE];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    
    int i,j,x,y,k;
    float ratio;

    for(i=0;i<n;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            if(i!=j)
            {
                ratio=a[j][i]/a[i][i];
                for(k=0;k<n+1;k++)
                {
                    a[j][k]=a[j][k]-(ratio*a[i][k]);
                }
            }
        }
    }
    printf("Matrix\n");
    for(x=0;x<n;x++)
    {
        for(y=0;y<n+1;y++)
        {
            printf("%f  ",a[x][y]);
        }
        printf("\n");
    }
    printf("Solution\n");
    for(int i=0;i<n;i++)
    {
        tmp[i]=a[i][n]/a[i][i];
    }
    for(int i=0;i<n;i++)
    {
        printf("x[%d] = %f\n",i,tmp[i]);
    }
}

