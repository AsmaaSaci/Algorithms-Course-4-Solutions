#include <iostream>
#include <string>
using namespace std;

//################################ Solution 1 ######################################

//void PrintName(string name) {
//    cout << "your name is :" << name << endl;
//}
//int main()
//{
//    PrintName("Asmaa");
//    return 0;
//}

//################################ Solution 2 ######################################

//string ReadName() {
//    string name;
//    cout << "please entre your name :" << endl;
//    getline(cin, name);
//    return name; 
//}
//
//void PrintName(string name) {
//    cout << "your name is :"<< name << endl;
//}
//int main()
//{
//    PrintName(ReadName());
//    return 0;
//}

//################################ Solution 3 ######################################

//enum enNumberType {Odd = 1,Even =2 };
//int ReadNumber() {
//    int num;
//    cout << "please entre your Number :" << endl;
//    cin >> num;
//    return num;
//}
//enNumberType checkNumberType (int num) {
//    int Result = num % 2;
//    if (Result == 0)
//        return enNumberType::Even;
//    else
//        return enNumberType::Odd;
//}
//void PrintTypeNamber(enNumberType NumberType){
//  
//    if (NumberType == enNumberType::Even)
//        cout << "\n Number is Even .\n";
//    else
//        cout << "\n Number is odd \n";
//}
//int main()
//{
//    PrintTypeNamber(checkNumberType(ReadNumber()));
//    return 0;
//}

//################################ Solution 3 ######################################

//enum enNumberType { Odd = 1, Even = 2 };
//int ReadNumber() {
//    int num;
//    cout << "please entre your Number :" << endl;
//    cin >> num;
//    return num;
//}
//enNumberType checkNumberType(int num) {
//    int Result = num % 2;
//    if (Result == 0)
//        return enNumberType::Even;
//    else
//        return enNumberType::Odd;
//}
//void PrintTypeNamber(enNumberType NumberType) {
//
//    if (NumberType == enNumberType::Even)
//        cout << "\n Number is Even .\n";
//    else
//        cout << "\n Number is odd \n";
//}
//int main()
//{
//    PrintTypeNamber(checkNumberType(ReadNumber()));
//    return 0;
//}

//######################### 4 ################################
//struct stInfo {
//    int Age;
//    bool HasDrivingLicense;
//};
//stInfo ReadInfo() {
//    stInfo Info;
//    cout << "please enter your Age ! " << endl;
//    cin >> Info.Age;
//
//    cout << "Do you have driver License " << endl;
//    cin >> Info.HasDrivingLicense;
//
//    return Info;
//}
//bool IsAccepted(stInfo Info) {
//    return (Info.Age >= 21 && Info.HasDrivingLicense);
//};
//void PrintResult(stInfo Info) {
//    if (IsAccepted(Info))
//        cout << "\n Hired " << endl;
//    else
//        cout << "\n Rejected " << endl;
//}
//int main()
//{
//    PrintResult(ReadInfo());
//    return 0;
//}

// ####################### 5 ###################################

//struct stInfo {
//    int Age;
//    bool HasDrivingLicense;
//    bool HasRecommendation;
//};
//stInfo ReadInfo() {
//    stInfo Info;
//    cout << "please enter your Age ! " << endl;
//    cin >> Info.Age;
//
//    cout << "Do you have driver License " << endl;
//    cin >> Info.HasDrivingLicense;
//     
//    cout << "Do you have Recommendation " << endl;
//    cin >> Info.HasRecommendation;
//
//    return Info;
//}
//bool IsAccepted(stInfo Info) {
//    return (Info.Age >= 21 && Info.HasDrivingLicense || Info.HasRecommendation);
//};
//void PrintResult(stInfo Info) {
//    if (IsAccepted(Info))
//        cout << "\n Hired " << endl;
//    else
//        cout << "\n Rejected " << endl;
//}
//int main()
//{
//    PrintResult(ReadInfo());
//    return 0;
//}

//################################ 6 #############################

//struct stInfo {
//    string FirstName;
//    string LastName;
//    
//};
//stInfo ReadInfo() {
//    stInfo Info;
//    cout << "please enter your First Name ! " << endl;
//    cin >> Info.FirstName;
//    cout << "please enter your Last Name ! " << endl;
//    cin >> Info.LastName;
//  
//    return Info;
//}
//string GetFullName(stInfo Info) {
//    string FullName = "";
//    FullName = Info.FirstName + " " + Info.LastName;
//    return FullName;
//};
//
//void PrintResult(string FullName) {
//    cout << "\n Your Full Name is : " << FullName << endl;
//};
//int main()
//{
//    PrintResult(GetFullName(ReadInfo()));
//    return 0;
//}

// ##################### 7 ######################
//int ReadNumber() {
//    int number;
//    cout << "please enter your Number ! " << endl;
//    cin >> number;
//    return number;
//}
//float CalculateHalfNumber(int number) {
//   
//    return (float) number /2;
//};
//
//void PrintResult(int number) {
//    string Result = "Half of " + to_string(number) + " is " + to_string(CalculateHalfNumber(number));
//    cout << endl << Result << endl;
//
//};
//int main()
//{
//    PrintResult((ReadNumber()));
//    return 0;
//}

//#################### 8 #################
//enum enPassFail {Pass = 1 , Fail = 2};
//int ReadMark() {
//    int Mark;
//    cout << "please enter your Mark ! " << endl;
//    cin >> Mark;
//    return Mark;
//}
//enPassFail ChekMark(int Mark) {
//    if (Mark >= 50)
//        return enPassFail::Pass;
//    else
//        return enPassFail::Fail;
//
//};
//
//void PrintResult(int Mark) {
//
//    if (ChekMark(Mark)== enPassFail::Pass)
//       cout << "\n You Passed" << endl;
//    else
//       cout << "\n You Faild " << endl;
//    
// 
//};
//int main()
//{
//    PrintResult(ReadMark());
//    return 0;
//}

//###################### 9 #################
//void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
//    cout << "Please enter your Mark 1: ";
//    cin >> Mark1;
//    cout << "Please enter your Mark 2: ";
//    cin >> Mark2;
//    cout << "Please enter your Mark 3: ";
//    cin >>Mark3;
//}
//
//int SumOfMarks(int& Mark1, int& Mark2, int& Mark3) {
//    return Mark1 + Mark2 + Mark3;
//}
//
//
//void PrintResult(int Total) {
//        cout << "\n The Total of sum is \n \n"<<Total <<endl;
//}
//
//int main() {
//    int Mark1, Mark2, Mark3;
//
//    ReadMarks(Mark1, Mark2, Mark3);
//    PrintResult(SumOfMarks(Mark1, Mark2, Mark3));
//    return 0;
//}

//####################### 10 #######################
//void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
//    cout << "Please enter your Mark 1: ";
//    cin >> Mark1;
//    cout << "Please enter your Mark 2: ";
//    cin >> Mark2;
//    cout << "Please enter your Mark 3: ";
//    cin >> Mark3;
//}
//
//int SumOfMarks(int& Mark1, int& Mark2, int& Mark3) {
//    return Mark1 + Mark2 + Mark3;
//}
//
//float CalculateAverage(int& Mark1, int& Mark2, int& Mark3) {
//    return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
// }
//
//void PrintResult(float Avr) {
//    cout << "\n Your Average is " << Avr << endl;
//}
//
//int main() {
//    int Mark1, Mark2, Mark3;
//
//    ReadMarks(Mark1, Mark2, Mark3);
//    PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
//    return 0;
//}

//############################ 11 ###########################
//enum enPassFail {Pass = 1 , Fail = 2};
//
//void ReadMarks(int& Mark1, int& Mark2, int& Mark3) {
//    cout << "Please enter your Mark 1: ";
//    cin >> Mark1;
//    cout << "Please enter your Mark 2: ";
//    cin >> Mark2;
//    cout << "Please enter your Mark 3: ";
//    cin >> Mark3;
//}
//
//int SumOfMarks(int& Mark1, int& Mark2, int& Mark3) {
//    return Mark1 + Mark2 + Mark3;
//}
//
//float CalculateAverage(int& Mark1, int& Mark2, int& Mark3) {
//    return (float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
//}
//enPassFail ChekMark(float Avr) {
//    if (Avr >= 50)
//        return enPassFail::Pass;
//    else
//        return enPassFail::Fail;
//};
//void PrintResult(float Avr) {
//    cout << "\n Your Average is " << Avr << endl;
//    if (ChekMark(Avr) == enPassFail::Pass)
//        cout << "\n You Passed" << endl;
//    else
//        cout << "\n You Faild " << endl;
//}
//
//int main() {
//    int Mark1, Mark2, Mark3;
//
//    ReadMarks(Mark1, Mark2, Mark3);
//    PrintResult(CalculateAverage(Mark1, Mark2, Mark3));
//    return 0;
//}

//############################ 12 ########################
//void ReadNumber(int& num1, int& num2) {
//    
//    cout << "please entre your First Number :" << endl;
//    cin >> num1;
//    cout << "please entre your Second Number :" << endl;
//    cin >> num2;
//}
//int MaxOfNumber(int& num1, int& num2) {
//   
//    if (num1 > num2)
//        return num1;
//    else
//        return num2;
//}
//void PrintResult(int Max) {
//        cout << "\n The Maximum Number is :"<< Max << endl;
//}
//int main()
//{
//    int num1,num2;
//    ReadNumber(num1, num2);
//    PrintResult(MaxOfNumber(num1, num2));
//    return 0;
//}

//####################### 13 ######################
//void ReadNumber(int& num1, int& num2, int& num3) {
//
//    cout << "please entre your First Number :" << endl;
//    cin >> num1;
//    cout << "please entre your Second Number :" << endl;
//    cin >> num2;
//    cout << "please entre your Third Number :" << endl;
//    cin >> num3;
//}
//int MaxOfNumber(int& num1, int& num2, int& num3) {
//
//    if (num1 > num2)
//        if (num1 > num3)
//            return num1;
//        else
//            return num3;
//    else
//        if  (num2 > num3)
//        return num2;
//        else 
//            return num3;
//}
//void PrintResult(int Max) {
//    cout << "\n The Maximum Number is :" << Max << endl;
//}
//int main()
//{
//    int num1, num2, num3;
//    ReadNumber(num1, num2, num3);
//    PrintResult(MaxOfNumber(num1, num2, num3));
//    return 0; 
//}

//################ 14 ########################
//void ReadNumbers(int& num1, int& num2) {
//	cout << "please entre your First Number :" << endl;
//	cin >> num1;
//	cout << "please entre your Second Number :" << endl;
//	cin >> num2;
//}
//void Swap(int& A, int& B) {
//	int Temp;
//	Temp = A;
//	A = B;
//	B = Temp;
//}
//void PrintNumbers(int& num1, int& num2) {
//	cout << "\n Number 1 = " << num1 << endl;
//	cout << "\n Number 2 " << num2 << endl;
//}
//int main()
//{
//	int num1, num2;
//	ReadNumbers(num1, num2);
//	PrintNumbers(num1, num2);
//	Swap(num1, num2);
//	PrintNumbers(num1, num2);
//	return 0;
//}

//#################### 15 ######################
//void ReadNumbers(float& A, float& B) {
//	cout << "please entre rectangle width A ? :" << endl;
//	cin >> A;
//	cout << "please entre rectangle length A ? :" << endl;
//	cin >> B;
//}
//float CalculateRectangleArea(float& A, float& B) {
//	return A * B;
//}
//void PrintNumbers(float Area) {
//	cout << "\n Rectangle Area = " << Area << endl;
//}
//int main()
//{
//	float A, B;
//	ReadNumbers(A, B);
//	PrintNumbers(CalculateRectangleArea(A, B));
//	return 0;
//}

//################################# 16 ####################
//void ReadNumbers(float& a, float& d) {
//	cout << "please entre rectangle width a ? :" << endl;
//	cin >> a;
//	cout << "please entre rectangle length d ? :" << endl;
//	cin >> d;
//}
//float RectangleAreaBySideAndDiagonal(float& a, float& d) {
//			float Area = a * sqrt(pow(d, 2) - pow(a, 2));
//			return Area;
//}
//void PrintNumbers(float Area) {
//	cout << "\n Rectangle Area = " << Area << endl;
//}
//int main()
//{
//	float a, d;
//	ReadNumbers(a, d);
//	PrintNumbers(RectangleAreaBySideAndDiagonal(a, d));
//	return 0;
//}

//#################### 17 ###########################
//void ReadNumbers(float& a, float& h) {
//	cout << "please entre a ? :" << endl;
//	cin >> a;
//	cout << "please entre h ? :" << endl;
//	cin >> h;
//}
//float TriangleArea(float& a, float& h) {
//	float Area = (a /2)*h;
//	return Area;
//}
//void PrintNumbers(float Area) {
//	cout << "\n Rectangle Area = " << Area << endl;
//}
//int main()
//{
//	float a, h;
//	ReadNumbers(a, h);
//	PrintNumbers(TriangleArea(a, h));
//	return 0;
//}

//######################### 18 ############
//void ReadNumbers(float& r) {
//	cout << "please entre r ? :" << endl;
//	cin >> r;
//}
//float CircleArea(float& r) {
//	const float PI = 3.141592653589793;
//	float Area = ceil(pow(r, 2) * PI);
//	return Area;
//}
//void PrintResult(float Area) {
//	cout << "\n Circle Area = " << Area << endl;
//}
//int main()
//{
//	float r;
//	ReadNumbers(r);
//	PrintResult(CircleArea(r));
//	return 0;
//}

//######################### 19 ################
//void ReadNumbers(float& d) {
//	cout << "please entre d ? :" << endl;
//	cin >> d;
//}
//float CircleArea(float& d) {
//	const float PI = 3.141592653589793;
//	float Area = ceil((PI * pow(d, 2)) / 4);
//	return Area;
//}
//void PrintResult(float Area) {
//	cout << "\n Circle Area = " << Area << endl;
//}
//int main()
//{
//	float d;
//	ReadNumbers(d);
//	PrintResult(CircleArea(d));
//	return 0;
//}

//############################ 20 ########################
//void ReadNumbers(float& A ){
//	cout << "please entre A ? :" << endl;
//	cin >> A;
//}
//float CircleArea(float& A) {
//	const float pi= 3.141592653589793;
//	float Area = ceil((pi * pow(A, 2)) / 4);
//	return Area;
//}
//void PrintResult(float Area) {
//	cout << "\n Circle Area = " << Area << endl;
//}
//int main()
//{
//	float A;
//	ReadNumbers(A);
//	PrintResult(CircleArea(A));
//	return 0;
//}

//####################### 21 #####################
//void ReadNumbers(float& l) {
//	cout << "please entre l ? :" << endl;
//	cin >> l;
//}
//float CircleArea(float& l) {
//	const float pi = 3.141592653589793;
//	float Area = ceil(pow(l, 2) / (pi * 4));
//	return Area;
//}
//void PrintResult(float Area) {
//	cout << "\n Circle Area = " << Area << endl;
//}
//int main()
//{
//	float l;
//	ReadNumbers(l);
//	PrintResult(CircleArea(l));
//	return 0;
//}

//########################## 22 #####################
//void ReadNumbers(float& A, float& B) {
//	cout << "please entre rectangle width A ? :" << endl;
//	cin >> A;
//	cout << "please entre rectangle length A ? :" << endl;
//	cin >> B;
//}
//float CircleAreaByTriangle(float& A, float& B) {
//	const float pi = 3.141592653589793;
//	
//	float Aria =(pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B)));
//return;
// 
//}
//void PrintResult(float Area) {
//	cout << "\n Rectangle Area = " << Area << endl;
//}
//int main()
//{
//	float A, B;
//	ReadNumbers(A, B);
//	PrintResult(CircleAreaByTriangle(A, B));
//	return 0;
//}

//################### 23 #################
//void ReadNumbers(float& A, float& B, float& C) {
//	cout << "please entre  A ? :" << endl;
//	cin >> A;
//	cout << "please entre B ? :" << endl;
//	cin >> B;
//	cout << "please entre C ? :" << endl;
//	cin >> C;
//}
//float CircleArea(float& A, float& B, float& C) {
//	const double pi = 3.141592653589793;
//	double p = (A + B+ C) / 2.0;
//	double areaTriangle = sqrt(p * (p - A) * (p - B) * (p - C));
//	double R = (A * B * C) / (4.0 * areaTriangle);
//	float	Area = round(pi * pow(R, 2));
//	return Area;
// 
//}
//void PrintResult(float Area) {
//	cout << "\n Area = " << Area << endl;
//}
//int main()
//{
//	float A, B, C;
//	ReadNumbers(A, B, C);
//	PrintResult(CircleArea(A, B, C));
//	return 0;
//}

//################### 24 #################
//int ReadAge() {
//
//	int Age;
//	cout << "Please enter your Age ? " << endl;
//	cin >> Age;
//	return Age;
// }
//bool ValidateNumberInRange(int Number, int From, int To) {
//	return (Number >= From && Number <= To);
//
//}
//void PrintResult(int Age) {
//	if (ValidateNumberInRange(Age, 18, 45))
//		cout << Age << " is a valid age \n";
//	else
//		cout << Age << " is a invalid age \n";
//
//}
//int main() {
//	PrintResult(ReadAge());
//	return 0;
//}

//############################### 25 ################
//int ReadAge() {
//
//	int Age;
//	cout << "Please enter your Age ? " << endl;
//	cin >> Age;
//	return Age;
//}
//bool ValidateNumberInRange(int Number, int From, int To) {
//	return (Number >= From && Number <= To);
//
//}
//int ReadUntilAgeBetween(int From, int To) {
//	int Age = 0;
//	do {
//		Age = ReadAge();
//	} while (!ValidateNumberInRange(Age, From, To));
//	return Age;
//}
//void PrintResult(int Age) {
//	if (ValidateNumberInRange(Age, 18, 45))
//		cout << Age << " is a valid age \n";
//	else
//		cout << Age << " is a invalid age \n";
//
//}
//int main() {
//	PrintResult(ReadUntilAgeBetween( 18, 45));
//	return 0;
//}

//############################### 26 ################
//int ReadNumber() {
//	int number;
//	cout << "please enter a number " << endl;
//	cin >> number; 
//	return number;
//}
//void PrintRangeFrom1ToN(int N) {
//
//	cout << "Range printed using for Statement :\n ";
//	for (int counter = 1; counter <= N; counter++)
//	{
//		cout << counter << endl;
//	}
//}
//int main() {
//	int N = ReadNumber();
//	PrintRangeFrom1ToN(N);
//	return 0;
//}
//############################### 27 ################ 
//int ReadNumber() {
//	int number;
//	cout << "please enter a number " << endl;
//	cin >> number; 
//	return number;
//}
//void PrintRangeFrom1ToN(int N) {
//
//	cout << "Range printed using for Statement :\n ";
//	for (int counter = N; counter >= 1; counter--)
//	{
//		cout << counter << endl;
//	}
//}
//int main() {
//	int N = ReadNumber();
//	PrintRangeFrom1ToN(N);
//	return 0;
//}
//############################### 28 ################ 
//enum enOddOrEven {Odd=1,Even=2};
//int ReadNumber() {
//	int number;
//	cout << "please enter a number " << endl;
//	cin >> number;
//	return number;
//}
//enOddOrEven CheckOddOrEven(int Number) {
//	if (Number % 2 != 0)
//		return enOddOrEven::Odd;
//	else
//		return enOddOrEven::Even;
//}
//int sumoddnumbersFrom1ToN(int N) {
//	int sum = 0;
//	cout << "Sum odd numbers using fro  Statement:\n ";
//
//	for (int i = 1; i <= N; i++) {
//		        if (CheckOddOrEven(i)==enOddOrEven::Odd) {
//		            sum += i;
//		        }
//		    }
//		
//		
//		    return  sum;
//		}
//int main() {
//	int N = ReadNumber();
//	cout<< sumoddnumbersFrom1ToN(N)<< endl ;
//	return 0;
//}
//############################### 29 ################ 
//enum enOddOrEven { Odd = 1, Even = 2 };
//int ReadNumber() {
//	int number;
//	cout << "please enter a number " << endl;
//	cin >> number;
//	return number;
//}
//enOddOrEven CheckOddOrEven(int Number) {
//	if (Number % 2 != 0)
//		return enOddOrEven::Odd;
//	else
//		return enOddOrEven::Even;
//}
//int sumoddnumbersFrom1ToN(int N) {
//	int sum = 0;
//	cout << "Sum Even numbers using for  Statement:\n ";
//
//	for (int i = 1; i <= N; i++) {
//		if (CheckOddOrEven(i) == enOddOrEven::Even) {
//			sum += i;
//		}
//	}
//
//
//	return  sum;
//}
//int main() {
//	int N = ReadNumber();
//	cout << sumoddnumbersFrom1ToN(N) << endl;
//	return 0;
//}
//############################### 30 ################ 

//int ReadPositiveNumber(string Message) {
//	int Number;
//    do 
//	 {
//			
//		cout << Message << endl;
//		cin >> Number;
//	} while (Number < 0);
//
//
//	return  Number;
//}
//int Factorial(int N) {
//	int F=1;
//	for (int counter = N; counter >= 1; counter--) {
//		F = F * counter;
//	}
//	
//	return F;
//}
//
//int main() {
//	cout <<Factorial(ReadPositiveNumber("Enter N!")) << endl;
//	return 0;
//}

//########################## 31 ##################
//int ReadNumber() {
//	int number;
//	cout << "please enter your number :" << endl;
//	cin >> number;
//	return number;
//}
//
//void PowerNumbers(int number) {
//	int a, b, c;
//	a = number * number;                 
//	b = number * number * number;         
//	c = number * number * number * number; 
//	cout << "Square: " << a << endl;
//	cout << "Cube: " << b << endl;
//	cout << "Power 4: " << c << endl;
//}
//
//int main() {
//	PowerNumbers(ReadNumber());  
//	return 0;
//}
//


//########################### 32 ##############################

//void ReadNumbers(int& number, int& M) {
//	cout << "please enter a number :" << endl;
//	cin >> number;
//	cout << "please enter a number of Power :" << endl;
//	cin >> M;
//}
//
//
//int PowerNumbers(int number, int M) {
//	if (M == 0) {
//		return 1;
//	}
//	int P = 1;
//	for (int i = 1; i <= M; i++) {
//		P = P * number;
//	} 	cout << "the result is : " << P << endl;
//
//	return P;
//}
//
//int main() {
//	int number, M;
//	ReadNumbers(number, M);
//    PowerNumbers(number, M);
//	return 0;
//}

//########################### 33 ##############################

//int ReadNumberInRange(int From, int To) {
//    int Grade;
//    do {
//        cout << "Please enter a grade between 0  and 100 ?" << endl;
//        cin >> Grade;
//    } while (Grade < From || Grade > To);
//    return Grade;
//}
//
//char GetGradLetter(int Grade) {
//    if (Grade >= 90) return 'A';
//    else if (Grade >= 80) return 'B';
//    else if (Grade >= 70) return 'C';
//    else if (Grade >= 60) return 'D';
//    else if (Grade >= 50) return 'E';
//    else return 'F';
//}
//
//int main() {
//    int grade = ReadNumberInRange(0, 100);
//    char letter = GetGradLetter(grade);
//    cout << endl << "Result = " << letter << endl;
//    return 0;
//}

//########################### 34 ##############################
//int ReadTotalSales() {
//	int TotalSales;
//	cout << "Please enter a Total Sales ! " << endl;
//	cin >> TotalSales;
//	return TotalSales;
//}
//float GetComissionPercentage(float TotalSales) {
//
//	    if (TotalSales >= 1000000)
//			return 0.01;
//	    else if (TotalSales >= 500000)
//			return 0.02;
//	    else if (TotalSales >= 100000)
//			return 0.03;
//	    else if (TotalSales >= 50000)
//			return 0.05;
//	    else
//			return 0.00;
//}
//float CalculateTotalComission(float TotalSales) {
//	return GetComissionPercentage(TotalSales) * TotalSales;
//}
//int main() {
//	float TotalSales = ReadTotalSales();
//	cout << endl << "Comission Percentage = " << GetComissionPercentage(TotalSales) << endl;
//	cout << endl << "Total Comission = " << CalculateTotalComission(TotalSales) << endl;
//}

//########################### 35 ##############################




//########################### 36 ##############################

//enum enOperationType { Add ='+',Subtract ='-',Multiply='*',Divide='/'};
//float ReadNumber(string Message) {
//	float Number = 0;
//	cout << Message << endl;
//	cin >> Number;
//	return Number;
// }
//enOperationType ReadOpType() {
//	char OT = '+';
//	cout << "Please enter Operation Type(+,-,*,/)!\n";
//	cin >> OT;
//	return (enOperationType)OT;
//}
//float Calculate(float Number1, float Number2, enOperationType OpType) {
//	switch (OpType) {
//	case enOperationType::Add:
//		return Number1 + Number2;
//	case enOperationType::Subtract:
//		return Number1 - Number2;
//	case enOperationType::Multiply:
//		return Number1 * Number2;
//	case enOperationType::Divide:
//		return Number1 / Number2;
//
//	}
//}
//int main() {
//	float Number1 = ReadNumber("Please enter the first number !");
//	float Number2 = ReadNumber("Please enter the second number !");
//
//	enOperationType OpType = ReadOpType();
//	cout << "Result = " << Calculate(Number1, Number2, OpType) << endl;
//
//	return 0;
//}

//####################### 37 ########################
//float ReadNumber(string Message) {
//	float Number = 0;
//	cout << Message << endl;
//	cin >> Number;
//	return Number;
// }
//float SumNumber() {
//	int sum = 0, Number = 0, Counter = 1;
//	do {
//		Number = ReadNumber("Please enter Number " + to_string(Counter));
//		if (Number == -99)
//		{
//			break;
//		}
//		sum += Number;
//		Counter++;
//	} while (Number != -99);
//	return sum;
//}
//int main() {
//	cout << endl << "Result = " << SumNumber() << endl;
//	return 0;
//}

//########################## 38 #############################
//enum enPrimNotPrime { Prime=1 , NotPrime =2};
//float ReadPositiveNumber(string Messsage) {
//	float Number = 0;
//	do {
//		cout << Messsage << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//enPrimNotPrime checkPrime(int Number) {
//	int M = round(Number / 2);
//	for (int Counter = 2; Counter <= M; Counter++) {
//		if (Number % Counter == 0)
//			return enPrimNotPrime::NotPrime;
//	}
//	return enPrimNotPrime::Prime;
//}
//void PrintNumberType(int Number) {
//	switch (checkPrime(Number))
//	{
//	case enPrimNotPrime::Prime:
//			cout << "The Number is Prime \n ";
//			break;
//	case enPrimNotPrime::NotPrime:
//			cout << "The Number is Not Prime \n ";
//			break;
//	}
//}
//int main() {
//	PrintNumberType(ReadPositiveNumber("Please enter a positive number ?"));
//	return 0;
//}
//########################## 39 #############################
//float ReadPositiveNumber(string Message) {
//	float Number = 0;
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//float CalculateRemainder(float TotalBill, float TotalCashPaid) {
//	return TotalCashPaid - TotalBill;
//}
//float main() {
//	float TotalBill = ReadPositiveNumber("Please Enter ToTal Bill ?");
//	float TotalCashPaid= ReadPositiveNumber("Please Enter ToTal Cash Paid ?");
//	cout << endl;
//	cout << "Total Bill = " << TotalBill << endl;
//	cout << "Total Cash Paid = " << TotalCashPaid << endl;
//	cout << "******************************\n";
//	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
//	return 0;
//}
//########################## 40 #############################
//int ReadPositiveNumber(string Message) {
//	float Number = 0;
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//int TotalBillAfterServiceAndTax(float TotalBill) {
//	TotalBill = TotalBill * 1.1;
//	TotalBill = TotalBill * 1.16;
//	return TotalBill;
//}
//int main() {
//	float TotalBill = ReadPositiveNumber("Please Enter Total Bill ?");
//	cout << endl;
//	cout << "Total Bill After Service fee and Sales Tax = "
//		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
//	return 0;
//}
//########################## 41 #############################
//int ReadPositiveNumber(string Message) {
//	float Number = 0;
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//float HoursToDays(float NumberOfHours) {
//	return (float)NumberOfHours / 24;
//}
//float HoursToWeeks(float NumberOfHours) {
//	return (float)NumberOfHours / 24/7;
//}
//float DaysToWeeks(float NumberOfDays) {
//	return (float)NumberOfDays / 7;
//}
//
//int main() {
//	float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours !");
//	float NumberOfDays = HoursToDays(NumberOfHours);
//	float NumberOfWeeks = DaysToWeeks(NumberOfDays);
//	cout << endl;
//	cout << "Total Hours = " << NumberOfHours << endl;
//	cout << "Total Days = " << NumberOfDays << endl;
//	cout << "Total Weeks = " << HoursToWeeks(NumberOfHours) << endl;
//}
//########################## 42 #############################
//struct strTaskDuration {
//	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
//};
//int ReadPositiveNumber(string Message) {
//	float Number = 0;
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//
//strTaskDuration ReadTaskDuration() {
//	strTaskDuration TaskDuration;
//	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number of Days !");
//	TaskDuration.NumberOfHours= ReadPositiveNumber("Please Enter Number of Hours !");
//	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number of Minutes !");
//	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number of Seconds !");
//	return TaskDuration;
//}
//int TaskDurationInSeconds(strTaskDuration TaskDuration) {
//	int DurationInSeconds = 0;
//	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
//	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
//	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
//	DurationInSeconds += TaskDuration.NumberOfSeconds;
//	return DurationInSeconds;
//}
//int main() {
//	cout << "\n  Task Duration In Seconds : " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
//	cout << endl;
//	return 0;
//}
//########################## 43 #############################
//struct strTaskDuration {
//	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
//};
//int ReadPositiveNumber(string Message) {
//	float Number = 0;
//	do {
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//
//strTaskDuration SecondsToTaskDuration(int TotalSeconds) {
//	strTaskDuration TaskDuration;
//	const int SecondsPerDay = 24 * 60 * 60;
//	const int SecondsPerHour = 60 * 60;
//	const int SecondsPerMinutes = 60;
//	int Remainder = 0;
//	TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
//	Remainder = TotalSeconds % SecondsPerDay;
//	TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
//	Remainder = Remainder % SecondsPerHour;
//	TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinutes);
//	Remainder = Remainder % SecondsPerMinutes;
//	TaskDuration.NumberOfSeconds = Remainder;
//		return TaskDuration;
//
//
//}
//void PrintTaskDurationDetails(strTaskDuration TaskDuration) {
//	cout << "\n";
//	cout << TaskDuration.NumberOfDays << ":"
//		<< TaskDuration.NumberOfHours << ":"
//		<< TaskDuration.NumberOfMinutes << ":"
//		<< TaskDuration.NumberOfSeconds << "\n";
//}
//int main() {
//	int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds ");
//	PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
//	return 0;
//}

//########################## 44 #############################
//enum enDayOfWeek {Sat =1 , Sun=2, Mon=3, Tue=4,Wed=5,Thu=6,Fri=7};
//int ReadNumberInRange(string Message, int From, int To) {
//	int Number = 0;
//	do
//	{
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <From || Number >To);
//	return Number;
//}
//enDayOfWeek ReadDayOfWeek() {
//	return (enDayOfWeek)ReadNumberInRange("Please enter day number (1 to 7): ", 1, 7);
//
//}
//string GetDayOfWeek(enDayOfWeek Day) {
//	switch (Day) {
//	case enDayOfWeek::Sat:
//		return "Saturday";
//	case enDayOfWeek::Sun:
//		return "Sunday";
//	case enDayOfWeek::Mon:
//		return "Monday";
//	case enDayOfWeek::Tue:
//		return "Tuesday";
//	case enDayOfWeek::Wed:
//		return "Wednesday";
//	case enDayOfWeek::Thu:
//		return "Thursday";   
//	case enDayOfWeek::Fri:
//		return "Friday";
//	default:
//		return "Not a Valid Day";
//	}
//}
//int main() {
//	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
//	return 0;
//}

//################################## 45 ##################################
//enum enMonthOfYear {
//	Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
//	Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
//};
//int ReadNumberInRange(string Message, int From, int To) {
//	int Number = 0;
//	do
//	{
//		cout << Message << endl;
//		cin >> Number;
//
//	} while (Number <From || Number >To);
//	return Number;
//}
//enMonthOfYear ReadMonthOfYear() {
//	return (enMonthOfYear)ReadNumberInRange("Please enter month number (1 to 12): ", 1, 12);
//}
//string GetMonthName(enMonthOfYear Month) {
//    switch (Month) {
//    case enMonthOfYear::Jan:
//        return "January";
//    case enMonthOfYear::Feb:
//        return "February";
//    case enMonthOfYear::Mar:
//        return "March";
//    case enMonthOfYear::Apr:
//        return "April";
//    case enMonthOfYear::May:
//        return "May";
//    case enMonthOfYear::Jun:
//        return "June";
//    case enMonthOfYear::Jul:
//        return "July";
//    case enMonthOfYear::Aug:
//        return "August";
//    case enMonthOfYear::Sep:
//        return "September";
//    case enMonthOfYear::Oct:
//        return "October";
//    case enMonthOfYear::Nov:
//        return "November";
//    case enMonthOfYear::Dec:
//        return "December";
//    default:
//        return "Not a Valid Month";
//    }
//}
//int main() {
//	cout << GetMonthName(ReadMonthOfYear()) << endl;
//	return 0;
//}

// ############################# 46 #############################
//void PrintLettersAtoZ() {
//	for(int i = 65; i <= 90; i++) {
//		cout << char(i) << endl;
//	}
//}
//int main() {
//	PrintLettersAtoZ();
//	return 0;
//}

//############################# 47 ###############################
//float ReadPositiveNumber(string Messsage) {
//	float Number = 0;
//	do {
//		cout << Messsage << endl;
//		cin >> Number;
//
//	} while (Number <= 0);
//	return Number;
//}
//float TotalMonths(float LoanAmount, float MonthlyInstallment) {
//	return (float)LoanAmount / MonthlyInstallment;
//}
//int main() {
//	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount ?");
//	float MonthlyInstallment = ReadPositiveNumber("Please Enter Montly Install");
//
//	cout << "\n Total Months to Pay = " << TotalMonths(LoanAmount, MonthlyInstallment);
//	cout << endl;
//	return 0;
//}

//############################# 48 ###############################
//string ReadPinCode() {
//	string PinCode;
//	cout << "Please enter PIN code ";
//	cin >> PinCode;
//	return PinCode;
//}
//bool Login() {
//	string PinCode;
//	do {
//		PinCode = ReadPinCode();
//		if (PinCode == "1234") {
//			return 1; 
//		}
//		else {
//			cout << "\n Worng PIN \n";
//			system("color 4F ");
//		}
//	} while (PinCode != "1234");
//	return 0;
//}
//int main()
//{
//	if (Login())
//	{
//		system("color 2F");
//		cout << "\n Your account balance is " << 7500 << '\n';
//
//	};
//	return 0;
//}

//######################################## 50 ##################
string ReadPinCode() {
	string PinCode;
	cout << "Please enter PIN code ";
	cin >> PinCode;
	return PinCode;
}
bool Login() {
	string PinCode;
	int Counter = 3;
	do {
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234") {
			return 1;
		}
		else {
			system("color 4F ");
			cout << "\n Worng PIN ,you have  " << Counter << "  more trice " << endl;
		}
	} while (Counter >= 1 && PinCode != "1234");
	return 0;
}
int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\n Your account balance is " << 7500 << '\n';

	}
	else {
		cout << "\n Your card blocked call the bank help \n " << 7500 << '\n';
	}
	return 0;
}