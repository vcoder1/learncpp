#include <iostream>
using namespace std;

double cubeThis(double a)
{
    double result=a*a*a;
    return result;
}

int main()
{
    double a = cubeThis(6.5);
    cout<<a;
}