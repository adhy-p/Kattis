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
	int n;
	cin >> n;
	string seq;
	cin >> seq;
	int adrian = 0, bruno = 0, goran = 0;
	for(int i = 0; i < seq.length(); i++) {
		// adrian
		if((i + 1) % 3 == 1){
			if(seq[i] == 'A') adrian++;
		} else if((i + 1) % 3 == 2) {
			if(seq[i] == 'B') adrian++;
		} else {
			if(seq[i] == 'C') adrian++;
		}
		// bruno
		if((i + 1) % 2 == 1) {
			if(seq[i] == 'B') bruno++;
		} else if ((i + 1) % 4 == 2) {
			if(seq[i] == 'A') bruno++;
		} else if((i + 1) % 4 == 0) {
			if(seq[i] == 'C') bruno++;
		}
		// goran
		if((i + 1) % 6 >= 1 && (i + 1) % 6 <= 2) {
			if(seq[i] == 'C') goran++;
		} else if ((i + 1) % 6 >= 3 && (i + 1) % 6 <= 4) {
			if(seq[i] == 'A') goran++;
		} else if((i + 1) % 6 == 5 || (i + 1) % 6 == 0) {
			if(seq[i] == 'B') goran++;
		}
	}
	int ans = max(adrian, max(bruno, goran));
	cout << ans << endl;
	if(adrian == ans) cout << "Adrian" << endl;
	if(bruno == ans) cout << "Bruno" << endl;
	if(goran == ans) cout << "Goran" << endl;
	return 0;
}


