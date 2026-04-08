import java.util.Scanner;

class Grade{
    private String name;
    private int java_score;
    private int web_score;
    private int os_score;
    public Grade(String name, int java_score, int web_score, int os_score){
        this.name=name;
        this.java_score=java_score;
        this.web_score=web_score;
        this.os_score=os_score;
    }
    public String getName(){
        return name;
    }
    public int getJava(){
        return java_score;
    }
    public int getWeb(){
        return web_score;
    }
    public int getOs(){
        return os_score;
    }
    public int getAverage(){
        return (java_score+web_score+os_score)/3;
    }
}
public class practice_03 {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        System.out.print("이름, 자바, 웹프로그래밍, 운영체제 순으로 점수 입력>> ");
        String name=scanner.next();
        int java=scanner.nextInt();
        int web=scanner.nextInt();
        int os=scanner.nextInt();
        Grade st=new Grade(name, java, web, os); //한 명의 점수 객체 생성
        System.out.print(st.getName()+"의 평균은 "+st.getAverage());
        scanner.close();
    }
}