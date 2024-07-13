#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(n == 0)
    {
        cout<<1;
        return 0;
    }
    if(n < 0)
    {
        cout<< "not defined";
        return 0;
    }
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout<< "Factorial of the number is : "<<fact;
}