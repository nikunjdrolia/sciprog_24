# include <stdio.h>

int iterativeGCD(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int recursiveGCD(int a, int b)
{
    int r;
    if(b==0)
    {
        return a;
    }
    else if (b!=0)
    {
        r=a%b;
        a= recursiveGCD(b,r);    
    }
    return a;
    
}

int main(){
    int a, b, error;

  printf("Inputting two Integers:\n");
  error=scanf("%d %d", &a,&b);
  if(error!=2){
    printf("Please enter two integer values!\n");
    return 1;
  }
  if(a<=0 || b<=0)
  {
    printf("Please enter positive integers\n");
    return 1;
  }
   printf("GCD computed from iterative func %d,%d is : %d\n",a,b,iterativeGCD(a,b));
    printf("GCD computed from recursive func %d,%d is : %d\n", a,b,recursiveGCD(a,b));
  return 0;
}