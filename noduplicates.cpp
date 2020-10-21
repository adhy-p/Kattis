#include <bits/stdc++.h>

#define LL long long
#define vi vector<int>
#define set0(x) memset((x),0,sizeof((x)))
#define set1(x) memset((x),1,sizeof((x)))
#define setmin(x) memset((x),-1,sizeof((x)))
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second

#define MOD 1000000007

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	unordered_set<string> list;
	string words;
	getline(cin, words);
	bool dup = false;
	int pos;
	while ((pos = words.find(" ")) != words.npos){
		string sub = words.substr(0, pos);
		if(!list.insert(sub).second) {
			dup = true;
			break;
		}
		words.erase(0, pos + 1);		
	}
	if(words.length()) {
		if(!list.insert(words).second) {
			dup = true;
		}
	}
//	for(auto x: list) {
//		cout << x << endl;
//	}
	if(!dup) {
		cout << "yes" << endl;
	} else {
		cout << "no" << endl;
	}
//	cout << words << endl;
	return 0;
}


