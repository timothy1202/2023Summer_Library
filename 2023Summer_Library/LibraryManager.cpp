#include "LibraryManager.h"

int NthBook = 0;

void LibraryManager::SearchTheBook(int num)
{
    std::string SearchBookName;
    std::cout << "ã����� å ������ �Է����ּ���\n";
    std::cin >> SearchBookName;
    for (int i = 0; i < num; i++)
    {
        if (SearchBookName == BookTest[i])
        {
            std::cout << "å ";
            std::cout << SearchBookName;
            std::cout << "�� �����մϴ�.\n";
            break; //�ʿ���� for �ݺ��� ���� ����
        }
        else if (i == num - 1 && SearchBookName != BookTest[i])
        {
            std::cout << "ã���ô� å�� �����ϴ�.\n";
        }
    }
}
