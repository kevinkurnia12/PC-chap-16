#include <iostream>
#include <string>

using namespace std;

class Date {
	private :
		int day;
		int month;
		int year;
		string monthName[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	public:
		Date(int day, int month, int year) {
			this->day = day;
			this->month = month;
			this->year = year; 
		}
		int eDay(int) {
			if (day < 1 || day > 31) {
				string e = "Error";
				throw e;
			}
			return day;
		}
		int eMonth(int) {
			if (month < 1 || month > 12) {
				string e = "Error";
				throw e;
			}
			return month; 
		}
		void setDay(int day) {
			this->day = day;
		}
		void setMonth(int month) {
			this->month = month;
		}
		void setYear(int year) {
			this->year = year;
		}
		int getDay(int day) {
			return day;
		}
		int getMonth(int month) {
			return month;
		}
		int getYear(int year) {
			return year;
		}
		
};

	
	
int main(){
	int day;
	int month;
	int year;
	
	Date date(day, month, year);
	
	cout << "Enter Date, month, and year in integer: ";
	cin >> day >> month >> year;
	
	try {
		date.eDay(date.getDay(day)); 
	}
	catch (string e) {
		cout << e;
		cout << endl;
		return 0;
	}
	
	try {
		date.eMonth(date.getMonth(month)); 
	}
	catch(string e) {
		cout << e;
		cout << endl;
		return 0;
	}
	
	cout << "Date : " << date.getDay(day) << endl << "Month : " << date.getMonth(month) << endl << "Year : " << date.getYear(year);
	return 0;
}

