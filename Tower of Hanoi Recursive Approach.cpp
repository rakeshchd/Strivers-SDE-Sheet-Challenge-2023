#include <bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n, char frompeg, char topeg, char auxpeg){
	if(n==1){
		cout << "Move disk 1 from peg " << frompeg <<" to peg " << topeg << endl;
		return;
	}

	// Move top n-1 disks from A to B, using C as auxiliary
	TowerOfHanoi(n-1, frompeg, auxpeg, topeg);

	// Move remaining disk from A to C
	cout << "Move disk " << n << " from peg " << frompeg << " to peg " << topeg << endl;

	// Move n-1 disks from B to C using A as auxiliary
	TowerOfHanoi(n-1, auxpeg, topeg, frompeg);
}

int main() {
	int n; cin >> n;
	TowerOfHanoi(n, 'A', 'C', 'B');
}
