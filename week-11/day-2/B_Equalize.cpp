#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a){
            cin >> x;
        }

        sort(a.begin(), a.end());

        a.erase(unique(a.begin(), a.end()), a.end());
        int mx = 1;

        for(int i = 0; i < a.size();i++){

            int k = a[i] + n-1;
            int it = upper_bound(a.begin(), a.end(), k) - a.begin() - i;
            mx = max(mx, it);
        }

        cout << mx << "\n";
    }
    
    
    return 0;
}