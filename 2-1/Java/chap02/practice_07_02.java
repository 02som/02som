import java.util.Scanner;
/*(2)switch문을 이용하여 프로그램을 작성  */
public class practice_07_02 {
    public static void main(String[] args) {
        System.out.print("월을 입력하세요(1~12)>> ");
        Scanner scanner = new Scanner(System.in);
        int month=scanner.nextInt();
        switch(month){
            case 3,4,5:
                System.out.println("따뜻한 봄");
                break;
            case 6,7,8:
                System.out.println("바다가 즐거운 여름");
                break;
            case 9,10,11:
                System.out.println("낙엽이 지는 아름다운 가을");
                break;
            case 12,1,2:
                System.out.println("눈 내리는 하얀 겨울");
                break;
            default:
                System.out.println("1~12만 입력하세요.");
        }
        scanner.close();
    }
}