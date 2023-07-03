

import java.util.Scanner;

public class 단어공부_1157 {

	public static void main(String[] args) {
		int[]arr = new int[26];
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		sc.close();
		
		for(int i =0;i<str.length();i++) {
			
			if(65<=str.charAt(i) && str.charAt(i)<=90) {
				arr[str.charAt(i)-65]++;
			}else {
				arr[str.charAt(i)-97]++;
			}
		}
		int max = -1;
		char ch = '?';
 
		for (int i = 0; i < 26; i++) {
			if (arr[i] > max) {
				max = arr[i];
				ch = (char) (i + 65); // 대문자로 출력해야하므로 65를 더해준다.
			}
			else if (arr[i] == max) {
				ch = '?';
			}
		}
 
		System.out.print(ch);
	}
 
}
