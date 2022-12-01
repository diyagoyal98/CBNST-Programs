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
    printf("\nEnter the value of x for which you want to find the value of y\n");
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
    u=(x-mat[n-1][0])/(mat[1][0]-mat[0][0]);
    u1=u;
    y=mat[n-1][1];
    int j=2;

    for(int i=n-2;i>=0;i--)
    {
        y=y+(u1*mat[i][j])/fact;
        fact=fact*j;
        u1=u1*(u+(j-1));
        j++;
    }

    printf("\nValue of y = %f at x = %f ",y,x);
    return 0;
}