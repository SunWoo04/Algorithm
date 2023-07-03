

import java.util.Scanner;

public class OX퀴즈_8958 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int k = sc.nextInt(); //행 개수
		String ox = new String();
		int s = 0; //점수
		int p = 1; //플러스 점수
		for(int i = 0; i<k;i++) {
			ox = sc.next();
			for(int j =0;j<ox.length();j++) {
				if(ox.charAt(j) == 'O') {
					s +=p;
					p+=1;
				}else{
					p = 1;
				}
			}
			System.out.println(s);
			s = 0;
			p=1;
		}
		sc.close();

	}

}
