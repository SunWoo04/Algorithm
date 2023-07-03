

import java.util.Scanner;

public class 곱셈_1629 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long a =sc.nextInt();
		long b = sc.nextInt();
		long c =sc.nextInt();
		long sum=1;
		sc.close();
		
		for(int i=1;i<=b;i++) {
			sum*=a;
		}
		sum%=c;
		System.out.println(sum);
	}

}
