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
void pushN(int n, vector<int> &arr){
	// push the array n idx to the left
	n %= arr.size();
//	n = arr.size() - n;
	if(!n) return;
	reverse(arr.begin() + arr.size() - n, arr.end());
//				for(int x = 0; x < arr.size(); x++){
//				cout << arr[x];
//				if(x != arr.size() - 1) cout <<" "; else cout << endl;
//			}
	reverse(arr.begin(), arr.begin() + arr.size() - n);
//				for(int x = 0; x < arr.size(); x++){
//				cout << arr[x];
//				if(x != arr.size() - 1) cout <<" "; else cout << endl;
//			}
	reverse(arr.begin(), arr.end());
//			for(int x = 0; x < arr.size(); x++){
//				cout << arr[x];
//				if(x != arr.size() - 1) cout <<" "; else cout << endl;
//			}
}
int main() {
	ios_base::sync_with_stdio(0);
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		vector<int> arr;
		for(int i = 0; i < N; i++){
			arr.push_back(N - i);
//			arr.push_back(i + 1);
			pushN(1, arr);
//			for(int x = 0; x < arr.size(); x++){
//				cout << arr[x];
//				if(x != arr.size() - 1) cout <<" "; else cout << endl;
//			}
			pushN(N - i, arr);
		}
		for(int i = 0; i < N; i++){
			cout << arr[i];
			if(i != N - 1) cout <<" "; else cout << endl;
		}
	}
	return 0;
}


