#include <iostream>
using namespace std;
int main() {
	long n;
	cin >> n;
	const int MOD = 1e9 + 7;
	long res = 1;
	for(int i = 1; i <= n; i++) {
		res = (res << 1) % MOD;
	}
	cout << res ;
	return 0;
}