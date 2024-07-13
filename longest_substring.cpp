#include<bits/stdc++.h>
using namespace std;
int longest_substr(string s)
{
    unordered_map<char , int> mp;
    int i = 0;
    int maxlen = -1;
    for(int j = 0; j < s.size(); j++)
    {
        mp[s[j]]++;
        while(mp[s[j]] > 1){
            mp[s[i++]]--;
            
        }
        maxlen = max(maxlen , j - i + 1);
    }
    return maxlen;
}
int main()
{
    string s = "";
    cout<< "Enter the string: ";
    cin>>s;
    int result = longest_substr(s);
    cout<<"Size of the longest substring without unique characters  " << result;
}