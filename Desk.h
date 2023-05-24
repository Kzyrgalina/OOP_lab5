//#include <iostream>
//using namespace std;
//#include "Base.h"
//
//class Desc : public Base //êëàññ ïîòîìîê áàçîâîãî êëàññà 
//{
//private:
//	int model;
//public:
//	Desc()//êîíñòðóêòîð ïî óìîë÷àíèþ
//	{
//		cout << "Desc()\n";
//	}
//
//	Desc(int id, int model)//êîíñòðóêòîð ñ ïàðàìåòðàìè
//	{
//		cout << "Desc(int id)\n";
//		this->id = id;
//		this->model = model;
//	}
//
//	Desc(const Desc& d)//êîíñòðóêòîð êîïèðîâàíèÿ
//	{
//		cout << "Desc(const Desc& d)\n";
//		id = d.id;
//		model = d.model;
//	}
//
//	bool IsA(const string& who)//áàçîâûé âèðòóàëüíûé ìåòîä bool IsA
//	{
//		return (who == "Desc") || (Base::IsA(who));
//	}
//	void unique_desc()
//	{
//		cout << "I'm Desc\n";
//	}
//
//	~Desc()//äåñòðóêòîð
//	{
//		cout << "~Desc()\n";
//	}
//};