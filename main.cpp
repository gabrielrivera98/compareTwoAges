#include <iostream>

std::string getName(int num)
{
    std::cout << " Enter the name of person #" << num << " :";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    return name;
}

int getAge(std::string name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void finalPrint(std::string name1, std::string name2, int age1, int age2)
{
    if (age1 > age2)
    {
        std::cout << name1 << "(age " << age1 << ") " << "is older than " << name2 << " (age " << age2 << ").";
    }
    else
        std::cout << name2 << "(age " << age2 << ") " << "is older than " << name1 << " (age " << age1 << ").";
}
int main ()
{
   const std::string name1 {getName(1)};
   const int age1 {getAge(name1)};

   const std::string name2 {getName(2)};
   const int age2 {getAge(name2)};

    finalPrint(name1, name2, age1, age2);

}