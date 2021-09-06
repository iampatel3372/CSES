#include <iostream>
using namespace std;
int main() {
	long n;
	cin >> n;
	long res = 0;
	for(int i = 5; n/i >= 1; i *= 5) {
		res += n/i;
	}
	cout << res ;
	return 0;
}