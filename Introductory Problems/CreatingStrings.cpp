#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;
vector<string>res;

void backtrack(string s, int lo) {
	if(lo == s.size()) {
		res.push_back(s);
		return;
	}
	unordered_map<char, int>vis;
	for(int i = lo; i < s.size(); i++) {
		if(vis.count(s[i])) continue;
		vis[s[i]] = 1;
		swap(s[lo], s[i]);
		backtrack(s, lo+1);
		swap(s[lo], s[i]);
	}
}

int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	backtrack(s, 0);
	cout << res.size() << endl ;
	sort(res.begin(), res.end());
	for(string a: res) cout << a << endl ;
	return 0;
}