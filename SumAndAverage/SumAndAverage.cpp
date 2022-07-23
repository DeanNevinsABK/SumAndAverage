#include <iostream>

using namespace std;

const int k_numCount = 3;
int GetSum(int num1, int num2, int num3);
float GetAverage(int num1, int num2, int num3);

int main()
{
    cout << "Please enter 3 numbers" << endl;
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    int sum = GetSum(num1, num2, num3);
    cout << "The sum of your numbers is " << sum << endl;

    float average = GetAverage(num1, num2, num3);
    cout << "The average of your numbers is " << average;
}

int GetSum(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

float GetAverage(int num1, int num2, int num3)
{
    return GetSum(num1, num2, num3) / (float)k_numCount;
}