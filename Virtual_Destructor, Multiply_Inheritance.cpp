//#include <iostream>
//using namespace std;
//
//class Student
//{
//	string name;
//	string specialization;
//	int* marks;
//	int markCount;
//public:
//	Student() :name("no name"),specialization("no specialization"), marks(nullptr), markCount(0) {}
//	Student(string n, string specialization):name(n), specialization(specialization)
//	{
//		this->markCount = rand() % 10 + 1;
//		marks = new int[markCount];
//		for (size_t i = 0; i < markCount; i++)
//		{
//			marks[i] = rand() % 4+8;
//		}
//	}
//	 virtual void Print()const
//	{
//		cout << "Name : " << name << endl;
//		cout << "Specialization : " << specialization << endl;
//		cout << "Marks : " << endl;
//		for (size_t i = 0; i < markCount; i++)
//		{
//			cout << marks[i] << " ";
//		}cout << endl;
//		
//		
//	}
//	virtual ~Student()
//	{
//		if (marks != nullptr)
//		{
//			delete[]marks;
//		}
//		cout << "Student destructor" << endl;
//	}
//};
//
//class Aspirant : public Student
//{
//	string *subjects;//*
//	int countSubject;
//public:
//	Aspirant(string name, string specialization, initializer_list<string> list): //int
//		Student(name,specialization) 
//	{
//		this->countSubject = list.size();
//		subjects = new string[countSubject];
//		int i = 0;
//		for (string elem:list)
//		{
//			subjects[i] = elem;
//			i++;
//		}
//	}
//	void Print()const override
//	{
//		Student::Print();
//		cout << "Subject : "<< endl;
//		for (size_t i = 0; i < countSubject; i++)
//		{
//			cout << subjects[i] << " ";
//		}cout << endl;
//	}
//	~Aspirant() override
//	{
//		if (subjects != nullptr)
//		{
//			delete[]subjects;
//		}
//		cout << "Aspirant destructor" << endl;
//	}
//};
//
//int main()
//{
//	srand(time(0));
//	/*Student st("Vasia","CyberSportsman");
//	st.Print();
//	Aspirant asp("Kolya", "Programmer", { "Virtual destructor","C++","Virtual","Multyply inheritance"});
//	asp.Print();*/
//
//	Student* group[3]
//	{
//		new Student("Vasia","CyberSportsman"),
//		new Aspirant("Kolya", "Programmer", { "Virtual destructor","C++","Virtual","Multyply inheritance"}),
//		new Aspirant("Petro", "Water Engeneer", { "Ecology","Water prepare","Virtual"})
//	};
//	for (size_t i = 0; i < 3; i++)
//	{
//		group[i]->Print(); 
//		delete group[i];
//	}
//
//}
