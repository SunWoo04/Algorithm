
import java.util.Scanner;

public class 직사각형에서탈출_1085 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[]arr = new int[4];
		for(int i =0;i<arr.length;i++) {
			arr[i]=sc.nextInt();
		}
		sc.close();
		arr[2]-=arr[0];
		arr[3]-=arr[1];
		
		int min=1000;
		
		for(int i =0; i<arr.length;i++) {
			if(arr[i]<min) {
				min=arr[i];
			}
		}
		System.out.println(min);
	}

}
