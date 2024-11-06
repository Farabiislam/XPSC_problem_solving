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
        
        int n,k;
        cin>> n >> k;
        map<int,set<int>>mp;
        for(int i = 1; i<=n;i++){
            int v;
            cin >> v;
            mp[v].insert(i);
        }

        for(int i = 1; i<=k;i++){
            
            int l,r;
            cin >> l >> r;

            if((mp.find(l) == mp.end() )||( mp.find(r) == mp.end())){
                cout << "NO" << "\n" ;
            }
            else{
                int startIndex,endingIndex;
                 
                 startIndex = *mp[l].begin();
                 endingIndex = *mp[r].rbegin();
                 
                 if(startIndex < endingIndex){
                    cout << "YES" << "\n";
                 }
                 else{
                    cout << "NO" << "\n";
                 }

            }
            
        }
        

    }
      
    return 0;
}