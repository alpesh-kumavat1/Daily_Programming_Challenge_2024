#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int water_trapping(vector<int>height){
     int n = height.size();
        vector<int>left(n , 0);
        int num = INT_MIN;
        for(int i=0; i<n; i++){
            num = max(num , height[i]);
            left[i] = num;
        }
        vector<int>right(n , 0);
        int num1 = INT_MIN;
        for(int i=n-1; i>=0; i--){
            num1 = max(num1 , height[i]);
            right[i] = num1;
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans += min(left[i] , right[i])-height[i];
        }
    return ans;
}

int main(){
    vector<int>arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int ans = water_trapping(arr);
    cout<<"Answer : "<<ans;

    return 0;
}