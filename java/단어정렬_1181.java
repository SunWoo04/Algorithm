

import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.Arrays;
import java.util.Comparator;

public class 단어정렬_1181 {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int number = Integer.parseInt(br.readLine());
		HashSet<String> set = new HashSet<>();

		for(int i =0;i<number;i++) {
			set.add(br.readLine());
		}
		
		
		int size = set.size();
		String[] st = new String[size];
		set.toArray(st);
		
//		for(int i=0;i<number-1;i++) {
//			for(int j = 1; j < st.length-i; j++) {
//				if(st[j].length()<st[j-1].length()) {
//					String temp=st[j-1];
//					st[j-1]=st[j];
//					st[j]=temp;
//				}
//			}
//		}
		
		Arrays.sort(st, new Comparator<String>() {
			public int compare(String s1, String s2) {
				// 단어 길이가 같을 경우 
				if (s1.length() == s2.length()) {
					return s1.compareTo(s2);
				} 
				// 그 외의 경우 
				else {
					return s1.length() - s2.length();
				}
			}
		});
		
		//길이가 같을 때
//		for(int i =0;i<st.length-1;i++) {
//			for(int j = 1; j < st.length-i; j++) {
//				if(st[j].length()==st[j-1].length()){
//					if(st[j-1].compareTo(st[j])>0) {
//						String temp=st[j-1];
//						st[j-1]=st[j];
//						st[j]=temp;
//					}
//				}
//			}
//		}
		
		for (int i = 0; i < st.length; i++) {
			System.out.println(st[i]);
		}
	}

}
