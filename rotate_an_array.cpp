#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cout<< "Enter the size of the array: ";
    cin>> n;
    cout<< "How many times to rotate: ";
    cin>>k;
    int arr[n];
    k = k % n;
    if(k < 0)
    {
        cout<< "Enter a valid k times to rotate";
        return 0;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the " << i << " element";
        cin>>arr[i];
    }
    reverse(arr , arr+k);
    reverse(arr+k , arr+n);
    reverse(arr , arr+n);
    cout<<"After rotating the array by k steps"<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
}