#pragma once
#include "_Framework.h"
#include "_Contact_Class.h"

void printAllContacts(Contact* contactsArr, int contactsArrSize);
void addInitContact(Contact* contactsArr, int* contactsArrSize);
void addEmptyContact(Contact* contactsArr, int* contactsArrSize);
void deleteContact(Contact* contactsArr, int* contactsArrSize);
void writeFile(Contact* contactsArr, int* contactsArrSize);
void printSetterMenu(int idx, Contact* contactsArr, int* contactsArrSize);

