#ifndef BOOK_H
#define BOOK_H
#include <QString>


class Book
{ int m_id;
    QString m_name;
    QString m_author;
    int m_year;
    QString m_location;
    QString m_isbn;
    int m_NrOfCpoys;
    int m_CurrAvaCopys;

public:

    Book() {}
//    Book book(m_id, m_name, m_author, m_year, m_isbn, m_location, m_NrOfCpoys, m_CurrAvaCopys)

    Book(int id, QString name, QString author, int year,  QString isbn, QString location, int copys, int avaCopys ):
    m_id(id) ,m_name(name),m_author(author), m_year(year), m_location(location), m_isbn(isbn),  m_NrOfCpoys(copys),m_CurrAvaCopys(avaCopys)   {}

    int GetId() const {return m_id;}
    int GetNrCopys() const {return m_NrOfCpoys;}
    int GetAvaCopys() const {return m_CurrAvaCopys;}
    int GetYear() const {return m_year;}
    QString GetName() const {return m_name ;}
    QString GetAuthor() const {return m_author ;}
    QString GetISBN() const {return m_isbn;}
    QString GetLocation() const {return m_location;}

    void SetName(QString name) {m_name = name;}
    void SetAutor(QString author) {m_author = author;}
    void SetISBN(QString isbn) {m_isbn = isbn;}
    void SetLocation(QString location) {m_location = location;}
    void SetYear(int year) {m_year  = year;}
    void SetNrCopys(int nrcpoy) {m_NrOfCpoys = nrcpoy;}
    void SetAvaCpoys(int avaCopys) {m_CurrAvaCopys = avaCopys;}

    void SetAvaCopy(int nr) {m_CurrAvaCopys = nr;}


    void UbdateBook(int id, QString name, QString author, int year,  QString isbn, QString location, int copys, int avaCopys){
        m_id = id;
        m_name =name;
        m_author =author;
        m_year = year;
        m_isbn = isbn;
        m_location = location;
        m_NrOfCpoys = copys;
        m_CurrAvaCopys = avaCopys;

    }
};

#endif // BOOK_H
