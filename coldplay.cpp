#include <bits/stdc++.h>

using namespace std;

using ll=long long int;

ll coldplay(ll m,ll s){

    ll ans=floor(m/s);

    return ans;

}

int main(){

    int t;
    cin>>t;
    while(t--){
        ll m,s;
        cin>>m>>s;
        cout<<coldplay(m,s)<<endl;
    }

    return 0;

}