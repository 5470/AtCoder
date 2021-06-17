#include <bits/stdc++.h>
using namespace std;

void chmax(long long &a, long long b) {
    if (a < b) a = b;
}

int main(void) {
    int n, W;
    cin >> n >> W;

    vector<int> w(n), v(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i] >> v[i];
    }

    vector<vector<long long>> dp(n + 1, vector<long long>(W + 1, 0LL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= W; j++) {
            // i番目の商品を選ぶ場合
            if (j - w[i] >= 0) chmax(dp[i + 1][j], dp[i][j - w[i]] + v[i]);
           
            // i番目の商品を選ばない場合
            chmax(dp[i + 1][j], dp[i][j]);
        }
    }

    cout << dp[n][W] << endl;

    return 0;
}