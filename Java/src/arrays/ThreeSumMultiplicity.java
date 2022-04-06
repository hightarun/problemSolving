package arrays;

import java.util.HashMap;
import java.util.Map;

class Solution {
	public int threeSumMulti(int[] arr, int target) {
		Map<Integer, Long> map = new HashMap<>();
		long res = 0;
		int mod = 1000000007;

		for (int i : arr) {
			long freq = map.getOrDefault(i, 0l); // getting current freq from map
			map.put(i, freq + 1l); // updating frequency
		}

		// < i , j , k > , i + j + k = target
		for (Integer i : map.keySet()) {
			for (Integer j : map.keySet()) {
				int k = target - i - j; // for third element in pair a + b + c = d , c = d - a - b
				if (map.containsKey(k)) {
					// getting frequency of all the elements
					long freq1 = map.get(i);
					long freq2 = map.get(j);
					long freq3 = map.get(k);

					// Now using combination formulas
					// i = j = k
					if (i == j && i == k) {
						res += ((freq1) * (freq1 - 1) * (freq1 - 2)) / 6;
					}
					// i = j , i != k
					else if (i == j && i != k) {
						res += ((freq1) * (freq1 - 1)) / 2 * freq3;
					}
					// i != j != k also i < j < k
					else if (i < j && j < k) {
						res += ((freq1 * freq2 * freq3));
					}
				}
			}
		}
		return (int) (res % mod);

		// using array - faster
		// long [] count = new long[101];
		// for (int i : arr)
		// count[i]++;
		// for (int i = 0; i <= 100; i++) {
		// for (int j = i; j <= 100; j++) {
		// int k = target-i-j;
		// if (k > 100 || k < 0)
		// continue;
		// else if (i == j && j == k) {
		// res += count[i] * (count[i]-1) * (count[i]-2) / 6;
		// res %= mod;
		// }
		// else if (i == j && j != k) {
		// res += count[i] * (count[i]-1) / 2 * count[k];
		// res %= mod;
		// }
		// else if (j < k) {
		// res += count[i] * count[j] * count[k];
		// res %= mod;
		// }
		// }
		// }
		// return (int)(res%mod);
	}
}

public class ThreeSumMultiplicity {

	public static void main(String[] args) {
		Solution obj = new Solution();

		int[] arr = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5 };
		int target = 8;
		System.out.println(obj.threeSumMulti(arr, target));

	}

}
