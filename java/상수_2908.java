

import java.util.Scanner;

public class 상수_2908 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[]num = new int[2];
		int[] reverse = {0,0};

		for(int i=0;i<2;i++) {
			num[i]=sc.nextInt();
		}
		sc.close();
		//수 뒤집기
		for(int i=0;i<2;i++) {
			while (num[i] != 0) {
				int digit = num[i] % 10;
				reverse[i] = reverse[i] * 10 + digit;
				num[i] /= 10;
			}
		}
		if(reverse[0]<reverse[1]) {
			System.out.println(reverse[1]);
		} else {
			System.out.println(reverse[0]);
		}
	}

}
