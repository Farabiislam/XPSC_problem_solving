#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int a[n], b[m], c[n + m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < n || j < m) {
        if (j == m || (i < n && a[i] <= b[j])) {
            c[k] = a[i];
            k++,i++;
        } else {
            c[k] = b[j];
            k++,j++;
        }
    }

    for (int i = 0; i < n + m; i++) {
        cout << c[i] << " ";
    }

    return 0;
}
