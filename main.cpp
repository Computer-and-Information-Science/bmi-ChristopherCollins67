#include <iostream>
using namespace std;
int main() {
    int height=61;
    int weight=130;

    double kg= weight * 0.453592;
    double meter= height * 0.0254;

    double BMI= kg / (meter*meter);
 cout << "The BMI for this person is: "<< BMI << "."<< endl;

 
}
