#include<iostream>
#include "tree.cpp"
#include<string>

using namespace std;

int main()
{
	tree<string> B;

	
	B.readfromfile();
	B.menu();
	//B.traverse(1);
	//B.insert("ss", "c");
	//B.traverse(1);

	system("pause");
	return 0;
}