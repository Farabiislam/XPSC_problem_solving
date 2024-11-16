
class Solution{
public:
	int search(string pat, string txt) {
	    int n=txt.size();
	    int k=pat.size();
	    
	    vector<int> mt(26, 0);
	    vector<int> mp(26, 0);
	    for(int i=0; i<k; i++){
	        mp[pat[i]-'a']++;
	        mt[txt[i]-'a']++;
	    }
	    int cnt=0;
	    if(mp==mt){
	        cnt++;
	    }
	    
	    for(int i=k; i<n; i++){
	        mt[txt[i]-'a']++;
	        mt[txt[i-k]-'a']--;
	        if(mp==mt){
	            cnt++;
	        }
	    }
	    return cnt;
	    
	}

};