#include <bits/stdc++.h>

using namespace std;

int dist(vector<int> list){
    int bef=0;
    vector<int> dist;
    sort(list.begin(),list.end());
    dist.push_back(list[0]);
    bef=list[0];
    for(int i=1;i<list.size();i++){
        if(list[i]!=bef){
            bef=list[i];
            dist.push_back(list[i]);
        }
    }
    return dist.size();

}

int main(){
    int n;
    cin>>n;
    vector<int> list;
    while(n>0){
        int a;
        cin>>a;
        list.push_back(a);
        n--;

    }
    cout<<dist(list)<<endl;

    return 0;
}