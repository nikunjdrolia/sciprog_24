#include<stdio.h>
#include<math.h>

int main(void)
{

    int N = 12;
    float a = 0;
    float b = 60;

    float b_rad;
    b_rad=(M_PI * b)/180;
    float sum = tan(a)+ tan(b_rad);

    int i;
    for(int i =5; i<60; i=i+5)
    {
        sum += 2 * tan(i * M_PI/180);
    }

    printf("the value of i is: %f/n", sum);
    sum = (b_rad - a)/(2 * N) * sum;

    printf("The value of sum after the loop is: %f\n", sum);

    printf("The actual value is %f\n", log(2));

    float abs_diff =fabs(sum-logf(2));

    float rel_diff = fabs(1-(sum/logf(2)));

    printf("abs diff %f\n rel diff %f\n", abs_diff, rel_diff);
    return 0;

}
