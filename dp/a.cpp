#include <bits/stdc++.h>
using namespace std;

void chmin(int &a, int b) {
    if (a > b) a = b;
}

int main(void) {
    int n;
    cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    vector<int> dp(n, 1 << 30);
    dp[0] = 0;

    for (int i = 1; i < n; i++) {
        chmin(dp[i], dp[i - 1] + abs(h[i - 1] -  h[i]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i - 2] - h[i]));
    }

    cout << dp[n - 1] << endl;

    return 0;
}