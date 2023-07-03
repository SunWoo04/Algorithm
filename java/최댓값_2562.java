
import java.util.Scanner;

public class 최댓값_2562 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] answer = new int[9];
		for(int i=0;i<answer.length;i++) {
			answer[i]=sc.nextInt();
		}
		sc.close();
		
		int cnt = 0;
		int max = 0;
		int index = 0;
		
		for(int n:answer) { //for-each문 배열을 한번씩 대입하면서 반복
			cnt++;
			if(n>max) {
				max = n;
				index =cnt;
			}
		}
		System.out.print(max + "\n" + index);
		
	}

}
