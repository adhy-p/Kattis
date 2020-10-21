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
int getPoints(int n) {
	if(n == 0) return 4;
	else return getPoints(n - 1) * 4 - pow(2, n + 1) - 3; 
}
int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << getPoints(n) << endl;
	return 0;
}


