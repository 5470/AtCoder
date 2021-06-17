#include <bits/stdc++.h>
using namespace std;

void chmax(int &a, int b) {
    if (a < b) a = b;
}

int main(void) {
    int n;
    cin >> n;

    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(3, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) continue;
                if (k == 0) chmax(dp[i + 1][k], dp[i][j] + a[i]);                
                if (k == 1) chmax(dp[i + 1][k], dp[i][j] + b[i]);                
                if (k == 2) chmax(dp[i + 1][k], dp[i][j] + c[i]);                
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        chmax(ans, dp[n][i]);
    }

    cout << ans << endl;


    return 0;
}