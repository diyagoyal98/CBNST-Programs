#include<stdio.h>
#define MAX 10
int main()
{
    int n;
    printf("Enter no. of terms   ");
    scanf("%d",&n);
    float X[MAX],Y[MAX],a,sum=0,term;
    int i,j;
   
    printf("\nEnter Values of X  ");
    for(i=0;i<n;i++)
          scanf("%f",&X[i]);
    printf("\nEnter Values of Y  ");
    for(i=0;i<n;i++)
          scanf("%f",&Y[i]);
          
    printf("\nEnter value of x for which you want y  ");
    scanf("%f",&a);

     
    for(i=0;i<n;i++)
    {
        term=1;
        for(j=0;j<n;j++)
        {   
            if(i!=j)
               term = term * ((a - X[j])/(X[i]-X[j]));
        }
        sum=sum + term * Y[i];    
    }
    printf("\nValue at X=%g is = %f", a,sum);
}