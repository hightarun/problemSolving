package leetcode.validAnagram;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public boolean isAnagram(String s, String t) {
		Map<Character, Integer> map = new HashMap<>();
		Map<Character, Integer> map2 = new HashMap<>();

		char[] schar = s.toCharArray();
		char[] tchar = t.toCharArray();

		for (char c : schar) {
			if (map.containsKey(c)) {
				map.put(c, map.get(c) + 1);
			} else {
				map.put(c, 1);
			}
		}
		for (char c : tchar) {
			if (map2.containsKey(c)) {
				map2.put(c, map2.get(c) + 1);
			} else {
				map2.put(c, 1);
			}
		}

		if (map.equals(map2))
			return true;
		return false;
	}
}

public class ValidAnagram {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		System.out.println(objSolution.isAnagram("anagram", "naagarm"));
	}

}
