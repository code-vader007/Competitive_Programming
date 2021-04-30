#include <bits/stdc++.h>


using namespace std;

int pivot(vector<int> nums){
    vector<int> pref(nums.size(),0);
    pref[0]=nums[0];
    for(int i=1;i<pref.size();i++){
        pref[i]=pref[i-1]+nums[i];
    }

    int piv=INT_MAX;
    for(int i=0;i<pref.size();i++){
        if(i==0){
            int l_sum=0;
            int r_sum=pref[pref.size()-1]-pref[(i+1)-1];
            if(l_sum==r_sum && i<piv){
                piv=i;
            }
        }
        else if(i==pref.size()-1){
            int r_sum=0;
            int l_sum=pref[i-1]-0;
            if(l_sum==r_sum && i<piv){
                piv=i;
            }
        }
        else{
            int l_sum=pref[i-1]-0;
            int r_sum=pref[pref.size()-1]-pref[(i+1)-1];
            if(l_sum==r_sum && i<piv){
                piv=i;
            }
        }
    }
    if(piv==INT_MAX){
        return -1;
    }
    else{
        return piv;
    }
}


int main(){

    cout<<pivot({1,7,3,6,5,6})<<endl;

}