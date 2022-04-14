package codechef.prosprod;

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			long countPos = 0, countNeg = 0;
			int n = sc.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = sc.nextInt();
			}
			for (int i = 0; i < n; i++) {
				if (a[i] > 0)
					++countPos;
				if (a[i] < 0)
					++countNeg;
			}
			System.out.println(countPos * (countPos - 1) / 2 + countNeg * (countNeg - 1) / 2);
		}
		sc.close();
	}
}

// INPUT
/**
 * 3 5 1 -3 0 2 -1 4 -1 -1 -1 -1 4 0 1 2 3
 **/