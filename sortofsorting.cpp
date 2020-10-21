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
bool comp(pair<string, string> a, pair<string, string> b){
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(0);
	int n;
	cin >> n;
	while(n){
		pair<string, string> name[205];
			
		for(int i = 0; i < n; i++){
			cin >> name[i].first;	
			name[i].second.append(name[i].first.begin(), name[i].first.begin()+2);
		}
		
//		for(int i = 0; i < n; i++){
//			cout << name[i].first <<" "<< name[i].second << endl;
//		//	puts("");
//		}
		
		stable_sort(name, name + n, comp);
		
//		for(int i = 0; i < n; i++){
//			cout << name[i].first <<" "<< name[i].second << endl;
//			puts("");
//		}
		
		for(int i = 0; i < n; i++)
			cout<< name[i].first << endl;
		
		cin >> n;
	}
	return 0;
}


