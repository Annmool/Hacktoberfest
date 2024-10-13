#include<bits/stdc++.h>
using namespace std;

    
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        for(auto c:s){
            mp[c]++;

        }
        int a=mp['0'];
        int b=mp['1'];
        int ans=0;
        for(int i=1;i<=n;i++){
            int mn=min(a,b);
            int mx=a+b-mn;
            if(i<mn)continue;
            if((i-mn)%(4-1-1)==0)ans++;
            else{
                if(i>=mx && (i-mx)%2==(4-3-1)) ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
