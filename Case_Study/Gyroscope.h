#ifndef __GYROSCOPE_H
#define __GYROSCOPE_H

#include <iostream>
# include "CSV_store_to_Vector.cpp"

#include <fstream>
#include <vector>

class Gyroscope 
{
    public:
    std::vector<int> v = get_vector();

    std::queue<long int, std::deque<long int>> q(std::deque<long int>(v.begin(),v.end()));
    Gyroscope(vector<string>& arr): V1[arr]
    {
    std::vector<string> v = get_vector();
    std::queue<long int, std::deque<long int>> q(std::deque<long int>(v.begin(),v.end()));

    }  
    void display()
    {
        for( unsigned int i = 0; i < V1.size(); i++ )

		//cout << V1[i] << "count:"<< count++<<endl;

        std::cout<<V1[i]<<endl;
    }
};

#endif