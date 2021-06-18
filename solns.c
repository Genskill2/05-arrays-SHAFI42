/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[],int n)
{
  int max =array[0];
  for(int j=0;j<n;j++)
  {
    if(array[j]>max)
      max =array[j];
  }
  return max;
}
int min(int array[],int n)
{
  int min =array[0];
  for(int j=0;j<n;j++)
  {
    if(array[j]<min)
      min =array[j];
  }
  return min;
}
float average(int array[],int n)
{
  int sum =0;
  for(int j=0;j<n;j++)
  {
    sum+=array[j];
  }
   sum =sum/n; 
   return sum;
 }
int mode(int array[],int n)
{
  int maxcount=0,maxvalue=0;
  for(int j=0;j<n;j++)
  {
    int count =0;
    for(int k=0;k<n;k++)
    {
      if(array[j]==array[k])
        ++count;
    }
    if(count>maxcount)
     {
      maxcount=count;
      maxvalue=array[j];
     }
    return maxvalue;
  }
 }
int factors(int n;int array[])
{
  int k=0;
  for(int j=2;j<=n;j++)
  {
    if(n%j==0)
    {
      array[k]=j;
      n=n/j;
      k++;
      j=1;
    }
  }
  return k;
}
