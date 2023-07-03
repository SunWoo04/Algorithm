
import java.util.Scanner;

public class 소수찾기_1978 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int[]arr = new int[num];
		
		for(int i =0 ;i<arr.length;i++) {
			arr[i]=sc.nextInt();
		}
		sc.close();
		int cnt1;
		int cnt2 =0;
		for(int i =0 ;i<arr.length;i++) {
			cnt1=0;
			for(int j=1;j<=arr[i];j++) {
				if(arr[i]%j==0) {
					cnt1++;
				}
			}
			if(cnt1==2) {
				cnt2++;
			}
		}
		System.out.print(cnt2);
	}

}
