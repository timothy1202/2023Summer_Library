#include"BookRegister.h"


void BookRegister::RegisterABook()
{
	std::string Name1="";
	std::cout << "å�� ������ �Է����ּ���!\n";
	std::cout << "å �̸� : ";
	std::cin >> Name1;
	BookRegister::Name=Name1;

	std::string Author1 = "";
	std::cout << "���� �̸� : ";
	std::cin >> Author1;
	BookRegister::Author = Author1;

	std::string publisher1 = "";
	std::cout << "���ǻ� : ";
	std::cin >> publisher1;
	BookRegister::publisher = publisher1;


}