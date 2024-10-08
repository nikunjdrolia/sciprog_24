#include<stdio.h>
#include<math.h>


double f(double x)
{
    return tan(x);
}

int main(void)
{
    int N = 12;
    float a = 0;
    float b = M_PI/3;
    double step= (b-a)/N;

    double sum= f(a)+f(b);

    for(int i=0; i<N; i++)
    {
        double x_i= a+i*step;
        sum += 2 * tan(x_i);
    }

    double integral_approx = (b - a) * sum / (2 * N);
    double exact_result = log(2);

    printf("The value of the integral is : %lf\n", integral_approx);
    printf("Exact result: %lf\n", exact_result);
    printf("Difference: %lf\n", fabs(integral_approx - exact_result));
}