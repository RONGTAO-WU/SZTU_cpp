#define _CRT_SECURE_NO_WARNINGS



#include<iostream>
using namespace std;



//  【id:27】【20分】A.对象数组（类和对象）

// 题目描述
//
// 课堂上我们谈到类这个概念，比如第一题我们有学生类这个抽象的概念，成千上万个学生都具有同样的属性，但针对某个具体学生来说，他 / 她具有自己的鲜明个性，比如计算机专业的王海同学，信息工程学院的李慧同学，那么我们是定义一个该类的变量：Student  student; 假设该类包含姓名、学号、性别、所属学院、联系电话等；在程序运行过程，把变量student赋予不同值就可以让它表示是王海还是李慧，尝试定义一个学生数组（比如四个元素大小，请思考此时四个对象是如何初始化的呢？），然后输入四个不同学生各项属性给数组里学生初始化（最好定义一个输入函数），然后输出该学生对象数组的各对象的姓名。
//
//
// 输入
//
// 输入数组元素的大小
//
// 依次每行输入每个对象的各项属性值，各属性值最大长度不超过30
//
//
// 输出
//
// 每行输出一个学生类对象的姓名



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







//  【id:156】【20分】B.存折类定义（类与对象）

// 题目描述
//
// 定义一个存折类CAccount，存折类具有帐号（account, long）、姓名（name, char[10])、余额（balance, float）等数据成员，可以实现存款（deposit, 操作成功提示“saving ok!”)、取款（withdraw，操作成功提示“withdraw ok!”）和查询余额（check）的操作，取款金额必须在余额范围内，否则提示“sorry!over limit!”。编写主函数，建立这个类的对象并测试，输入账号、姓名、余额后，按照查询余额、存款、查询余额、取款、查询余额的顺序调用类方法并输出。
//
//
// 输入
//
// 第一个存折的账号、姓名、余额
//
// 存款金额
//
// 取款金额
//
// 第二个存折的账号、姓名、余额
//
// 存款金额
//
// 取款金额
//
//
// 输出
//
// 第一个存折的账户余额
//
// 存款操作结果
//
// 账户余额
//
// 取款操作结果
//
// 账户余额
//
// 第二个存折的账户余额
//
// 存款操作结果
//
// 账户余额
//
// 取款操作结果
//
// 账户余额



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
//	//余额 //存款	//取款
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







//  【id:30】【20分】C. 点和圆 (类与对象)

// 题目描述
//
// 设计一个点类Point，包含属性：x坐标和y坐标，方法：设定坐标（setPoint），获取x坐标（getX），获取y坐标（getY）
//
// 设计一个圆类Circle，包含属性：圆心坐标x和y、半径r；方法包括：
//
// 1. 设定圆心（setCenter），设置圆心x坐标和y坐标
//
// 2. 设定半径（setRadius），设置半径长度
//
// 3. 计算面积（getArea），计算公式：面积 = 3.14 * r * r
//
// 4. 计算周长（getLength），计算公式：周长 = 2 * 3.14 * r
//
// 5. 包含（contain），判断一个圆是否包含一个点，计算圆心到这个点的距离，然后和半径做比较，大于则不包含，小于等于则包含
//
// 注意：提交代码时必须用注释划分出三个区域：类定义、类实现、主函数，如下
//
// //-----类定义------
//
// class XXX
//
// {
//
//     // 写类定义代码
//
// };
//
// //----类实现------
//
// void XXX::process()
//
//{
//
//     // 写类定义代码
//
// };
//
// //-----主函数-----
//
// int main()
//
//{
//
//    //自定义一些变量
//
//    //创建一个圆对象和一个点对象
//
//   //输入圆对象和点对象的属性数值，并做初始化
//
//   //输出圆的面积和圆的周长
//
//   //输出圆是否包含点，包含则输出yes，否则输出no
//
//    return 0;
//
//}
//
//
// 输入
//
// 第一行输入圆的三个整数参数：圆心的x和y坐标，半径
//
// 第二行输入点的两个整数参数：x和y坐标
//
//
// 输出
//
// 第一行输出圆的面积和周长，结果之间用空格隔开，输出精度到小数点后2位
//
// 第二行输出圆是否包含点，包含则输出yes，否则输出no
//
//
//
// 在C++中，输出指定精度的参考代码如下：
//
//
//
// #include <iostream>
//
// #include <iomanip> //必须包含这个头文件
//
// using namespace std;
//
// void main()
//
// {
//
//    double a = 3.14;
//
//    cout << fixed << setprecision(3) << a << endl;  //输出小数点后3位
//
// }



//#include<cmath>
//
//class Point {
//public:
//
//    int X,Y;
//
//    void set(int x1, int y1)              // 坐标
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
//	double setRadius;					    // 半径
//
//    void _setCenter(int x, int y)           // 圆心
//    {
//        setCenter.set(x, y);
//    }
//
//    void _setRadius(int r)                  // 半径
//    {
//        setRadius = r;
//    }
//
//	double _getArea()		                // 面积
//	{
//		double getArea = 3.14 * setRadius * setRadius;
//        return getArea;
//	}
//
//	double _getLength()                     // 周长
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







//  【id:160】【20分】D. 最胖的加菲（类与对象+数组）

// 题目描述
//
// 有一群猫猫，每只猫都有自己的名称和体重。
// 用类来描述猫，名称和体重都是私有属性，要求加入属性的get方法。其他函数根据需要自己定义
//
// 创建一个动态的猫对象数组，存储各只猫的名称和体重
// 根据猫的体重对数组做升序排序，并输出排序后每只猫的名称
//
// 题目涉及的数值均用整数处理
//
//
//
// 输入
//
// 第一行输入n表示有n只猫
// 第二行输入一只猫的名称和体重，名称的最大长度为30
// 依次输入n行
//
//
//
// 输出
//
// 输出一行，输出排序后的猫的名称



#include<algorithm>

class Cat {

    string name;                                            // long改为string程序正常运行，它们有什么区别
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

    string Name()                                           // 有无引用结果都一样，引用起什么作用
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







//  【id:162】【20分】E. 身体评估（类与对象）

// 题目描述
//
// 评估成年人身体健康有多个指标，包括BMI、体脂率等
// 设计一个身体健康类，包含私有成员：姓名、身高(米)、体重(公斤)，腰围(厘米)，实现两个公有方法如下：
// BMI方法，返回BMI数值(整数，四舍五入到个位)，计算公式BMI = 体重 / 身高的平方
// 体脂率方法，返回体脂率数值(浮点数)，计算过程如下：
// 1）参数a = 腰围（cm）×0.74
// 2）参数b = 体重（kg）×0.082 + 34.89
// 3）体脂肪重量（kg） = a－b
// 4）体脂率 = 体脂肪重量÷体重
// 其它方法根据需要自行定义
//
//
//
//
// 输入
//
// 第一行输入t表示有t个测试实例
// 第二行起，每行输入四个参数：姓名、身高、体重、腰围，姓名的最大长度不超过20
// 依次输入t行
//
//
//
//
// 输出
//
// 输出t行，每行输出一个实例的BMI和体脂率，BMI四舍五入到个位，体脂率小数数值精确到小数点后2位
//
// 在C++中，输出指定精度的参考代码如下：
//
//
//
// #include <iostream>
//
// #<iomanip> //必须包含这个头文件
//
// using namespace std;
//
// void main()
//
// {
//
//    double a = 3.14;
//
//    cout << fixed << setprecision(2) << a << endl;  //输出小数点后2位
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
//    void show()                                 //  1）参数a=腰围（cm）×0.74
//                                                //  2）参数b = 体重（kg）×0.082 + 34.89
//                                                //  3）体脂肪重量（kg） = a－b
//                                                //  4）体脂率 = 体脂肪重量÷体重
//    {
//
//        double BMI = weight / pow(height, 2);
//        double a = waist * 0.74;
//        double b = weight * 0.082 + 34.89;
//        double c = a - b;
//        double d = c / weight;
//
//        cout << name << "的BMI指数为" << fixed << setprecision(0) << BMI << 
//            "--体脂率为" << fixed << setprecision(2) << d << endl;
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
