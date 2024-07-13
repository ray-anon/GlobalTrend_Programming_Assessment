#include<bits/stdc++.h>
using namespace std;
int gcd(int num1 , int num2)
{
    while(num2 != 0)
	{
	    int rem = num1 % num2;
	    num1 = num2;
	    num2 = rem;
	}
	return num1;
}
int main()
{
    int num1 , num2;
    cout<< "Enter the 2 numbers : ";
    cin>> num1 >> num2;
    int res = gcd(num1, num2);
	cout<< "Gcd of 2 numbers" << res;
}