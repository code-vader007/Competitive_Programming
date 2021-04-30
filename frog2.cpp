#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll=long long int;

ll min_arr(vector<ll> arr){
    ll min=arr[0];
    for(ll i=1;i<arr.size();i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}

ll frog(ll n,ll k, vector<ll> h){
    vector<ll> dp(n,0);
    vector<ll> hp(n,0);
    dp[0]=h[0];
    dp[1]=abs(h[1]-h[0]);
    for(ll i=2;i<n;i++){
        vector<ll> temp;
        for(ll j=1;j<=k;j++){
            if(i-j>=0){
                temp.push_back(dp[i-j]+abs(h[i]-h[i-j]));
            }
        }
        dp[i]=min_arr(temp);
    }
    for(int i=0;i<n;i++){
        cout<<dp[i];    
    }
    return dp[dp.size()-1];
}


int main(){
    ll n,k;
    cin>>n>>k;
    int i=n;
    vector<ll> temp;
    while(i>0){
        int a;
        cin>>a;
        temp.push_back(a);  
        i--;
    }
    cout<<frog(n,k,temp)<<endl;
    return 0;
}