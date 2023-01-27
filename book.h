#ifndef BOOK_H
#define BOOK_H

#include <iostream>

class Book {
    public:
        Book();
        Book(const std::string& new_title, const std::string& new_aouter, bool new_in_liberary);
        ~Book();

        void setTitle(const std::string& new_title);
        std::string getTitle();

        void setAuthor(std::string& new_author);
        std::string getAuthor(); 

        void is_worn();

    private:
        std::string title;
        std::string author;
        bool in_liberary; 
};

#endif //BOOK_H
