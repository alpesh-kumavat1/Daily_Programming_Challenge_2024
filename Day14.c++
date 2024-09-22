#include<iostream>
#include<string>
#include <cstring>
using namespace std;
int countkDist(string str, int k)
{
    int n = str.length();
    int res = 0;
    int cnt[26];
    for (int i = 0; i < n; i++)
    {
        int dist_count = 0;
        memset(cnt, 0, sizeof(cnt));
        for (int j=i; j<n; j++)
        {
            if (cnt[str[j] - 'a'] == 0)
                dist_count++;
            cnt[str[j] - 'a']++;
            if (dist_count == k)
                res++;
            if(dist_count > k) break;
        }
    }

    return res;
}
int main(){
    string s = "pqpqs";
    int k = 2;
    countkDist(s,2);
    return 0;
}