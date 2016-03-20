#include <map>
#include <iostream>
#include <string>
using namespace std;
typedef struct {
	double degree;
	int n;
}sumDegree;

int main()
{
	map<string, sumDegree> stu;
	while (cin)
	{
		string name;
		double degree;
		cin >> name >> degree;
		if (stu.count(name))
		{
			stu[name].degree += degree;
			stu[name].n++;
		}
		else
		{
			stu[name].degree = degree;
			stu[name].n = 1;
		}	
	}
	if (stu.count(""))
	{
		stu.erase("");
	}
	double sum = 0;
	int sumN = 0;
	for (map<string, sumDegree>::iterator  it = stu.begin();
	it != stu.end();
		it++)
	{
		cout << "name: "
			<< it->first
			<< " sum degree: "
			<< it->second.degree
			<< " average degree: "
			<< it->second.degree / it->second.n << endl;
		sum += it->second.degree;
		sumN += it->second.n;
	}
	
	cout << "sum of all: " << sum << " average of all: " << sum / sumN << endl;


	return 0;
}