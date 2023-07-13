#pragma once
#include<vector>
#include"BookRegister.h"

class LibraryManager
{
private:
    char* Name;
    int BookNumber;
public:
    //책 검색 테스트를 위한 배열
    std:: vector<std::string> BookTest;
    std::vector<std::string> BookAuthor;
    std::vector<std::string> BookPublisher;

    void SearchTheBook(int num); // 책 검색 함수

    //책 대여 코드
    std::vector<int> RentOk;


};
