
import java.util.Scanner;

public class 최소최대_10818 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] ns = new int[n];
		
		for(int i =0;i<ns.length;i++) {
			ns[i] = sc.nextInt();
		}
		sc.close();
		int min = ns[0];
		int max = ns[0];
		for(int minimum:ns) {
			if(minimum<min) {
				min = minimum;
			}
		}
		for(int maximum:ns) {
			if(maximum>max) {
				max = maximum;
			}
		}
		System.out.printf("%d %d",min,max);
		
	}

} //Arrays.sort() 이 메소드는 배열에 저장된 원소 값을 오름차순으로 정렬해주는 메소드다.
