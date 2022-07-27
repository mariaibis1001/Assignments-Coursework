//File: cperson.h
//Programmer: Maria Fernandez
//Date: 01/28/2022
//Class: Data Structures Using C++
  
//Description:
//         This is the header file for the CPerson class

#ifndef CPERSON_HEADER
#define CPERSON_HEADER

class CPerson
{ 
    public:
        // constructors
        CPerson(); //default
        CPerson(const char* name, int age); //type
        CPerson(const CPerson &obj); // copy
        ~CPerson(); // destructor
        
        // accessor functions
        int GetAge() const;
        const char* GetName() const;
        void SetAge(int age);
        void SetName(const char* name);
        
        // member functions
        void DisplayData(ostream &outStream = cout); // default to cout
        void GetData(istream &inStream = cin) // default to cin
        bool operator==(const CPerson &rhs) const;
        bool operator>(const CPerson &rhs) const;
        
    private:
        char* m_name; // a char pointer to store a name
        int m_age; // an int to store the age
};

// function prototypes
istream& operator>>(istream &inStream, CPerson &obj);
ostream& operator<<(ostream &outStream, const CPerson &obj);

#endif // CPERSON_HEADER
