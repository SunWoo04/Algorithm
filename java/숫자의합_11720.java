
import java.util.Scanner;

public class 숫자의합_11720 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String st = sc.next();
		sc.close();
		
		int sum = 0;
		
		for(int i=0;i<n;i++) {
			sum+=st.charAt(i)-48; //48 = 0의 아스키코드, 48 or '0'
		}
		System.out.print(sum);
	}

}
