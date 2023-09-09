#include "_Framework.h"
#include "_Main_Funcs.cpp"
#include "_Contact_Class.cpp"
#include "_Main_Funcs.h"
#include "_Contact_Class.h"

int main(int argc, char * argv[]) {

    int* contactsArrSize = new int(0);
    Contact* contactsArr = new Contact[*contactsArrSize];

    int choice;

    std::cout << "Choose option: " << std::endl
        << "1. Print all" << std::endl
        << "2. Add Contact(Init)" << std::endl
        << "3. Add Contact(Empty) " << std::endl
        << "4. Delete Contact" << std::endl
        << "5. Set Values" << std::endl;
    std::cout << "> ";
    std::cin >> choice;
    
    switch (choice)
    {
    case 1:

        printAllContacts(contactsArr, *contactsArrSize);
        break;
    
    case 2:

        addInitContact(contactsArr, contactsArrSize);
        break;

    case 3: 

        addEmptyContact(contactsArr, contactsArrSize);
        break;

    case 4:

        deleteContact(contactsArr, contactsArrSize);
        break;

    case 5:

        int idx;

        std::cout << "Enter idx";
        std::cin >> idx;
        printSetterMenu(idx, contactsArr, contactsArrSize);
        break;
    default:
        break;
    }

    delete contactsArrSize;
    delete[] contactsArr;
}
