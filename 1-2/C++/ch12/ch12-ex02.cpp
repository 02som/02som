//게임에서 무기를 나타내는 웨폰이라는 부모클래스를 작성한다. 웨폰클래스는 무기를 적재하는 로드()라고 하는 순수가상함수를 가진다. 밤과 건 클래스는 웨폰을 상속하여 작성된다. 밤과 건 클래슨느 적재한ㄴ 방법이 다르기 때문에 로드()함수를 다르게 구현한다. 모든 무기는 포인터 배열을 통하여 관리된다.포인터배열안에잇는무기들을적재하는ㅍ로그램을잓ㅇ하자
#include <iostream>
#include <cstdlib>

using namespace std;

class Weapon {
public:
    virtual void load() = 0;
    virtual ~Weapon() {};
};

class Bomb :public Weapon {
public:
    Bomb(){}

    virtual void load() {
        cout << "폭탄을 적재합니다." << endl;
    }
};
class Gun :public Weapon {
public:
    Gun(){}
    virtual void load() {
        cout << "총을 적재합니다." << endl;
    }
};
int main()
{
    Weapon* wps[3];
    wps[0] = new Gun();
    wps[1] = new Bomb();
    wps[2] = new Bomb();

    wps[0]->load();
    wps[1]->load();
    wps[2]->load();
    return 0;
    
    for (int i = 0; i < 3; i++) {
        delete wps[i];
    }
}
