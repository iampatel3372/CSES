#include <iostream>
 
using namespace std;
 
int main() {
	string s;
	cin >> s;
	int count = 1, curr = 1;
	for(int i = 1; i < s.size(); i++) {
		if(s[i] == s[i-1]) curr++;
		else count = max(count, curr), curr = 1;
	}
	count = max(count, curr);
	cout << count ;
	return 0;
}