import java.util.Scanner;
/*분식점 가격 계산 프로그램을 작성해보자. 
떡볶이 1인분은 2000원, 김말이 1인분은 1000원, 쫄면 1인분은 3000원이다. */
public class practice_03 {
    public static int calculate(int ddeok, int gimmari, int jjol){
        return ddeok*2000+gimmari*1000+jjol*3000;
    }
    public static void main(String[] args) {
        System.out.print(" **** 자바 분식입니다. 주문하면 금액을 알려드립니다. ****");
        System.out.print("\n떡볶이 몇 인분>> ");
        Scanner scanner = new Scanner(System.in);
        int tteok=scanner.nextInt();
        System.out.print("김말이 몇 인분>> ");
        int kimmari=scanner.nextInt();
        System.out.print("쫄면 몇 인분>> ");
        int zzol=scanner.nextInt();
        System.out.println("전체 금액은 "+calculate(tteok, kimmari, zzol)+"원입니다.");
        scanner.close();
    }
}