#include <bits/stdc++.h>



int main()
{
    class Student
    {
        Student(int passed_Index, bool passed_has_duplicate, std::string passed_firstName, std::string passed_lastName);



        int index;
        bool has_duplicate;
        std::string firstName;
        std::string lastName;
    };
    std::string filename;
    std::ifstream inFile;
    std::vector<Student> List_of_Students;
    
    std::cout << "Please type a file name and then press enter." << std::endl;

    
    inFile.open(filename);
    if(inFile.is_open())
    {
        while(!inFile.eof())
        {
            
        }
    }
    else
    {
        std::cout << "Error: The file is not found."<<std::endl;
    }
    
}