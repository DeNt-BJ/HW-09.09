#include "_Framework.h"

void printAllContacts(Contact* contactsArr, int* contactsArrSize) {

    for (int i = 0; i < *contactsArrSize; ++i) {

        bool x = contactsArr[i].getInitStatus();
        std::cout << "=====================" << std::endl;
        std::cout << "Contact " << i + 1 << ( x ? " " : "(Empty) ") << "Info: " << std::endl;
        contactsArr[i].printContact();
        std::cout << "=====================" << std::endl;
    }
}

void addInitContact(Contact* contactsArr, int* contactsArrSize) { 

    char bufferS[50], bufferN[50], bufferP[50], bufferHN[50], bufferWN[50], bufferMN[50], bufferAI[50];

    std::cout << "Enter name: ";
    std::cin.ignore();
    std::cin.getline(bufferN, 50);

    std::cout << "Enter Surname: ";
    std::cin.ignore();
    std::cin.getline(bufferS, 50);

    std::cout << "Enter Patronym: ";
    std::cin.ignore();
    std::cin.getline(bufferP, 50);

    std::cout << "Enter Home Phone Number(ex. format - 0663385079): ";
    std::cin.ignore();
    std::cin.getline(bufferHN, 50);

    std::cout << "Enter Work Phone Number: ";
    std::cin.ignore();
    std::cin.getline(bufferWN, 50);

    std::cout << "Enter Mobile Phone Number: ";
    std::cin.ignore();
    std::cin.getline(bufferMN, 50);

    std::cout << "Enter Additional Info: ";
    std::cin.ignore();
    std::cin.getline(bufferAI, 50);

    contactsArr[*contactsArrSize - 1].Contact(bufferS, bufferN, bufferP, bufferHN, bufferWN, bufferMN, bufferAI);
}

void addEmptyContact(Contact* contactsArr, int* contactsArrSize) { }

void deleteContact(Contact* contactsArr, int* contactsArrSize) { }

void writeFile(Contact* contactsArr, int* contactsArrSize) { }

void printGetterMenu() { }

void printSetterMenu() { }
