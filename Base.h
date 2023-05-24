//#include <iostream>
//using namespace std;
//
//class Base //áàçîâûé êëàññ
//{
//protected:
//	int id;
//public:
//	Base()//êîíñòðóêòîð ïî óìîë÷àíèþ
//	{
//		cout << "Base()\n";
//		id = 0;
//	}
//
//	Base(int id)//êîíñòðóêòîð ñ ïàðàìåòðàìè
//	{
//		cout << "Base(int id)\n";
//		this->id = id;
//	}
//
//	Base(const Base& b)//êîíñòðóêòîð êîïèðîâàíèÿ
//	{
//		cout << "Base(const Base& b)\n";
//		id = b.id;
//	}
//
//	virtual bool IsA(const string& who)//áàçîâûé âèðòóàëüíûé ìåòîä bool IsA
//	{
//		return (who == "Base");
//	}
//
//	virtual void unique()
//	{
//		cout << "nothing";
//	}
//
//	virtual ~Base()//äåñòðóêòîð
//	{
//		cout << "~Base()\n";
//	}
//};