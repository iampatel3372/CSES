#include <iostream>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int>freq(26, 0);

	for(char c : s) freq[c - 'A']++;

	vector<char>newString(s.size());
	int left = 0, right = s.size()-1;
	int oddIndex = -1, count = 0;
	for(int k = 0; k < 26; k++) {
		if(freq[k] % 2) oddIndex = k, count++;
		else {
			int half = freq[k]/2;
			for(int h = 0; h < half; h++) newString[left++] = k+'A', newString[right--] = k + 'A';
		}
	}
	if(count > 1) cout << "NO SOLUTION";
	else {
		if(oddIndex != -1) {
		int half = freq[oddIndex]/2;
		while(half--) newString[left++] = oddIndex+'A', newString[right--] = oddIndex+'A';
		newString[left] = oddIndex+'A';
	}
	for(char c : newString) cout << c ;
	}
	return 0;
}