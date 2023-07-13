#pragma once
#include"BookRegister.h"

class LibraryManager
{
private:
    char* Name;
    int BookNumber;
public:
    //책 검색 테스트를 위한 배열
    std::string BookTest[3];
    int NumberOfBooks= sizeof(BookTest) / sizeof(std::string);
    void SearchTheBook(int num) ;


};
