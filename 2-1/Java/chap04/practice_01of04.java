class TV{
    private String name;
    private int inch;
    private int money;
    public TV(String name, int inch, int money){
        this.name=name;
        this.inch=inch;
        this.money=money;
    }
    public String getName(){
        return name;
    }
    public int getInch(){
        return inch;
    }
    public int getMoney(){
        return money;
    }
    public void show(){
        System.out.println(name+"에서 만든"+money+"만원짜리의 "+inch+"인치 TV");
    }
}
public class practice_01of04 {
    public static void main(String[] args) {
        TV tv=new TV("Samsung",50,300); //300만원짜리 삼성에서 만든 50인치 TV
        tv.show();
    }
}

//자바 클래스를 만들어보자. 다음 main() 메소드를 실행하였을 때 예시와 같이 출력되도록 tv클래스를 작성하라. {
    

