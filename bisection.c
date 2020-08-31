#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    int n,j=0,i;
    float a,b,y=0;
    float c,y1=0,y2=0;
    printf("enter n");
    scanf("%d",&n);
    float coeff[n];
    printf("enter n=%d coeff",n);
    for(i=0;i<=n;i++)
    {

        scanf("%f",&coeff[i]);

    }
    label:
    printf("enter any two roots a and b");
    scanf("%f %f",&a,&b);
    label2:
    for(i=0;i<n;i++)
    {
        y1+=coeff[i]*(pow(a,n-i+1));
        y2+=coeff[i]*(pow(b,n-i+1));
    }
    if(y1==0)
    {
        printf("y1=%f is the root of the equation",y1);
    }
    if(y2==0)
    {
        printf("y2=%f is the root of the equation",y2);
    }
    do{
    if(y1*y2<0)
    {
        c=(a+b)/2;
        printf("the approximation root is",c);
         for(i=0;i<n;i++)
            {
                y+=coeff[i]*(pow(c,n-i+1));
            }
            if(y==0)
            {
                printf("y=%f is the root of the equation",y);
            }

        if(y2>0 && y>0)
            {b=c;
            y1=y;
            }

        else if(y1<0 && y<0)
           {
            a=c;
            y2=y;
            }
            goto label2;

    }
    else
        {
            goto label;
        }
        j++;
    }while(j<3);
}











