#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,k,j,l,max=0,max1=0,max2=0;

    printf("enter length of rod\n");
    scanf("%d",&n);
    int b[n],p[2][n];
    printf("enter price and length array\n");
    for(j=0;j<2;j++)
    {
        for(l=0;l<n;l++)
        {
          scanf("%d",&p[j][l]);
        }
    }
    for(i=1;i<=n;i++)
    {
        max=0,max1=0,max2=0;
        for(k=1;k<=i;k++)
        {
          if(i-k-1<0)
          {
              max1=p[1][k-1];

          }
          else
          {
            max2=p[1][k-1]+b[i-k-1];
          }
          if(max2>=max1&&max2>=max)
           {
            max=max2;
           }
           else if(max1>=max2&&max1>=max)
           {
               max=max1;
           }
        }
        b[i-1]=max;
        printf("max value of rod of length %d is %d\n",i,b[i-1]);
    }
    return 0;
}
