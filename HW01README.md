# Assignments-Coursework
# HW01-CPerson

This homework focuses on pointers, dynamic memory management, overloading operators and streams.
DETAILS:
This program has three constructors (default, type, and copy) as well as a destructor:

Default: The default constructor will initialize private data members. 

Type: Will create an object and assign the private data members to the choosing of the caller.

Copy: Will copy another object.

Destructor: Release memory from the heap.
 
Functions:

GetAge / GetName: Will return the age and the name of the object’s data members, respectively.

SetAge / SetName: Will assign the age and the name to the object’s data members, respectively.

DisplayData: Will display the object’s data members (Name and Age).  By default, it will display to the monitor.

GetData: Will read the user’s input and assign them to the object’s data members.  By default, it will read from the keyboard.

operator==: Overload the equality operator

operator>: Overload the greater than operator

operator>>: Overload the extraction operator

operator<<: Overload the insertion operator
