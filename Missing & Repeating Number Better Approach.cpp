#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int hash[n+1] = {0};
	int missing = -1;
	int repeating = -1;
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(int i=1; i<n+1; i++){
		if(hash[i]==2) repeating = i;
		else if(hash[i]==0) missing = i;

		if((repeating != -1) && missing != -1){
			break;
		}
	}
	pair<int, int> v;
	v.first = missing;
	v.second = repeating;
	return v;
}
