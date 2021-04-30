#include <bits/stdc++.h>

using namespace std;

void cows(vector<int> cp,vector<vector<int>> q){
    vector<int> h(cp.size()+1,0);
    vector<int> g(cp.size()+1,0);
    vector<int> j(cp.size()+1,0);

    for(int i=1;i<h.size();i++){
        if(cp[i-1]==1){
            h[i]=h[i-1]+1;
            g[i]=g[i-1]+0;
            j[i]=j[i-1]+0;
        }
        else if(cp[i-1]==2){
            h[i]=h[i-1]+0;
            g[i]=g[i-1]+1;
            j[i]=j[i-1]+0;
        }
        else{
            h[i]=h[i-1]+0;
            g[i]=g[i-1]+0;
            j[i]=j[i-1]+1;
        }
    }

    for(int i=0;i<q.size();i++){
        int one=h[q[i][1]]-h[q[i][0]-1];
        int two=g[q[i][1]]-g[q[i][0]-1];
        int three=j[q[i][1]]-j[q[i][0]-1];
        cout<<one<<" "<<two<<" "<<three<<endl;

    }


}

int main(){
    int n,q;
    cin>>n>>q;
    vector<int> cp;
    vector<vector<int>> qu;
    while(n--){
        int a;
        cin>>a;
        cp.push_back(a);
    }
    while(q--){
        int a,b;
        cin>>a>>b;
        qu.push_back({a,b});
    }
    cows(cp,qu);
    return 0;
}