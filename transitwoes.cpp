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
	int s, t, n;
	int walk[1005];
	int bus[1005];
	int busArr[1005];
	cin >> s >> t >> n;
	for(int i = 1; i <= n + 1; i++){
		cin >> walk[i];
	}
	
	for(int i = 1; i <= n; i++){
		cin >> bus[i];
	}
	
	for(int i = 1; i <= n; i++){
		cin >> busArr[i];
	}
	
	int ans = s;
	
	for(int i = 1; i <= n; i++){
		ans+= walk[i];
		if((ans%busArr[i])) ans+= busArr[i] - (ans % busArr[i]);	
		ans+= bus[i];
	}
	ans+= walk[n+1];
//	cout<<ans<<endl;
	if(ans <= t) cout<<"yes"<<endl; else cout<<"no"<<endl;
	return 0;
}


