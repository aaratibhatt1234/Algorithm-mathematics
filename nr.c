#include<stdio.h>
#include<math.h>
#define F(x) (a3*x*x*x + a2*x*x + a1*x + a0)

#define Fd(x) (3*a3*x*x + 2*a2*x + a1)
float a3,a2,a1,a0;

int main()
{
    float x0,x1,ER,Fx0,Fdx0,E;
    int i=0;
    printf("ENter the coefficirnt of the polunomial");

    scanf("%f%f%f%f",&a3,&a2,&a1,&a0);
    printf("Enter the initial value");
    scanf("%f,%f",&x0,&E);
    while(i < 50)
{
    Fx0 = F(x0);
    Fdx0 = Fd(x0);

    if(Fdx0 == 0)
    {
        printf("Derivative is zero.");
        break;
    }

    x1 = x0 - (Fx0/Fdx0);

    ER = fabs((x1-x0)/x1);

    if(ER < E)
    {
        printf("The root is %f", x1);
        break;
    }

    x0 = x1;
    i++;
}
    return 0;


}
