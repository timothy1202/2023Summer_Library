#include "LibraryManager.h"

int NthBook = 0;

int SelectService()
{
    int ServiceNum = 0;
    std::cout << "��ȣ�� �Է��� �ּ��� : ";
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
    std::cout << "ã����� å ������ �Է����ּ���\n";
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