#include <iostream>
#include <iomanip>
using namespace std;
class time{
	private:
	int sec;
	int h,m,s;
	public:
		void gettime(void);
		void convtoseconds(void);
		void display(void);
};
void time::gettime(void){
	cout<<"Enter time:"<<endl;
	cout<<"Hours? ";
	cin>>h;
	cout<<"Minutes? ";
	cin>>m;
	cout<<"Seconds? ";
	cin>>s;
}
void time::convtoseconds(void){
	sec=h*3600+m*60+s;
}
void time::display(void){
	cout<<"The time is = "<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
	cout<<"Time in total seconds: "<<sec;
}
int main(){
	time t;
	t.gettime();
	t.convtoseconds();
	t.display();
	return 0;
}
