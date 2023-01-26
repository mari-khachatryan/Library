#ifndef LIBERARY_H
#define LIBERARY_H

#include <iostream>
#include <vector>
#include "book.h"

class  Liberary{
    public:
        Liberary(){};
        Liberary(const std::string& new_name);
        ~Liberary() {};

        void setName(const std::string& new_title);
        std::string getName();
        //std::vector<Book> get_books() const;
        void add_book(const Book& book);
        void take_book(const Book& book, const std::string& name);
        std::vector<Book> getBooksInLiberary() const;

    private:
        std::string name;
        std::vector<Book> books_in_liberary;  
};

#endif //LIBERARY_H