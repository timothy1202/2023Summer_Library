#include"BookRegister.h"


void BookRegister::RegisterABook()
{
	std::string Name1="";
	std::cout << "책의 정보를 입력해주세요!\n";
	std::cout << "책 이름 : ";
	std::cin >> Name1;
	BookRegister::Name=Name1;

	std::string Author1 = "";
	std::cout << "저자 이름 : ";
	std::cin >> Author1;
	BookRegister::Author = Author1;

	std::string publisher1 = "";
	std::cout << "출판사 : ";
	std::cin >> publisher1;
	BookRegister::publisher = publisher1;


}