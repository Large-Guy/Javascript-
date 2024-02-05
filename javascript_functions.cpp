#include "javascript_functions.h"

Console console = {};
math Math = {};

void Console::log(std::string t)
{
    std::cout << t << std::endl;
}
void Console::log(const char* t)
{
    std::cout << t << std::endl;
}
void Console::log(double t)
{
    std::cout << t << std::endl;
}
void Console::log(int t)
{
    std::cout << t << std::endl;
}
void Console::log(float t)
{
    std::cout << t << std::endl;
}
void Console::log(bool t)
{
    std::cout << t << std::endl;
}

double math::abs(double x)
{
    return x < 0 ? -x : x;
}
double math::acos(double x)
{
    return x < -1 || x > 1 ? NAN : std::acos(x);
}
double math::acosh(double x)
{
    return x < 1 ? NAN : std::acosh(x);
}
double math::asin(double x)
{
    return x < -1 || x > 1 ? NAN : std::asin(x);
}
double math::asinh(double x)
{
    return std::asinh(x);
}
double math::atan(double x)
{
    return std::atan(x);
}
double math::atan2(double y, double x)
{
    return std::atan2(y, x);
}
double math::atanh(double x)
{
    return x < -1 || x > 1 ? NAN : std::atanh(x);
}
double math::cbrt(double x)
{
    return x < 0 ? -cbrt(-x) : pow(x, 1.0 / 3.0);
}
double math::ceil(double x)
{
    return x < 0 ? (int)x : (int)x + 1;
}
double math::clz32(int x)
{
    return  32 - (int)log2(x);
}
double math::cos(double x)
{
    return std::cos(x);
}
double math::cosh(double x)
{
    return std::cosh(x);
}
double math::exp(double x)
{
    return std::exp(x);
}
double math::expm1(double x)
{
    return std::expm1(x);
}
double math::floor(double x)
{
    return x < 0 ? (int)x - 1 : (int)x;
}
double math::hypot(double x,double y, double z)
{
    return std::hypot(x,y,z);
}
double math::log(double x)
{
    return std::log(x);
}
double math::log10(double x)
{
    return std::log10(x);
}
double math::log2(double x)
{
    return std::log2(x);
}
double math::max(double x)
{
    return x < 0 ? -x : x;
}
double math::min(double x)
{
    return x < 0 ? -x : x;
}
double math::pow(double x, double y)
{
    return std::pow(x, y);
}
double math::random()
{
    return rand() / RAND_MAX;
}
double math::sign(double x)
{
    return x < 0 ? -1 : x > 0 ? 1 : 0;
}
double math::sin(double x)
{
    return std::sin(x);
}
double math::sinh(double x)
{
    return std::sinh(x);
}
double math::sqrt(double x)
{
    return std::sqrt(x);
}
double math::tan(double x)
{
    return std::tan(x);
}
double math::tanh(double x)
{
    return std::tanh(x);
}

double math::trunc(double x)
{
    return floor(x);
}
int math::imul(int x, int y)
{
    return x * y;
}
float math::fround(double x)
{
    return (float)x;
}

std::string prompt(std::string text)
{
    std::cout << text;
    std::string line;
    getline(std::cin, line);
    return line;
}