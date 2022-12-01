#include<stdio.h>
#include<math.h>
#define MAX 10


int main()
{
    float mat[MAX][MAX];
    int  n;
    float x;
    printf("Enter the number of entries ");
    scanf("%d",&n);
    
    printf("\nEnter the value of x\n");
    for(int i=0;i<n;i++) 
    {
        scanf("%f",&mat[i][0]);
    }
    printf("\nEnter the value of y\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&mat[i][1]);
    }
    printf("\nEnter the value of x for which you want to find the alue of y\n");
    scanf("%f",&x);

    //creating difference table
    for(int j=2;j<n+1;j++)
    {
        for(int i=0;i<n-j+1;i++)
        {
            mat[i][j]=mat[i+1][j-1]-mat[i][j-1];
        }
    }

    printf("\nDifference table\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            printf("%f   ",mat[i][j]);
        }
        printf("\n");
    }

    int fact=1;
    float u,u1,y;
    u=(x-mat[0][0])/(mat[1][0]-mat[0][0]);
    u1=u;
    y=mat[0][1];

    for(int i=2;i<=n;i++)
    {
        y=y+(u1*mat[0][i])/fact;
        fact=fact*i;
        u1=u1*(u-(i-1));
    }

    printf("\nValue of y = %f at x = %f ",y,x);
    return 0;
}