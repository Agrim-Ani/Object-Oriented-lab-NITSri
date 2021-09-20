#include <iostream> 
using namespace std;
class BookShop {
private:
    struct Book {
        string title;
        string author;
        string publisher;
        int price;
        int stock;
};
    Book *books;
    Book *temp;
    int total;
public:
    BookShop() {
        books = new Book[0];
total = 0; }
    void AddBook() {
        Book *new_book = new Book;
        cout<<"Adding New Book:"<<endl;
        cout<<"Enter Book Title: ";
        getline(cin, new_book -> title);
        cout<<"Enter Book Author: ";
        getline(cin, new_book -> author);
        cout<<"Enter Book Publisher: ";
        getline(cin, new_book -> publisher);
        cout<<"Enter Book Price: ";
        cin>>new_book -> price;
        cout<<"Enter Book Stock: ";
        cin>>new_book -> stock;
        cin.get();
        total++;
        temp = books;
        books = new Book[total];
        for (int i=0; i<total-1; i++)
            books[i] = temp[i];
        books[total-1] = *new_book;
        delete [] temp;
    }
    void PrintBooks() {
        cout<<endl<<"Printing All Books:"<<endl;
        for (int i=0; i<total; i++) {
            cout<<"Title: "<<books[i].title<<endl;
            cout<<"    Author: "<<books[i].author<<endl;
            cout<<"    Publisher: "<<books[i].publisher<<endl;
            cout<<"    Price: "<<books[i].price<<endl;
            cout<<"    Stock: "<<books[i].stock<<endl;
            cout<<endl;
} }
    void BuyBooks() {
        string title, author;
        int index=-1, copies;
        cout<<"Buying Books:"<<endl;
        cout<<"    Enter Book Title: ";
        getline(cin, title);
        cout<<"    Enter Book Author: ";
        getline(cin, author);
        for (int i=0; i<total; i++) {
            if (books[i].title == title && books[i].author == author) {
                index = i;
break; }
        }
        if (index == -1) {
            cout<<"Book Not Available!"<<endl;
return; }
        cout<<"    Enter Copies: ";
        cin>>copies;
        cin.get();
        if (books[index].stock >= copies) {
            books[index].stock -= copies;
            cout<<"Available!"<<endl;
        }
        else {
            cout<<"Required copies not in stock!"<<endl;
} }
};

int main() {
    BookShop o;
    o.AddBook();
    o.AddBook();
    o.AddBook();
    o.PrintBooks();
    o.BuyBooks();
    o.BuyBooks();
    o.PrintBooks();
return 0; 
}