#include <iostream>
#include "user.h"
#include "book.h"
#include "liberary.h"

int main() {
    Liberary liberary("Centeral Liberary");
    Book book1("Qaryakner","Hovhannes Tumanyan", true);
    Book book2("Samvel","Raffi", true);
    Book book3("Khachagoxi hishatakaran","Raffi", true);
    Book book4("Gevorg Marzpetuni", "Muracan", true);
    Book book5("Paterazm ev khaghaghutyun","Talstoy", true);
    liberary.add_book(book1);
    liberary.add_book(book2);
    liberary.add_book(book3);
    liberary.add_book(book4); 
    liberary.add_book(book5);
    
    std::cout << "In library out student: Mariam." <<std::endl;
    Student student("Mariam", 30);
    std::vector<Book> existing_books = liberary.getBooksInLiberary();
    std::cout << "In library new existing these books:" <<std::endl;
    for(size_t i = 0; i < existing_books.size(); ++i) {
        std::cout << existing_books[i].getTitle() << " : ";
        std::cout << existing_books[i].getAuthor() << std::endl;
    }
    std::cout << "Student want take a 'Gevorg Marzpetuni'" << std::endl;
    for(size_t i = 0; i < existing_books.size(); ++i) {
        if(existing_books[i].getTitle() == "Gevorg Marzpetuni") {
            student.get_book_for_read(existing_books[i]);
        }
    }
    std::cout << "Maraim has following books: " << std::endl;
    std::vector<Book> student_bookds = student.show_taken_books();
    for(size_t i = 0; i < student_bookds.size(); ++i) {
        std::cout << student_bookds[i] << std::endl;
    }

    return 0;
}