#include<iostream>
using namespace std;

class soccerPlayer{
    int jerNo,goals,assists;
    public:
    //constructor
    soccerPlayer(int jer=0,int goal=0,int assist=0):jerNo(jer),goals(goal),assists(assist){}

    bool operator >(soccerPlayer);

    void operator =(soccerPlayer);

    void display(){
      cout<<"The player with jersey No "<<jerNo<<" is greatest \n";

    }
};

//a '>' operator returns a boolean 
//overloading 
bool soccerPlayer::operator >(soccerPlayer a){
    int goalAssist1 = goals + assists ;
    int goalAssist2 = a.goals + a.assists ;

    if(goalAssist1 > goalAssist2){
        return true ;
    }
    else return false;

}

//overloading = operator
void soccerPlayer::operator = (soccerPlayer a){
    jerNo = a.jerNo;
    goals = a.goals;
    assists = a.assists;
}

int main(){

//array of object initialization
soccerPlayer players[11] = {
                               
        soccerPlayer(1,0,0),
        soccerPlayer(2,0,10),
        soccerPlayer(3,10,20),
        soccerPlayer(4,3,5),
        soccerPlayer(5,100,230),
        soccerPlayer(6,20,30),
        soccerPlayer(7,700,400),
        soccerPlayer(65,7,0),
        soccerPlayer(9,89,67),
        soccerPlayer(10,678,500),
        soccerPlayer(11,23,40),
        };
// initialized a random player to  greatest
 soccerPlayer Goat = players[0];

    for(int i = 0 ; i < 11 ; i ++){
        
        if(players[i] > Goat){

            Goat = players[i];
        }
    }

Goat.display();

return 0;
}