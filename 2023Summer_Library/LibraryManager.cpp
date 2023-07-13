#include "LibraryManager.h"

int NthBook = 0;

int SelectService()
{
    int ServiceNum = 0;
    std::cout << "번호를 입력해 주세요 : ";
    std::cin >> ServiceNum;
    /*switch (ServiceNum)
    {
    case 1:
       book[NthBook++].BookRegister::RegisterABook(char* Name, char* Author, char* publisher, int PagerNumber, char* BookNumber);

    }*/
    return 0;
}


void LibraryManager::SearchTheBook(int num)
{
    std::string SearchBookName;
    std::cout << "찾고싶은 책 제목을 입력해주세요\n";
    std::cin >> SearchBookName;
    for (int i = 0; i < 3; i++)
    {
        if (SearchBookName == BookTest[i])
        {
            std::cout << SearchBookName;
            std::cout << "\n";
        }
    }
}