package lastStoneWeight;

import java.util.PriorityQueue;

class Solution {
	public int lastStoneWeight(int[] stones) {
		PriorityQueue<Integer> maxHeap = new PriorityQueue<>();

		// putting inside maxHeap , by default it uses min-heap , hence negative to
		// max-heap
		for (int stone : stones) {
			maxHeap.add(-stone);
		}
		// till last element left
		while (maxHeap.size() > 1) {
			int stone1 = -maxHeap.remove(); // since its max-heap largest element will be poped and queue will get
											// sorted again
			int stone2 = -maxHeap.remove(); // 2nd largest
			// if stones are different then add their difference else move on till heap has
			// size 1
			if (stone1 != stone2) {
				maxHeap.add(-(stone1 - stone2));
			}
		}
		return maxHeap.isEmpty() ? 0 : -maxHeap.remove();
	}
}

public class LastStoneWeight {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		int[] stones = { 2, 7, 4, 1, 8, 1 };
		System.out.println(objSolution.lastStoneWeight(stones));
	}

}
