#include <stdio.h>
#include <stdlib.h>

double* allocatearray(int size)
{
    return (double*)malloc(size * sizeof(double));
}

double factorial(int n)
{
    double fact = 1;
    for(int i=1;i<=n; i++)
        fact *=i;

    return fact;
}

double estimate_e(int order)
{
    double* terms = allocatearray(order + 1);
    if(terms == NULL)
    {
        printf("Memory allocation failed.\n");
        return -1;
    }

    double estimate = 0.0;

    for(int i=0;i<=order;i++)
    {
        terms[i] = 1.0/factorial(i);
        estimate += terms[i];
    }

    free(terms);
    return estimate;

}

int main()
{
    
    for(int i=1;i<=15;i++)
    {
        double estimated_value = estimate_e(i);
        printf("Order %d: Estimate of e = %.5lf\n", i, estimated_value);
    }

    return 0;
}