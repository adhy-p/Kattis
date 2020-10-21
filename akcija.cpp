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
	int n;
    cin >> n;
    int arr[100005]; int ans = 0;
    for(int i = 0; i < n; i++){
    	cin >> arr[i];
    	ans += arr[i];
	}
        
    sort(arr, arr + n);
	for(int i = n - 1; i >= 0; i -= 3){
		if(i-2 >= 0) ans -= arr[i-2];
	}
    cout << ans << endl;
    
    return 0;
}


