#include "framework.h"

class Fraction {

private:

    int numerator;
    int denomenator;
    bool operated;

    void denomCheck() {

        if (denomenator < 0) {

            numerator *= -1;
            denomenator *= -1;
        }
    }

    void initFractionValues(int x, int y) {

        numerator = x;
        denomenator = y;
        denomCheck();
    }

public:

    void printFraction() {

        std::cout << numerator << "/" << denomenator;
    }

    void initFraction() {

        int x, y;
        std::cout << "Enter numerator: ";
        std::cin >> x;

        std::cout << "Enter denomenator: ";
        std::cin >> y;

        initFractionValues(x, y);
    }

    Fraction returnFractionSum(Fraction b) {

        Fraction c;
        
        c.numerator = numerator + b.numerator;
        c.denomenator = denomenator;

        c.operated = true;
        
        c.denomCheck();
        return c;
    }

    Fraction returnFractionDiff(Fraction b) {

        Fraction c;
        
        c.numerator = numerator - b.numerator;
        c.denomenator = denomenator;
        
        c.operated = true;
        
        c.denomCheck();
        return c;
    }

    Fraction returnFractionProd(Fraction b) {

        Fraction c;
        
        c.numerator = numerator * b.numerator;
        c.denomenator = denomenator * b.denomenator;
        
        c.operated = true;

        c.denomCheck();
        return c;
    }

    Fraction returnFractionDivRes(Fraction b) {

        Fraction c;
        
        c.numerator = numerator * b.denomenator;
        c.denomenator = denomenator * b.numerator;
        
        c.operated = true;

        c.denomCheck();
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

    bool getOperationsStatus() {

        if (operated == true) {

            return true;
        }

        return false;
    }
};

bool isValidSumDiffFract(Fraction a, Fraction b) {

    if (a.getDenomenator() == b.getDenomenator()) {

        return true;
    }

    return false;
}

bool isValidChoice(int choice) {

    if (choice < 10 && choice > 0) {

        return true;
    }

    return false;
}

bool isValidIdx(int fractionArrSize, int idx) {

    --idx;

    if (idx > fractionArrSize || idx < 0) {

        std::cout << "Not valid Index" << std::endl;
        return false;
    }

    return true;
}

int choiceMenu() {

    int choice;

    std::cout << "Options: " << std::endl
        << "1. Initilize fraction " << std::endl
        << "2. Get fraction values (Nume/Denom) " << std::endl
        << "3. Set new fraction values (Nume/Denom) " << std::endl
        << "4. Print all stored fractions " << std::endl
        << "5. Add two fractions " << std::endl
        << "6. Substract two fractions " << std::endl
        << "7. Multiply two fractions " << std::endl
        << "8. Divide two fractions " << std::endl
        << "9. Exit " << std::endl;

    std::cout << "> ";
    std::cin >> choice;

    if (!isValidChoice(choice)) {

        std::cout << "Wrong choice " << std::endl;
        choiceMenu();
    }

    return choice;
}

void fractionInit(Fraction* fractionsArr, int* fractionsArrSize) {

    ++*fractionsArrSize;

    fractionsArr[*fractionsArrSize - 1].initFraction();
}

void printFractions(Fraction* fractionsArr, int fractionsArrSize) {

    for (int i = 0; i < fractionsArrSize; ++i) {

        std::cout << "================" << std::endl;
        std::cout << "Fraction " << i + 1 << ": ";
        fractionsArr[i].printFraction();

        if (fractionsArr[i].getOperationsStatus()) {

            std::cout << "(Operated) ";
        }
        std::cout << std::endl;
        std::cout << "================" << std::endl;
    }
}

void addFractions(Fraction* fractionsArr, int fractionArrSize) {

    int idx1, idx2;

    do {
        std::cout << "Enter the Index of the Operated fraction: ";
        std::cin >> idx1;
    } while(!isValidIdx(fractionArrSize, idx1));

    do {
        std::cout << "Enter the Index of the Operating fraction: ";
        std::cin >> idx2;
    } while(!isValidIdx(fractionArrSize, idx2));

    fractionsArr[idx1 - 1] = fractionsArr[idx1 - 1].returnFractionSum(fractionsArr[idx2 - 1]);
}

void subtractFractions(Fraction* fractionsArr, int fractionArrSize) {

    int idx1, idx2;

    do {
        std::cout << "Enter the Index of the Operated fraction: ";
        std::cin >> idx1;
    } while(!isValidIdx(fractionArrSize, idx1));

    do {
        std::cout << "Enter the Index of the Operating fraction: ";
        std::cin >> idx2;
    } while(!isValidIdx(fractionArrSize, idx2));

    fractionsArr[idx1 - 1] = fractionsArr[idx1 - 1].returnFractionDiff(fractionsArr[idx2 - 1]);
}

void multiplyFractions(Fraction* fractionsArr, int fractionArrSize) {

    int idx1, idx2;

    do {
        std::cout << "Enter the Index of the Operated fraction: ";
        std::cin >> idx1;
    } while(!isValidIdx(fractionArrSize, idx1));

    do {
        std::cout << "Enter the Index of the Operating fraction: ";
        std::cin >> idx2;
    } while(!isValidIdx(fractionArrSize, idx2));

    fractionsArr[idx1 - 1] = fractionsArr[idx1 - 1].returnFractionProd(fractionsArr[idx2 - 1]);
}

void divideFractions(Fraction* fractionsArr, int fractionArrSize) {

    int idx1, idx2;

    do {
        std::cout << "Enter the Index of the Operated fraction: ";
        std::cin >> idx1;
    } while(!isValidIdx(fractionArrSize, idx1));

    do {
        std::cout << "Enter the Index of the Operating fraction: ";
        std::cin >> idx2;
    } while(!isValidIdx(fractionArrSize, idx2));

    fractionsArr[idx1 - 1] = fractionsArr[idx1 - 1].returnFractionDivRes(fractionsArr[idx2 - 1]);
}

void getFractionValues(Fraction* fractionsArr, int fractionArrSize) {

    int idx;
    do{
        std::cout << "Enter Index of the Fraction: ";
        std::cin >> idx;
    } while (!isValidIdx(fractionArrSize, idx));

    int x = fractionsArr[idx - 1].getNumerator(), y = fractionsArr[idx - 1].getDenomenator();

    std::cout << "Numerator of the fraction " << idx << ": " << x << std::endl;
    std::cout << "Denomenator of the fraction " << idx << ": " << y << std::endl;
}

void setFractionValues(Fraction* fractionsArr, int fractionArrSize) {

    int idx;
    do{
        std::cout << "Enter Index of the Fraction: ";
        std::cin >> idx;
    } while (!isValidIdx(fractionArrSize, idx));

    int x, y;

    std::cout << "Set value of numerator for fraction " << idx << ": ";
    std::cin >> x;
    std::cout << "Set value of denomenator for fraction " << idx << ": ";
    std::cin >> y;

    fractionsArr[idx - 1].setNumerator(x);
    fractionsArr[idx - 1].setDenomenator(y);
}

int main(int argc, char* argv[]) {

    int fractionArrSize = 0;
    Fraction* fractionsArr = new Fraction[fractionArrSize];

    while(true) {

        switch (choiceMenu())
        {
        case 1:
            fractionInit(fractionsArr, &fractionArrSize);
            break;
        case 2:
            getFractionValues(fractionsArr, fractionArrSize);
            break;
        case 3:
            setFractionValues(fractionsArr, fractionArrSize);
            break;
        case 4:
            printFractions(fractionsArr, fractionArrSize);
            break;
        case 5:
            addFractions(fractionsArr, fractionArrSize);
            std::cout << "Done" << std::endl;
            break;
        case 6:
            subtractFractions(fractionsArr, fractionArrSize);
            std::cout << "Done" << std::endl;
            break;
        case 7:
            multiplyFractions(fractionsArr, fractionArrSize);
            std::cout << "Done" << std::endl;
            break;
        case 8:
            divideFractions(fractionsArr, fractionArrSize);
            std::cout << "Done" << std::endl;
            break;
        case 9:
            exit(EXIT_SUCCESS);
            break;
        default:
            break;
        }
    }
}