

import java.util.Scanner;

public class X보다작은수_10871 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1 = sc.nextInt();
		int n2 = sc.nextInt();
		int[] n3 = new int[n1];
		for(int i =0;i<n3.length;i++) {
			n3[i] = sc.nextInt();
		}
		for(int i = 0;i<n3.length;i++) {
			if(n3[i]<n2) {
				System.out.printf("%d ",n3[i]);
			}
		}
		sc.close();
	}

}
