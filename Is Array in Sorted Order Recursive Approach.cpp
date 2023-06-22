#include <bits/stdc++.h>
using namespace std;

int isArrayInSortedOrder(int a[], int n){
	if(n==1){
		return 1;
	}
	return (a[n-1]<a[n-2]) ? 0:isArrayInSortedOrder(a, n-1);
}

int main() {
	int n; cin >> n;
	int a[] = {1, 2, 3, 4, 5};
	cout << isArrayInSortedOrder(a, n) << endl;
}
