#include<iostream>
#include<string>

using namespace std;

class Time{
	protected :
		int hour;
		int min;
		int sec;
	public:
	Time() { 
		hour = 0; 
		min = 0; 
		sec = 0; 
	}
	Time(int hour, int min, int second){ 
		this->hour = hour; 
		this->min = min; 
		this->sec = sec; 
	}
	int getHour(){
		return hour;
	}
	int getMin(){ 
		return min; 
	}
	int getSec(){ 
		return sec; 
	}
	void showTime(){
		cout << getHour() << " : " << getMin() << " : " << getSec() << endl << endl;
	}
	void setHour(int hour){
		this->hour = hour;
	}
	void setMin(int min){
		this->min = min;
	}
	void setSec(int sec){
		this->sec = sec;
	}
};

class MilTime : public Time {
	private :
		int milHour;
		int milSeconds;
	public :
	MilTime(int h ,int m ,int s){	
		milHour = h; 
		min = m; 
		sec = s; 
	}
	void setTime(){
		if(milHour<12){
		milHour=milHour+12;
		}
		else{
		milHour = milHour;
		}
	}
	int getMilHour(){
		return milHour;
	}
	void showMilTime(){
		cout << getMilHour() << getMin() << " hours" ;
	}
	int badHour(int){
		if(getMilHour() > 23 || getMilHour() < 0 ){
			string error = "error";
			throw error;
		}
		return static_cast<int>(getMilHour());
	}	
	int badSeconds(int){
		if(getMin() > 59|| getMin() < 0){
			string error = "error";
			throw error;
		}
		return static_cast<int>(getMin());
	}	
};

int main(){
	int hour, min, sec;
	
	cout << "Input hour, minute, and second : ";
	cin >> hour >> min >> sec;
	Time showday(hour, min, sec);
	
	showday.showTime();
	MilTime input(hour, min, sec);
	input.setTime();
	
	try{
		input.badHour(input.getMilHour());	
	}
	catch(string error){
		cout << error << endl;
	}

	try{
		input.badSeconds(input.getMin());	
	}
	catch(string error){
		cout << error << endl;
	}
	input.showMilTime();
	
	return 0;
}
