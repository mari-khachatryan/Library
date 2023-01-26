#include "liberary.h"
#include "user.h"
#include "book.h"

Student::Student() {}

Student::Student(const std::string& new_name, short new_age)
    :name{new_name}
    ,age{new_age} 
{}

Student::~Student() {}

void Student::setName(const std::string& new_name) {
    name = new_name;
}

std::string Student::getName() {
    return name;
}

void Student::setAge(const std::string& new_name) {
    name = new_name;
}

short Student::getAge() {
    return age;
}

void Student::get_book_for_read(const Book& book) {
    taken_books.push_back(book);
}

 void Student::return_book() {
    taken_books.pop_back();
 }

 std::vector<Book> Student::show_taken_books() {
    return taken_books;
 }