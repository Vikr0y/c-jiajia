//#include <iostream>
//using namespace std;
//const float PI = 3.1416;
//int main()
//{
//    int iType;
//    float radius, a, b, area;
//    cout << "图形的类型？（1为圆形，2为长方形，3为正方形）：";
//    while (cin >> iType) {
//        switch (iType)
//        {
//        case 1:
//            cout << "圆的半径为：";
//            cin >> radius;
//            area = PI * radius * radius;
//            cout << "面积为" << area << endl;
//            break;
//        case 2:
//            cout << "矩形的长为：";
//            cin >> a;
//            cout << "矩形的宽为：";
//            cin >> b;
//            area = a * b;
//            cout << "面积为：" << area << endl;
//            break;
//        case 3:
//            cout << "正方形的边长为：";
//            cin >> a;
//            area = a * a;
//            cout << "面积为：" << area << endl;
//            break;
//        default:
//            cout << "不是合法的输入值！" << endl;
//        }
//    };
//    
//    return 0;
//}

// #include<iostream>
//using namespace std;
//int main()
//{
//	int i = 1, sum = 0;
//	do {
//		sum += i;
//		i++;
//	} while (i <= 10);
//	cout << "sum=" << sum << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
////定义结构体
//struct MyTimeStruct
//{
//    unsigned int year;
//    unsigned int month;
//    unsigned int day;
//
//    unsigned int hour;
//    unsigned int min;
//    unsigned int sec;
//};
//
////主函数
//int main()
//{
//    MyTimeStruct mytime = {2023,3,16,12,0,0 };
//    cout << "now my time is: " << mytime.year;
//
//    cout << "please input year:" << endl;
//    cin >> mytime.year;
//
//    cout << "please input month:" << endl;
//    cin >> mytime.month;
//
//    cout << "please input day:" << endl;
//    cin >> mytime.day;
//
//    cout << "please input hour:" << endl;
//    cin >> mytime.hour;
//
//    cout << "please input min:" << endl;
//    cin >> mytime.min;
//
//    cout << "please input sec:" << endl;
//    cin >> mytime.sec;
//
//    cout << "the time is set to :" << mytime.year << "/"
//        << mytime.month << "/"
//        << mytime.day << " "
//        << mytime.hour << ":"
//        << mytime.min << ":"
//        << mytime.sec << endl;
//    return 0;
//}


//lab7_1
//#include<iostream>
//using namespace std;
//class Animal {
//public:
//	Animal() {};
//	Animal(int itsage) {
//		age = itsage;
//	};
//	~Animal() {};
//
//	int age;
//};
//class dog:public Animal
//{
//public:
//	dog(){};
//	~dog(){};
//	void SetAge(int n) {
//		age = n;
//	};
//
//};
//int main() {
//	dog dog1;
//	dog1.SetAge(5);
//	cout << "yes" << endl;
//	return 0;
//}

//lab7_2
//#include<iostream>
//using namespace std;
//class BaseClass {
//public:
//	BaseClass() {
//		cout << "BaseClass's Constructor is Called" << endl;
//	}
//	~BaseClass() {
//		cout << "BaseClass's Destructor is Called" << endl;
//	}
//private:
//	int Number;
//};
//class DerivedClass :public BaseClass {
//public:
//	DerivedClass() {
//		cout << "DerivedClass's Constructor is Called" << endl;
//	}
//	~DerivedClass() {
//		cout << "DerivedClass's Destructor is Called" << endl;
//	}
//};
//int main() {
//	DerivedClass a;
//	return 0;
//}

//lab7_3
//#include<iostream>
//using namespace std;
//class vehicle {
//public:
//	vehicle() {}
//	~vehicle(){}
//	virtual void Run() {
//		cout <<"A vehicle is running!" << endl;
//	}
//	virtual void Stop() {
//		cout << "A vehicle has stopped!" << endl;
//	}
//private:
//	float MaxSpeed;
//	float Weight;
//};
//class bicycle :virtual public vehicle {
//public:
//	bicycle(){}
//	~bicycle(){}
//	virtual void Run() {
//		cout << "A bicycle is running!" << endl;
//	}
//	virtual void Stop() {
//		cout << "A bicycle has stopped!" << endl;
//	}
//private:
//	float Height;
//	float Weight;
//};
//
//class motorcar :virtual public vehicle{
//public:
//	motorcar(){}
//	~motorcar() {};
//	virtual void Run() {
//		cout << "A motorcar is running!" << endl;
//	}
//	virtual void Stop() {
//		cout << "A motorcar has stopped!" << endl;
//	}
//private:
//	int SeatNum;
//	float Weight;
//};
//
//class motorcycle :public bicycle, public motorcar {
//public:
//	motorcycle() {}
//	~motorcycle() {}
//	virtual void Run() {
//		cout << "A motorcycle is running!" << endl;
//	}
//	virtual void Stop() {
//		cout << "A motorcycle has stopped!" << endl;
//	}
//};
//
//int main() {
//	vehicle* ptr;
//
//	vehicle a;
//
//	bicycle b;
//
//	motorcar c;
//
//	motorcycle d;
//
//	a.Run();
//
//	a.Stop();
//
//	b.Run();
//
//	b.Stop();
//
//	c.Run();
//
//	c.Stop();
//
//	d.Run();
//
//	d.Stop();
//
//	ptr = &a;
//
//	ptr->Run();
//
//	ptr = &b;
//
//	ptr->Run();
//
//	ptr = &c;
//
//	ptr->Run();
//
//	ptr = &d;
//
//	ptr->Run();
//}


//lab7_4
//#include<iostream>
//#include<string>
//#include<cstring>
//#include<cstdio>
//#include<cstdlib>
//using namespace std;
//class Data {
//public:
//    Data() {}
//    Data(int yy, int mm, int dd);
//    Data(Data& ap);
//    ~Data();
//    int get_year();
//    int get_month();
//    int get_day();
//    void set_year(int y);
//    void set_month(int m);
//    void set_day(int d);
//private:
//    int year;
//    int month;
//    int day;
//};
//Data::Data(int yy, int mm, int dd) {
//    year = yy;
//    month = mm;
//    day = dd;
//}
//Data::Data(Data& ap) {
//    year = ap.year;
//    month = ap.month;
//    day = ap.day;
//}
//Data::~Data() {
//
//}
//int Data::get_day() {
//    return day;
//}
//int Data::get_month() {
//    return month;
//}
//int Data::get_year() {
//    return year;
//}
//void Data::set_day(int d) {
//    day = d;
//}
//void Data::set_month(int m) {
//    month = m;
//}
//void Data::set_year(int y) {
//    year = y;
//}
//class People {
//public:
//    People(int num, string se, Data birthd, string iid);
//    People(People& tp);
//    People() {}
//    People get_People();
//    ~People() {
//
//    }
//    void set_number(int num) {
//        number = num;
//    }
//    void set_sex(string se) {
//        sex = se;
//    }
//    void set_birthday(Data birth) {
//        birthday = birth;
//    }
//    void set_id(string iidd) {
//        id = iidd;
//    }
//    int get_number();
//    string get_sex();
//    Data get_birthday();
//    string get_id();
//    void details();
//private:
//    int number;
//    string sex;
//    Data birthday;
//    string id;
//};
//inline int People::get_number() {
//    return number;
//}
//inline string People::get_sex() {
//    return sex;
//}
//inline string People::get_id() {
//    return id;
//}
//Data People::get_birthday() {
//    return birthday;
//}
//void People::details() {
//    cout << "Number:" << number << endl;
//    cout << "Sex:" << sex << endl;
//    cout << "Birhtday:" << birthday.get_year() << "/" << birthday.get_month() << "/" << birthday.get_day() << endl;
//    cout << "ID:" << id << endl;
//}
//People::People(int num, string se, Data birth, string iid) :birthday(birth) {
//    number = num;
//    sex = se;
//    id = iid;
//}
//People People::get_People() {
//    int num, yy, mm, dd;
//    string ID, se;
//    cout << "Please enter the number of the people:";
//    cin >> num;
//    cout << "Please enter the sex of the people:(male or female)";
//    cin >> se;
//    cout << "Please enter the birthday of the people:" << endl
//        << "(Warnning:The format is similar to 1998 8 3)" << endl;
//    cin >> yy >> mm >> dd;
//    cout << "Please enter the id of the people:";
//    cin >> ID;
//    Data birth(yy, mm, dd);
//    id = ID;
//    number = num;
//    sex = se;
//    birthday = birth;
//    return *this;
//}
//People::People(People& tp) {
//    number = tp.get_number();
//    sex = tp.get_sex();
//    id = tp.get_id();
//    birthday = tp.get_birthday();
//}
//class Student :virtual public People {
//public:
//    char classNo[7];
//    Student(int num, string se, Data birthd, string iid, char a[7]) :People(num, se, birthd, iid) {
//        strcpy(classNo, a);
//    }
//    ~Student() {
//
//    };
//    void Show_Student() {
//        cout << "This is student:" << endl;
//        cout << "ClassNo :" << classNo << endl;
//    }
//};
//class Teacher :virtual public People {
//public:
//    char principalship[11];
//    char department[21];
//    Teacher(int num, string se, Data birthd, string iid, char a[11], char b[21]) :People(num, se, birthd, iid) {
//        strcpy(principalship, a);
//        strcpy(department, b);
//    }
//    ~Teacher() {
//
//    }
//    void Show_Teacher() {
//        cout << "This is teacher:" << endl;
//        cout << "Principalship :" << principalship << endl;
//        cout << "Department :" << department << endl;
//    }
//};
//class Graduate :virtual public Student {
//public:
//    char subject[21];
//    Teacher adviser;
//    Graduate(int num, string se, Data birthd, string iid, char a[7], char c[21], Teacher vt) :People(num, se, birthd, iid), Student(num, se, birthd, iid, a) {
//        strcpy(subject, c);
//        adviser = vt;
//    }
//    ~Graduate() {
//
//    }
//    void Show_Graduate() {
//        cout << "This is Graduate:" << endl;
//        cout << "The subject:" << subject << endl;
//        cout << "The adviser teacher:" << endl;
//        cout << "Principalship:" << adviser.principalship << endl;
//        cout << "Department:" << adviser.department << endl;
//        cout << endl;
//    }
//};
//class TA :public Graduate, public Teacher {
//    TA(int num, string se, Data birthd, string iid, char a[7], char c[21], Teacher vt) :People(num, se, birthd, iid), Student(num, se, birthd, iid, a), Graduate(num, se, birthd, iid, a, c, vt) {
//
//    }
//    ~TA() {
//
//    }
//    void Show_TA() {
//        cout << "This is TA:" << endl;
//        cout << "The classNo:" << classNo << endl;
//    }
//};
//int main()
//{
//    People asp;
//    asp.get_People();
//    asp.details();
//    Data a(1998, 8, 3);
//    Student b(18, "male", a, "110", "001");
//    b.Show_Student();
//    Data a1(1987, 8, 3);
//    Teacher c(25, "female", a1, "1614", "Advanced", "Promotion");
//    c.Show_Teacher();
//    Data a2(1990, 8, 3);
//    Graduate d(22, "female", a2, "1013", "111", "CS", c);
//    d.Show_Graduate();
//    return 0;
//}


//#include<iostream>
//#include<string.h>
//using namespace std;
//
////日期类 
//class Date {
//public:
//	//无参构造函数
//	Date() {}
//	//有参构造函数
//	Date(int year, int month, int day) {
//		this->year = year;
//		this->month = month;
//		this->day = day;
//	}
//	//录入信息
//	void InDateInformation(int year, int month, int day) {
//		this->year = year;
//		this->month = month;
//		this->day = day;
//	}
//	//显示信息
//	void OutDateInformation() {
//		cout << "出生日期：" << year << "-" << month << "-" << day << endl;
//	}
//
//private:
//	int year;//年
//	int month;//月
//	int day;//日 
//};
//
////People 
//class People {
//public:
//	//无参构造函数
//	People() {}
//	//有参构造函数
//	People(char* name, char* number, char sex, int year, int month, int day, char* id) :birthday(year, month, day) {
//		strcpy_s(this->name, name);
//		strcpy_s(this->number, number);
//		this->sex = sex;
//		strcpy_s(this->id, id);
//	}
//	//信息录入
//	void input() {
//		int year, month, day;
//		cout << "姓名：";
//		cin >> name;
//		cout << "编号：";
//		cin >> number;
//		cout << "性别：";
//		cin >> sex;
//		cout << "身份证号：";
//		cin >> id;
//		cout << "出生日期(用空格隔开)：";
//		cin >> year >> month >> day;
//		flag = true;//存储信息后标记为true
//		birthday.InDateInformation(year, month, day);
//	}
//	//信息显示
//	void display() {
//		cout << endl
//			<< "姓名：" << name << endl
//			<< "编号：" << number << endl
//			<< "性别：" << sex << endl;
//		birthday.OutDateInformation();
//		cout << "身份证号：" << id << endl;
//	}
//	//拷贝构造函数
//	People(People& p) {
//		strcpy_s(name, p.name);
//		strcpy_s(number, p.number);
//		sex = p.sex;
//		birthday = p.birthday;
//		strcpy_s(id, p.id);
//		flag = p.flag;
//	}
//
//	//获取当前存储状态
//	bool GetFlag() {
//		return flag;
//	}
//private:
//	Date birthday;//内嵌日期类对象
//	char name[11];//姓名
//	char number[7];//编号
//	char sex;//性别 （f：女， m：男）
//	char id[16];//身份证号
//	bool flag = false;//标记信息是否存在,初始为空 
//};
//
////学生类student
//class student :virtual public People {
//public:
//	//无参构造函数 
//	student() {}
//	//有参构造函数
//	student(char* classNo) {
//		strcpy_s(this->classNo, classNo);
//	}
//	//信息录入
//	void input() {
//		cout << "班号：";
//		cin >> classNo;
//	}
//	//信息显示
//	void display() {
//		cout << "班号：：" << classNo << endl;
//	}
//private:
//	char classNo[7];//班号 
//};
//
////教师类teacher
//class teacher :virtual public People {
//public:
//	//无参构造函数
//	teacher() {}
//	//有参构造函数
//	teacher(char* principalship, char* department) {
//		strcpy_s(this->principalship, principalship);
//		strcpy_s(this->department, department);
//	}
//	//信息录入
//	void input() {
//		People::input();//基本信息 
//		cout << "职务：";
//		cin >> principalship;
//		cout << "部门：";
//		cin >> department;
//	}
//	//信息显示
//	void display() {
//		People::display();
//		cout << "职务：" << principalship << endl
//			<< "部门：" << department << endl;
//	}
//
//private:
//	char principalship[11];//职务
//	char department[21];//部门 
//};
//
////研究生graduate
//class graduate :virtual public student {
//public:
//	//无参构造函数 
//	graduate() {}
//	//有参构造函数
//	void gruduate(char* principalship) {
//		strcpy_s(this->subject, subject);
//	}
//	//信息录入
//	void input() {
//		People::input();//基本信息 
//		student::input();//班号 
//		cout << "专业：";
//		cin >> subject;
//	}
//	//信息显示
//	void display() {
//		People::display();
//		student::display();
//		cout << "专业：" << subject << endl;
//	}
//
//private:
//	teacher adviser;//导师 
//	char subject[21];//专业
//
//};
//
////助教 TA
//class TA :virtual public graduate, virtual public teacher {
//public:
//	//无参构造函数
//	TA() {}
//	//信息录入
//	void inputG() {
//		graduate::input();//研究生信息  
//	}
//	void inputT() {
//		teacher::input();//导师信息 
//	}
//	void displayG() {
//		graduate::display();//研究生信息 
//	}
//	void displayT() {
//		teacher::display();//导师信息
//	}
//	bool GetFlag() {
//		return People::GetFlag();
//	}
//};
//
//int main() {
//	TA gInformation[10];//对象数组 
//	TA tInformation[10];
//	int choose;
//	cout << endl
//		<< "1.录入研究生信息" << endl
//		<< "2.显示研究生信息" << endl
//		<< "3.录入导师信息" << endl
//		<< "4.显示导师信息" << endl
//		<< "0.退出" << endl << endl;
//	cout << endl << "请选择:";
//	cin >> choose;
//	while (choose != 0) {
//		switch (choose) {
//		case 1: {
//			cout << endl << "请输入研究生信息(f：女，m：男)" << endl;
//			for (int i = 0; i < 10; i++) {
//				if (!(gInformation[i].GetFlag())) {
//					gInformation[i].inputG();//调用函数
//					break;
//				}
//			}
//			break;
//		}
//		case 2: {
//			cout << endl << "研究生信息如下：";
//			for (int i = 0; i < 10; i++) {
//				if (gInformation[i].GetFlag()) {
//					gInformation[i].displayG();//调用函数 
//				}
//			}
//			break;
//		}
//		case 3: {
//			cout << endl << "请输入导师信息(f：女，m：男)" << endl;
//			for (int i = 0; i < 10; i++) {
//				if (!(tInformation[i].GetFlag())) {
//					tInformation[i].inputT();//调用函数
//					break;
//				}
//			}
//			break;
//		}
//		case 4: {
//			cout << endl << "导师信息如下：";
//			for (int i = 0; i < 10; i++) {
//				if (tInformation[i].GetFlag()) {
//					tInformation[i].displayT();//调用函数 
//				}
//			}
//			break;
//		}
//		default: {
//			cout << "您的选择不正确，请重新输入！" << endl;
//			break;
//		}
//		}
//		cout << endl << "请选择:";
//		cin >> choose;
//	}
//	return 0;
//}


//#include <iostream>
//
//class Point {
//private:
//    int x;
//    int y;
//
//public:
//    // 构造函数
//    Point(int xCoord = 0, int yCoord = 0) : x(xCoord), y(yCoord) {}
//
//    // 重载前置递增运算符 ++
//    Point& operator++() {
//        ++x;
//        ++y;
//        return *this;
//    }
//
//    // 重载前置递减运算符 --
//    Point& operator--() {
//        --x;
//        --y;
//        return *this;
//    }
//
//    // 重载输入运算符 >>
//    friend std::istream& operator>>(std::istream& in, Point& point) {
//        in >> point.x >> point.y;
//        return in;
//    }
//
//    // 重载输出运算符 <<
//    friend std::ostream& operator<<(std::ostream& out, const Point& point) {
//        out << "(" << point.x << ", " << point.y << ")";
//        return out;
//    }
//};
//
//int main() {
//    Point p;
//
//    std::cout << "Enter coordinates (x y): ";
//    std::cin >> p; // 使用重载的输入运算符 >>
//
//    std::cout << "Original Point: " << p << std::endl; // 使用重载的输出运算符 <<
//
//    ++p; // 使用重载的前置递增运算符 ++
//    std::cout << "After ++p: " << p << std::endl;
//
//    --p; // 使用重载的前置递减运算符 --
//    std::cout << "After --p: " << p << std::endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Point {
//private:
//    int x;
//    int y;
//
//public:
//    Point(int xCoord = 0, int yCoord = 0) : x(xCoord), y(yCoord) {}
//
//    // 重载前置递增运算符 ++
//    Point& operator++() {
//        ++x;
//        ++y;
//        return *this;
//    }
//
//    // 重载后置递增运算符 ++
//    Point operator++(int) {
//        Point temp(*this);
//        ++(*this);
//        return temp;
//    }
//
//    // 重载前置递减运算符 --
//    Point& operator--() {
//        --x;
//        --y;
//        return *this;
//    }
//
//    // 重载后置递减运算符 --
//    Point operator--(int) {
//        Point temp(*this);
//        --(*this);
//        return temp;
//    }
//
//    // 友元函数，重载输出运算符 <<
//    friend std::ostream& operator<<(std::ostream& out, const Point& p) {
//        out << p.x << " " << p.y ;
//        return out;
//    }
//
//    // 友元函数，重载输入运算符 >>
//    friend std::istream& operator>>(std::istream& in, Point& p) {
//        in >> p.x >> p.y;
//        return in;
//    }
//};
//
//int main()
//
//    {
//
//        Point p;
//
//        cin >> p;
//
//        cout << p << endl;
//
//        cout << "使用前自增" << ++p << endl;
//
//        cout << p << endl;
//
//        cout << "使用后自增" << p++ << endl;
//
//        cout << p << endl;
//
//        cout << "使用前自减" << --p << endl;
//
//        cout << p << endl;
//
//        cout << "使用后自减" << p-- << endl;
//
//        return 0;
//
//}



//#include <iostream>
//#include <cstring>
//using namespace std;
//class date {
//private:
//    int year;
//    int month;
//    int day;
//
//public:
//    date(int y, int m, int d) : year(y), month(m), day(d) {}
//
//    void showdate() const {
//        cout << year << "-" << month << "-" << day;
//    }
//};
//
//class People {
//private:
//    char name[11];
//    char sex;
//    date birthday;
//    char id[16];
//
//public:
//    // 默认构造函数
//    People() : sex('\0'), birthday(0, 0, 0) {
//        name[0] = '\0';
//        id[0] = '\0';
//    }
//
//    // 构造函数
//    People(const char* n, char s, const date& b, const char* i) : sex(s), birthday(b) {
//        strncpy_s(name, n, 10);
//        name[10] = '\0';
//        strncpy_s(id, i, 15);
//        id[15] = '\0';
//    }
//
//    // 拷贝构造函数
//    People(const People& other) : sex(other.sex), birthday(other.birthday) {
//        strncpy_s(name, other.name, 10);
//        name[10] = '\0';
//        strncpy_s(id, other.id, 15);
//        id[15] = '\0';
//    }
//
//    // 析构函数
//    ~People() {}
//
//    // 输出成员函数
//    void show(){
//        cout << "姓名：" << name << "  性别：" << sex << "  出生日期：";
//        birthday.showdate();
//        cout << " ID：" << id << endl;
//    }
//
//    // 赋值运算符重载
//    People& operator=(const People& other) {
//        if (this != &other) {
//            sex = other.sex;
//            birthday = other.birthday;
//            strncpy_s(name, other.name, 10);
//            name[10] = '\0';
//            strncpy_s(id, other.id, 15);
//            id[15] = '\0';
//        }
//        return *this;
//    }
//
//    // 比较运算符重载
//    bool operator==(const People& other) const {
//        return strcmp(id, other.id) == 0;
//    }
//};
//
//int main() {
//    date birthday1(2010, 11, 12);
//    char name1[11] = "张三";
//    char sex1 = 'm';
//    char id1[16] = "32122300";
//    People p1(name1, sex1, birthday1, id1);
//
//    cout << "p1：";
//    p1.show();
//
//    date birthday2(2010, 11, 14);
//    char name2[11] = "李四";
//    char sex2 = 'm';
//    char id2[16] = "32122301";
//    People p2(name2, sex2, birthday2, id2);
//
//    cout << "p2：";
//    p2.show();
//
//    if (p1 == p2) {
//        cout << "p1与p2ID相同" << std::endl;
//    }
//    else {
//        cout << "p1与p2ID不同" << std::endl;
//    }
//
//    People p3;  // 使用默认构造函数
//    p3 = p1;
//
//    cout << "p3：";
//    p3.show();
//
//    if (p1 == p3) {
//        cout << "p1与p3ID相同" << endl;
//    }
//    else {
//        cout << "p1与p3ID不同" << endl;
//    }
//
//    return 0;
//}


