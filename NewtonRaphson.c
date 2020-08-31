#include<stdio.h>
#include<math.h>
float f(float x)
{
    return 2*x*x - 3*x;
}
float df (float x)
{
   return 4*x - 3;
}
void main()
{
    int itr=1,t=1;
    float h, x0, x1, e=0.00000001;
    printf("\nEnter x0 :\n");
    scanf("%f",&x0);
    printf("Iteration\nnumber\t");
    printf("x0\t\tf(x0)\t\tdf(x0)\t\tx1\n");
    while(t==1)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        if (fabs(h) < e)
        {
            printf("After %d iterations, root = %f\n",itr-1, x1);
            break;
        }
        printf("%d\t%f\t%f\t%f\t%f\n",itr,x0,f(x0),df(x0),x1);
        itr++;
        x0=x1;
    }
}
