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

    std::cout << "ȣ�����б� �������� ������ ���� ȯ���մϴ�\n";
    std::cout << "������ ���͵帱���??\n";
    std::cout << "1. å ����ϱ�\n2. å �˻��ϱ�\n3. å �����ϱ�\n4. å �뿩�ϱ�\n5. å �ݳ��ϱ�\n6. ������\n7. ü�� ���α׷�\n8. �������� ���ؼ�\n\n";
    book.RegisterABook();
    std::cout << book.Name;

    return 0;
}