#include<stdio.h>
#include<math.h>

int main()
{
    //ceil - nearest integer value greater than or equal to parameter 
    printf("%lf\n", ceil(123.0001));
    printf("%lf\n", ceil(123.9));
    // floor - nearest integer value less than or equal to parameter 
    printf("%lf\n", floor(123.0001));
    printf("%lf\n", floor(123.9));
    // fabs 
    printf("\nFABS -- \n");
    printf("%lf\n", fabs(123.12));
    printf("%lf\n", fabs(-123.9));
    printf("%lf\n", fabs(34));
    printf("%lf\n", fabs(-34));
    // log 
    printf("\nLOG -- \n");
    printf("%lf\n", log(34));
    printf("%lf\n", log10(100));

    // fmod - remainder value 
    printf("\nFMOD\n");
    float x = 10.12 ,y = 2 , z = 3 ;
    printf("%lf\n", fmod(x,y));
    printf("%lf\n", fmod(x,z));
    // sqrt 
    printf("\n-SQRT -- \n");
    printf("%llf\n", sqrt(100));
    printf("%llf\n", sqrt(110));
    // power 
    printf("\n-pow -- \n");
    printf("%lf\n", pow(2,5));
    //
    printf("\n-exp -- \n");
    printf("%lf\n",exp(1));
    printf("%lf\n",exp(2));
    //
    printf("\nCOS, sin tan\n");
    printf("%lf", cos(60 * (3.14/180)));

    // round(x)
    printf("\nRound\n");
    printf("%lf\n",round(2.8));
    printf("%lf\n",round(2.1));
    

}