#include"LibraryManager.h"

LibraryManager Test;
BookRegister book;

int main()
{
    int SelectService = 0;
    int TurnOn = 1;

    //테스트용 배열 디폴트 값
    {
    Test.BookTest.push_back("test1");
    Test.BookTest.push_back("test2");
    Test.BookTest.push_back("test3");
    Test.BookAuthor.push_back("Author1");
    Test.BookAuthor.push_back("Author2");
    Test.BookAuthor.push_back("Author3");
    Test.BookPublisher.push_back("Publisher1");
    Test.BookPublisher.push_back("Publisher2");
    Test.BookPublisher.push_back("Publisher3");
    Test.RentOk.push_back(1);
    Test.RentOk.push_back(1);
    Test.RentOk.push_back(1);
    }

    while(1)
    {
        std::cout << "호서대학교 도서관에 들어오신 것을 환영합니다\n";
        std::cout << "무엇을 도와드릴까요??\n";
        std::cout << "1. 책 등록하기\n2. 책 검색하기\n3. 책 대여하기\n4. 책 반납하기\n5. 열람실\n6. 체험 프로그램\n7. 도서관에 대해서\n\n";
        std::cin >> SelectService;
        switch (SelectService)
        {
            case 1:
                book.RegisterABook();
                Test.BookTest.push_back(book.Name);
                Test.BookAuthor.push_back(book.Author);
                Test.BookPublisher.push_back(book.Publisher);
                Test.RentOk.push_back(book.Rentable);
                break;
            case 2:
                Test.SearchTheBook(Test.BookTest.size());
                break;
            case 3:
                Test.RentTheBook(Test.BookTest.size());
                break;
            case 4:
                Test.ReturnTheBook(Test.BookTest.size());

        }
        std::cout << "프로그램을 종료하시겠습니까? \n";
        std::wcout << "(종료: 0 / 재실행: 1)\n";
        std::cin >> TurnOn;
        if (TurnOn == 0) break;
        else;
    } 

    return 0;
}