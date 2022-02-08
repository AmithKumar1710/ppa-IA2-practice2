#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the value\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c)
  return 0;
  else
  return 1;
}
void output(int a,int b,int c,int scalene)
{
  if(scalene==0)
  printf("Scalene\n");
  else
  printf("Not Scalene\n");
}
int main()
{
  int a,b,c,d;
  a=input_side();
  b=input_side();
  c=a=input_side();
  d=check_scalene(a,b,c);
  output(a,b,c,d);
  return 0;
}