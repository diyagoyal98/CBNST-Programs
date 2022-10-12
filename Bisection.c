/* NAME - DIYA GOYAL
   SECTION - H
   ROLLNO - 52
   UNIVERSITY ROLLNO - 2016741 
*/ 
#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*x - 30;
}
int main()
{
    int count = 1;
    float x1,x2;
    int i;
    printf("Name - Diya Goyal\nSection - H\nRollno - 52\n");
    printf("Enter 2 valid guesses\n");
    scanf("%f",&x1);
    scanf("%f",&x2);
    printf("Enter the no. of iterations allowed\n");
    scanf("%d",&i);
    if(f(x1)*f(x2) >= 0.0)
    {
        printf("Enter valid guesses");
    }
    else
    {
        while(count <= i)
        {
            float mid = (x1+x2)/2;
            if(f(x1)*f(mid) < 0)
            x2 = mid;
            else
            x1 = mid;            
            printf("the root of the equation in the iteration %d %f\n",count,mid);
            count++;
        }
    }
        
    return 0;
}