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

int main() {
//	ios_base::sync_with_stdio(0);
	int n;
	int tc = 1;
	while(cin >> n) {
		vector<int> nums;
		vector<int> sums;
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			nums.push_back(temp);
		}
		
		for (int i = 0; i < n - 1; i++) {
			for (int j = i + 1; j < n; j++) {
				sums.push_back(nums[i] + nums[j]);
			}
		}
		sort(sums.begin(), sums.end());
		
//		for(int i = 0; i < sums.size(); i++) {
//			cout << sums[i] << " ";
//			if(i == sums.size() - 1) cout << endl;
//		}
		int m;
		cin >> m;
		cout << "Case " << tc++ << ":\n";
		while (m--) {
			// semi binsearch
			int target;
			cin >> target;
//			int low = 0, high = sums.size() - 1;
//			int mid = (low + high) / 2;
//			bool isFound = false;
//			while (low <= high && !isFound) {
//				if (target == sums[mid]) {
//					isFound = true;
//				} else if (target > sums[mid]) {
//					low = mid + 1;
//				} else {
//					high = mid - 1;
//				}
//				mid = (low + high) / 2; 
//				cout << low << " " << mid << " " << high << endl;
//			}
//			int ans = sums[mid];
			int mindiff = 1 << 30;
			int ans;
			for(int i = 0; i < sums.size(); i++) {
				if(abs(target - sums[i]) < mindiff) {
					mindiff = abs(target - sums[i]);
					ans = sums[i];
				}
			}
			cout << "Closest sum to " << target << " is " << ans << ".\n";	
		}
	}
	
	return 0;
}


