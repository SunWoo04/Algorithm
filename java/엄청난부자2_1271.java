
import java.math.BigInteger;
import java.util.Scanner;

public class 엄청난부자2_1271 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		BigInteger money = sc.nextBigInteger();
		BigInteger n = sc.nextBigInteger();
		sc.close();
		
		System.out.println(money.divide(n));
		System.out.println(money.remainder(n));
	}

}
