
import java.util.Scanner;

/*scanner 클래스를 이용하여 달러를 입력받아 실행 사례와 같이 원화로 작성하는 프로그램을 작성하라. $1=1200원으로 가정한다.*/
public class practice_01{
    public static int DTW(int num) {
        return num*1200;
        }
    public static void main(String[] args) {
        System.out.println("달러를 입력하세요: ");
        Scanner scanner = new Scanner(System.in);
        int dollar=scanner.nextInt();
        System.out.println("입력된 달러는 환전 결과 "+DTW(dollar)+"원 입니다.");
        scanner.close();
    }
}
