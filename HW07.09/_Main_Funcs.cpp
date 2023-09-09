#include "_Framework.h"
#include "_Main_Funcs.h"
#include "_Contact_Class.h"

void printAllContacts(Contact* contactsArr, int contactsArrSize) {

    for (int i = 0; i < contactsArrSize; ++i) {

        bool x = contactsArr[i].getInitStatus();
        std::cout << "=====================" << std::endl;
        std::cout << "Contact " << i + 1 << ( x ? " " : "(Empty) ") << "Info: " << std::endl;
        contactsArr[i].printContact();
        std::cout << "=====================" << std::endl;
    }
}

void addInitContact(Contact* contactsArr, int* contactsArrSize) { 

    ++*contactsArrSize;

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

    contactsArr[*contactsArrSize - 1].initContact(bufferS, bufferN, bufferP, bufferHN, bufferWN, bufferMN, bufferAI);
}

void addEmptyContact(Contact* contactsArr, int* contactsArrSize) { 

    ++*contactsArrSize;
    contactsArr[*contactsArrSize - 1];
}

void deleteContact(Contact* contactsArr, int* contactsArrSize) { 

    --*contactsArrSize;
}

void writeFile(Contact* contactsArr, int* contactsArrSize) { }

void printSetterMenu(int idx, Contact* contactsArr, int* contactsArrSize) { 

    std::cout << "Set for Contact "  << idx << ": " << std::endl
        << "1. Name: " << std::endl
        << "2. Surname: " << std::endl
        << "3. Patronym: " << std::endl
        << "4. Home Phone Number: " << std::endl
        << "5. Work Phone Number: " << std::endl
        << "6. Mobile Phone Number: " << std::endl
        << "7. Additional Info: " << std::endl;

    int choice;
    std::cout << "> ";
    std::cin >> choice;
    char buffer[50];

    switch(choice) {

    case 1:

        std::cout << "Enter new name: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setName(buffer);
        break;

    case 2: 

        std::cout << "Enter new Surname: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setSurname(buffer);
        break;

    case 3:

        std::cout << "Enter new Patronym: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setPatronym(buffer);
        break;

    case 4:

        std::cout << "Enter new HomeNum: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setHomeNum(buffer);
        break;

    case 5:

        std::cout << "Enter new WorkNum: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setWorkNum(buffer);
        break;

    case 6:

        std::cout << "Enter new MobileNum: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setMobileNum(buffer);
        break;

    case 7:

        std::cout << "Enter new AddInfo: ";
        std::cin.getline(buffer, 50);
        contactsArr[idx - 1].setAddInfo(buffer);
        break;

    default:
        break;
    }
}
