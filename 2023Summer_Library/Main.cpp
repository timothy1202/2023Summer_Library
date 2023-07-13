#include"LibraryManager.h"

LibraryManager Test;

int main()
{
    BookRegister book;
    Test.BookTest[0] = { "tim" };
    Test.BookTest[1] = { "B" };
    Test.BookTest[2] = { "C" };
    int Inst = Test.NumberOfBooks;
    Test.SearchTheBook(Inst);

    std::cout << "호서대학교 도서관에 들어오신 것을 환영합니다\n";
    std::cout << "무엇을 도와드릴까요??\n";
    std::cout << "1. 책 등록하기\n2. 책 검색하기\n3. 책 예약하기\n4. 책 대여하기\n5. 책 반납하기\n6. 열람실\n7. 체험 프로그램\n8. 도서관에 대해서\n\n";
    book.RegisterABook();
    std::cout << book.Name;

    return 0;
}