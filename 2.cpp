#include<bits/stdc++.h>
using namespace std;
void fact(int n) {
	int val;
	if( n >= 1) 
		val = n * fact(n-1);
		return val;
	else
		return;
	cout << val << " ";
		
}
int main() {
	fact(5);
}
