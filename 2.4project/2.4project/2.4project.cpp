//2-4��Χfor��䣬��̬�ڴ�������⣬nullptr
#include<iostream>
#include<string>

using namespace std;

int main()
{
	//һ����Χfor��䣻���ڱ���һ������
	int v[]{ 12,13,14, };
	//������ÿһ��Ԫ�أ����η���x�в��򿪴�ӡxֵ����vÿ��Ԫ�ؿ�����x�У���ӡxֵ��
	{
		for (auto& x : v)//ʹ��&��ʡ�˿�����������������ϵͳЧ��
			cout << x << "->";
	}

	cout << "end" << endl;
	cout << "_____________________________" << endl;
	for (auto& x : { 11,34,56,21,38 })
	{
		cout << x << endl;
	}
}

//�����ڴ�������⣺c�й�����ʹ�õĴ洢�ռ䣬�г���������̬�洢��
//c++�У� ���ǰ��ڴ��һ����Ϊ�������
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
