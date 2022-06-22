package leetcode.groupAnagram;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

class Solution {

	// O(M+N) N = no. of words , M = maximum character of word.
	public List<List<String>> groupAnagrams(String[] strs) {
		List<List<String>> res = new ArrayList<>();
		if (strs.length == 0) {
			return res;
		}

		HashMap<String, List<String>> map = new HashMap<>();

		for (int i = 0; i < strs.length; i++) {
			String word = strs[i]; // get i'th word
			char[] letters = word.toCharArray(); // convert string to char array
			Arrays.sort(letters); // sort char array
			String sortedWord = new String(letters); // convert sorted array to string

			// if map contains sorted word add ith word to its List value
			if (map.containsKey(sortedWord)) {
				map.get(sortedWord).add(word);
			} else {
				// if first time adding the sorted word
				List<String> words = new ArrayList<>();
				words.add(word);
				map.put(sortedWord, words);
			}
		}

		// add value List of every sorted word to result list
		for (String s : map.keySet()) {
			res.add(map.get(s));
		}

		return res;
	}
}

public class GroupAnagram {

	public static void main(String[] args) {
		Solution obj = new Solution();
		String[] strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
		List<List<String>> list = obj.groupAnagrams(strs);

		System.out.println(list);
	}

}
