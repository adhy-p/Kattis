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
#define PI 3.14159265
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	int horizontal, vertical, time, bv, bh;
	cin >> horizontal >> vertical >> time >> bv >> bh;
	do{
		double hdist = (horizontal) * bv;
		double vdist = (vertical) * bh;
		double angle = atan(vdist / hdist) * 180 / PI;
		double speed = vdist / time / sin(angle / 180 * PI);
//		cout << angle << " " << speed << endl;
		printf("%.2lf %.2lf\n", angle, speed);
		cin >> horizontal >> vertical >> time >> bv >> bh;
	} while (horizontal != 0 && vertical != 0 && time!=0 && bv != 0 && bh != 0);
	return 0;
}


