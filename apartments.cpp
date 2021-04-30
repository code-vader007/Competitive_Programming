//!Not solved
#include <bits/stdc++.h>

using namespace std;

int countgreater(vector<int> nums, int n,int k){
    sort(nums.begin(),nums.end());
    int l=0;
    int r=n-1;
    int leftgreat=n;
    while(l<=r){
        int m=l+(r-l)/2;
        if(nums[m]>=k){
            leftgreat=m;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return n-leftgreat;
}
int countless(vector<int> nums, int n, int k){
    sort(nums.begin(),nums.end());
    int l=0;
    int r=n-1;
    int rightgreat=0;
    while(l<=r){
        int m=l+(r-l)/2;
        if(nums[m]<=k){
            rightgreat=m+1;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    return rightgreat;


}

int apartments(vector<int> ap,vector<int> pr,int n,int k){
    int count=0;
    int i=0;
    int pt=0;

    while(i<pr.size() && count<ap.size()){
        cout<<pr[i]<<endl;
        int l_bound=pr[i]-k;
        int r_bound=pr[i]+k;

        if(countgreater(ap,n,l_bound)>0 && countless(ap,n,r_bound)>0){
            count++;
        }
        i++;
    }
    return count;
}
int main(){
    vector<int> val(3,0);
    cin>>val[0]>>val[1]>>val[2];
    int n=val[0];
    vector<int> ap;
    vector<int> pr;
    while(n>0){
        int a;
        cin>>a;
        ap.push_back(a);
        n--;
    }
    int m=val[1];
    while(m>0){
        int a;
        cin>>a;
        pr.push_back(a);
        m--;
    }
    int k=val[2];
    cout<<apartments(pr,ap,m,k)<<endl;
    return 0;
}