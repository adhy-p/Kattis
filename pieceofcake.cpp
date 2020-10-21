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
	int n, h, v;
	cin >> n >> h >> v;
	int area = max(h * v, max(h*(n - v), max(v*(n - h), (n-h)*(n-v))));
	cout <<  area * 4 << endl;
	return 0;
}


