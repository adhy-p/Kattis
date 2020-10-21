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
	int set[] = {1, 1, 2, 2, 2, 8};
	int temp;
	for(int i = 0; i < 6; i++){
		cin >> temp;
		set[i] -= temp;
	}
	for(int i = 0; i < 6; i++){
		cout << set[i];
		if(i < 5) cout <<" "; else cout << endl;
	}
	return 0;
}


