//solution_santa_external_class.cpp

//https://www.boost.org/doc/libs/1_78_0/libs/geometry/doc/html/geometry/reference/strategies/strategy_distance_haversine.html
#include <iostream>
#include <cmath>

using namespace std;

#include "solution_santa_external_class.hpp" 

float SleighClass::transitTime(float destinationLatitude = 45.0, float sleighSpeed = 1.0){
    
    cout << "Destination " << destinationLatitude << endl;
    cout << "Speed " << sleighSpeed << endl;
    
    pi = 2 * acos(0.0);  // ALT cmath::M_PI

    fracDistToEquator = (destinationLatitude / 90);
    earthRadius = earthDiameter/2;
    
    greatCircleDistToEquator = (2 * pi * earthRadius) /4;
    totalDistToDestination = greatCircleDistToEquator * fracDistToEquator;

    totalTimeToDestination = totalDistToDestination / sleighSpeed; 
    cout << "Time " << totalTimeToDestination << endl;

    //(2 * pi * (earthDiameter/2) /4 ) ( destinationLatitude/90) / sleighSpeed;
    cout << "ALT  " << (pi / 4) * earthDiameter * (destinationLatitude/90) / sleighSpeed;

    return totalTimeToDestination;
};

// int main(){
//     SleighClass s;
//     s.transitTime(45.0, 1.0);
// }