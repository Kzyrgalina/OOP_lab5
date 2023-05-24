//#include <iostream>
//using namespace std;
//class F_Class //родительсяки класс
//{
//public:
//	F_Class()// 
//	{
//		cout << "F_class()\n";
//	}
//
//	virtual void virtual_print()//âèðòóàëüíûé ìåòîä äëÿ ôóíêöèè print
//	{
//		cout << "void virtual_print() ïåðâîãî êëàññà\n";
//	}
//
//	void print()//îáû÷íûé ìåòîä äëÿ ôóíêöèè print
//	{
//		cout << "void print() ïåðâîãî êëàññà\n";
//	}
//
//	virtual string ClassName()//áàçîâûé âèðòóàëüíûé ìåòîä string 
//	{
//		return "F_Class";
//	}
//
//	virtual bool IsA(const string& who)//áàçîâûé âèðòóàëüíûé ìåòîä bool IsA
//	{
//		return (who == "F_Class");
//	}
//
//
//	virtual ~F_Class()//äåñòðóêòîð
//	{
//		cout << "~F_Class()\n";
//	}
//};