#include "book.h"

Book::Book() {}

Book::Book(const std::string& new_title, const std::string& new_author, bool new_in_liberary)
    :title{new_title}
    ,author{new_author}
    ,in_liberary{new_in_liberary} 
{}

Book::~Book() {}

void Book::setTitle(const std::string& new_title) {
    title = new_title;
}

std::string Book::getTitle() {
    return title;
}

void Book::setAuthor(std::string& new_author) {
    author = new_author;
}

std::string Book::getAuthor() {
    return author;
}

void Book::is_worn() {
    std::cout <<"Book allredy be mor worn!";
}
