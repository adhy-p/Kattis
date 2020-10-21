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
int getRevBin(int n, int exp) {
	if (exp == 0) return 1;
	return (n % 2) * pow(2, exp) + getRevBin(n / 2, exp - 1);
}
int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << getRevBin(n, (int)log2(n)) << endl;
	return 0;
}


