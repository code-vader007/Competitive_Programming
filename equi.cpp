#include <bits/stdc++.h>

using namespace std;
#define int long long


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int S=0;
        int A=0;
        for(int i=0;i<n;i++){
            string str;
            cin>>str;
            if((str[0]=='E')|| (str[0]=='Q')||(str[0]=='U')||(str[0]=='I')||(str[0]=='N')||(str[0]=='O')||(str[0]=='X')){
                S+=a;
            }
            else{
                A+=b;
            }
        }

        if(S>A){
            cout<<"SARTHAK"<<endl;
        }
        if(S<A){
            cout<<"ANURADHA"<<endl;
        }
        if(S==A){
            cout<<"DRAW"<<endl;
        }
    }

    return 0;
}