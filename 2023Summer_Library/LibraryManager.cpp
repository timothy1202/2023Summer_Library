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

int main()
{
    BookRegister book;
    LibraryManager Test;
    Test.BookTest[0] = {"ABC"};
    int Inst = Test.NumberOfBooks;
    Test.SearchTheBook(Inst);

    std::cout << "ȣ�����б� �������� ������ ���� ȯ���մϴ�\n";
    std::cout << "������ ���͵帱���??\n";
    std::cout << "1. å ����ϱ�\n2. å �˻��ϱ�\n3. å �����ϱ�\n4. å �뿩�ϱ�\n5. å �ݳ��ϱ�\n6. ������\n7. ü�� ���α׷�\n8. �������� ���ؼ�\n\n";
    //book.RegisterABook();
    //cout << book.Name;

    return 0;
}

void SearchTheBook(int num)
{
    std::string SearchBookName;
    std::cout << "ã����� å ������ �Է����ּ���\n";
    std::cin >> SearchBookName;
    for (int i = 0; i < num; i++);
    {
        if (SearchBookName == BookTest[i])
            std::cout >> SearchBookName;
    }

}