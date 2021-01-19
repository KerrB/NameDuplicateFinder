#include <bits/stdc++.h>


class Student
{

    public:
        Student(int passed_Index, bool passed_has_duplicate, std::string passed_firstName, std::string passed_lastName, std::string passed_teacher)
        {
            index = passed_Index;
            has_duplicate = passed_has_duplicate;
            firstName = passed_firstName;
            lastName = passed_lastName;
            teacher = passed_teacher;
        }

        int getIndex(){return index;}
        std::string getFName(){return firstName;}
        std::string getLName(){return lastName;}
        std::string getTeacher(){return teacher;}
        bool getDuplicateStatus(){return has_duplicate;}

        void set_duplicate(bool passedBool)
        {
            has_duplicate = passedBool;
        }


    private:
        int index;
        bool has_duplicate;
        std::string firstName;
        std::string lastName;
        std::string teacher;

    friend bool operator==(const Student& first, const Student& second)
    {
        bool same_student = false;

        if((first.firstName == second.firstName) && (first.lastName == second.lastName))
        {
            same_student = true;
            return same_student;
        }

        return same_student;
    }
};


int main()
{

    std::string filename;
    std::ifstream inFile;
    std::vector<Student> List_of_Students;


    
    std::cout << "Please type a file name and then press enter." << std::endl;

    std::cin >> filename;

    std::cout << filename;
    
    inFile.open(filename);
    if(inFile.is_open())
    {
        int iterator = 0;
        std::string firstName;
        std::string lastName;
        std::string teacher;
        std::string catcher;
        
        while(!inFile.eof())
        {
            getline ( inFile, lastName, ',');
            getline ( inFile, firstName, ',');
            getline ( inFile, teacher, ',');
            getline ( inFile, catcher, ',');

            Student newStudent(iterator, false, firstName, lastName, teacher);

            List_of_Students.push_back(newStudent);

            iterator++;
        }
    }
    else
    {
        std::cout << "Error: The file is not found."<<std::endl;
    }

    int iterator = 0;
    while(iterator < List_of_Students.size())
    {
        if(List_of_Students[iterator] == List_of_Students[iterator+1])
        {
            List_of_Students[iterator].set_duplicate(true);
            List_of_Students[iterator + 1].set_duplicate(true);
        }
    }


    std::ofstream outFile;
    outFile.open("Result.txt");
    
    for(int i = 0; i < List_of_Students.size(); i++)
    {
        outFile << List_of_Students[i].getFName() << "," << List_of_Students[i].getLName() << "," << List_of_Students[i].getTeacher() << "," << List_of_Students[i].getDuplicateStatus();
    }


    
}