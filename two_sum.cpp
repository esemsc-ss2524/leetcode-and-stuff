#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
	vector<int> twoSum(vector<int> &nums, int target)
	{
		unordered_map<int,int> mp;
		for (int i = 0; i < nums.size(); ++i)
		{
			int complement = target - nums[i];
			if(mp.count(complement))
			{
				return {mp[complement], i};
			}
			// mp[nums[i]] = i;
			mp.insert(make_pair(nums[i], i));
		}
		return {};
	}
};

int main()
{
	Solution twoSum;
	int target = 5;
	vector<int> vec{1,2,4,6,8};

	auto result = twoSum.twoSum(vec, target);
	
	std::cout << result[0] << " " << result[1];

	return 0;
}