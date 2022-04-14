package leetcode.reverseString;

class Solution {
	public void reverseString(char[] s) {
		// 2 pointer approach
		int low = 0;
		int high = s.length - 1;

		while (low < high) {
			char temp = s[low];
			s[low] = s[high];
			s[high] = temp;
			low++;
			high--;
		}
	}
}

public class ReverseString {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		char[] str = "hello".toCharArray();
		objSolution.reverseString(str);

		for (char c : str) {
			System.out.print(c + " ");
		}

	}

}
