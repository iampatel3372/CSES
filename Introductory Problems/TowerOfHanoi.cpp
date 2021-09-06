#include <iostream>
#include <vector>
using namespace std;

void toh(int n, int f, int t, int a) {
	if(n == 1) {
		cout << f << " " << t << endl ;
	} else {
		toh(n-1, f, a, t);
		cout << f << " " << t << endl ;
		toh(n-1, a, t, f);
	}
}


int main() {
	int n;
	cin >> n;
	long steps = (1 << n);
	cout << steps - 1 << endl ;
	toh(n, 1, 3, 2);
	return 0;
}