//#include <iostream>
//using namespace std;
//#include "Base.h"
//
//class OtherDesc : public Base // êëàññ ïîòîìîê áàçîâîãî êëàññà
//{
//private:
//	int model;
//public:
//	OtherDesc()//êîíñòðóêòîð ïî óìîë÷àíèþ
//	{
//		cout << "OtherDesc()\n";
//	}
//
//	OtherDesc(int id, int model)//êîíñòðóêòîð ñ ïàðàìåòðàìè
//	{
//		cout << "OtherDesc(int id)\n";
//		this->id = id;
//		this->model = model;
//	}
//
//	OtherDesc(const OtherDesc& d)//êîíñòðóêòîð êîïèðîâàíèÿ
//	{
//		cout << "OtherDesc(const OtherDesc& d)\n";
//		id = d.id;
//		model = d.model;
//	}
//
//	bool IsA(const string& who)//áàçîâûé âèðòóàëüíûé ìåòîä bool IsA
//	{
//		return (who == "OtherDesc") || (Base::IsA(who));
//	}
//
//	void unique_odesc()
//	{
//		; cout << "I'm oDesc\n";
//	}
//
//	~OtherDesc()//äåñòðóêòîð
//	{
//		cout << "~OtherDesc()\n";
//	}
//};