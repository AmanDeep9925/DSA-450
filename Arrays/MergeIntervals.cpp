#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>> & intervals){

    sort(intervals.begin(),intervals.end());

    vector<vector<int>> ans;

    for(auto interval : intervals){
        if(ans.empty() || ans.back()[1] < interval[0]){
            ans.push_back(interval);
        }else{
            ans.back()[1] = max(ans.back()[1], interval[1]);
        }
    }

    return ans;
}

int main(){

    int N;
    cin >> N;

    vector<vector<int>> v(N);
    for(int i=0;i < N;++i){
        for(int j=0;j < 2;++j){
            int val;
            cin >> val;
            v[i].push_back(val);
        }
    }

    vector<vector<int>> ans = mergeIntervals(v);

    for(int i=0;i < ans.size();++i){
        for(int j=0;j<ans[i].size();++j){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}