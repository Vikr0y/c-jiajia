//#include <iostream>
//using namespace std;
//const float PI = 3.1416;
//int main()
//{
//    int iType;
//    float radius, a, b, area;
//    cout << "ͼ�ε����ͣ���1ΪԲ�Σ�2Ϊ�����Σ�3Ϊ�����Σ���";
//    while (cin >> iType) {
//        switch (iType)
//        {
//        case 1:
//            cout << "Բ�İ뾶Ϊ��";
//            cin >> radius;
//            area = PI * radius * radius;
//            cout << "���Ϊ" << area << endl;
//            break;
//        case 2:
//            cout << "���εĳ�Ϊ��";
//            cin >> a;
//            cout << "���εĿ�Ϊ��";
//            cin >> b;
//            area = a * b;
//            cout << "���Ϊ��" << area << endl;
//            break;
//        case 3:
//            cout << "�����εı߳�Ϊ��";
//            cin >> a;
//            area = a * a;
//            cout << "���Ϊ��" << area << endl;
//            break;
//        default:
//            cout << "���ǺϷ�������ֵ��" << endl;
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
////����ṹ��
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
////������
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
////������ 
//class Date {
//public:
//	//�޲ι��캯��
//	Date() {}
//	//�вι��캯��
//	Date(int year, int month, int day) {
//		this->year = year;
//		this->month = month;
//		this->day = day;
//	}
//	//¼����Ϣ
//	void InDateInformation(int year, int month, int day) {
//		this->year = year;
//		this->month = month;
//		this->day = day;
//	}
//	//��ʾ��Ϣ
//	void OutDateInformation() {
//		cout << "�������ڣ�" << year << "-" << month << "-" << day << endl;
//	}
//
//private:
//	int year;//��
//	int month;//��
//	int day;//�� 
//};
//
////People 
//class People {
//public:
//	//�޲ι��캯��
//	People() {}
//	//�вι��캯��
//	People(char* name, char* number, char sex, int year, int month, int day, char* id) :birthday(year, month, day) {
//		strcpy_s(this->name, name);
//		strcpy_s(this->number, number);
//		this->sex = sex;
//		strcpy_s(this->id, id);
//	}
//	//��Ϣ¼��
//	void input() {
//		int year, month, day;
//		cout << "������";
//		cin >> name;
//		cout << "��ţ�";
//		cin >> number;
//		cout << "�Ա�";
//		cin >> sex;
//		cout << "���֤�ţ�";
//		cin >> id;
//		cout << "��������(�ÿո����)��";
//		cin >> year >> month >> day;
//		flag = true;//�洢��Ϣ����Ϊtrue
//		birthday.InDateInformation(year, month, day);
//	}
//	//��Ϣ��ʾ
//	void display() {
//		cout << endl
//			<< "������" << name << endl
//			<< "��ţ�" << number << endl
//			<< "�Ա�" << sex << endl;
//		birthday.OutDateInformation();
//		cout << "���֤�ţ�" << id << endl;
//	}
//	//�������캯��
//	People(People& p) {
//		strcpy_s(name, p.name);
//		strcpy_s(number, p.number);
//		sex = p.sex;
//		birthday = p.birthday;
//		strcpy_s(id, p.id);
//		flag = p.flag;
//	}
//
//	//��ȡ��ǰ�洢״̬
//	bool GetFlag() {
//		return flag;
//	}
//private:
//	Date birthday;//��Ƕ���������
//	char name[11];//����
//	char number[7];//���
//	char sex;//�Ա� ��f��Ů�� m���У�
//	char id[16];//���֤��
//	bool flag = false;//�����Ϣ�Ƿ����,��ʼΪ�� 
//};
//
////ѧ����student
//class student :virtual public People {
//public:
//	//�޲ι��캯�� 
//	student() {}
//	//�вι��캯��
//	student(char* classNo) {
//		strcpy_s(this->classNo, classNo);
//	}
//	//��Ϣ¼��
//	void input() {
//		cout << "��ţ�";
//		cin >> classNo;
//	}
//	//��Ϣ��ʾ
//	void display() {
//		cout << "��ţ���" << classNo << endl;
//	}
//private:
//	char classNo[7];//��� 
//};
//
////��ʦ��teacher
//class teacher :virtual public People {
//public:
//	//�޲ι��캯��
//	teacher() {}
//	//�вι��캯��
//	teacher(char* principalship, char* department) {
//		strcpy_s(this->principalship, principalship);
//		strcpy_s(this->department, department);
//	}
//	//��Ϣ¼��
//	void input() {
//		People::input();//������Ϣ 
//		cout << "ְ��";
//		cin >> principalship;
//		cout << "���ţ�";
//		cin >> department;
//	}
//	//��Ϣ��ʾ
//	void display() {
//		People::display();
//		cout << "ְ��" << principalship << endl
//			<< "���ţ�" << department << endl;
//	}
//
//private:
//	char principalship[11];//ְ��
//	char department[21];//���� 
//};
//
////�о���graduate
//class graduate :virtual public student {
//public:
//	//�޲ι��캯�� 
//	graduate() {}
//	//�вι��캯��
//	void gruduate(char* principalship) {
//		strcpy_s(this->subject, subject);
//	}
//	//��Ϣ¼��
//	void input() {
//		People::input();//������Ϣ 
//		student::input();//��� 
//		cout << "רҵ��";
//		cin >> subject;
//	}
//	//��Ϣ��ʾ
//	void display() {
//		People::display();
//		student::display();
//		cout << "רҵ��" << subject << endl;
//	}
//
//private:
//	teacher adviser;//��ʦ 
//	char subject[21];//רҵ
//
//};
//
////���� TA
//class TA :virtual public graduate, virtual public teacher {
//public:
//	//�޲ι��캯��
//	TA() {}
//	//��Ϣ¼��
//	void inputG() {
//		graduate::input();//�о�����Ϣ  
//	}
//	void inputT() {
//		teacher::input();//��ʦ��Ϣ 
//	}
//	void displayG() {
//		graduate::display();//�о�����Ϣ 
//	}
//	void displayT() {
//		teacher::display();//��ʦ��Ϣ
//	}
//	bool GetFlag() {
//		return People::GetFlag();
//	}
//};
//
//int main() {
//	TA gInformation[10];//�������� 
//	TA tInformation[10];
//	int choose;
//	cout << endl
//		<< "1.¼���о�����Ϣ" << endl
//		<< "2.��ʾ�о�����Ϣ" << endl
//		<< "3.¼�뵼ʦ��Ϣ" << endl
//		<< "4.��ʾ��ʦ��Ϣ" << endl
//		<< "0.�˳�" << endl << endl;
//	cout << endl << "��ѡ��:";
//	cin >> choose;
//	while (choose != 0) {
//		switch (choose) {
//		case 1: {
//			cout << endl << "�������о�����Ϣ(f��Ů��m����)" << endl;
//			for (int i = 0; i < 10; i++) {
//				if (!(gInformation[i].GetFlag())) {
//					gInformation[i].inputG();//���ú���
//					break;
//				}
//			}
//			break;
//		}
//		case 2: {
//			cout << endl << "�о�����Ϣ���£�";
//			for (int i = 0; i < 10; i++) {
//				if (gInformation[i].GetFlag()) {
//					gInformation[i].displayG();//���ú��� 
//				}
//			}
//			break;
//		}
//		case 3: {
//			cout << endl << "�����뵼ʦ��Ϣ(f��Ů��m����)" << endl;
//			for (int i = 0; i < 10; i++) {
//				if (!(tInformation[i].GetFlag())) {
//					tInformation[i].inputT();//���ú���
//					break;
//				}
//			}
//			break;
//		}
//		case 4: {
//			cout << endl << "��ʦ��Ϣ���£�";
//			for (int i = 0; i < 10; i++) {
//				if (tInformation[i].GetFlag()) {
//					tInformation[i].displayT();//���ú��� 
//				}
//			}
//			break;
//		}
//		default: {
//			cout << "����ѡ����ȷ�����������룡" << endl;
//			break;
//		}
//		}
//		cout << endl << "��ѡ��:";
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
//    // ���캯��
//    Point(int xCoord = 0, int yCoord = 0) : x(xCoord), y(yCoord) {}
//
//    // ����ǰ�õ�������� ++
//    Point& operator++() {
//        ++x;
//        ++y;
//        return *this;
//    }
//
//    // ����ǰ�õݼ������ --
//    Point& operator--() {
//        --x;
//        --y;
//        return *this;
//    }
//
//    // ������������� >>
//    friend std::istream& operator>>(std::istream& in, Point& point) {
//        in >> point.x >> point.y;
//        return in;
//    }
//
//    // ������������ <<
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
//    std::cin >> p; // ʹ�����ص���������� >>
//
//    std::cout << "Original Point: " << p << std::endl; // ʹ�����ص��������� <<
//
//    ++p; // ʹ�����ص�ǰ�õ�������� ++
//    std::cout << "After ++p: " << p << std::endl;
//
//    --p; // ʹ�����ص�ǰ�õݼ������ --
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
//    // ����ǰ�õ�������� ++
//    Point& operator++() {
//        ++x;
//        ++y;
//        return *this;
//    }
//
//    // ���غ��õ�������� ++
//    Point operator++(int) {
//        Point temp(*this);
//        ++(*this);
//        return temp;
//    }
//
//    // ����ǰ�õݼ������ --
//    Point& operator--() {
//        --x;
//        --y;
//        return *this;
//    }
//
//    // ���غ��õݼ������ --
//    Point operator--(int) {
//        Point temp(*this);
//        --(*this);
//        return temp;
//    }
//
//    // ��Ԫ������������������ <<
//    friend std::ostream& operator<<(std::ostream& out, const Point& p) {
//        out << p.x << " " << p.y ;
//        return out;
//    }
//
//    // ��Ԫ������������������� >>
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
//        cout << "ʹ��ǰ����" << ++p << endl;
//
//        cout << p << endl;
//
//        cout << "ʹ�ú�����" << p++ << endl;
//
//        cout << p << endl;
//
//        cout << "ʹ��ǰ�Լ�" << --p << endl;
//
//        cout << p << endl;
//
//        cout << "ʹ�ú��Լ�" << p-- << endl;
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
//    // Ĭ�Ϲ��캯��
//    People() : sex('\0'), birthday(0, 0, 0) {
//        name[0] = '\0';
//        id[0] = '\0';
//    }
//
//    // ���캯��
//    People(const char* n, char s, const date& b, const char* i) : sex(s), birthday(b) {
//        strncpy_s(name, n, 10);
//        name[10] = '\0';
//        strncpy_s(id, i, 15);
//        id[15] = '\0';
//    }
//
//    // �������캯��
//    People(const People& other) : sex(other.sex), birthday(other.birthday) {
//        strncpy_s(name, other.name, 10);
//        name[10] = '\0';
//        strncpy_s(id, other.id, 15);
//        id[15] = '\0';
//    }
//
//    // ��������
//    ~People() {}
//
//    // �����Ա����
//    void show(){
//        cout << "������" << name << "  �Ա�" << sex << "  �������ڣ�";
//        birthday.showdate();
//        cout << " ID��" << id << endl;
//    }
//
//    // ��ֵ���������
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
//    // �Ƚ����������
//    bool operator==(const People& other) const {
//        return strcmp(id, other.id) == 0;
//    }
//};
//
//int main() {
//    date birthday1(2010, 11, 12);
//    char name1[11] = "����";
//    char sex1 = 'm';
//    char id1[16] = "32122300";
//    People p1(name1, sex1, birthday1, id1);
//
//    cout << "p1��";
//    p1.show();
//
//    date birthday2(2010, 11, 14);
//    char name2[11] = "����";
//    char sex2 = 'm';
//    char id2[16] = "32122301";
//    People p2(name2, sex2, birthday2, id2);
//
//    cout << "p2��";
//    p2.show();
//
//    if (p1 == p2) {
//        cout << "p1��p2ID��ͬ" << std::endl;
//    }
//    else {
//        cout << "p1��p2ID��ͬ" << std::endl;
//    }
//
//    People p3;  // ʹ��Ĭ�Ϲ��캯��
//    p3 = p1;
//
//    cout << "p3��";
//    p3.show();
//
//    if (p1 == p3) {
//        cout << "p1��p3ID��ͬ" << endl;
//    }
//    else {
//        cout << "p1��p3ID��ͬ" << endl;
//    }
//
//    return 0;
//}


