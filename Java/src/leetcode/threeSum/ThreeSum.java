package leetcode.threeSum;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

class Solution {
	public List<List<Integer>> threeSum(int[] nums) {
		List<List<Integer>> res = new ArrayList<List<Integer>>();

		Arrays.sort(nums);
		for (int i = 0; i < nums.length - 2; i++) {
			if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
				int low = i + 1;
				int high = nums.length - 1;
				int sum = 0 - nums[i];

				while (low < high) {
					if (nums[low] + nums[high] == sum) {
						res.add(Arrays.asList(nums[i], nums[low], nums[high]));
						while (low < high && nums[low] == nums[low + 1])
							low++;
						while (low < high && nums[high] == nums[high - 1])
							high--;
						low++;
						high--;
					} else if (nums[low] + nums[high] > sum) {
						high--;
					} else {
						low++;
					}
				}
			}
		}
		return res;
	}
}

public class ThreeSum {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		int[] nums = { -1, 0, 1, 2, -1, -4 };
		List<List<Integer>> list = new ArrayList<List<Integer>>();
		list = objSolution.threeSum(nums);
		System.out.println(list);
	}

}
