
import java.util.Scanner;

public class 숫자의개수_2577 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n;
		int sum = 1;
		for(int i=0;i<3;i++) {
			n = sc.nextInt();
			sum *=n;
		}
		sc.close();
		// int를 String으로
		String str=Integer.toString(sum);
		for(int i=0;i<10;i++) {
			int cnt=0;
			for(int j=0;j<str.length();j++) {
				if((str.charAt(j)-'0') == i) {
					cnt++;
				}
			}
			System.out.println(cnt);
		}
	}

}
