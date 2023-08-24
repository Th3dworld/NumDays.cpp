//This is a specification file for the NumDays class
#ifndef NUMDAYS_H
#define NUMDAYS_H

class Numdays {
	//Declare private members
	private:
		int hrsWorked;
		float dayPresent;
		const float hrsInWorkday = 8.0;
	//Declare public members
	public:
		//Parametized constructor that takes hrs worked as an argument;
		Numdays(int hrs) {
			hrsWorked = hrs;
			set_dayPresent();
		}

		//Mutators
		void set_dayPresent() {
			dayPresent = hrsWorked / hrsInWorkday;
		}

		void set_hrsWorked(int hrs) {
			hrsWorked = hrs;
		}

		//Accessor functions
		float get_dayPresent() const {
			return dayPresent;
		}

		int  get_hrsWorked() const {
			return hrsWorked;
		}

		//Overloaded operands
		int operator+ (Numdays &right){
			return this->hrsWorked + right.hrsWorked;
		}

		int operator- (Numdays& right) {
			return this->hrsWorked - right.hrsWorked;
		}

		//Increment and decrement operators in Prefix mode
		void operator++ () {
			this->hrsWorked += 1;
			set_dayPresent();
		}

		void operator-- () {
			this->hrsWorked -= 1;
			set_dayPresent();
		}

		//Increment and decrement operators in Postfix mode
		void operator++ (int) {
			this->hrsWorked += 1;
			set_dayPresent();
		}

		void operator-- (int) {
			this->hrsWorked -= 1;
			set_dayPresent();
		}
};
#endif // !NUMDAYS_H
