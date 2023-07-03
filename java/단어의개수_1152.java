

import java.util.Scanner;

public class 단어의개수_1152 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = sc.nextLine();
		sc.close();
		int cnt = 0;
		
		for(int i =0;i<str.length();i++) {
			if(str.charAt(i) == ' ') {
				cnt++;
			}
		}
		
		//맨앞 공백과 맨뒤 공백은 버려줘야됨.
		if(str.charAt(0) != ' ' && str.charAt(str.length()-1) != ' ') {
			cnt+=1;
		}
		if(str.charAt(0)==' '&&str.charAt(str.length()-1)==' ') {
			cnt-=1;
		}
		System.out.print(cnt);
	}

}
