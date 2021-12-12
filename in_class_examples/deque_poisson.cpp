// poisson_distribution

// https://www.cplusplus.com/reference/random/poisson_distribution/
// https://www.cplusplus.com/reference/random/poisson_distribution/operator()/

using namespace std;
#include <iostream>
#include <random>
#include <cassert>
#include <deque>
#include <algorithm>  //methods like find() operate on ranges of element
#include <string>

int main()
{   
    // sets up random generator from a fixed seed
    unsigned const seed = 1;
    std::default_random_engine generator (seed);

    // draws from a Possoin distribution w/ a random number
    unsigned const mean = 3;
    std::poisson_distribution<int> distribution(mean);

    // set up a job queue
    deque<string> dqs;

    for (int day=1; day<10; day++){
        // every day brings new jobs
        int jobs = distribution (generator);
        
        // add them to our deque
        cout <<"New tasks:  ";
        for (int job=1; job<jobs; job++){
            string taskname = "day_" + to_string(day) + "_job_" + to_string(job);
            cout << taskname << "\t";
            dqs.push_front(taskname);
        }
        cout << endl;

        // get a few of them done
        for (int i=1; i<4; i++){    
            cout << dqs.size();
            if (dqs.size()){
            cout << "Finished " << dqs.back() << ".\n";
            dqs.pop_back();
            }
        }

        cout << "At the end of Day " << to_string(day) << " here's the backlog:";
        if (dqs.size()){
            copy (dqs.begin(), dqs.end(), ostream_iterator<string>(cout, "\t")); cout << endl;
        }
        else {
            cout << "<none>";
        }

        cout << "********\n\n";
    }

   
  return 0;
}