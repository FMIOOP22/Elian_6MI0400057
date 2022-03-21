// Zadacha 07-03-2022.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


struct Grade
{
	char* subject;
	double grade;
};


struct Student
{
	//Elian Zhivkov Aleksiev
	//three names
	std::string name;
	std::string surname;
	std::string family;
	char egn[10];
	int fn;
	Grade calculusI;
	Grade calculusII;
	Grade linearAlgebra;
	Grade analyticGeometry;
	Grade introToProgramming;


	//name
	//EGN
	//FN
	//grades (struct)
};

void printDynamicArr(Student *arr, const int size);

int main()
{
	int arrSize;
	std::cout << "Please choose number of students" << std::endl;
	std::cin >> arrSize;
	Student *students = new Student[arrSize];

	for (int i = 0; i < arrSize; ++i)
	{
		//std::cin >> students[i];

		//std::cin >> students[i].calculusI.subject;
		//students[i].calculusI.subject = "DIS";

		char calculusIName[] = "Diferencialno i Integralno Smiatane I";
		char calculusIIName[] = "Diferencialno i Integralno Smiatane II";
		char linearAlgebraName[] = "Lineina Algebra";
		char analyticGeometryName[] = "Analitichna Geometria";
		char introToProgrammingName[] = "Uvod v programiraneto";

		//std::cin >> students[i].calculusI.grade >> students[i].calculusII;
		//std::cin >> students[i].linearAlgebra >> students[i].analyticGeometry >> students[i].introToProgramming;

		std::cout << "Please enter name: " << std::endl;
		std::cin >> students[i].name;

		std::cout << "Please enter egn: " << std::endl;
		std::cin >> students[i].egn;

		std::cout << "Please enter fn: " << std::endl;
		std::cin >> students[i].fn;

		students[i].calculusI.subject = calculusIIName;
		students[i].calculusII.subject = calculusIIName;
		students[i].linearAlgebra.subject = linearAlgebraName;
		students[i].analyticGeometry.subject = analyticGeometryName;
		students[i].introToProgramming.subject = introToProgrammingName;

		std::cout << "Please enter calculusI grade: " << std::endl;
		std::cin >> students[i].calculusI.grade;

		std::cout << "Please enter calculusII grade: " << std::endl;
		std::cin >> students[i].calculusII.grade;

		std::cout << "Please enter linear algebra grade: " << std::endl;
		std::cin >> students[i].linearAlgebra.grade;

		std::cout << "Please enter analytical geometry grade: " << std::endl;
		std::cin >> students[i].analyticGeometry.grade;

		std::cout << "Please enter intro to programming grade: " << std::endl;
		std::cin >> students[i].introToProgramming.grade;

		//std::cin >> students[i].calculusI.subject >> students[i].calculusI.grade;
		//std::cin >> students[i].calculusII.subject >> students[i].calculusII.grade;
		//std::cin >> students[i].linearAlgebra.subject >> students[i].linearAlgebra.grade;
		//std::cin >> students[i].analyticGeometry.subject >> students[i].analyticGeometry.grade;
		//std::cin >> students[i].introToProgramming.subject >> students[i].introToProgramming.grade;

		//students[i].calculusI.subject = "DIS";

		//students[i].calculusI.subject = calculusIIName;

	}
	
	//test
	//printDynamicArr(students, 1);

	//works for 1 student

	//test 2
	printDynamicArr(students, arrSize);

	//for (int i = 0; i < arrSize; ++i)
	//{
	//	delete[] students;
	//}

	delete[] students;
}

void printDynamicArr(Student *arr, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		//std::cout << arr[i].name << " " << arr[i].egn << " " << arr[i].fn << std::endl;

		std::cout << "Name = " << arr[i].name << std::endl;
		std::cout << "Egn = " << arr[i].egn << std::endl;
		std::cout << "Fn = " << arr[i].fn << std::endl;

		std::cout << arr[i].calculusI.subject << " " << arr[i].calculusI.grade << std::endl;
		std::cout << arr[i].calculusII.subject << " " << arr[i].calculusII.grade << std::endl;
		std::cout << arr[i].linearAlgebra.subject << " " << arr[i].linearAlgebra.grade << std::endl;
		std::cout << arr[i].analyticGeometry.subject << " " << arr[i].analyticGeometry.grade << std::endl;
		std::cout << arr[i].introToProgramming.subject << " " << arr[i].introToProgramming.grade << std::endl;
		std::cout << std::endl;

		//std::cout << arr[i].calculusI.subject << " " << arr[i].calculusI.grade;
		//std::cout << arr[i].calculusII.subject << " " << arr[i].calculusII.grade;
		//std::cout << arr[i].linearAlgebra.subject << " " << arr[i].linearAlgebra.grade;
		//std::cout << arr[i].analyticGeometry.subject << " " << arr[i].analyticGeometry.grade;
		//std::cout << arr[i].introToProgramming.subject << " " << arr[i].introToProgramming.grade;
	}
}

