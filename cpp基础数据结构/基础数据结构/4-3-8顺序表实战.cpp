//#include <iostream>
//#include <vector>
//#include <cmath> // 引入 std::abs 函数
//
//using namespace std;
//
//class Solution {
//public:
//    int countKDifference(vector<int>& nums, int k) {
//        int cnt = 0;
//        // 修正 1：循环边界应严格小于 nums.size()
//        // 建议使用 size_t，因为 nums.size() 返回的是无符号整数类型
//        for (size_t i = 0; i < nums.size(); i++) {
//            for (size_t j = i + 1; j < nums.size(); j++) {
//                // 修正 2：使用 std::abs 计算差的绝对值
//                if (std::abs(nums[i] - nums[j]) == k) {
//                    cnt++;
//                }
//            }
//        }
//        return cnt;
//    }
//};
//
//int main() {
//    Solution sol;
//
//    // 推荐的本地测试方案：直接使用初始化列表构造 vector，彻底避免 cin 阻塞
//    vector<int> nums = { 1, 2, 2, 1 };
//    int k = 1;
//
//    int result = sol.countKDifference(nums, k);
//
//    cout << "输入: nums = [1, 2, 2, 1], k = 1\n";
//    cout << "输出: " << result << "\n"; // 根据示例 1，此处预期输出为 4
//
//    return 0;
//}