#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
using namespace std;

//	ʵ���� - ������ṹ
//	2024 - 09 - 27 09:20 : 00
//	2024 - 10 - 10 12 : 00 : 00



//	��id:19����20�֡�A. �����۴�С�����ã�



//	��Ŀ����
//
//	��������������Ȼ���մӴ�С��˳�������ֵ��
//
//	Ҫ�󣺶���һ���������޷���ֵ�����������������������������ã�����int& a, int& b, int& c���ں����ڶ������������������������������������������
//
//	Ҫ�󣺲���ֱ�Ӷ����������������򣬱���ͨ���������������õķ�����
//
//	Ҫ��������������������С�
//
//
//
//
//
//
//	����
//
//	��һ������t��ʾ��t������ʵ��
//
//	�ڶ�����ÿ��������������
//
//	����t��
//
//
//
//
//	���
//
//	ÿ�а��մӴ�С��˳�����ÿ��ʵ������������֮���õ����ո����



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







//	��id:134����20�֡�B. �����ֵ��Сֵ�����ã�



//	��Ŀ����
//
//	��д����void find(int* num, int n, int& minIndex, int& maxIndex)��������num(Ԫ��Ϊnum[0]��num[1]��...��num[n - 1]����ȡ��Сֵ�����ֵ��Ԫ���±�minIndex, maxIndex��������ͬ��ֵ��ȡ��һ�����ֵ��±ꡣ��
//
//	����n����̬����n�������ռ䣬����n�����������øú������������Сֵ�����ֵ�±ꡣ
//
//	�ı亯��find���ܲ��Ʒ֡�
//
//	Ҫ����main�����а�������ʽ������������ֱ����find�����������
//
//
//	����
//
//	���Դ���
//
//	ÿ���������һ�У����ݸ���n�����n������
//
//
//	���
//
//	ÿ���������������У��ֱ�����Сֵ�����ֵ�����±ꡣ�����ʽ�������������������֮���Կ��зָ���



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







//	��id:133����20�֡�C. СƱ����������ṹ�壩



//	��Ŀ����
//
//	�����˵�����ϰ�ߴ����ˢ�����ѣ��̼һ�ͨ��POS����ִһ��СƱ�������̼����ơ��ն˺š�����Ա������������Ч�ڡ����š�����ʱ�䡢���ѽ�����Ϣ�����̼���Ϣ����Ϊһ��Struct�ṹ������Ҫ�������Ӧ�ĸ�ʽСƱ��
//
//
//
//
//	����
//
//	��һ���������Ѵ�����ˢ��������
//
//	�ڶ�����������СƱ�����ĸ������ԣ���󳤶Ȳ�����30.
//
//	��������ڶ������ƣ��Դ����ơ�����
//
//
//
//
//	���
//
//	����������Ϣ�������������ˢ����Ϣ$



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







//	��id:20����20�֡�D. ˭���϶����ṹ�壩



//	��Ŀ����
//
//	����һ���ṹ�壬���������գ���ʾһ��ѧ���ĳ������ڡ�Ȼ����һȺѧ���ĳ����������ҳ�˭�ĳ����������еڶ�
//
//	Ҫ�󣺳������ڵĴ洢����ʹ�ýṹ�壬����ʹ���������͵����ݽṹ��
//
//	Ҫ�����ȫ���̶Գ������ڵ����롢���ʡ����������ʹ�ýṹ��
//
//
//
//
//	����
//
//	��һ������t��ʾ��t����������
//
//	ÿ�����������������ֱ��ʾ�ꡢ�¡���
//
//	��������t��ʵ��
//
//
//
//
//	���
//
//	������еڶ��ϵĳ������ڣ������� - �� - �յĸ�ʽ���



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







//	��id:21����20�֡�E. ��Ϯ���ң��ṹ��+ָ��+������



//	��Ŀ����
//
//	��֪һȺѧ���Ŀ����Ծ�Ҫ����Ծ����ݽ��жԱȣ������Ƿ��г�Ϯ��
//
//	ÿ���Ծ������ѧ�ţ��������ͣ�����Ŀ1�𰸣��ַ������ͣ�����Ŀ2�𰸣��ַ������ͣ�����Ŀ3�𰸣��ַ������ͣ�
//
//	Ҫ��ʹ�ýṹ�����洢�Ծ����Ϣ������һ������������ֵΪһ�������������������ṹ��ָ�룬���������ǱȽ������Ծ��ÿ����Ŀ�Ĵ𰸣������ͬ��ŵĴ����ƶȳ���90% ����ô����Ϊ�г�Ϯ���������س�Ϯ��ţ����򷵻�0�����ƶ���ָ��ͬһ��Ŀ�У������𰸵����λ���ϵ��ַ������Ƚϣ���ͬ���������ڵ�����һ���𰸵ĳ��ȵ�90% ������Ϊ��Ϯ��
//
//
//
//
//	����
//
//	��һ������t��ʾ��t���Ծ�
//
//	�ڶ��������1���Ծ��ѧ��ѧ��
//
//	�����������1���Ծ����Ŀ1�𰸣���󳤶Ȳ�����100
//
//	�����������1���Ծ����Ŀ2�𰸣���󳤶Ȳ�����100
//
//	�����������1���Ծ����Ŀ3�𰸣���󳤶Ȳ�����100
//
//	ÿ���Ծ��Ӧ4������
//
//	��������t���Ծ������
//
//
//	���
//
//	��һ���У��ѷ��ֳ�Ϯ������ѧ�ź���Ŀ�������ֻ�����һ�η��ֳ�Ϯ����ţ�����֮���õ����ո����
//
//	�����������Ŀ1��Ϯ����Ŀ��Ϊ1���Դ�����
//
//	���˳���������ѧ��˳��������



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