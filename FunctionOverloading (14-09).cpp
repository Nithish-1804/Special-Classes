// Function Overloading  -- Polymorphism(CompileTime)

#include <iostream>
#include <bitset>
using namespace std;

int sum(int num1,int num2)
{
    return num1+num2;
};

double sum(double num1,int num2)
{
    return num1+num2;
};

double sum(int num1,double num2)
{
    return num1+num2;
};

double sum(double num1,double num2)
{
    return num1+num2;
};

int main()
{
    double x = 5;
    double y = 6;
    cout<<"The sum of two numbers is : "<<sum(x,y);

    return 0;
}