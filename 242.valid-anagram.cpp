/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
// for all kinds of letters
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) return false;
//         unordered_map<char, int> counts;
//         for (int i = 0; i < s.length(); i++) {
//             counts[s[i]]++;
//             counts[t[i]]--;
//         }
//         for (auto each : counts) {
//             if (each.second) return false;
//         }
//         return true;
//     }
// };

// for lowercase letters only
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int counts[26] = {0};
        for (int i = 0; i < s.length(); i++) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (counts[i]) return false;
        }
        return true;
    }
};
// @lc code=end

