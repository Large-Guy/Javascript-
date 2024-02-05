#ifndef SILLY_IDEA_JAVASCRIPT_FUNCTIONS_H
#define SILLY_IDEA_JAVASCRIPT_FUNCTIONS_H
#include <string>
#include <typeinfo>
#include <iostream>
#include <cmath>

class Console
{
public:
    void log(std::string);
    void log(const char* t);
    void log(double);
    void log(int);
    void log(float);
    void log(bool);
};

class math
{
public:
    const double E = 2.718281828459045;
    const double PI = 3.141592653589793;
    const double LN10 = 2.302585092994046;
    const double LN2 = 0.6931471805599453;
    const double LOG10E = 0.4342944819;
    const double LOG2E = 1.4426950408889634;
    const double SQRT1_2 = 0.707;
    const double SQRT2 = 1.414;
    double abs(double x);
    double acos(double x);
    double acosh(double x);
    double asin(double x);
    double asinh(double x);
    double atan(double x);
    double atan2(double y, double x);
    double atanh(double x);
    double cbrt(double x);
    double ceil(double x);
    double clz32(int x);
    double cos(double x);
    double cosh(double x);
    double exp(double x);
    double expm1(double x);
    double floor(double x);
    double hypot(double x,double y, double z);
    double log(double x);
    double log10(double x);
    double log2(double x);
    double max(double x);
    double min(double x);
    double pow(double x, double y);
    double random();
    double sign(double x);
    double sin(double x);
    double sinh(double x);
    double sqrt(double x);
    double tan(double x);
    double tanh(double x);

    double trunc(double x);
    int imul(int x, int y);
    float fround(double x);
};

std::string prompt(std::string text = "");

extern Console console;
extern math Math;

#endif //SILLY_IDEA_JAVASCRIPT_FUNCTIONS_H
