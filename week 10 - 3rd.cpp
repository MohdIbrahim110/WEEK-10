#include<iostream>
#include<cstring>
using namespace std;

struct Book{
    int book_id;
    string title;
    string author_name;
    double price;
};

int main(){
    struct Book book;
    book.book_id=1235;
    book.title="Lab work";
    book.author_name="Zeeshan Rashid";
    book.price=2500;

    cout<<"Book id: "<<book.book_id<<endl;
    cout<<"Book title: "<<book.title<<endl;
    cout<<"Book author name: "<<book.author_name<<endl;
    cout<<"Book price: Rs"<<book.price<<endl;
}