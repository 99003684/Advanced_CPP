#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
//int & maxval(int & r1, int & r2);
extern std::vector<string> V1;
int main()
{
	string line; int count=0;
	//vector<string> V1;

	ifstream file("gyroscope1.csv");

	while( getline(file,line, '\n') )
	{
		V1.push_back(line);
		//getline(file,line);
	}

	for( unsigned int i = 0; i < V1.size(); i++ )

		cout << V1[i] << "count:"<< count++<<endl;

    return 0;
}









/*int main() {
   int a=5;
   int b=3; 
 int res =   maxval(a , b);
 cout<<res<<endl;
    maxval(a,b)=15;



    return 0;
}


int & maxval(int & r1, int & r2)
{
    if(r1>r2)
    return r1;
    else
    return r2;
}
*/


// C++ program to demonstrate input iterator
//#include <iostream>
/*#include <vector>
using namespace std;
int main()
{
	vector<int> v1 = { 1, 2, 3, 4, 5 };

	// Declaring an iterator
	vector<int>::iterator i1;

	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Accessing elements using iterator
		cout << (*i1) << " ";
	}
	return 0;
}
*/