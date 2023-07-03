

import java.util.Scanner;

public class 문자와문자열_27866 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		int num = sc.nextInt();
		sc.close();
		System.out.println(str.charAt(num-1));
	}

}
