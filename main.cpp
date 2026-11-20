#include <iostream>



struct  Habit {
    std::string name;
    int streak;
};


int main(){
    Habit myHabit;
    myHabit.name = "Exercise";
    myHabit.streak = 0;
    
    std::cout << "Habit: " << myHabit.name << ", Streak: " << myHabit.streak << std::endl;
    return 0;
}


