#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
	long n;
	cin >> n;
	if(n == 1) cout << 1 ;
	else if(n == 4) cout << "2 4 1 3";
	else if(n > 1 and n < 5) cout << "NO SOLUTION";
	else {
		long odd = 1, even = 2;
		while(odd <= n) cout << odd << " ", odd += 2;
		while(even <= n) cout << even << " ", even += 2;
	} 
	return 0;
}