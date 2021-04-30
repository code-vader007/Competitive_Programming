#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

using ll=long long int;


void mat_block(ll n, ll m, vector<vector<ll>> mat, ll k){

    vector<vector<ll>> pref(n+1,vector<ll>(m+1,0));

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+mat[i-1][j-1];
        }
    }
    vector<vector<ll>> ans(n,vector<ll>(m,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            int r_min=i-k;
            ll r_max=i+k;
            int j_min=j-k;
            ll j_max=j+k;
            ll a= max(0,r_min);
            ll b=max(0,j_min);
            ll A=min(n,r_max);
            ll B=min(m,j_max);

            a++;
            b++;
            A++;
            B++;

            if(a>n){
                a=n;
            }
            else if(A>n){
                A=n;
            }
            if(b>m){
                b=m;
            }
            else if(B>m){
                B=m;
            }
            ans[i][j]=pref[A][B]-pref[a-1][B]-pref[A][b-1]+pref[a-1][b-1];




        }

    }
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }


}

int main(){

    mat_block(3,3,{{1,2,3},{4,5,6},{7,8,9}},1);
    return 0;
}