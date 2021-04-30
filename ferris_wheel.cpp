
//*Solved
#include <bits/stdc++.h>
#include <stack>


using namespace std;

int ferris(int n, int x, vector<int> p){
    int count=0;
    sort(p.begin(),p.end());
    int sum=0;
    stack<int> ps;
    for(int i=0;i<p.size();i++){
        ps.push(p[i]);
    }
    while(!ps.empty()){
        if(sum+ps.top()<=x){
            sum=sum+ps.top();
            ps.pop();
        }
        else{
            sum=0;
            count++;
        }
    }
    count++;

    return count;
    
}


int main(){
    int n,x;
    cin>>n>>x;
    int i=n;
    vector<int> p;
    while(i>0){
        int a;
        cin>>a;
        p.push_back(a);
        i--;
    }
    cout<<ferris(n,x,p)<<endl;

    return 0;
}