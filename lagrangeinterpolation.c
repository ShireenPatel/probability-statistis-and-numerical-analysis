#include<stdio.h>
void main()
{
    float x[10],y[10],p=1,q=1,xp,k=0,b;
    int i,j,n,a,l;
    printf("enter the number of terms:");
    scanf("%d",&n);
    printf("enter the values of x and y respectively:\n");
    printf("x  y\n");
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
       // printf("%f      %f",x[i],y[i]);
    }

    printf("enter the number of times you wish to find the function at different values of x:");
    scanf("%d",&a);

    for(l=0;l<a;l++)
    {
        printf("enter the value of x at which you want to find the function:");
        scanf("%f",&b);

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j!=i)
                {
                    p=(b-x[j])*p;
                    q=(x[i]-x[j])*q;
                }

            }
            k=k+((p/q)*y[i]);
            p=1;q=1;
        }
        printf("y at x=%f is %f\n",b,k);
        k=0;

    }


}
