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
	int n,m;
	int sum[50] = {0};
	int max = -1;
	scanf("%d %d", &n, &m);
	for(int i = 1; i<=n; i++){
		for(int j=1; j<=m;j++){
			sum[i+j]++;
			if(sum[i+j] > max) max = sum[i+j];
		}
	}
	for(int i=0; i<=(n+m);i++)
		if(sum[i] == max) printf("%d\n", i);
	return 0;
}


