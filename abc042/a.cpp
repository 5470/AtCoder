#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, c;
    cin >> a >> b >> c;

    map<int, int> mp;
    mp[a]++;
    mp[b]++;
    mp[c]++;

    cout << ((mp[5] == 2 && mp[7] == 1) ? "YES" : "NO") << endl;

    return 0;
}