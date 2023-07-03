

import java.util.Scanner;

public class 개수세기_10807 {

	public static void main(String[] args) {
		Scanner sc =new Scanner(System.in);
		int num1 = sc.nextInt();
		int[]arr= new int[num1];
		for(int i =0;i<num1;i++) {
			arr[i]=sc.nextInt();
		}
		int num2 = sc.nextInt();
		sc.close();
		
		int cnt =0;
		for(int i =0;i<num1;i++) {
			if(arr[i]==num2) {
				cnt++;
			}
		}
		System.out.println(cnt);
	}

}
