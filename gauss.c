#include<stdio.h>
int i,j,degree,n;
float matrix[10][10];
void swap(int c, int d)
{
    int t;
    for(j=0;j<=degree;j++)
    {
        t=matrix[c][j];
        matrix[c][j]=matrix[d][j];
        matrix[d][j]=t;
    }
}

void show()
{
 printf("the matrix formed will be:\n");
     for(i=0;i<n;i++)
     {
         for(j=0;j<=degree;j++)
         {
             printf("%d", matrix[i][j]);
         }
         printf("\n");
     }
}

 void main()
 {
     int coeff[10],t;
     float x[10];
     int a,max;
     printf("enter the degree of equations:");
     scanf("%d",&degree);
     printf("enter the no. of equations:");
     scanf("%d",&n);
     printf("enter the elements for matrix:\n");
     for(i=0;i<n;i++)
     {
          printf("the coefficient of variables of equation %d:\n",i+1);
         for(j=0;j<=degree;j++)
         {

         scanf("%d",&matrix[i][j]);

         }
         printf("\n");
     }

     show();
     for(j=0,a=0;j<=degree;j++,a++)
     {

         max=matrix[a][j];

         for(i=1;i<=n;i++)
         {

             if(matrix[i][j]>max)
             {
           max=matrix[i][j];
            int b=i;
            swap(a,b);

             }


        }
    }
      printf("the matrix formed after pivoting is:",(j));
            show();
     int k=0;
     for(j=0,i=0;j<=degree,i<n;j++,i++)
     {


     matrix[i+1][j]= matrix[i+1][j] - ((matrix[k][j] * matrix[i+1][j] )/ matrix[k][j]);

     k++;
     }

     for(i=1;i<=n;i++)
     {
         x[i]=
     }





 }
