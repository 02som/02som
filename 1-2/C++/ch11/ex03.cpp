
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int salary;


public:
    
    Employee() {
        name = "unknown";
        salary = 0;
    }
    Employee(string n, int money) {
        name = n;
        salary = money;
    }

    string get_name() const { return name; }
    int get_salary() const { return salary; }
    void set_name(const string& x) { name = x; }
    void set_salary(int x) { salary = x; }

    virtual int computeSalary() const {
        return salary;
    }
};
class Manager :public Employee {
private:
    int bonus;

public:
    Manager(string n, int s, int b) : Employee(n, s), bonus(b) {}
    Manager() : Employee(), bonus(0) {}
    ~Manager() {}

    int get_bonus() const { return bonus; }
    void set_bonus(int x) { bonus = x; }

    int computeSalary() const override {
        return get_salary()+bonus;
    }
};

int main() {
    Manager kim("김철수", 200, 100);
    cout << "이름: " << kim.get_name() << endl;
    cout << "월급: " << kim.get_salary() << endl;
    cout << "보너스: " << kim.get_bonus() << endl;
    cout << "전체 급여: " << kim.computeSalary() << endl;

    return 0;
}
