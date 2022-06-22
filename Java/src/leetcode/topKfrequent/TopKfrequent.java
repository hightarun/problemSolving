package leetcode.topKfrequent;

import java.util.HashMap;
import java.util.PriorityQueue;

class Solution {
	public int[] topKFrequent(int[] nums, int k) {
		HashMap<Integer, Integer> map = new HashMap<>();
		int[] res = new int[k];
		for (int i : nums) {
			map.put(i, map.getOrDefault(i, 0) + 1);
		}

		// making maxheap using priority queue
		PriorityQueue<Integer> maxheap = new PriorityQueue<>(k, (a, b) -> map.get(b) - map.get(a));

		// adding key to maxheap -> it will compare value of this key for the priority
		for (int key : map.keySet()) {
			maxheap.add(key);
		}
		// getting the max value from maxheap by using poll to remove the root
		// element(it heapifies again after removing)
		for (int i = 0; i < k; i++) {
			res[i] = maxheap.poll();
		}

// 		slower solution
//		PriorityQueue<Integer> q = new PriorityQueue<>();
//		for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
//			q.add(-entry.getValue());
//		}
//
//		for (int i = 0; i < k; i++) {
//			int e = -q.poll();
//			for (Map.Entry<Integer, Integer> entry : map.entrySet()) {
//				if (e == entry.getValue()) {
//					if (!IntStream.of(res).anyMatch(x -> x == entry.getKey())) {
//						res[i] = entry.getKey();
//					}
//				}
//			}
//		}
		return res;
	}
}

public class TopKfrequent {

	public static void main(String[] args) {
		Solution objSolution = new Solution();
		int[] arr = new int[] { 1, 1, 1, 2, 2, 3 };
		int[] res = objSolution.topKFrequent(arr, 2);
		for (int r : res) {
			System.out.print(r + " ");
		}
	}

}
