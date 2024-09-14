#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<pair<int, int> > findSubArrays(int arr[], int n)
{
    vector<pair<int, int> > output;
    for (int i = 0; i < n; i++) {
        int prefix = 0;
        for (int j = i; j < n; j++) {
            prefix += arr[j];
            if (prefix == 0)
                output.push_back({ i, j });
        }
    }
    return output;
}

int main(){
    int arr[] =  {1, 2, -3, 3, -1, 2};
    int n = 6;
    vector<pair<int, int>>ans = findSubArrays(arr , n);
    for(auto ele : ans)
        cout<<ele.first<<" "<<ele.second;

    return 0;
}