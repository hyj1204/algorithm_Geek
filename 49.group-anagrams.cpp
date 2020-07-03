/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
// way 1
// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         unordered_map<string, vector<string>> mp;
//         for (string s : strs) {
//             string t = s;
//             sort(t.begin(), t.end()); //O(nlogn)
//             mp[t].push_back(s);
//         }
//         //先把输入的vector里面有哪几种组合先排好。key是组合的方式，value是每个组合里面的实际值。
//         //因为返回的是一个vector里面每一个都是vector string 
//         vector<vector<string>> results;
//         for (auto p : mp) {
//             results.push_back(p.second); //这里的second代指的是这个map里面所有value的部分
//         }
//         return results;
//     }
// };

//way 2 :因为题目只有小写字母，所以可以通过自己写sort来改善时间复杂度
class Solution {
    public:
      vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = strSort(s);
            mp[t].push_back(s);
        }
        //先把输入的vector里面有哪几种组合先排好。key是组合的方式，value是每个组合里面的实际值。
        //因为返回的是一个vector里面每一个都是vector string 
        vector<vector<string>> results;
        for (auto p : mp) {
            results.push_back(p.second); //这里的second代指的是这个map里面所有value的部分
        }
        return results;
    }
    
    private:
        string strSort(string s) {
            int lowcase[26] = {0};
            for (char c : s) {
                lowcase[c - 'a']++;
            }
            string t;
            for (int c = 0; c < 26; c++) {
                t = t + string(lowcase[c], c + 'a');
                //string (size_t n, char c);
                //fill constructor ：Fills the string with n consecutive copies of character c.
                //所以当有值的时候lowcase[c] > 0 ,生成对应个数的char组成一个string
            }
            return t;
        }
};

// @lc code=end

