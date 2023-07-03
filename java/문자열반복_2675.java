
import java.util.Scanner;

public class 문자열반복_2675 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String st;
		for(int i=0;i<n;i++) {
			int times = sc.nextInt();
			st = sc.next();
			for(int k=0;k<st.length();k++) {
				for(int j=0;j<times;j++) {
					System.out.print(st.charAt(k));
				}
			}
			System.out.println();
		}
		sc.close();

	}

}
