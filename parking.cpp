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
	int a, b ,c;
	cin >> a >> b >> c;
	int ans = 0;
	int arr[101] = {0};
	for (int i = 0; i < 3; i++) {
		int start, end;
		cin >> start >> end;
		for (int iter = start; iter < end; iter++) {
			arr[iter]++;
		}
	}
	for (int i = 0; i <= 100; i++) {
		if(arr[i] == 1) {
			ans += a;
		} 
		else if (arr[i] == 2) {
			ans += 2 * b;
		}
		else if (arr[i] == 3) {
			ans += 3 * c;
		}
	}
	cout << ans << endl;
	return 0;
}


