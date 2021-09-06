#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#define INT_MAX 1e9+7
using namespace std;


void recursive(vector<long>& arr, long sum1, long sum2, long * res, int N) {
	if(N == 0) {
		*res = min(*res, abs(sum1 - sum2));
		return;
	}
	recursive(arr, sum1 + arr[N-1], sum2, res, N-1);
	recursive(arr, sum1, sum2 + arr[N-1], res, N-1);
}

int main() {
	long n;
	cin >> n;
	vector<long>arr(n);
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	long res = INT_MAX, sum1 = 0, sum2 = 0;
	recursive(arr, sum1, sum2, &res, arr.size());
	cout << res << endl;
	return 0;
}