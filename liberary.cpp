#include "liberary.h"
#include "book.h"

Liberary::Liberary(const std::string& new_name)
:name{new_name} {}

void Liberary::setName(const std::string& new_name) {
    name = new_name;
}

std::string Liberary::getName() {
    return name;
}

//  void setBooksInLiberary(const Book& book) {
//     books_in_liberary.push_back(book);
//  }
void Liberary::add_book(const Book& book) {
    books_in_liberary.push_back(book);
}

void Liberary::take_book(const Book& book, const std::string& name) {
    long long size =  books_in_liberary.size(); 
    if(size == 0) {
        std::cout << "There is no book in liberary!";
    }    
    int num_of_book{};
    for(int i = 0; i < size; i++) {
        if(books_in_liberary[i].getTitle() != name) {
            num_of_book = i;
            break;
        } else {
            std::cout << "The book is not in the liberary!";
        }
    }
    books_in_liberary.erase(books_in_liberary.begin() + (num_of_book - 1));
    //return books_in_liberary;
}

std::vector<Book> Liberary::getBooksInLiberary() const{
    return books_in_liberary;
}
