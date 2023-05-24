//#include <iostream>
//using namespace std;
//
//class S_Class : public F_Class //âòîðîé êëàññ, ïîòîìîê ïåðâîãî êëàññà
//{
//public:
//	S_Class()//êîíñòðóêòîð ïî óìîë÷àíèþ
//	{
//		cout << "S_class()\n";
//	}
//
//	void virtual_print() override //âèðòóàëüíûé ìåòîä äëÿ ôóíêöèè print
//	{
//		cout << "void virtual_print() âòîðîãî êëàññà\n";
//	}
//
//	void print()//îáû÷íûé ìåòîä äëÿ ôóíêöèè print
//	{
//		cout << "void print() âòîðîãî êëàññà\n";
//	}
//
//	string ClassName()//áàçîâûé âèðòóàëüíûé ìåòîä string 
//	{
//		return "S_Class";
//	}
//
//	bool IsA(const string& who)//áàçîâûé âèðòóàëüíûé ìåòîä bool IsA
//	{
//		return (who == "S_Class") || (F_Class::IsA(who));
//	}
//
//	~S_Class()//äåñòðóêòîð
//	{
//		cout << "~S_class()\n";
//	}
//};