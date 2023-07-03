
import java.util.Scanner;

public class ACM호텔_10250 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int h,n;
		for(int i = 0; i<num;i++) {
			h=sc.nextInt();
			n=sc.nextInt();
			sc.close();
			
			if(n%h==0) {
				System.out.println((h*100) + (n/h));
			}else {
				System.out.println(((n/h)+1)+((n%h)*100));
			}
		}
	}

}
