#include<bits/stdc++.h>
using namespace std;
bool check_alphabets(string s)
{
    bool flag = true;
    for(int i = 0; i < s.size(); i++)
    {
        int ascii_value = s[i] - 0;
        if(ascii_value > 90 && ascii_value < 97 || ascii_value < 65 || ascii_value > 122 )
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "";
    cout<< "Enter characters: ";
    cin>>s;
    if (check_alphabets(s) == 0)
    {
        cout<< "String contains non-alphabetic characters";
    }
    else
    {
        cout<< "String contains only alphabetic characters";
    }
}