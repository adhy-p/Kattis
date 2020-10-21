#include <bits/stdc++.h>

using namespace std;

int main() {
    int l;
    double c, width, length;
    cin >> c >> l;
    double ans = 0.0;
    for (int i = 1; i <= l; i++) {
        cin >> width >> length;
        ans += width * 1.0 * length;
    }
    printf("%.8lf\n", c * ans);

    return 0;
}
