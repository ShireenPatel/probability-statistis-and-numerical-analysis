#include<stdio.h>
void main()
{
    float x[10],y[10],y1[10],y2[4],y3[4],xp,yp,p;
    int i,n=4;
    printf("GREGORY NEWTON'S FORWARD INTERPOLATION\n");
    printf("\n");
    printf("enter the values of x and corresponding values of y:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
        printf("\n");
        //printf("%f %f",x[i],y[i]);
    }
    printf("enter the value of x at which you want to find the function:\n");
    scanf("%f",&xp);
    for(i=0;i<(n-1);i++)
    {
        y1[i]= y[i+1]-y[i];
    }
    for(i=0;i<2;i++)
    {
        y2[i]=y1[i+1]-y1[i];
   // printf("y2[%d]=%f\n", i,y2[i]);
    }
    for(i=2;i<n;i++)
    {
        y2[i]=0;
      //   printf("y2[%d]=%f\n", i,y2[i]);
    }

    y3[0]= y2[1]-y2[0];
    for(i=1;i<n;i++)
    {
        y3[i]=0;
    }
   for(i=0;i<n;i++)
   {
       printf("x[%d]=%f    y[%d]=%f    y1[%d]=%f    y2[%d]=%f    y3[%d]=%f",i,x[i],i,y[i],i,y1[i],i,y2[i],i,y3[i]);
       printf("\n");
   }
   p= (xp-x[0])/(x[1]-x[0]);
   printf("p=%f\n",p);
   yp= y[0]+ p*y1[0] + (p*(p-1)*y2[0])/2 + (p*(p-1)*(p-2)*y3[0])/6;
   printf("the value of the function at given x %f is: %f",xp,yp);
}
