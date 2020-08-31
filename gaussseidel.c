#include<stdio.h>
 int i,j,n,degree,itr;
float matrix[10][10];
void show()
{
     printf("the matrix formed:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=degree;j++)
       {
      printf("%f\t\t",(matrix[i][j]));
    }
    printf("\n");
}
}

void main()
{

    float sum=0;
    float x[10],y[10],z[10];

    printf("enter the number of equations:");
    scanf("%d",&n);
    printf("enter the degree of equations:");
    scanf("%d",&degree);
    printf("enter the no. of iterations:");
    scanf("%d",&itr);
    label:
    for(i=0;i<n;i++)
    {
        printf("enter the coeff of equation %d:",(i+1));
        for(j=0;j<=degree;j++)
        {
            scanf("%f",&matrix[i][j]);
        }
    }
    show();
    for(i=0;i<n;i++)
    {
        for(j=0;j<degree;j++)
        {
            if(j!=i)
            {
                sum=sum+matrix[i][j];
            }
        }
        if(sum<matrix[i][i])
        {
            printf("you can go further\n");

        }
        else{
            goto label;
        }
        sum=0;
    }

    for(i=0;i<degree;i++)
    {
        x[i]=0;
    }

    int k=1;
    while(k<=itr)
    {
      for(i=0;i<n;i++)
         {
             float sum1=0;
             for(j=0;j<degree;j++)
             {
                 if(j!=i)
                 {
                     sum1=sum1+(matrix[i][j])* x[j];
                 }
             }
             x[i]= ((matrix[i][degree])-sum1)/matrix[i][i];
             printf("x%d:%f",i,x[i]);
         }
         printf("\n");

         k=k+1;

    }

}
