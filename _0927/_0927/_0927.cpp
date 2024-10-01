#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//	实验四 - 引用与结构
//	2024 - 09 - 27 09:20 : 00
//	2024 - 10 - 10 12 : 00 : 00



//	【id:19】【20分】A. 三数论大小（引用）



//	题目描述
//
//	输入三个整数，然后按照从大到小的顺序输出数值。
//
//	要求：定义一个函数，无返回值，函数参数是三个整数参数的引用，例如int& a, int& b, int& c。在函数内对三个参数进行排序。主函数调用这个函数进行排序。
//
//	要求：不能直接对三个整数进行排序，必须通过函数而且是引用的方法。
//
//	要求：输出必须在主函数进行。
//
//
//
//
//
//
//	输入
//
//	第一行输入t表示有t个测试实例
//
//	第二行起，每行输入三个整数
//
//	输入t行
//
//
//
//
//	输出
//
//	每行按照从大到小的顺序输出每个实例，三个整数之间用单个空格隔开



//void swap(int* x, int* y)
//{
//	int* tmp = x;
//	x = y;
//	y = tmp;
//
//
//
//}
//
//void sort(int &a, int &b, int &c)
//{
//	if (a < b)
//		swap(a, b);
//	if (a < c)
//		swap(a, c);
//	if (b < c)
//		swap(b, c);
//
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	int a, b, c;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a >> b >> c;
//
//		sort(a, b, c);
//
//		cout << a <<" " << b <<" " << c << endl;
//	}
//
//
//
//
//	return 0;
//}







//	【id:134】【20分】B. 求最大值最小值（引用）



//	题目描述
//
//	编写函数void find(int* num, int n, int& minIndex, int& maxIndex)，求数组num(元素为num[0]，num[1]，...，num[n - 1]）中取最小值、最大值的元素下标minIndex, maxIndex（若有相同最值，取第一个出现的下标。）
//
//	输入n，动态分配n个整数空间，输入n个整数，调用该函数求数组的最小值、最大值下标。
//
//	改变函数find功能不计分。
//
//	要求：在main函数中按样例格式输出结果，不能直接在find函数中输出。
//
//
//	输入
//
//	测试次数
//
//	每组测试数据一行：数据个数n，后跟n个整数
//
//
//	输出
//
//	每组测试数据输出两行，分别是最小值、最大值及其下标。具体格式见样例。多组测试数据之间以空行分隔。



//void find(int* num, int n, int& minIndex, int& maxIndex)
//{
//	int max = *num;
//	int min = *num;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (max < num[i])
//		{
//			max = num[i];
//			maxIndex = i;
//		}
//		if (min > num[i])
//		{
//			min = num[i];
//			minIndex = i;
//		}
//	}
//
//}
//
//int main()
//{	
//	int n = 0;
//	cin >> n;
//
//	while (n--)
//	{
//		int sz = 0;
//		cin >> sz;
//
//		if (sz == 0)
//			return 0;
//		else
//		{
//			int* num = new int[sz];
//
//			for (int i = 0; i < sz; i++)
//			{
//				cin >> num[i];
//			}
//			int minindex = 0;
//			int maxindex = 0;
//			find(num, sz, minindex, maxindex);
//			cout << "min=" << num[minindex] << " " << "minindex=" << minindex << endl;
//			cout << "max=" << num[maxindex] << " " << "maxindex=" << maxindex << endl;
//
//			delete[]num;
//
//
//			cout << endl;
//		}
//
//		
//
//		
//
//	}
//
//	return 0;
//}







//	【id:133】【20分】C. 小票输入输出（结构体）



//	题目描述
//
//	现在人的消费习惯大多是刷卡消费，商家会通过POS机回执一个小票，包含商家名称、终端号、操作员、发卡方、有效期、卡号、交易时间、消费金额等信息，把商家信息定义为一个Struct结构，按照要求输出相应的格式小票。
//
//
//
//
//	输入
//
//	第一行输入消费次数（刷卡次数）
//
//	第二行依次输入小票包含的各种属性，最大长度不超过30.
//
//	第三行与第二行类似，以此类推。。。
//
//
//
//
//	输出
//
//	根据输入信息，依次输出各次刷卡信息$



#include<string>

struct POS
{
	string Name;
	string Terminal;	string operator1;
	string CardIssuers; string Validity;
	string CardNumber;
	string Traded;
	string Costs;
}p;

int main()
{
	
	int n = 0;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> p.Name >> p.Terminal >> p.operator1 >> p.CardIssuers
			>> p.Validity >> p.CardNumber >> p.Traded >> p.Costs;

		for (int j = 4; j < 12; j++)
		{
			p.CardNumber[j] = '*';
		}

		cout << "Name: " << p.Name << endl;
		cout << "Terminal: " << p.Terminal << " " << "operator: " << p.operator1 << endl;
		cout << "Card Issuers: " << p.CardIssuers << " " << "Validity: " << p.Validity << endl;
		cout << "CardNumber: " << p.CardNumber << endl;
		cout << "Traded: " << p.Traded << endl;
		cout << "Costs: " << "$" << p.Costs << endl;

		cout << endl;
	}
		


	return 0;
}







//	【id:20】【20分】D. 谁是老二（结构体）



//	题目描述
//
//	定义一个结构体，包含年月日，表示一个学生的出生日期。然后在一群学生的出生日期中找出谁的出生日期排行第二
//
//	要求：出生日期的存储必须使用结构体，不能使用其他类型的数据结构。
//
//	要求程序全过程对出生日期的输入、访问、输出都必须使用结构。
//
//
//
//
//	输入
//
//	第一行输入t表示有t个出生日期
//
//	每行输入三个整数，分别表示年、月、日
//
//	依次输入t个实例
//
//
//
//
//	输出
//
//	输出排行第二老的出生日期，按照年 - 月 - 日的格式输出



//int main()
//{
//	struct Info 
//	{
//		int year;
//		int month;
//		int day;
//		int num;
//	};
//
//	int n = 0;
//	cin >> n;
//
//	Info* p = new Info[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i].year >> p[i].month >> p[i].day;
//		p[i].num = p[i].year * 365 + p[i].month * 31 + p[i].day;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n-i-1; j++)
//		{
//			if (p[j].num > p[j + 1].num)
//			{
//				struct Info tmp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = tmp;
//			}
//		}
//
//	
//	}
//	cout << p[1].year << "-" << p[1].month << "-" << p[1].day << endl;
//
//	delete[]p;
//	p = NULL;
//
//	return 0;
//}







//	【id:21】【20分】E. 抄袭查找（结构体+指针+函数）



//	题目描述
//
//	已知一群学生的考试试卷，要求对试卷内容进行对比，查找是否有抄袭。
//
//	每张试卷包含：学号（整数类型）、题目1答案（字符串类型）、题目2答案（字符串类型）、题目3答案（字符串类型）
//
//	要求：使用结构体来存储试卷的信息。定义一个函数，返回值为一个整数，参数是两个结构体指针，函数操作是比较两张试卷的每道题目的答案，如果相同题号的答案相似度超过90% ，那么就认为有抄袭，函数返回抄袭题号，否则返回0。相似度是指在同一题目中，两个答案的逐个位置上的字符两两比较，相同的数量大于等于任一个答案的长度的90% ，就认为抄袭。
//
//
//
//
//	输入
//
//	第一行输入t表示有t张试卷
//
//	第二行输入第1张试卷的学生学号
//
//	第三行输入第1张试卷的题目1答案，最大长度不超过100
//
//	第四行输入第1张试卷的题目2答案，最大长度不超过100
//
//	第五行输入第1张试卷的题目3答案，最大长度不超过100
//
//	每张试卷对应4行输入
//
//	依次输入t张试卷的数据
//
//
//	输出
//
//	在一行中，把发现抄袭的两个学号和题目号输出，只输出第一次发现抄袭的题号，数据之间用单个空格隔开
//
//	如果发现是题目1抄袭，题目号为1，以此类推
//
//	输出顺序按照输入的学号顺序进行输出



//struct Pap
//{
//	int ID = 0;
//	char arr1[100];
//	char arr2[100];
//	char arr3[100];
//};
//
//bool cmp(char* x, char* y)
//{
//	int flag = 0;
//	int lenght = 0;
//	while (*x && *y)
//	{
//		if (*x++ == *y++)
//			flag++;
//
//
//		lenght++;
//	}
//	if (flag >= lenght * 0.9)
//		return 1;
//	else
//		return 0;
//}
//
//int compare(Pap* x, Pap* y)
//{
//	if (cmp(x->arr1, y->arr1))
//	return 1;
//	if (cmp(x->arr2, y->arr2))
//	return 2;
//	if (cmp(x->arr3, y->arr3))
//	return 3;
//
//
//	return 0;
//}
//
//int main()
//{
//	
//
//	int t = 0;
//	cin >> t;
//
//	Pap* p = new Pap[t];
//
//	for (int i = 0; i < t; i++)
//	{
//		cin >> p[i].ID >> p[i].arr1 >> p[i].arr2 >> p[i].arr3;
//	}
//
//	for (int i = 0; i < t; i++)
//	{
//		for (int j = i+1; j < t; j++)
//		{
//			int num = compare(&p[i], &p[j]);
//			if(num)
//			cout << p[i].ID << " " << p[j].ID << " " << num << endl;
//		}
//	}
//
//	delete[]p;
//	p = NULL;
//
//	return 0;
//}