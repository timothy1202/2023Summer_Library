#include"LibraryManager.h"

LibraryManager Test;
BookRegister book;

int main()
{
    int SelectService = 0;
    int TurnOn = 1;

    //�׽�Ʈ�� �迭 ����Ʈ ��
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
        std::cout << "ȣ�����б� �������� ������ ���� ȯ���մϴ�\n";
        std::cout << "������ ���͵帱���??\n";
        std::cout << "1. å ����ϱ�\n2. å �˻��ϱ�\n3. å �뿩�ϱ�\n4. å �ݳ��ϱ�\n5. ������\n6. ü�� ���α׷�\n7. �������� ���ؼ�\n\n";
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
        std::cout << "���α׷��� �����Ͻðڽ��ϱ�? \n";
        std::wcout << "(����: 0 / �����: 1)\n";
        std::cin >> TurnOn;
        if (TurnOn == 0) break;
        else;
    } 

    return 0;
}