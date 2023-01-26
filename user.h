#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "book.h"


class Student {
    public:
        Student();
        Student(const std::string& new_name, short new_age);
        ~Student();
        void setName(const std::string& new_name);
        std::string getName();

        void setAge(const std::string& new_name);
        short getAge();

        void get_book_for_read(const Book& book); 
        void return_book();
        std::vector<Book> show_taken_books();

    private:
        std::string name;
        short age;
        std::vector<Book> taken_books;  
};

#endif //USER_H