#include <iostream>
using namespace std;
  

int main(){
	int month, date;

	cin >> month >> date ;
	if(month == 1){
		if(date >= 21 && date<= 31){
			cout << "Aquarius" << endl;
        }else{
			cout << "Capricorn" << endl;
        }
	}else if(month == 2){
		if(date >= 19 && date<= 28){
			cout << "Pisces" << endl;
        }else{
			cout << "Aquarius" << endl;
        }
	}else if(month == 3){
		if(date >= 21 && date<= 31){
			cout << "Aries" << endl;
        }else{
			cout << "Pisces" << endl;
        }
	}else if(month == 4){
		if(date >= 21 && date<= 30){
			cout << "Taurus" << endl;
        }else{
			cout << "Aries" << endl;
        }
	}else if(month == 5){
		if(date >= 22 && date<= 31){
			cout << "Gemini" << endl;
        }else{
			cout << "Taurus" << endl;
        }
	}else if(month == 6){
		if(date >= 22 && date<= 30){
			cout << "Cancer" << endl;
        }else{
			cout << "Gemini" << endl;
        }
    }else if(month == 7){
		if(date >= 23 && date<= 31){
			cout << "Leo" << endl;
        }else{
			cout << "Cancer" << endl;
        }
	}else if(month == 8){
		if(date >= 24 && date<= 31){
			cout << "Virgo" << endl;
        }else{
			cout << "Leo" << endl;
        }
	}else if(month == 9){
		if(date >= 24 && date<= 30){
			cout << "Libra" << endl;
        }else{
			cout << "Virgo" << endl;
        }
	}else if(month == 10){
	    if(date >= 24 && date<= 31){
			cout << "Scorpio" << endl;
        }else{
			cout << "Libra" << endl;
        }
	}else if(month == 11){
		if(date >= 23 && date<= 30){
			cout << "Sagittarius" << endl;
        }else{
			cout << "Scorpio" << endl;
        }
	}else if(month == 12){
		if(date >= 22 && date<= 31){
			cout << "Capricorn" << endl;
        }else{
			cout << "Sagittarius" << endl;
        }
    }
}