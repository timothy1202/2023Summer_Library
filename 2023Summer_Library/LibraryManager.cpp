#include "LibraryManager.h"


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

void LibraryManager::RentTheBook(int num)
{
    std::string RentBookName;
    std::cout << "� å�� �����ðڽ��ϱ�?\n";
    std::cin >> RentBookName;
    for (int i = 0; i < num; i++)
    {
        if (RentBookName == BookTest[i])
        {
            if (RentOk[i] == 1)
            {
                int answer = 0;
                std::cout << "�뿩 ������ å �Դϴ�\n";
                std::cout << "å�� �뿩 �Ͻðڽ��ϱ�?\n";
                std::cout << "(��: 1 / �ƴϿ�: 0)\n";
                std::cin >> answer;
                if (answer == 1)
                    RentOk[i] = 0;
                else;

            }
            else if (RentOk[i] == 0)
                std::cout << "�뿩�� �Ұ����� å �Դϴ�\n";
        }
    }
}

void LibraryManager::ReturnTheBook(int num)
{
    std::string ReturnBookName;
    std::cout << "� å�� �ݳ��Ͻðڽ��ϱ�?\n";
    std::cin >> ReturnBookName;
    for (int i = 0; i < num; i++)
    {
        if (ReturnBookName == BookTest[i])
        {
            RentOk[i] = 1;
            std::cout << "�ݳ��� �Ϸ� �Ǿ����ϴ�.\n";
        }
    }

}