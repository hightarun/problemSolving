package leetcode.topKfrequent;

import java.util.HashMap;
import java.util.Map;
import java.util.PriorityQueue;

class Solution {
	public int[] topKFrequent(int[] nums, int k) {
		Map<Integer, Integer> map = new HashMap<>();
		int[] res = new int[k];
		for (int n : nums) {
			if (map.containsKey(n)) {
				map.put(n, map.get(n) + 1);
			} else {
				map.put(n, 1);
			}
		}

		PriorityQueue<Integer> maxheap = new PriorityQueue<>((a, b) -> map.get(b) - map.get(a));

		for (int key : map.keySet()) {
			maxheap.add(key);
		}
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
