﻿#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//	实验五 - 综合练习
//	2024 - 09 - 29 10:10 : 00
//	2024 - 10 - 10 12 : 00 : 00



//	【id:428】【20分】A. 奖金提成



//	题目描述
//
//	企业发放的奖金根据利润提成，如下规则
//
//	利润≤10000元时，奖金可提成10%;
//
//	10000 < 利润≤20000时，低于10000元的部分按10％提成，高于10000元的部分，可提成7.5 %;
//
//	20000 < 利润≤40000时，低于20000元部分仍按上述办法提成，（下同），高于20000元的部分按5％提成；
//
//	40000 < 利润≤60000元时，高于40000元的部分按3％提成；
//
//	60000 < 利润≤100000时，高于60000元的部分按1.5 % 提成；
//
//	利润 > 100000时，超过100000元的部分按1 % 提成。
//
//
//
//
//	输入
//
//	输入一个int型数据表示利润
//
//
//
//
//	输出
//
//	输出应得的奖金（注意奖金是整数，不是小数）



//int main()
//{
//	int a = 0;
//	cin >> a;
//	int num = 0;
//
//	if (a <= 10000)
//	{
//		num = a * 0.1;
//	}
//	else
//		if (a > 10000 && a <= 20000)
//		{
//			a -= 10000;
//			num = 10000 * 0.1 + a * 0.075;
//		}
//		else
//			if (a > 20000 && a <= 40000)
//			{
//				a -= 20000;
//				num = 10000 * 0.1 + 10000 * 0.075 + a * 0.05;
//			}
//			else
//				if (a > 40000 && a <= 60000)
//				{
//					a -= 40000;
//					num = 10000 * 0.1 + 10000 * 0.075 + 20000 * 0.05 + a * 0.03;
//				}
//				else
//					if (a > 60000 && a <= 100000)
//					{
//						a -= 60000;
//						num = 10000 * 0.1 + 10000 * 0.075 + 20000 * 0.05 + 20000 * 0.03 + a * 0.015;
//					}
//					else
//						if (a > 100000)
//						{
//							a -= 100000;
//							num = 10000 * 0.1 + 10000 * 0.075 + 20000 * 0.05 + 20000 * 0.03 + 40000 * 0.015+a*0.01;
//						}
//
//	cout << num << endl;
//
//
//
//	return 0;
//}







//	【id:426】【20分】B. 距离年底有多少天



//	题目描述
//
//	输入一个日期，求该日期距离当年最后一天的天数。例如2016年12月10日，距离2016年底还有21天.
//
//	要求用switch语句实现。
//
//
//	输入
//
//	输入某年某月某日
//
//
//	输出
//
//	输出距离最后一天还有多少天



int main()
{
	int year, month, day;
	cin >> year >> month >> day;
	int num = 0;

	switch (month)
	{
	case 1:num += 31;
	case 2:num += 28;
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
			num++;
	case 3:num += 31;
	case 4:num += 30;
	case 5:num += 31;
	case 6:num += 30;
	case 7:num += 31;
	case 8:num += 31;
	case 9:num += 30;
	case 10:num += 31;
	case 11:num += 30;
	case 12:num += 31;
	
	}

	
		cout << num - day << endl;



	return 0;
}







//	【id:424】【20分】C. 箱子匹配



//	题目描述
//
//	每个箱子都有长宽高，我们需要判断一个箱子能否放入另一个箱子中。
//
//	例如有箱子A的尺寸是 3 x 4 x 5，箱子B的尺寸 是 5 x 6 x 4，经过比较判断，可以知道箱子A通过旋转摆放，长宽高都能够完全放入箱子B中，我们就说箱子A匹配箱子B。
//
//	注意，当两个箱子尺寸相等，我们也认为它们匹配。
//
//
//	输入
//
//	第一行输入参数T，表示有T个测试实例
//
//	第二行输入第1组实例的箱子A的长、宽、高，输入数值为小于1000的自然数
//
//	第三行输入第1组实例的箱子B的长、宽、高，输入数值为小于1000的自然数
//
//	以此类推
//
//
//	输出
//
//	如果两个箱子匹配(箱子A匹配箱子B 或 箱子B匹配箱子A)，输出yes，否则输出no。逐行输出每一组的箱子匹配结果。



//void _sort(int *x, int *y)
//{
//	int tmp = *x;
//	*x =*y;
//	*y = tmp;
//}
//
//void compare(int* A, int* B)
//{
//	
//	
//		for (int i = 0; i < 3-1; i++) 
//		{
//			for (int j = 0; j < 2 - i; j++) 
//			{
//				if (A[j] > A[j + 1])
//					_sort(&A[j], &A[j + 1]);
//			}
//		}
//		for (int i = 0; i < 3-1; i++) 
//		{
//			for (int j = 0; j < 2 - i; j++) 
//			{
//				if (B[j] > B[j + 1])
//					_sort(&B[j], &B[j + 1]);
//			}
//		}
//
//	/*for (int i = 0; i < 3; i++)
//	{
//		cout << A[i] << " " << B[i] << endl;
//	}*/
//
//		if (A[0] < B[0] && A[1] < B[1] && A[2] < B[2] || B[0] < A[0] && B[1] < A[1] && B[2] < A[2])
//
//			cout << "yes" << endl;
//		else
//			cout << "no" << endl;
//
//}
//
//int main()
//{
//	int A[3] = { 0 };
//	int B[3] = { 0 };
//
//	int n = 0;
//	cin >> n;
//
//	while (n--)
//	{
//
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> A[i];
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			cin >> B[i];
//		}
//		compare(A, B);
//	}
//	
//
//
//	return 0;
//}







//	【id:425】【20分】D. 连连看



//	题目描述
//
//	本题要求实现一个连连看游戏模拟程序。
//
//	给定一个m* n的矩阵网格游戏盘面，每个格子中放置一些符号。这些符号一定是成对出现的，同一个符号可能不止一对。程序读入玩家给出的一对位置(x1, y1)、(x2, y2)，判断这两个位置上的符号是否匹配。如果匹配成功，则将两个符号消为“* ”并输出消去后的盘面；否则输出“Uh - oh”。若匹配错误达到3次，则输出“Game Over”并结束游戏。或者当全部符号匹配成功，则输出“Congratulations!”，然后结束游戏。
//
//
//
//
//
//
//
//
//	输入
//
//	输入在一行中给两个正整数m n。随后m行，每行n个大写英文字母（其间以1个空格分隔），表示游戏盘面。盘面之后给出一个正整数K，随后K行，每行按照格式“x​1​​y​1​​x​2​​y​2​​”给出一个玩家的输入。注意格子的行、列编号是从1开始。
//
//
//	输出
//
//	根据玩家的每一步输入，输出相应的结果。输出盘面时注意，每行字符间以1个空格分隔，行末不得有多余空格。



//int main()
//{
//
//
//
//
//	return 0;
//}







//	【id:427】【20分】E. 实验3-11 求一元二次方程的根



//	题目描述
//
//	本题目要求一元二次方程ax ^ 2＋bx＋c＝0的根，结果保留2位小数。
//
//
//	输入
//
//	输入在一行中给出3个浮点系数a、b、c，中间用空格分开。
//
//
//	输出
//
//	根据系数情况，输出不同结果：
//
//	1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；
//
//	2)如果方程有两个不相等复数根，则每行按照格式“实部 + 虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；
//
//	3)如果方程只有一个根，则直接输出此根；
//
//	4)需要考虑系数为0的情况，如果系数都为0，则输出"Zero Equation"；
//
//	5)如果a和b为0，c不为0，则输出"Not An Equation"。



//#define _jud  sqrt(pow(b, 2) - 4 * a * c)
//#define i_jud  sqrt(4 * a * c - pow(b,2))
//
//#include<math.h>
//#include <iomanip>
//
//int main()
//{
//	double a, b, c;
//
//	cin >> a >> b >> c;
//
//
//	if (a == 0 && b == 0 && c == 0)
//		cout << "Zero Equation" << endl;
//	else
//		if (a == 0 && b == 0 && c != 0)
//			cout << "Not An Equation" << endl;
//	else
//		if ( _jud > 0)
//		{
//			(-b + _jud) / (2 * a) > (-b - _jud) / (2 * a) ?
//				cout << fixed << setprecision(2) << (-b + _jud) / (2 * a) << endl << (-b - _jud) / (2 * a) << endl
//
//				: cout << fixed  <<setprecision(2) <<(- b - _jud) / (2 * a) << endl  << ( - b + _jud) / (2 * a) << endl;
//		}
//		else if (_jud == 0)
//		{
//			cout << fixed << setprecision(2) <<( - b + _jud) / (2 * a) << endl;
//		}
//		else if (_jud < 0)
//		{
//			(-b + i_jud) / (2 * a) > (-b - i_jud) / (2 * a) ?
//				cout << fixed << setprecision(2) << (-b / (2 * a)) << "+" << (i_jud) / (2 * a) << "i" << endl << (-b / (2 * a)) << "+" << (-i_jud) / (2 * a) << "i" << endl
//
//				: cout << fixed << setprecision(2) << (-b / (2 * a)) << "+" << (-i_jud) / (2 * a) << "i" << endl << (-b / (2 * a)) << "+" << (i_jud) / (2 * a) << "i" << endl;
//		}
//
//
//
//	return 0;
//}