

import java.util.Scanner;

public class 바이러스_2606 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int dot = sc.nextInt();
		int line = sc.nextInt();
		int[][]arr = new int[dot][dot];
		
		for(int i =0;i<line;i++) {
			int a,b;
			a = sc.nextInt();
			b = sc.nextInt();
			arr[a][b] = 1;
			arr[b][a] = 1;
		}
	}

}
