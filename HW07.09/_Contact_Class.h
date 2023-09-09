#pragma once

class Contact {

private:

    char* surname;
    char* name;
    char* patronym;
    char* homeNum;
    char* workNum;
    char* mobileNum;
    char* addInfo;
    bool init;

public:

    Contact();
    
    void printContact();
    void initContact(const char* s, const char* n, const char* p, const char* hN, const char* wN, const char* mN, const char* aI);

    void setSurname(const char* s);
    void setName(const char* n);
    void setPatronym(const char* p);
    void setHomeNum(const char* hN);
    void setWorkNum(const char* wN);
    void setMobileNum(const char* mN);
    void setAddInfo(const char* aI);

    char* getSurname();
    char* getName();
    char* getPatronym();
    char* getHomeNum();
    char* getWorkNum();
    char* getMobileNum();
    char* getAddInfo();
    bool getInitStatus();

    ~Contact();
};