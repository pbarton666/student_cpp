// Bare-bones - this gets names and memory requirements on the table


class SleighClass{
    public:
        float fracDistToEquator;
        float earthRadius;
        double pi;
        float greatCircleDistToEquator;
        float totalDistToDestination;
        float totalTimeToDestination;
        const int earthDiameter = 8000;

        float setSleighSpeed(float speed);
        float setDestinationLatitude(float lat);
        
        float transitTime(float destinationLatitude, float sleighSpeed);        
} ;   