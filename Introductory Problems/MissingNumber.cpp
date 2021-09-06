#include <iostream>
 
using namespace std;
 
int main() {
	long n;
	cin >> n;
	long sum = (n * (n+1))/2;
	for(long i = 0; i < n-1; i++) {
		long a;
		cin >> a;
		sum -= a;
	}
	cout << sum ;
	return 0;
}