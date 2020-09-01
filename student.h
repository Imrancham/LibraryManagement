#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <QString>


class Student
{
    int m_id;
    QString m_name;
    QString m_department;
    QString m_dateOfBirth;
    QChar m_sex;
    int m_NOCBBs; // Number Of Current Borrowed Books
    int m_charge;
    int  m_AllowedBorrowBooks = 3;
public:
    Student(){}
        Student(int id, QString name, QString department,QString dateOfBirth, QChar sex, int NOCBBs, int charge): m_id(id), m_name(name), m_department(department), m_dateOfBirth(dateOfBirth),m_sex(sex) , m_NOCBBs(NOCBBs), m_charge(charge){};

        int Getid() const {return m_id;}
        QString GetName() const {return m_name;}
        QString GetDepartment() const {return m_department;}
        QString GetDateOfBirth() const {return m_dateOfBirth;}
        QChar GetSex() const {return m_sex;}
        int IsCharged() const {return m_charge;}
        int GetNOCBBs() const {return m_NOCBBs;}


        void SetName(QString name) {m_name = name;}
        void SetDepartment(QString dep) {m_department = dep;}
        void SetDateOfBirth(QString birthDay) {m_dateOfBirth = birthDay;}
        void SetSex(QChar sex) {m_sex = sex;}
        void SetNOCBBs(int nr) {m_NOCBBs = nr;}
        void SetCharge(int charge) {m_charge = charge;}
        void UdateStudent(int id, QString name, QString dep, int charge, int nocbbs ){ m_id = id; m_name = name; m_department = dep; m_charge = charge; m_NOCBBs = nocbbs;};
        bool IsAvalbl() const {return (!m_charge ) && (m_NOCBBs < m_AllowedBorrowBooks);} // done
};

#endif // STUDENT_H
