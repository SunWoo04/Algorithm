

import java.util.Scanner;
import java.util.HashSet; //중복되는 원소를 넣을 경우 하나만 저장한다.

public class 나머지_3052 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashSet<Integer> h = new HashSet<Integer>(); //메소드 선언
		
		for(int i =0;i<10;i++) {
			h.add(sc.nextInt()%42); //.add 는 HashSet에 값 저장
		}
		sc.close();
		System.out.print(h.size());
	}

}
