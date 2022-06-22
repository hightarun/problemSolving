package leetcode.containsDuplicateII;

import java.util.HashSet;

class Solution {
	public boolean containsDuplicate(int[] nums) {
		HashSet<Integer> set = new HashSet<>();
		for (int i : nums) {
			if (set.contains(i)) {
				return true;
			} else {
				set.add(i);
			}
		}
		return false;
	}
}

public class ContainsDuplicate {
	public static void main(String[] args) {
		Solution objSolution = new Solution();
		int[] nums = { 1, 2, 3, 1 };
		System.out.println(objSolution.containsDuplicate(nums));
	}
}
