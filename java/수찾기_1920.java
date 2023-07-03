
import java.util.Scanner;

public class 수찾기_1920 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int[]arr1 = new int[N];
		for(int i =0;i<arr1.length;i++) {
			arr1[i]=sc.nextInt();
		}
		
		int M = sc.nextInt();
		int[]arr2 = new int[M];
		for(int i=0;i<arr2.length;i++) {
			arr2[i]=sc.nextInt();
		}
		sc.close();
		
		int answer;
		for(int i=0;i<arr2.length;i++) {
			answer =0;
			for(int j=0;j<arr1.length;j++) {
				if(arr1[j]==arr2[i]) {
					answer = 1;
					break;
				}
			}
			System.out.println(answer);
		}
	}

}
