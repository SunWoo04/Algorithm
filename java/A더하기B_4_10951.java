

import java.util.Scanner;

public class A더하기B_4_10951 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
	
		while(sc.hasNextInt()) { //hasNextInt 안에 무엇이 있냐
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println(a+b);
		}
		sc.close();
		
	}

}
