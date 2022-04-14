package leetcode.twoSum;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public int[] twoSum(int[] nums, int target) {
		Map<Integer, Integer> map = new HashMap<>();
		int[] res = new int[2];

		for (int i = 0; i < nums.length; i++) {
			int comp = target - nums[i];
			// if we find the complementary then putting indexes in res;
			if (map.containsKey(comp)) {
				res[0] = map.get(comp);
				res[1] = i;
				return res;
			}
			// storing the number with its index as value in the map
			map.put(nums[i], i);
		}
		return res;
	}
}

public class TwoSum {

	public static void main(String[] args) {
		Solution obj = new Solution();

		int[] arr = { 2, 7, 11, 15 };
		int target = 9;
		int[] res = obj.twoSum(arr, target);
		for (int i : res) {
			System.out.print(i + " ");
		}
	}

}
