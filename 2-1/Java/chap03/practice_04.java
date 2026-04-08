public class practice_04 {
    public static void main(String[] args){
        int n[][]={{1,2,3},{1,2},{1},{1,2,3},{1,2,3,4}};
        for (int i[] : n){
            for (int j : i){
                System.out.print(j+"    ");
        }
        System.out.print("\n");
        }
    }
}

//2차원 배열 n을 실행 사례와 같이 출력하는 프로그램을 작성하라
//1 2 3
//1 2 ...