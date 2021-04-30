//!Important
//?Trying to use hacky bs
//*Solve

#include <bits/stdc++.h>

using namespace std;

vector<int> maxless(vector<int> h, int k){
    int l=0;
    int r=h.size()-1;
    int ans=-1;
    int i=-1;
    while(l<=r){
        int m=l+(r-l)/2;
        if(h[m]<=k){
            ans=h[m];
            i=m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }

    return {ans,i};

}

void concert(vector<int> h,vector<int> t){
    sort(h.begin(),h.end());
    for(int i=0;i<t.size();i++){
        vector<int> val=maxless(h,t[i]);
        if(val[0]==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<h[val[1]]<<endl;
            h[val[1]]=INT_MAX;
        }
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> h;
    vector<int> t;
    int i=a;
    while(i>0){
        int a;
        cin>>a;
        h.push_back(a);
        i--;
    }
    int j=b;
    while(j>0){
        int a;
        cin>>a;
        t.push_back(a);
        j--;
    }
    concert(h,t);
    return 0;
}