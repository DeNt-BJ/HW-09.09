#include "_Framework.h"
#include "_Contact_Class.h"

Contact::Contact() {

    surname = nullptr;
    name = nullptr;
    patronym = nullptr;
    homeNum = nullptr;
    workNum = nullptr;
    mobileNum = nullptr;
    addInfo = nullptr;
    init = false;
}

void Contact::printContact() { 

    std::cout << "Name: " << name << std::endl;
    std::cout << "Surname: " << surname << std::endl;
    std::cout << "Patronym: " << patronym << std::endl;
    std::cout << "Home Phone Number: " << homeNum << std::endl;
    std::cout << "Work Phone Number: " << workNum << std::endl;
    std::cout << "Mobile Phone Number: " << mobileNum << std::endl;
    std::cout << "Additional information: " << addInfo << std::endl;
}

void Contact::initContact(const char* s, const char* n, const char* p, const char* hN, const char* wN, const char* mN, const char* aI) { 

    if (surname != nullptr) {

        delete[] surname;
    }
    
    surname = new char[strlen(s) + 1];
    strcpy(surname, s);

    if (name != nullptr) {

        delete[] name;
    }

    name = new char[strlen(n) + 1];
    strcpy(name, n);

    if (patronym != nullptr) {

        delete[] patronym;
    }

    patronym = new char[strlen(p) + 1];
    strcpy(patronym, p);

    if (homeNum != nullptr) {

        delete[] homeNum;
    }

    homeNum = new char[strlen(hN) + 1];
    strcpy(homeNum, hN);

    if (workNum != nullptr) {

        delete[] workNum;
    }

    workNum = new char[strlen(wN) + 1];
    strcpy(workNum, wN);

    if (mobileNum != nullptr) {

        delete[] mobileNum;
    }

    mobileNum = new char[strlen(mN) + 1];
    strcpy(mobileNum, mN);

    if (addInfo != nullptr) {

        delete[] addInfo;
    }

    addInfo = new char[strlen(aI) + 1];
    strcpy(addInfo, aI);

    init = true;
}

void Contact::setSurname(const char* s) { 

    if (surname != nullptr) {

        delete[] surname;
    }
    
    surname = new char[strlen(s) + 1];
    strcpy(surname, s);

    init = true;
}

void Contact::setName(const char* n) { 

    if (name != nullptr) {

        delete[] name;
    }

    name = new char[strlen(n) + 1];
    strcpy(name, n);

    init = true;
}

void Contact::setPatronym(const char* p) { 

    if (patronym != nullptr) {

        delete[] patronym;
    }

    patronym = new char[strlen(p) + 1];
    strcpy(patronym, p);

    init = true;
}

void Contact::setHomeNum(const char* hN) { 

    if (homeNum != nullptr) {

        delete[] homeNum;
    }

    homeNum = new char[strlen(hN) + 1];
    strcpy(homeNum, hN);

    init = true;
}

void Contact::setWorkNum(const char* wN) { 

    if (workNum != nullptr) {

        delete[] workNum;
    }

    workNum = new char[strlen(wN) + 1];
    strcpy(workNum, wN);
    
    init = true;
}

void Contact::setMobileNum(const char* mN) { 

    if (mobileNum != nullptr) {

        delete[] mobileNum;
    }

    mobileNum = new char[strlen(mN) + 1];
    strcpy(mobileNum, mN);

    init = true;
}

void Contact::setAddInfo(const char* aI) { 

    if (addInfo != nullptr) {

        delete[] addInfo;
    }

    addInfo = new char[strlen(aI) + 1];
    strcpy(addInfo, aI);

    init = true;
}

char* Contact::getSurname() {

    return surname;
}

char* Contact::getName() {

    return name;
}

char* Contact::getPatronym() {

    return patronym;
}

char* Contact::getHomeNum() {

    return homeNum;
}

char* Contact::getWorkNum() {

    return workNum;
}

char* Contact::getMobileNum() {

    return mobileNum;
}

char* Contact::getAddInfo() {

    return addInfo;
}

bool Contact::getInitStatus() {

    return init;
}

Contact::~Contact() { 

    delete[] surname;
    delete[] name;
    delete[] patronym;
    delete[] homeNum;
    delete[] workNum;
    delete[] mobileNum;
    delete[] addInfo;
}
