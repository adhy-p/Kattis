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
	int T;
	cin >> T;
	while(T--){
		int n;
        int ans = 0;
		cin >> n;
		unordered_set<string> cities;
		string s;
		for(int i = 0; i < n; i++){
			cin >> s;
			if(cities.insert(s).second == 1) ans++;

		}
		cout << ans << endl;
	}
	return 0;
}


