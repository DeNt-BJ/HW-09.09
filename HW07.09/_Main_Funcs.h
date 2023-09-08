#pragma once
#include "_Framework.h"

void printAllContacts(Contact* contactsArr, int* contactsArrSize);
void addInitContact(Contact* contactsArr, int* contactsArrSize);
void addEmptyContact(Contact* contactsArr, int* contactsArrSize);
void deleteContact(Contact* contactsArr, int* contactsArrSize);
void writeFile(Contact* contactsArr, int* contactsArrSize);
void printGetterMenu();
void printSetterMenu();

