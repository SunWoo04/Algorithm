

import java.util.Scanner;

public class 설탕배달_2839 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num,cnt;

		num=sc.nextInt();
		sc.close();
		cnt=0;

		while(num>5){
			if(num%5==0) {
				break;
			}else if(num%3==0 && num<=12) {
				break;
			}else {
				num-=5;
				cnt++;
			}
		}
		if(num%5==0) {
			cnt=num/5;
		}else {
			switch(num) {
			case 3:
				cnt+=1;
				break;
			case 6:
				cnt+=2;
				break;
			case 9:
				cnt+=3;
				break;
			case 12:
				cnt+=4;
				break;
			default:
				cnt=-1;
				break;
			}
		}
		System.out.print(cnt);
	}
}