
import java.util.Scanner;

public class 알파벳찾기_10809 {

	public static void main(String[] args) {
		int[]arr = new int[26];
		Scanner sc = new Scanner(System.in);
		String st = sc.next();
		sc.close();
		for(int i =0;i<arr.length;i++) {
			arr[i]=-1;
		}
		for(int i = 0; i<st.length();i++) {
			for(int j=65;j<=90;j++) {
				if(st.charAt(i) ==j || st.charAt(i)==j+32) {
					if(arr[j-65]==-1) {
						arr[j-65]=i;
					}
				}

			}

		}
		for(int i =0;i<arr.length;i++) {
			System.out.printf("%d ",arr[i]);
		}
	}

}
