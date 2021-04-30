#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll=long long int;

ll frog(ll n, vector<ll> h){

    vector<ll> dp(n);
    dp[0]=h[0];
    dp[1]=abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }

    return dp[n-1];
}

int main(){
    int n;
    cin>>n;
    vector<ll> h;
    int i=n;
    while(i>0){
        ll a;
        cin>>a;
        h.push_back(a);
        i--;
    }
    cout<<frog(n,h)<<endl;
    return 0;
}