
import java.util.Scanner;

public class 음계_2920 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] n =new int[8];
		for(int i=0;i<n.length;i++) {
			n[i] =sc.nextInt();
		}
		sc.close();
		
		String answer = new String();
		for(int i =0;i<n.length-1;i++) {
			if(n[i]==n[i+1]-1) {
				answer = "ascending";
			} else if(n[i]==n[i+1]+1) {
				answer = "descending";
			}else {
				answer = "mixed";
				break;
			}
		}
		System.out.println(answer);
	}

}
