#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,l,min,k,s;
    printf("Enter length of array\n");
    scanf("%d",&n);
    int o[n],j[n],p[n];
    printf("enter values in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&o[i]);
    }
    j[0]=0;
    for(l=1;l<n;l++)
    {
        j[l]=l;
        for(k=0;k<l;k++)
        {
            if(k+o[k]>=l)
            {
                min=j[k]+1;
                if(min<=j[l])
                {
                    j[l]=min;
                    p[l]=k;
                }
            }
        }
    }
    p[0]=0;
    printf("minimum number of steps is %d and steps are as follows\n",j[n-1]);
    for(s=n-1;s>=0;s--)
    {
        if(s!=0)
        {
            printf("%d\n",s);
            s = p[s]+1;
        }
        else
            {
               printf("0");
               break;
            }
    }
    return 0;
}
