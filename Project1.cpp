#include <iostream>
using namespace std;

class Test{
	public:
		int a;
};

class Worker{
	public:
		string name;
		string surname;
		string nationality;
		unsigned short int birthday;
		float height;
		char gender;

	void showNameSurname(){
		cout << "Imie i nazwisko: " << name << " " << surname;
	}
	void showAllData();
};	


void Worker::showAllData(){
	string genderDescription;
	switch(gender){
		case 'm':
			genderDescription="Mezczyzna";
			break;
		case 'k':
			genderDescription="Kobieta";
		default:
			genderDescription="-";
	}
	cout << "Imie i nazwisko: " << name << " " << surname << "\n"
	<< "Narodowosc: " << nationality << ", rok urodzenia: " 
	<< birthday << "\nwzrost: " << height << ", plec: " << genderDescription;		
}

int main(int argc, char** argv){
	setlocale(LC_CTYPE,"polish");
	Test newObject;
//	cout << newObject.a;
	
	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.birthday=1998;
	pracownik.height=180;
	pracownik.gender='m';
//	cout << pracownik.name << endl << endl;
//	pracownik.showNameSurname();
	pracownik.showAllData();
	return 0;
}
