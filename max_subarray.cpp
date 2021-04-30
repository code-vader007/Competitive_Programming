#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll=long long int;
int max_sub(vector<ll> nums){
    vector<ll> pref(nums.size()+1);
    for(ll i=1;i<pref.size();i++){
        pref[i]=pref[i-1]+nums[i];
    }
    ll max_sum=pref[1];
    ll min_sum=pref[0];

    for(ll i=1;i<pref.size();i++){
        max_sum=max(max_sum,pref[i]-min_sum);
        min_sum=min(min_sum,pref[i]);
    }

}

int main(){

    ll n;
    cin>>n;
    vector<ll> nums;
    while(n>0){
        ll a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<max_sub(nums)<<endl;
    return 0;
}