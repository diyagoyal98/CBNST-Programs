#include<stdio.h>
#include<math.h>
#define EPSILON 0.0001

float f(float x)
{
    return x*x*x-3*x-5;
}

float diff(float x)
{
    return 3*x*x-3;
}

int main()
{
    int maxiteration,i;
    float x1,x2,x,x0;
    printf("Name - Diya Goyal\nSection - H\nRollno - 52\n");
    printf("Enter Maximum no of Iteration\n");
    scanf("%d",&maxiteration);

    while(1)
    {
        printf("Enter the value of x1 and x2   ");
        scanf("%f%f",&x1,&x2);
        if(f(x1)*f(x2)>0)
        {
            printf("Invalid bondary ");
            continue;
        }
        else
        {
            printf("Root lies between %f and %f\n",x1,x2);
            break;
        }  
    }

    x0=(x1+x2)/2;

    for(i=1;i<=maxiteration;i++)
    {
        x=x0-(f(x0)/diff(x0));
        if(fabs(x-x0)<EPSILON)
        {
            printf("Iteration = %d  Final Root = %f\n",i,x);
            return 0;
        }
        printf("Iteration = %d  Root = %f\n",i,x);
        x0=x;
    }
    printf("Root = %f Total Iteration = %d ",x,--i);
    return 0;
}