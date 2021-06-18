/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[],int n)
{
  int max =array[0];
  for(int i=0;i<n;i++)
  {
    if(array[i]>max)
      max =array[i];
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
  for(int k=0;k<n;k++)
  {
    sum+=array[k];
  }
   sum =sum/n; 
   return sum;
 }
int mode(int array[],int n)
{
  int maxcount=0,maxvalue=0;
  for(int p=0;p<n;p++)
  {
    int count =0;
    for(int r=0;r<n;r++)
    {
      if(array[p]==array[r])
        ++count;
    }
    if(count>maxcount)
     {
      maxcount=count;
      maxvalue=array[p];
     }
    return maxvalue;
  }
 }
int factors(int n;int array[])
{
  int y=0;
  for(int x=2;x<=n;x++)
  {
    if(n%x==0)
    {
      array[y]=x;
      n=n/x;
      y++;
      x=1;
    }
  }
  return y;
}
