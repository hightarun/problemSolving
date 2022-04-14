package codechef.avgarr;

import java.util.Scanner;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef {
	public static void main(String[] args) throws java.lang.Exception {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			int x = sc.nextInt();
			int[] a = new int[n];
			int i = 1, j = 0;

			// if n odd
			if (n % 2 != 0) {
				a[0] = x;
				++j;
			}
			// add and subtract same value from x to maintain the avg
			while (j < n) {
				a[j++] = x + i;
				a[j++] = x - i;
				++i;
			}
			// print array
			for (int e : a) {
				System.out.print(e + " ");
			}
			System.out.println("");
		}
		sc.close();
	}
}
/**
 * 3 3 7 5 1 1 10
 **/
