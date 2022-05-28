// *** Coded By SahilJoseph *** //
# include <iostream>

class Number {
    private:
        int a;
        int b;
        friend Number sumOfTwoObjects(Number a, Number b);
    public:
        void getAandB(int n, int m) {
            a = n;
            b = m;
        }
        void printValue(void) {
            std::cout<<"The value of a and b is : "<<a<<" "<<b<<std::endl;
        }
};

Number sumOfTwoObjects(Number a, Number b) {
    Number c; 
    c.getAandB((a.a + a.b), (b.a + b.b));
    return c;
}

int main(int argc, char const *argv[]) {

    Number s,j,k;
    s.getAandB(5,3);
    j.getAandB(1,2);
    k = sumOfTwoObjects(s,j);
    k.printValue();

    return 0;
}
