package kLargestinStream;

import java.util.PriorityQueue;

class KthLargest {
	PriorityQueue<Integer> q = new PriorityQueue<>();
	private int K;

	public KthLargest(int k, int[] a) {
		K = k;
		for (int el : a) {
			q.add(el);
			if (q.size() > K) {
				q.poll();
			}
		}
	}

	public int add(int n) {
		q.offer(n);
		if (q.size() > K) {
			q.poll();
		}
		return q.peek();
	}
}

public class KlargetElement {

	public static void main(String[] args) {
		// ["KthLargest","add","add","add","add","add"]
		// [[3,[4,5,8,2]],[3],[5],[10],[9],[4]]
		int[] arr = new int[] { 4, 5, 8, 2 };
		int[] ar2 = new int[] { 3, 5, 10, 9, 4 };
		KthLargest obj = new KthLargest(3, arr);
		for (int a : ar2) {
			System.out.print(obj.add(a) + " ");
		}

	}

}
