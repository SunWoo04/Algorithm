

import java.util.Scanner;

public class 두수비교하기_1330 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int i = sc.nextInt();
		int j = sc.nextInt();
		
		if(i<j) {
			System.out.println("<");
		}else if(i>j) {
			System.out.println(">");
		}else {
			System.out.println("==");
		}
		sc.close();
	}

}
