/*
*          Author : yueyingyifeng
*      CreateDate : 2022-04-06 21:18
*     Description ：https://leetcode.com/problems/non-overlapping-intervals/
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int depth = intervals.size();
        int result{};
        sort(intervals.begin(),intervals.end(),[](vector<int>& a, vector<int>& b){
            return a[1] < b[1];
        });
        return result;
    }
};

int main(){
    Solution sol;
    vector<vector<int>> target{
        {1,2},
        {2,3},
        {3,4},
        {1,3}
    };

    cout << sol.eraseOverlapIntervals(target);


    return 0;
}