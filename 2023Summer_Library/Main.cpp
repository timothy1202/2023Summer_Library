#include"LibraryManager.h"

LibraryManager Test;
BookRegister book;

int main()
{
    int SelectService = 0;

    //�׽�Ʈ�� ����Ʈ ��
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
    }


    std::cout << "ȣ�����б� �������� ������ ���� ȯ���մϴ�\n";
    std::cout << "������ ���͵帱���??\n";
    std::cout << "1. å ����ϱ�\n2. å �˻��ϱ�\n3. å �뿩�ϱ�\n4. å �ݳ��ϱ�\n5. ������\n6. ü�� ���α׷�\n7. �������� ���ؼ�\n\n";
    std::cin >> SelectService;
    switch (SelectService)
    {
        case 1:
            book.RegisterABook(); 
            Test.BookTest.push_back(book.Name);
            break;
        case 2:
            Test.SearchTheBook(Test.BookTest.size());
            break;
        //case3:


    }
    std::cout << Test.BookTest[3];

    return 0;
}