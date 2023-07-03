

import java.util.Scanner;

public class 분해합_2231 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String N = sc.next();
		sc.close();
		
		//N = M + M.idx
		int M = Integer.parseInt(N);
		for(int i=0;i<N.length();i++) {
			M+=N.charAt(i)-'0';
		}
		System.out.println(M);
		
		
//		int i = 198+1+9+8;
//		System.out.println(i);
		
	}

}
