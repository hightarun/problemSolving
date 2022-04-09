package containsDuplicateII;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public boolean containsDuplicate(int[] nums) {
		Map<Integer, Integer> map = new HashMap<>();

		for (int n : nums) {
			if (map.containsKey(n)) {
				map.put(n, map.get(n) + 1);
				return true;
			} else {
				map.put(n, 1);
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
