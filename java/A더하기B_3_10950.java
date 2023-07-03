

import java.util.Scanner;

public class A더하기B_3_10950 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c = sc.nextInt();
		int n1, n2;
		int[]answer = new int[c];
		for(int i =0;i<c;i++) {
			n1 = sc.nextInt();
			n2 = sc.nextInt();
			answer[i] = n1+n2;
		}
		for(int i = 0;i<c;i++) {
			System.out.println(answer[i]);
		}
		sc.close();
	}

}
