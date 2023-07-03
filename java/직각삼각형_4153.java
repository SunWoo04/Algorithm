
import java.util.Scanner;

public class 직각삼각형_4153 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[]arr = new int[3];
		do {
			for(int i =0;i<arr.length;i++) {
				arr[i]=sc.nextInt();
			}
			for(int j =0; j<arr.length-1;j++) {
				if(arr[j]>arr[j+1]) {
					int temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
			if(arr[0]==0 && arr[1]==0 && arr[2]==0) {
				break;
			}
			if(arr[2]*arr[2] == arr[0]*arr[0] + arr[1]*arr[1]) {
				System.out.println("right");
			}else {
				System.out.println("wrong");
			}
		}while(true);
		sc.close();
	}

}
