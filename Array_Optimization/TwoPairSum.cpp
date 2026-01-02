#include <bits/stdc++.h>
using namespace std;

vector<int>pairsum(vector<int>& arr, int target){
    int st=0,end=arr.size()-1; 
    vector<int>ans;
    while(st<end){
        int currSum = arr[st]+ arr[end];

        if(currSum==target){
           ans.push_back(st);
           ans.push_back(end);
           return ans;

        }else if(currSum>target){
            end--;
        }else{
            st++;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairsum(arr, target);

    cout << ans[0] << " " << ans[1];

}