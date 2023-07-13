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

int main()
{
    BookRegister book;
    LibraryManager Test;
    Test.BookTest[0] = {"ABC"};
    int Inst = Test.NumberOfBooks;
    Test.SearchTheBook(Inst);

    std::cout << "호서대학교 도서관에 들어오신 것을 환영합니다\n";
    std::cout << "무엇을 도와드릴까요??\n";
    std::cout << "1. 책 등록하기\n2. 책 검색하기\n3. 책 예약하기\n4. 책 대여하기\n5. 책 반납하기\n6. 열람실\n7. 체험 프로그램\n8. 도서관에 대해서\n\n";
    //book.RegisterABook();
    //cout << book.Name;

    return 0;
}

void SearchTheBook(int num)
{
    std::string SearchBookName;
    std::cout << "찾고싶은 책 제목을 입력해주세요\n";
    std::cin >> SearchBookName;
    for (int i = 0; i < num; i++);
    {
        if (SearchBookName == BookTest[i])
            std::cout >> SearchBookName;
    }

}