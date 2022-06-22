package leetcode.validAnagram;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public boolean isAnagram(String s, String t) {
		Map<Character, Integer> map = new HashMap<>();
		Map<Character, Integer> map1 = new HashMap<>();

		for (char i : s.toCharArray()) {
			int freq = map.getOrDefault(i, 0);
			map.put(i, freq + 1);
		}

		for (char i : t.toCharArray()) {
			int freq = map1.getOrDefault(i, 0);
			map1.put(i, freq + 1);
		}

		if (map.equals(map1)) {
			return true;
		}
		return false;
	}
}

public class ValidAnagram {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		System.out.println(objSolution.isAnagram("anagram", "naagarm"));
	}

}
