

import java.util.Scanner;

public class 곱셈_2588 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n1 = sc.nextInt();
		String n2 = sc.next();
		sc.close();
		
		int sum;
		for(int i=0;i<3;i++) {
			sum=n1;
			sum*=n2.charAt(2-i)-'0';
			System.out.println(sum);
		}
		System.out.println(n1*Integer.parseInt(n2));
	}

}
