#include <iostream>
#include <windows.h>
#include <string>
#include <vector>

//class IVehicle {
//public:
//	virtual void printInfo() = 0;
//	virtual int getNum() = 0;
//	virtual std::string getQuality() = 0;
//	virtual ~IVehicle(){}
//};
//class Car : public IVehicle {
//public:
//	Car(int num):_num(num){}
//	void printInfo() override{
//		std::cout << "class Car" << std::endl;
//	}
//	int getNum()override {
//			 return _num;
//	}
//	std::string getQuality()override {
//		return _quality;
//	}
//	~Car(){}
//private:
//	int _num;
//	std::string _quality;
//};
//class Bike:public IVehicle {
//public:
//	Bike(int num) :_num(num) {}
//	void printInfo() override {
//		std::cout << "class Bike" << std::endl;
//	}
//	int getNum()override {
//		return _num;
//	}
//
//	std::string getQuality()override {
//		return _quality;
//	}
//	~Bike(){}
//private:
//	int _num;
//	std::string _quality;
//};
//void func(const std::vector< IVehicle*>& c) {
//	for (size_t i = 0; i < c.size(); i++) {
//		c[i]->printInfo(); // (*c[i]).printInfo()
//	}
//}
//

class Parent {
public:
	virtual void sleep() {
		std::cout << "sleep()" << std::endl;
	}
};
class Child :public Parent {
public:
	 void sleep()override {
		std::cout << "child sleep()" << std::endl;
	}
	void gotoSchool() {
		std::cout << "gotoSchool()" << std::endl;
	}
};
void foo(Parent derived_obj) {
	std::cout << "inside foo()" << std::endl;
	derived_obj.sleep();
}



int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*td::vector< IVehicle*> vec;
	IVehicle* a = new Car(40);
	IVehicle* b = new Bike(70);
	vec.push_back(a);
	vec.push_back(b);
	func(vec);

	delete a;
	delete b;*/

	Parent parent;
	Child child;


	int a = 5;
	double b =(double) a; //c-style привидение типа
	double b1 = double(a);//c-style привидение типа
	
	//upcast- неявное преобразование разрешено
	Parent* pParent = &child;//отбросил методы чайлда(экономия памяти)

	//downcast
	Child* pChild = (Child*)&parent;//Parent* превратили в Child . добавили ему функции чайлда

	pParent->sleep();
	pChild->sleep();
	foo(*pParent);//разыменовали







}