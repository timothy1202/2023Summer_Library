#pragma once
#include<vector>
#include"BookRegister.h"

class LibraryManager
{
private:
    char* Name;
    int BookNumber;
public:
    //å �˻� �׽�Ʈ�� ���� �迭
    std:: vector<std::string> BookTest;
    std::vector<std::string> BookAuthor;
    std::vector<std::string> BookPublisher;

    void SearchTheBook(int num); // å �˻� �Լ�

    //å �뿩 �ڵ�
    std::vector<int> RentOk;


};
