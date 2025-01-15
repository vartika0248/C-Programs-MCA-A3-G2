#include<stdio.h>
int maximumSubarraySum(int arr[],int n)
{
 int maxSum = -9999999;
 int currSum=0,i;
 for(i=0;i<=n-1;i++)
 {
  currSum+= arr[i];
  if (currSum>maxSum)
   {
     maxSum = currSum;
   }
  if(currSum <0)
  {
    currSum=0;
  }
}
return maxSum;
}
int main()
{
int arr[] = {-2,-3,4,-1,-2, 1, 5, -3};
int n = sizeof(arr) / sizeof(arr[0]);
int s = maximumSubarraySum(arr, n);
printf(" Largest contiguous sum sub array: %d\n",s);
return 0;
}
