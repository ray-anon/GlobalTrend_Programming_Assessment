#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<< "Enter any number";
    cin>>num;
    int sum = 0;
    while(num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    cout<< "Sum of the digits of numbers is" << sum;
}