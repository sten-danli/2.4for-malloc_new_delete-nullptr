//2-4范围for语句，动态内存分配问题，nullptr
#include<iostream>
#include<string>

using namespace std;

int main()
{
	//一：范围for语句；用于遍历一个序列
	int v[]{ 12,13,14, };
	//数组中每一个元素，依次放入x中并打开打印x值。把v每个元素拷贝到x中，打印x值。
	{
		for (auto& x : v)//使用&后省了拷贝这个动作，提高了系统效率
			cout << x << "->";
	}

	cout << "end" << endl;
	cout << "_____________________________" << endl;
	for (auto& x : { 11,34,56,21,38 })
	{
		cout << x << endl;
	}
}

//二：内存分配问题：c中供程序使用的存储空间，有程序区，动态存储区
//c++中， 我们把内存进一部分为五个区；
//

//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 100);
//
//	if (p != NULL)
//	{
//		int* q = p;
//		for (int i = 0; i < 100; i++)
//		{
//			*q++ = i;
//		}

//		cout << *p << endl;
//		cout << *(p+99) << endl;
//		for (int i=0;i<100;i++)
//		{
//			cout << p[i] << endl;
//		}
//	}
//
//}
