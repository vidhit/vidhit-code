// BasicsOfCplusPlusProgramming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<algorithm>
#include<vector>

struct Point
{
	double x, y;
	Point()
	{
		x = (rand() % 10000) - 5000;
		y = (rand() % 10000) - 5000;
	}
	void Print()
	{
		std::cout << x << " " << y << std::endl;
	}
};


int main()
{
    /*std::vector<int> test={1,2,56,12,3};
	double total = 0;

	std::for_each(begin(test), end(test),
		[&](int x) {
			total += x;
		});
	std::cout << total << std::endl;*/

	int count = 100;
	std::vector<Point> points;
	for (int i = 0; i < count; ++i)
		points.push_back(Point());
	std::cout << "Unsorted" << std::endl;
	for (int i = 0; i < 10; ++i)
		points[i].Print();
	std::sort(points.begin(), points.end(), [](const Point &a, const Point &b)
		{
		return (a.x*a.x)+(a.y*a.y)<(b.x*b.x)+(b.y*b.y); //how close points are to the origin is the sorting criteria
		});
	std::cout << std::endl;
	std::cout << "Sorted" << std::endl;
	for (int i = 0; i < 10; ++i)
		points[i].Print();


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
