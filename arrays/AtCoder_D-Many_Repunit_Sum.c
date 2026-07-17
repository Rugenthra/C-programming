#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    vector<int> ans;
    long long carry = 0;

    int maxLen = arr.back();

    for(int i = 1; i <= maxLen; i++) {

        auto it = lower_bound(arr.begin(), arr.end(), i);

        int cnt = arr.end() - it;

        carry += cnt;

        ans.push_back(carry % 10);

        carry /= 10;
    }

    while(carry) {
        ans.push_back(carry % 10);
        carry /= 10;
    }

    reverse(ans.begin(), ans.end());

    for(int x : ans)
        cout << x;

    return 0;
}
