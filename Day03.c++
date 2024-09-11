#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

    
int Duplicate_num(vector<int>arr){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for (int i = 0; i < n ; i++)
    {
        if(arr[i] == arr[i+1])
            return arr[i];
    } 
}

int main(){
    vector<int>arr {1,3,4,2,2};
    cout<<"Duplicate Num : "<<Duplicate_num(arr);

    vector<int>arr1 {3,1,3,4,2};
    cout<<"\nDuplicate Num : "<<Duplicate_num(arr1);

    vector<int>arr2 {1,1};
    cout<<"\nDuplicate Num : "<<Duplicate_num(arr2);

    vector<int>arr3 {1,4,4,2,3};
    cout<<"\nDuplicate Num : "<<Duplicate_num(arr3);
}