package baseballGame;

import java.util.Stack;

class Solution {
	public int calPoints(String[] ops) {
		Stack<Integer> stk = new Stack<>();
		int res = 0;
		for (String s : ops) {
			if (s.equals("C")) {
				stk.pop();
			} else if (s.equals("D")) {
				int temp = stk.pop();
				stk.push(temp);
				stk.push(temp * 2);
			} else if (s.equals("+")) {
				int a = stk.pop();
				int b = stk.peek();
				int sum = a + b;
				stk.push(a);
				stk.push(sum);
			} else {
				stk.push(Integer.parseInt(s));
			}
		}
		while (!stk.empty()) {
			res += stk.pop();
		}
		return res;
	}
}

public class BaseballGame {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		String[] strings = new String[] { "5", "2", "C", "D", "+" };
		System.out.println(objSolution.calPoints(strings));
	}

}
