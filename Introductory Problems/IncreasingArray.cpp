#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
	long n;
	cin >> n;
	vector<long>arr(n);
	cin >> arr[0];
	long res = 0;
	for(long i = 1; i < n; i++) {
		cin >> arr[i];
		if(arr[i] < arr[i-1]) res += arr[i-1] - arr[i], arr[i] = arr[i-1];
	}
	cout << res ;
	return 0;
}