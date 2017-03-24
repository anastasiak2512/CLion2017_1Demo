class Mammal {
public:
    Mammal(int a) {}
    void doSmth(int i) {}
    void doSmth(int i, int b) {}
};

class Human : public Mammal {
public:
    Human(int a) : Mammal(a) {}
    void doSmth(double d) {}
};

void handle() {
    Human* d = new Human(1);
    d->doSmth(3.0);
    //..
}

