#pragma once
#include<iostream>
#include<string>

class BookRegister
{

public:
	std::string Name="";
	std::string Author="";
	std::string Publisher="";
	bool Rentable = 1;
	void RegisterABook();
};
