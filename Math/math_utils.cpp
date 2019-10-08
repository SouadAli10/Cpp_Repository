#include "math_utils.h"
namespace utils
{
double area(double lenght, double width)
{
    return lenght * width;
}

double area(double lenght)
{
    return lenght * lenght;
}

double area(Rectangle rectangle)
{
    return rectangle.lenght * rectangle.width;
}

double pow(double base, int pow)
{
    int total = 1;
    for (int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}
} // namespace utils
