#include <stdio.h>
#include <complex.h>
int main()
{
    //checking support of complex number
    #ifdef __STDC_NO_COMPLEX__
    printf("complex number is not supported\n");
    #else
    printf("complex number is supported\n");
   
    float _Complex a = 4.0 + 8.0*I;
    float complex b = 5.0 - 9.1*I;
   
    float complex sum = a + b;
    printf("%.2f%+.2fi\n",crealf(sum), cimagf(sum));
   
    #endif
    return 0;
}