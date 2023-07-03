

import java.util.Scanner;

public class 별찍기_1_2438 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int c = sc.nextInt();
		
		for(int i =1;i<=c;i++) {
			for(int j=1;j<=i;j++) {
				System.out.printf("%c",'*');
			}
			System.out.println();
		}
		sc.close();
	}

}
