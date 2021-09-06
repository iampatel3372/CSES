#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	long n;
	cin >> n;
	long sum = (n * (n + 1))/2;
	if(sum % 2) cout << "NO";
	else {
		cout << "YES\n";
		vector<int>arr1, arr2;
		if(n%2) {
			arr1.push_back(1); arr1.push_back(2);
			int i = 3;
			bool turn = true;
			while(i <= n) {
				if(turn) {
					if(i <= n) arr2.push_back(i++);
					if(i <= n) arr2.push_back(i++);
					turn  = false;
				}
				else arr1.push_back(i++), arr1.push_back(i++), turn = true;
			}
		} else {
			arr1.push_back(1);
			int i = 2;
			bool turn = true;
			while(i < n) {
				if(turn) arr2.push_back(i++), arr2.push_back(i++), turn = false;
				else arr1.push_back(i++), arr1.push_back(i++), turn = true;
			}
			arr1.push_back(n);
		}
		reverse(arr1.begin(), arr1.end());
		reverse(arr2.begin(), arr2.end());
		if(arr1.size() == arr2.size()) swap(arr1, arr2);
		cout << arr2.size() << "\n";
		for(int i : arr2) cout << i << " ";
		cout << "\n";
		cout << arr1.size() << "\n";
		for(int i : arr1) cout << i << " ";
	}
	return 0;
}