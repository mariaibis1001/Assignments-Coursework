File: cperson.cpp
Programmer: Maria Fernandez
Date: 01/28/2022

// Description
//     This is the source code file for the CPerson class.
  
#include <iostream>
#include <cstring>
#include <ios>
#include <limits>
#include "cperson.h"
  
using namespace std;

// Default constructor
CPerson::CPerson() 
{
    m_name = new char [13];
    strcpy(m_name, "Default Name");
    m_age = 0;
}
// Type constructor
CPerson::CPerson(const char* name, int age)
{
    m_name = new char [strlen(name) + 1];
    strcpy(m_name, name);
    m_age = age;
}
// Copy constructor
CPerson::CPerson(const CPerson &obj)
{
    m_name = new char [strlen(obj.GetName()) + 1];
    strcpy(m_name, obj.GetName());
    m_age = obj.GetAge();
}
// Destructor
CPerson::~CPerson()
{
    delete [] m_name;
}

// Accessor functions
int CPerson::GetAge() const
{
    return m_age;
}
const char* CPerson::GetName() const
{
    return m_name;
}
// Setter functions
void CPerson::SetAge(int age)
{
    m_age = age;
}
void CPerson::SetName(const char* name)
{
    delete [] m_name;
  
    m_name = new char [strlen(name) + 1];
    strcpy(m_name, name);
}

// member functions
void CPerson::DisplayData(ostream &outStream)
{
    outStream << "Name: " << m_name << endl;
    outStream << "Age: " << m_age << endl;
}
void CPerson::GetData(istream &inSteam)
{
    inStream.getline(m_name, 50);
    inStream >> m_age;
    inStream >> ignore();
}
bool CPerson::operator==(const CPerson &rhs)
{
    if (strcmp(m_name, rhs.m_name) == 0 && m_age == rhs.m_age)
    { 
        return true;
    }
    else 
    {
        return false;
    }
}
bool CPerson::operator>(const CPerson &rhs)
{
    if (m_age > rhs.m_age)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

// function prototypes
istream& operator>>(istream &inStream, CPerson &obj)
{
    obj.GetData(inStream);
  
    return inStream;
}
ostream& operator<<(ostream &outStream, const CPerson& obj)
{
    outStream << "Name: ";
    if (obj.GetName() != nullptr)
    {
        outStream << obj.GetName() << endl;
    }
    else 
    {
        outStream << endl;
    }
    outStream << "Age: " << obj.GetAge() << endl;
  
    return outStream;
}

