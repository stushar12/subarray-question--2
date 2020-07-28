#include<stdio.h>
int kadane(int a[] , int n)
  {
  int sum=0,sum1=0;
  int start=0,end=0,s=0;
    for(int i=0;i<n;i++)
      {
         sum=sum+a[i];
            if(sum>15)
            {
              sum1=0;
              sum=0;
              i=s;
              s=s+1;
            }
            if(sum1<sum)
             {  
                 sum1=sum;
                 start=s;
                 end=i;
             }
             if(sum1==15)
             {
                break;
             }
      }

     printf("\nStarting index is %d and value at that index is %d and ending index is %d and value at that index is %d\n",start,a[start],end,a[end]);
  return sum1;
  }

  int main()
{      
  int total=0,x=0,sum1=0;
  int arr[]={2,6,0,6,7,3,1,4,1,10};
  int n=sizeof(arr)/sizeof(arr[0]);
  total=kadane(arr,n);
}