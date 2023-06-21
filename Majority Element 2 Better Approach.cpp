#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    map<int, int> mp;
    int n = arr.size();
    vector<int> v;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto it: mp){
        if(it.second > n/3){
            v.push_back(it.first);
        }
    }
    return v;
}
