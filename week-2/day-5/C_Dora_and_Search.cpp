#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (int i = 1; i <=n; i++)
        {
            cin >> v[i];
        }      
       set<int>s;
        for (int j = 1; j <=n; j++)
        {
            s.insert(j);
        }
        
        int l=1,r= n;
        int f;
        
        while (1)
        {
            int min = *s.begin();
            int max = *s.rbegin();
            f = 0;

            if(min == v[l] || max == v[l]){
                 
                 s.erase(v[l]);
                 l++;
                 f=1;
            }
            if (min == v[r] || max == v[r])
            {

                s.erase(v[r]);
                r--;
                f = 1;
            }
            if(f==0 || l > r){
                break;
            }
        }
        if (l > r)
        {
            cout << "-1" <<"\n";
        }
        else{
            cout <<l<<" "<<r<<"\n";
        }
    }
    
    
    
    return 0;
}