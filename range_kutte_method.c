#include<stdio.h>
#include<conio.h>

float f(float x,float y)
{
    return (x-y)/(x+y);
}
int main()
{
    float x0,xn,y0,h;
    printf("Entert he initial value of x ");
    scanf("%f",&x0);

    printf("Enter the initial value of y  ");
    scanf("%f",&y0);

    printf("Entert he value of h   ");
    scanf("%f",&h);

    printf("Enter the value of of last x for which y have to find  ");
    scanf("%f",&xn);

    float k,k1,k2,k3,k4;
    int n,i=0;
    n=(xn-x0)/h;

    while(i<=n)
    {
        k1=h*f(x0,y0);
        k2=h*f(x0+h/2,y0+k1/2);
        k3=h*f(x0+h/2,y0+k2/2);
        k4=h*f(x0+h,y0+k3);
        k=(k1+2*k2+2*k3+k4)/6;

        printf("x ==== %f , y ==== %f\n",x0,y0);

        x0=x0+h;
        y0=y0+k;
        i++;
    }
    return 0;
}