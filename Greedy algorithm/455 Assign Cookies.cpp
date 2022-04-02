/*
* 			Author : yueyingyifeng
* 		CreateDate : 2022/3/30 23:30:03
* 	   Description ：https://leetcode.com/problems/assign-cookies/
*/
#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <iterator>
#include <algorithm>
#include <string>

using namespace std;

class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		int children{}, cookies{};//当前小孩和饼干
		sort(g.begin(), g.end());//先进行排序
		sort(s.begin(), s.end());
		while (children < g.size() && cookies < s.size()) {
			if (g[children] <= s[cookies]) {//此饼干能否满足此小孩
				children++;//能,换下一个小孩
			}
			cookies++;//换下一块饼干
		}
		return children;
	}
	//只能通过14个样例，对于g[1,2,3] s[3]不能通过:预期 1 结果 3
	int findContentChildren1(vector<int>& g, vector<int>& s) {
		int result{};
		for (int j{}; j < g.size(); j++) {
			for (int i{}; i < s.size(); i++) {
				if (g[j] <= s[i]) {
					result++;
					break;
				}
			}
		}
		return result;
	}
};

//int main() {
//	Solution sol;
//	vector<int> g{ 1, 2, 3 };
//	vector<int> s{ 3 };
//	cout << sol.findContentChildren(g, s);
//	return 0;
//}