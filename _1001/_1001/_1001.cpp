#define _CRT_SECURE_NO_WARNINGS
									
#include<iostream>
using namespace std;

//	实验一-熟悉环境		
//	2024 - 09 - 06 10:30 : 00	
//	2024 - 09 - 12 12:00 : 00



//	【id:3】【20分】A. 表面积计算（已含答案）



//	题目描述
//
//	给出一个立方体的长宽高，计算它的表面积
//
//
//
//
//	输入
//
//	第一行输入参数T，表示有T个测试实例
//
//	第二行输入一个立方体的长宽高，长宽高均为小于100的正整数
//
//	以此类推
//
//
//	输出
//
//	输出每个立方体的表面积



//int main()
//{
//	int t;
//	cin >> t;
//
//	int a, b, c;
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> a >> b >> c;
//
//		cout << 2 * a * b + 2 * a * c + 2 * b * c << endl;
//	}
//
//
//	return 0;
//}







//	【id:361】【20分】B. 表达式求值



//	题目描述
//
//	对以下表达式进行求值，a、b、c是三个变量，它们都是小于100的自然数
//
//	a + b > c && b == c
//
//
//	输入
//
//	第一行输入T，表示后续有T个测试示例
//
//	第二行开始，每行输入3个变量值，输入T行
//
//
//	输出
//
//	每行输出计算结果



//int main()
//{
//	int t;
//	cin >> t;
//
//	int a,b,c;
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> a >> b >> c;
//		if (a + b > c && b == c)
//			cout << "1" << endl;
//		else
//			cout << "0" << endl;
//	}
//
//	return 0;
//}







//	【id:364】【20分】C. 求n的阶乘



//	题目描述
//
//	求n的阶乘（n大于等于1，小于等于12）
//
//
//	输入
//
//	5
//
//
//	输出
//
//	120



//int main()
//{
//	int t;
//	cin >> t;
//
//	int sum = 1;
//
//	while (t)
//	{
//		sum *= t--;
//		
//	}
//
//	cout << sum << endl;
//
//	return 0;
//}







//	【id:360】【20分】D. 成绩评定



//	题目描述
//
//	对于给出0～100之间的成绩进行成绩评定，大于等于85是A，75分至85以下是B，65至75分以下是C，60至65分以下是D，60分以下是F
//
//
//	输入
//
//	第一行输入T表示有T个测试实例
//
//	第二行起，每行输入1个成绩，连续输入T行
//
//
//	输出
//
//	输出成绩等级



//int main()
//{
//	int t;
//	cin >> t;
//
//	double grades;
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> grades;
//
//		if (grades >= 85.0)
//			cout << 'A'<< endl;
//		else
//			if (grades >= 75.0 && grades < 85.0)
//				cout << 'B'<< endl;
//			else
//				if (grades >= 65.0 && grades < 75.0)
//					cout << 'C'<< endl;
//				else
//					if (grades >= 60.0 && grades < 65.0)
//						cout << 'D'<< endl;
//					else
//						cout << 'F'<< endl;
//
//	}
//
//
//
//	return 0;
//}







//	【id:363】【20分】E. 超重青蛙



//	题目描述
//
//	在青蛙王国，每个青蛙有着不同的体重。
//
//	给出一组青蛙的体重，计算里面超出平均体重的青蛙数量。
//
//
//	输入
//
//	第一行输入参数T，表示有T个测试实例
//
//	第二行输入参数n，表示这一组青蛙的数量，第三行输入n个青蛙的体重
//
//	以此类推
//
//
//	输出
//
//	输出每一组青蛙中，超出平均体重的青蛙数量。



int main()
{
	int t;
	cin >> t;

	int arr[100] = { 0 };

	for (int i = 0; i < t; i++)
	{
		int j = 0;
		int n = 0;
		cin >> n;

		double num = 0;
		int flag = 0;

		for (j = 0; j < n; j++)
		{
			cin >> arr[j];
			num += arr[j];
		}
		num /= n;
		for (j = 0; j < n; j++)
		{
			if (arr[j] < num)
				flag++;
		}
		cout << flag << endl;
	}



	return 0;
}