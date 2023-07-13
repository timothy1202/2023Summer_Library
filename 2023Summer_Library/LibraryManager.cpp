#include "LibraryManager.h"


void LibraryManager::SearchTheBook(int num)
{
    std::string SearchBookName;
    std::cout << "찾고싶은 책 제목을 입력해주세요\n";
    std::cin >> SearchBookName;
    for (int i = 0; i < num; i++)
    {
        if (SearchBookName == BookTest[i])
        {
            std::cout << "책 ";
            std::cout << SearchBookName;
            std::cout << "이 존재합니다.\n";
            break; //필요없는 for 반복을 막기 위해
        }
        else if (i == num - 1 && SearchBookName != BookTest[i])
        {
            std::cout << "찾으시는 책이 없습니다.\n";
        }
    }
}

void LibraryManager::RentTheBook(int num)
{
    std::string RentBookName;
    std::cout << "어떤 책을 빌리시겠습니까?\n";
    std::cin >> RentBookName;
    for (int i = 0; i < num; i++)
    {
        if (RentBookName == BookTest[i])
        {
            if (RentOk[i] == 1)
            {
                int answer = 0;
                std::cout << "대여 가능한 책 입니다\n";
                std::cout << "책을 대여 하시겠습니까?\n";
                std::cout << "(예: 1 / 아니요: 0)\n";
                std::cin >> answer;
                if (answer == 1)
                    RentOk[i] = 0;
                else;

            }
            else if (RentOk[i] == 0)
                std::cout << "대여가 불가능한 책 입니다\n";
        }
    }
}

void LibraryManager::ReturnTheBook(int num)
{
    std::string ReturnBookName;
    std::cout << "어떤 책을 반납하시겠습니까?\n";
    std::cin >> ReturnBookName;
    for (int i = 0; i < num; i++)
    {
        if (ReturnBookName == BookTest[i])
        {
            RentOk[i] = 1;
            std::cout << "반납이 완료 되었습니다.\n";
        }
    }

}