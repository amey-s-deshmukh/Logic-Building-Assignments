#include<stdio.h>

double FhToCs(float fNo)
{
    double dCelsius = (fNo - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;
    
    printf("Enter temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    
    printf("Temperature in Celsius : %.4lf" , dRet);
    
    return 0;
}