import java.util.Scanner;

public class 대소문자바꾸기_2744 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		sc.close();
		for(int i =0; i<str.length();i++) {
			if((int)str.charAt(i)<=90) {
				System.out.print((char)(str.charAt(i)+32));
			}else if((int)str.charAt(i)>=97){
				System.out.print((char)(str.charAt(i)-32));
			}
		}
	}

}
