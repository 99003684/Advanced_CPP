#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
//int & maxval(int & r1, int & r2);
vector<string> X;
vector<string> Y;
vector<string> Z;
int n = 0;


void max_fun()
{
	cout << "\nMax Element in X = "<< *max_element(X.begin(), X.end());
	cout << "\nMax Element in Y = "<< *max_element(Y.begin(), Y.end());
	cout << "\nMax Element in Z = "<< *max_element(Z.begin(), Z.end());
}
void min_fun()
{
	cout << "\nMin Element in X = "<< *min_element(X.begin(), X.end());
	cout << "\nMin Element in Y = "<< *min_element(Y.begin(), Y.end());
	cout << "\nMin Element in Z = "<< *min_element(Z.begin(), Z.end());
}

// void avg_fun()
// {
// 	cout<<"\nAverage value in X = "<< accumulate(X.begin(), X.end(), 0LL) / X.size();
// 	cout<<"\nAverage value in X = "<< accumulate(Y.begin(), Y.end(), 0LL) / Y.size();
// 	cout<<"\nAverage value in X = "<< accumulate(Z.begin(), Z.end(), 0LL) / Z.size();
// }



int main()
{
	string line; int count=0;
	vector<string> V1;
	

	ifstream file("gyroscope.csv");

	while( getline(file,line, '\n') )
	{
		V1.push_back(line);
		//getline(file,line);
	}
	// cout << V1[0] << "count:"<< count++<<endl;
	for( unsigned int i = 0; i < V1.size(); i++ )
	
	{
	// 	//cout << V1[i] << "count:"<< count++<<endl;

	 	string word;
		string str = V1[i];
		cout<<str<<endl;
    // making a string stream
    	stringstream iss(str);
  
    // Read and print each word.
		//int count = 0;
    	while (iss >> word)
		{
        	//cout << word << endl;
			if(n == 0){
				X.push_back(word);
				//cout<<"inside x"<<endl;
			}
			/* Checking the given word is integer or not */
			else if(n == 1){
				Y.push_back(word);
			}
			else if(n == 2){
				Z.push_back(word);
			}
			n++;

			//cout<< n<<endl;
		}
		n = 0;
		//cout<<n<<endl;
        

	}

	// vector<string>::iterator it;
	// 	vector<string>::iterator it1;
	// 	vector<string>::iterator it2;
  

    //cout<<"X access"<<endl;
//	cout<<X.size()<<endl;
//	cout<<X[2]<<endl;
//	cout<<Y[2]<<endl;
//	cout<<Z[3]<<endl;

/*	for( unsigned int x = 0; x=X.size(); ++x) 
	{
		cout<< "The value of x - " << X[x] << endl;

	} */
    
	vector<string>::iterator pt;
	 for (pt = X.begin(); pt < X.end(); pt++)
        cout << "The value of x - " <<*pt << endl;
	cout<<"*********************************************"<<endl;
	vector<string>::iterator pt1;
	 for (pt1 = X.begin(); pt1 < X.end(); pt1++)
	{
		cout<< "The value of Y - " << *pt1 << endl;

	} 
	cout<<"*********************************************"<<endl;
	vector<string>::iterator pt2;
	 for (pt2 = Z.begin(); pt2 < Z.end(); pt2++)
	 	cout<< "The value of Z - " << *pt2 << endl;

	cout<<"*********************************************"<<endl;

	 max_fun();
	 cout<<endl;
	cout << "********************************************"<<endl;
     min_fun();
	 cout<<endl;
	 cout << "********************************************"<<endl;
     

    return 0;
}




