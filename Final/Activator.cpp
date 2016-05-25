#include "Activator.h"

bool isPrime(int p)
{
    int factor = 2;
    while (factor < p)
    {
        if (p % factor == 0)
        {
            return false;
        }
        ++factor;
    }
    
    return factor == p;
}

unsigned int Activator::getPrime(unsigned int whichPrime)
{
    int number = 1;
    int counter = 0;
    
    while (counter < whichPrime)
    {
        if (isPrime(number++))
        {
            ++counter;
        }
    }
    --number;
    return number;
}

unsigned int Activator::sumTheDigits(unsigned int value)
{
    int sum = 0;
    
    while (value > 9)
    {
        while (value > 0)
        {
            sum += value % 10;
            value /= 10;
        }
        
        value = sum;
        sum = 0;
    }
    
    return value;
}