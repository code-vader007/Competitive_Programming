#include <bits/stdc++.h>

using namespace std;

using ll= long long int;

void mat_sum(ll n, ll m, vector<vector<ll>> mat,int a, int b, int A, int B){

    vector<vector<ll>> pref(n+1,vector<ll>(m+1,0));
    vector<vector<ll>> mat_def(n+1,vector<ll>(m+1,0));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            mat_def[i][j]=mat[i-1][j-1];
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<mat_def[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            pref[i][j]=pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+mat[i-1][j-1];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<pref[i][j]<<" ";
        }
        cout<<endl;
    }
    

    ll ans=pref[A][B]-pref[a-1][B]-pref[A][b-1]+pref[a-1][b-1];
    cout<<ans<<endl;

}

int main(){
    mat_sum(3,3,{{1,2,3},{4,5,6},{7,8,9}},0,0,2,2);
}