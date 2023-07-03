
import java.util.Scanner;

public class 평균_1546 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		double[]score = new double[n];
		for(int i=0;i<score.length;i++) {
			score[i]=sc.nextInt();
		}
		sc.close();
		double max = score[0];
		for(double maximum:score) {
			if(maximum>max) {
				max = maximum;
			}
		}
		double sum = 0;
		for(int i=0;i<score.length;i++) {
			sum += (score[i]/max)*100;
		}
		System.out.print(sum/score.length);
	}

}
