#include<stdio.h>
void main()
{
    int choice,n,i,j;
    int t,count=0,m[20][2],num,max_value,min;
    float mean,median,mode,a[20],sum=0;
    float lower[10], upper[10],f[10],cf[10],xi[10];
    float fr,l,length,c,low,f0,f1,f2,max;
    printf("MEAN, MEDIAN AND MODE FOR DISCREET AND CONTINUOUS DATA");
    printf("enter 1 to input discreet values and 2 to input continuous values:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("enter the number of values you want to input");
                scanf("%d",&n);
                printf("input the values:");
                for(i=0;i<n;i++)
                {
                    scanf("%f",&a[i]);
                }

                for(i=0;i<n;i++)
                {
                    for(j=1;j<n-i;j++)
                    {
                        if(a[j-1]>a[j])
                        {
                            t=a[j-1];
                            a[j-1]=a[j];
                            a[j]=t;
                        }
                    }
                }

                for(i=0;i<n;i++)
                {
                    printf("%f\n",a[i]);
                }

                for(i=0;i<n;i++)
                {
                    sum=sum+a[i];
                }
                mean=sum/n;
                printf("mean for the given data: %f\n",mean);

                if((n%2)==0)
                {
                    i=n/2;

                    median= (a[i]+a[i-1])/2;
                    printf("median for the given data: %f\n",median);
                }
                else
                {
                    i=n/2;
                    median=a[i];
                    printf("median for the given data: %f\n",median);
                }

                for(i=0,num=0;i<n,num<n;i++,num++)
                {
                   for(j=0;j<n;j++)
                   {
                       if(a[i]==a[j])
                       {
                           count=count+1;
                       }
                   }
                   m[num][0]=a[i];
                   m[num][1]=count;
                   count=0;

                }
                max_value=m[0][1];
                for(num=0;num<n;num++)
                {
                    if(max_value<m[num][1])
                    {
                        max_value=m[num][1];
                        mode=m[num][0];
                    }
                }
                printf("mode of the given data: %f\n",mode);
                break;

          case 2: printf("enter the number of values you want:\n");
                  scanf("%d",&n);
                  printf("enter the range:");
                  printf("enter the lower bound and upper bound and its frequency:\n");
                  for(i=0;i<n;i++)
                  {
                      scanf("%f %f %f",&lower[i],&upper[i],&f[i]);
                  }
                  cf[0]=f[0];
                  for(i=1;i<n;i++)
                  {
                      cf[i]=cf[i-1]+ f[i];
                  }

                  for(i=0;i<n;i++)
                  {
                      xi[i]=(lower[i]+upper[i])/2;
                  }

                  printf("the table formed:\n");
                  printf("RANGE                        FREQUENCY          CF               XI\n");
                  for(i=0;i<n;i++)
                  {
                      printf("%f - %f         %f          %f           %f",lower[i],upper[i],f[i],cf[i],xi[i]);
                      printf("\n");
                  }

                  int sum_f=0,fxi=0;
                  for(i=0;i<n;i++)
                  {
                      sum_f=sum_f + f[0];
                      fxi=fxi+ (xi[i] * f[i]);

                  }
                  mean=fxi/sum_f;
                   printf("mean for the given data: %f\n",mean);

                  float freq= sum_f/2;
                  for(i=1; i<n;i++)
                  {
                      if( (freq>cf[i-1]) && (freq<cf[i]))
                      {
                          l=lower[i];
                          c=cf[i-1];
                          fr=f[i];
                          length=upper[i]-lower[i];
                      }
                  }

                  median= l + (((freq-c)/fr)*length);
                  printf("median for the given data: %f\n",median);

                  max=f[0];
                  for(i=1;i<n-1;i++)
                  {
                      if(f[i]>max)
                      {
                          max=f[i];
                          low=lower[i];
                          f1=f[i];
                          f0=f[i-1];
                          f2=f[i+1];

                      }
                  }
                  mode= low + (((f1-f0)/(2*f1-f0-f2))*length);
                   printf("mode of the given data: %f\n",mode);
                break;





    }

}
