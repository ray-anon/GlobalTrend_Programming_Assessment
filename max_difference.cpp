#include<bits/stdc++.h>
using namespace std;
int max_diff(int arr[] , int n)
{
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > maximum){
            maximum = arr[i];
        }
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return maximum - minimum;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    if(n == 1){
        cout<<"Size of the array has to be greater than 1";
    }
    int arr[n];
    cout<<"Enter the array elements";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<< "maximum difference of two elements: " <<max_diff(arr , n);
}