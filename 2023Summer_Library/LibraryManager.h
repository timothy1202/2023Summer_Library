#pragma once
#include"BookRegister.h"

class LibraryManager
{
private:
    char* Name;
    int BookNumber;
public:
    //å �˻� �׽�Ʈ�� ���� �迭
    std::string BookTest[3];
    int NumberOfBooks= sizeof(BookTest) / sizeof(std::string);
    void SearchTheBook(int num) ;


};
