#include <iostream>
#include <cstdio>

#include <cstring>
#include <string>

#include <cmath>
#include <algorithm>

#include <vector>
#include <queue>

#include <utility>
#include <map>

// #include <bits/stdc++.h>

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
	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;
		if(b - c == a) {
			cout << "does not matter" << endl;
		}
		else if (b - c > a) {
			cout << "advertise" << endl;
		} 
		else {
			cout << "do not advertise" <<endl;
		}
	}
	return 0;
}


