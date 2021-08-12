#include <iostream>

using namespace std;

class Clock{
    public:
    int hour,minutes,sec;


    public:
        void read_data(){
            cout<<" HOURS: ";
            cin>>hour;
            cout<<" MINUTES: ";
            cin>>minutes;
            cout<<" SECONDS: ";
            cin>>sec;
        }   
        void display_data(){
            cout<<"Total Time in SECONDS :";
            cout<<(hour*3600+minutes*60+sec);
            }
};

int main(){
    Clock sec;
   
    
    sec.read_data();
    
    sec.display_data();
    return 0;
}
