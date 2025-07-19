//Create a class Time with hour, minute, second, and add two time objects.

#include<iostream>
class Time{
    public:
        int hour{};
        int minute{};
        int second{};
        Time()=default;
        Time(int h, int m, int s){
            this->hour = h;
            this->minute =m;
            this->second = s;
        }
        void show_time(){
            std::cout << "current time is: "<< this->hour << " : " << this->minute << " : " << this->second<<std::endl;
        }
        Time add(const Time& t)const{
            Time result;
            result.second = this->second + t.second;
            result.minute = this->minute + t.minute + result.second/60 ;
            result.second %= 60;

            result.hour = this->hour + t.hour + result.minute/60;
            result.minute %= 60;
            return result;
        }
};
int main(){
    Time t1(2,53,23);
    Time t2(3,9,53);

    t1.show_time();
    t2.show_time();

    Time sum = t1.add(t2);
    sum.show_time();
    return 0;
}