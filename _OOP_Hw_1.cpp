#include "framework.h"

class Fraction {

private:

    int numerator;
    int denomenator;

public:

    void printFraction() {

        std::cout << numerator << "/" << denomenator << std::endl;
    }

    void initFraction(int x, int y) {

        numerator = x;
        denomenator = y;
    }

    Fraction returnFractionSum(Fraction b) {

        Fraction c;
        
        c.numerator = numerator + b.numerator;
        c.denomenator = denomenator;
        
        return c;
    }

    Fraction returnFractionDiff(Fraction b) {

        Fraction c;
        
        c.numerator = numerator - b.numerator;
        c.denomenator = denomenator;
        
        return c;
    }

    Fraction returnFractionProd(Fraction b) {

        Fraction c;
        
        c.numerator = numerator * b.numerator;
        c.denomenator = denomenator * b.denomenator;
        
        return c;
    }

    Fraction returnFractionDivRes(Fraction b) {

        Fraction c;
        
        c.numerator = numerator * b.denomenator;
        c.denomenator = denomenator * b.numerator;
        
        return c;
    }

    void setNumerator(int x) {

        numerator = x;
    }

    void setDenomenator(int x) {

        denomenator = x;
    }

    int getNumerator() {

        return numerator;
    }

    int getDenomenator() {

        return denomenator;
    }
};

int main(int argc, char* argv[]) {

    Fraction fractionA;
    Fraction fractionB;

    fractionA.initFraction(10, 20);
    fractionB.initFraction(20, 30);

    fractionA = fractionA.returnFractionSum(fractionB);
    //fractionA = fractionA.returnFractionDiff(fractionB);
    //fractionA = fractionA.returnFractionProd(fractionB);
    //fractionA = fractionA.returnFractionDivRes(fractionB);

    fractionA.printFraction();

    int x = fractionA.getNumerator();

    std::cout << x << std::endl;

    int y = fractionA.getDenomenator();

    std::cout << y << std::endl;

    fractionB.setNumerator(100);
    fractionB.setDenomenator(200);

    fractionB.printFraction();
}