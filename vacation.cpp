#include <bits/stdc++.h>

using namespace std;

using ll=long long int;

vector<int> max_arr(vector<int> arr){
    int max=arr[0];
    int max_ind=0;
    for(int i=1;i<arr.size();i++){
        if(max<arr[i]){
            max=arr[i];
            max_ind=i;
        }
    }
    return {max,max_ind};
}

vector<int> max_ind( int ind, vector<int> arr){
    int max=arr[0];
    int max_ind=0;
    for(int i=1;i<arr.size();i++){
        if(max<arr[i] && i!=ind){
            max=arr[i];
            max_ind=i;
        }
    }
    return {max,max_ind};
}



int vacation(int n, vector<vector<int>> mat){
    vector<vector<int>> dp(n,vector<int>(2,0));
    dp[0]=max_arr(mat[0]);

    for(int i=1;i<n;i++){
        vector<int> temp=max_ind(dp[i-1][1],mat[i]);
        dp[i][0]=dp[i-1][0]+temp[0];

        dp[i][1]=temp[1];
    }


    return dp[dp.size()-1][0];

}

int main(){
    int n;
    cin>>n;
    int i=n;
    vector<vector<int>> mat;
    while(i>0){
        int a,b,c;
        cin>>a>>b>>c;
        mat.push_back({a,b,c});
        i--;
    }

    cout<<vacation(n,mat)<<endl;
    return 0;
}