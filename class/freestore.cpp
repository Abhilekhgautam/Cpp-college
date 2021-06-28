/*Demonstration of new and delete operator*/
#include<iostream>
using namespace std;

class Book{

string author_name,title;
int no_of_pages;
public:
void add_books(string&,string&,int );
void display_book_info() const;
};

void Book::add_books(string& name,string& book_title,int pages){

 author_name = name;
 title = book_title;
 no_of_pages = pages;
}

void Book::display_book_info() const{
    cout<<"Author's Name: "<<author_name<<'\n'<<"Title: "<<title<<'\n'<<"No of pages: "<<no_of_pages<<'\n';
}

int main(){
  /* Bad practise smart developers use smart pointer*/
    // Book* b1 = new Book;// object creation using new

    unique_ptr<Book> b2 (new Book());//no corresponding delete is required
    string name = "Bjarne Stroustrup";
    string title ="The c++ programming";
    int pages = 1017;
    b2->add_books(name,title,pages);
    b2->display_book_info();

    // delete b1;//destroys the obj b1
}//b2 automatically destroys here.
