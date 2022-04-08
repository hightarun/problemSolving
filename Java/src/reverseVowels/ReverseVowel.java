package reverseVowels;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public String reverseVowels(String s) {

		int low = 0;
		int high = s.length() - 1;

		Map<Character, Integer> map = new HashMap<>();
		map.put('a', 1);
		map.put('A', 1);
		map.put('e', 1);
		map.put('E', 1);
		map.put('i', 1);
		map.put('I', 1);
		map.put('o', 1);
		map.put('O', 1);
		map.put('u', 1);
		map.put('U', 1);

		char[] chars = s.toCharArray();

		while (low < high) {
			boolean i = false;
			boolean j = false;
			if (map.containsKey(chars[low])) {
				i = true;
			} else if (!i) {
				++low;
			}
			if (map.containsKey(chars[high])) {
				j = true;
			} else if (!j) {
				--high;
			}
			if (i == true && j == true) {
				char temp = chars[low];
				chars[low] = chars[high];
				chars[high] = temp;
				low++;
				high--;
			}
		}

		String res = new String(chars);
		return res;
	}
}

public class ReverseVowel {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		System.out.println(objSolution.reverseVowels("hello"));
	}

}
