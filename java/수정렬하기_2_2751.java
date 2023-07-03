
import java.io.*;
import java.util.Arrays;

public class 수정렬하기_2_2751 {

	public static void main(String[] args) throws IOException {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int num = Integer.parseInt(br.readLine());
		int[]arr=new int[num];

		for(int i =0;i<num;i++) {
			arr[i]=Integer.parseInt(br.readLine());
		}
		//오름차순
		Arrays.sort(arr);

		for(int i =0;i<num;i++) {
			System.out.println(arr[i]);
		}
	}

}
