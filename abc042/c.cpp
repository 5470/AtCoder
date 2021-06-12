#include <bits/stdc++.h>
using namespace std;

unordered_set<int> d;
bool isValid(int num) {
    while (num) {
        if (d.count(num % 10)) {
            return false;
        }

        num /= 10;
    }

    return true;
}

int main(void) {
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        d.insert(x);
    }

    int ans;
    for (int i = n; ; i++) {
        if (isValid(i)) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}