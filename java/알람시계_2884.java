
import java.util.Scanner;

public class 알람시계_2884 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int h = sc.nextInt();
		int m = sc.nextInt();
		int cm =m;
		m-=45;
		if(m<0) {
			h-=1;
			m=60-(45-cm);
		}
		if(h<0){
			h=23;
		}
		sc.close();
		System.out.printf("%d %d",h,m);
	}

}
