#define _CRT_SECURE_NO_WARNINGS



#include<iostream>
using namespace std;



//  ��id:27����20�֡�A.�������飨��Ͷ���

// ��Ŀ����
//
// ����������̸���������������һ��������ѧ�����������ĸ����ǧ�����ѧ��������ͬ�������ԣ������ĳ������ѧ����˵���� / �������Լ����������ԣ���������רҵ������ͬѧ����Ϣ����ѧԺ�����ͬѧ����ô�����Ƕ���һ������ı�����Student  student; ����������������ѧ�š��Ա�����ѧԺ����ϵ�绰�ȣ��ڳ������й��̣��ѱ���student���費ֵͬ�Ϳ���������ʾ������������ۣ����Զ���һ��ѧ�����飨�����ĸ�Ԫ�ش�С����˼����ʱ�ĸ���������γ�ʼ�����أ�����Ȼ�������ĸ���ͬѧ���������Ը�������ѧ����ʼ������ö���һ�����뺯������Ȼ�������ѧ����������ĸ������������
//
//
// ����
//
// ��������Ԫ�صĴ�С
//
// ����ÿ������ÿ������ĸ�������ֵ��������ֵ��󳤶Ȳ�����30
//
//
// ���
//
// ÿ�����һ��ѧ������������



//class student {
//private:
//	string name, id, sex, sch, phone;
//
//public:
//	void set() 
//	{
//		cin >> name >> id >> sex >> sch >> phone;
//	}
//	void out()
//	{
//		cout << name << endl;
//	}
//};
//
//int main()
//{
//	int n;
//	cin >> n;
//	student* stu;
//	stu = new student[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		stu[i].set();
//	}
//	for (int i = 0; i < n; i++) {
//		stu[i].out();
//	}
//
//
//	delete[] stu;
//
//
//
//	return 0;
//}







//  ��id:156����20�֡�B.�����ඨ�壨�������

// ��Ŀ����
//
// ����һ��������CAccount������������ʺţ�account, long����������name, char[10])����balance, float�������ݳ�Ա������ʵ�ִ�deposit, �����ɹ���ʾ��saving ok!��)��ȡ�withdraw�������ɹ���ʾ��withdraw ok!�����Ͳ�ѯ��check���Ĳ�����ȡ�����������Χ�ڣ�������ʾ��sorry!over limit!������д�����������������Ķ��󲢲��ԣ������˺š����������󣬰��ղ�ѯ������ѯ��ȡ���ѯ����˳������෽���������
//
//
// ����
//
// ��һ�����۵��˺š����������
//
// �����
//
// ȡ����
//
// �ڶ������۵��˺š����������
//
// �����
//
// ȡ����
//
//
// ���
//
// ��һ�����۵��˻����
//
// ���������
//
// �˻����
//
// ȡ��������
//
// �˻����
//
// �ڶ������۵��˻����
//
// ���������
//
// �˻����
//
// ȡ��������
//
// �˻����



//class CAccount 
//{
//	
//public:
//	long account;
//	string name;
//	double balance;											
//
//
//public:
//		void set() 
//		{
//			cin >> account >> name>> balance;
//		}
//
//
//	void out()
//	{
//		cout << name << "'s balance is " << balance << endl;
//	}
//
//	void deposit(double x)
//	{
//		balance += x;
//		cout << "saving ok!" << endl;
//	}
//
//	void withdraw(double y)
//	{
//		if (y <= balance)
//		{
//			balance -= y;
//			cout << "withdraw ok!" << endl;
//		}
//		else
//			cout << "sorry! over limit!" << endl;
//
//	}
//
//}; 
//
//int main()
//{
//
//	long account;
//	string name;
//	double balance, deposit, withdraw;
//	//��� //���	//ȡ��
//
//	CAccount* stu;
//	stu = new CAccount[2];
//
//	for (int i = 0; i < 2; i++)
//	{
//	                 
//		stu[i].set();
//		stu[i].out();
//
//		cin >> deposit;
//		stu[i].deposit(deposit);
//		stu[i].out();
//
//		cin >> withdraw;
//		stu[i].withdraw(withdraw);
//		stu[i].out();
//	}
//
//	delete[] stu;
//
//	return 0;
//}







//  ��id:30����20�֡�C. ���Բ (�������)

// ��Ŀ����
//
// ���һ������Point���������ԣ�x�����y���꣬�������趨���꣨setPoint������ȡx���꣨getX������ȡy���꣨getY��
//
// ���һ��Բ��Circle���������ԣ�Բ������x��y���뾶r������������
//
// 1. �趨Բ�ģ�setCenter��������Բ��x�����y����
//
// 2. �趨�뾶��setRadius�������ð뾶����
//
// 3. ���������getArea�������㹫ʽ����� = 3.14 * r * r
//
// 4. �����ܳ���getLength�������㹫ʽ���ܳ� = 2 * 3.14 * r
//
// 5. ������contain�����ж�һ��Բ�Ƿ����һ���㣬����Բ�ĵ������ľ��룬Ȼ��Ͱ뾶���Ƚϣ������򲻰�����С�ڵ��������
//
// ע�⣺�ύ����ʱ������ע�ͻ��ֳ����������ඨ�塢��ʵ�֡�������������
//
// //-----�ඨ��------
//
// class XXX
//
// {
//
//     // д�ඨ�����
//
// };
//
// //----��ʵ��------
//
// void XXX::process()
//
//{
//
//     // д�ඨ�����
//
// };
//
// //-----������-----
//
// int main()
//
//{
//
//    //�Զ���һЩ����
//
//    //����һ��Բ�����һ�������
//
//   //����Բ����͵�����������ֵ��������ʼ��
//
//   //���Բ�������Բ���ܳ�
//
//   //���Բ�Ƿ�����㣬���������yes���������no
//
//    return 0;
//
//}
//
//
// ����
//
// ��һ������Բ����������������Բ�ĵ�x��y���꣬�뾶
//
// �ڶ�����������������������x��y����
//
//
// ���
//
// ��һ�����Բ��������ܳ������֮���ÿո������������ȵ�С�����2λ
//
// �ڶ������Բ�Ƿ�����㣬���������yes���������no
//
//
//
// ��C++�У����ָ�����ȵĲο��������£�
//
//
//
// #include <iostream>
//
// #include <iomanip> //����������ͷ�ļ�
//
// using namespace std;
//
// void main()
//
// {
//
//    double a = 3.14;
//
//    cout << fixed << setprecision(3) << a << endl;  //���С�����3λ
//
// }



//#include<cmath>
//
//class Point {
//public:
//
//    int X,Y;
//
//    void set(int x1, int y1)              // ����
//    {
//        X = x1;
//        Y = y1;
//    }
//
//    int getX()
//    {
//        return X;
//    }
//
//    int getY()
//    {
//        return Y;
//    }
//};
//
//class Circle {
//
//public:
//	
//    Point setCenter;
//	double setRadius;					    // �뾶
//
//    void _setCenter(int x, int y)           // Բ��
//    {
//        setCenter.set(x, y);
//    }
//
//    void _setRadius(int r)                  // �뾶
//    {
//        setRadius = r;
//    }
//
//	double _getArea()		                // ���
//	{
//		double getArea = 3.14 * setRadius * setRadius;
//        return getArea;
//	}
//
//	double _getLength()                     // �ܳ�
//	{
//		double getLength = 2 * 3.14 * setRadius;
//        return getLength;
//	}
//
//    int contain(Point& s)             //  dis =sqrt [ (x1-x2)^2  + (y1-y2)^2 ] 
//    {
//        return bool(sqrt(pow(s.getX() - setCenter.getX(), 2) + pow(s.getY() - setCenter.getY(), 2)) >= setRadius);
//    }
//};
//
//int main()
//{
//    int x, y, r, x1, y1;
//    cin >> x >> y >> r;
//    cin >> x1 >> y1;
//
//    Circle round;
//    Point dot;
//
//    round._setCenter(x, y);
//    round._setRadius(r);
//    dot.set(x1,y1);
//
//
//    double getArea = round._getArea();
//    double getLength = round._getLength();
//
//    printf("%.2f %.2f\n", getArea, getLength);
//
//    if (round.contain(dot)) 
//               cout << "no" << endl;
//            else 
//               cout << "yes" << endl;
//
//
//	return 0;
//}







//  ��id:160����20�֡�D. ���ֵļӷƣ��������+���飩

// ��Ŀ����
//
// ��һȺèè��ÿֻè�����Լ������ƺ����ء�
// ����������è�����ƺ����ض���˽�����ԣ�Ҫ��������Ե�get��������������������Ҫ�Լ�����
//
// ����һ����̬��è�������飬�洢��ֻè�����ƺ�����
// ����è�����ض��������������򣬲���������ÿֻè������
//
// ��Ŀ�漰����ֵ������������
//
//
//
// ����
//
// ��һ������n��ʾ��nֻè
// �ڶ�������һֻè�����ƺ����أ����Ƶ���󳤶�Ϊ30
// ��������n��
//
//
//
// ���
//
// ���һ�У����������è������



#include<algorithm>

class Cat {

    string name;                                            // long��Ϊstring�����������У�������ʲô����
    double weight;

public:

    void _name(const string n) 
    {
        name = n;
    }

    void _weight(const double w)
    {
        weight = w;
    }

    string Name()                                           // �������ý����һ����������ʲô����
    {
        return name;
    }

    double Weight()
    {
        return weight;
    }
 


};

bool _sort(Cat a, Cat b)
{
    return a.Weight() < b.Weight();
}

int main()
{
    int n;
    cin >> n;

    Cat* ret = new Cat[n];
    string name;
    double weight;
   

    for (int i = 0; i < n; i++)
    {
        
        cin >> name >> weight;
        ret[i]._name(name);
        ret[i]._weight(weight);

    }


    sort(ret, ret + n, _sort);

    for (int i = 0; i < n; i++)
    {
        cout << ret[i].Name() << " ";
    }
    cout << endl;

    delete []ret;
    return 0;
}







//  ��id:162����20�֡�E. �����������������

// ��Ŀ����
//
// �������������彡���ж��ָ�꣬����BMI����֬�ʵ�
// ���һ�����彡���࣬����˽�г�Ա�����������(��)������(����)����Χ(����)��ʵ���������з������£�
// BMI����������BMI��ֵ(�������������뵽��λ)�����㹫ʽBMI = ���� / ��ߵ�ƽ��
// ��֬�ʷ�����������֬����ֵ(������)������������£�
// 1������a = ��Χ��cm����0.74
// 2������b = ���أ�kg����0.082 + 34.89
// 3����֬��������kg�� = a��b
// 4����֬�� = ��֬������������
// ��������������Ҫ���ж���
//
//
//
//
// ����
//
// ��һ������t��ʾ��t������ʵ��
// �ڶ�����ÿ�������ĸ���������������ߡ����ء���Χ����������󳤶Ȳ�����20
// ��������t��
//
//
//
//
// ���
//
// ���t�У�ÿ�����һ��ʵ����BMI����֬�ʣ�BMI�������뵽��λ����֬��С����ֵ��ȷ��С�����2λ
//
// ��C++�У����ָ�����ȵĲο��������£�
//
//
//
// #include <iostream>
//
// #<iomanip> //����������ͷ�ļ�
//
// using namespace std;
//
// void main()
//
// {
//
//    double a = 3.14;
//
//    cout << fixed << setprecision(2) << a << endl;  //���С�����2λ
//
// }



//#include <iomanip>
//#include <cmath>
//
//class index
//{
//    string name;
//    double height;
//    double weight;
//    double waist;
//
//public:
//
//    void set()
//    {
//        cin >> name >> height >> weight >> waist;
//    }
//
//    void show()                                 //  1������a=��Χ��cm����0.74
//                                                //  2������b = ���أ�kg����0.082 + 34.89
//                                                //  3����֬��������kg�� = a��b
//                                                //  4����֬�� = ��֬������������
//    {
//
//        double BMI = weight / pow(height, 2);
//        double a = waist * 0.74;
//        double b = weight * 0.082 + 34.89;
//        double c = a - b;
//        double d = c / weight;
//
//        cout << name << "��BMIָ��Ϊ" << fixed << setprecision(0) << BMI << 
//            "--��֬��Ϊ" << fixed << setprecision(2) << d << endl;
//
//
//    }
//};
//
//int main()
//{
//    int t;
//    cin >> t;
//
//    index* stu = new index[t];
//
//    for (int i = 0; i < t; i++)
//    {
//        stu[i].set();
//        stu[i].show();
//    }
//
//    delete[]stu;
//
//    return 0;
//}
