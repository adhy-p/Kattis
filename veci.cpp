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
	int N;
	cin >> N;
	vector<int> arr;
	int temp = N;
	while(temp > 0){
		arr.push_back(temp % 10);
		temp /= 10;
	}
	reverse(arr.begin(), arr.end());
	next_permutation(arr.begin(), arr.end());
	
	int res = 0;
	int exp = 1;
	for(int i = arr.size() - 1; i >= 0; i--){
		res += arr[i] * exp;
		exp *= 10;
	}
	
	if(res <= N) cout << "0" << endl; else cout << res << endl;
	return 0;
}


