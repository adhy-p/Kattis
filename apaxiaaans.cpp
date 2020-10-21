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
	char s[1000];
	cin >> s;
	vector<char> str;
	int iter = 0;
	str.push_back(s[0]);
	for(int i = 1; i < strlen(s); i++)
		if(s[i] != s[i-1]) str.push_back(s[i]);
	
	for(int i = 0; i < str.size(); i++) cout << str[i];
	cout<<endl;
    return 0;
}


