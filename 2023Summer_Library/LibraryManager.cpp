#include "LibraryManager.h"

int NthBook = 0;

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
