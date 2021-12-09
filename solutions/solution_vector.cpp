   #include <iostream>
   #include <string>
   #include <vector>

   using namespace std;

   void main(){
   
        string lorem = "Lorem ipsum dolor sit amet, consectetur";
        string delimiter = " ";
        vector<string> parsed{};
        size_t pos = 0;

        for(int i=0; i<5; i++){
            pos = lorem.find(delimiter);
            parsed.push_back(lorem.substr(0, pos));
            lorem.erase(0, pos + delimiter.length());
        }

        for (int i=0; i<4; i++){
	        cout << parsed[i] << '\t';
	    }

        cout << endl;
   }