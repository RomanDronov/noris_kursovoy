#include <iostream>
#include <string>
#include<vector>
#include<map>
using namespace std;
class Data {
public:
	vector<Sportsmen> Sportsmens;
};
class IFactory {
public:
	virtual int  create_sportsmen() = 0;
};
class Olympiade {
	map<string, Sportsmen> Olympiades;
};
class Sportsmen {
public:
	string counrty;
	string name;
	int result;

};
class Football :public Sportsmen {
public:
	string Goalkeeper;
	string Halfback;
	string Quaterback;
	string Forward;
};
class Swimming :public Sportsmen {
	string crawl;
	string crawl_on_the_back;
	string Breaststroke;
	string Butterfly;

};
class Run :public Sportsmen {
	string m100;
	string m200;
	string m400;
	string m1000;

};
int main() {
	Data a;


}
