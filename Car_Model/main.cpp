/**
 * @file main.cpp
 * @author Manisha Chandra
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "CarModelDB.h"
#include "CarModel.h"

int main()
{
    CarModel Car1(01, RED, 220, 24.5, 2020);
    CarModelDB db1;
    std::cout << Car1.id() << "\n";
    std::cout << Car1.color() << "\n";
    std::cout << Car1.capacity() << "\n";
    std::cout << Car1.price() << "\n";
    std::cout << Car1.year() << "\n";
    Car1.display();

    std::cout << "\n********************************\n" << "\n";

    std::cout << db1.addModel(Car1) << "\n";
    std::cout << db1.addModel(02, BLUE, 220, 26.5, 2020) << "\n";
    db1.displayAllModels();

    std::cout << "\n********************************\n" << "\n";

    std::cout << db1.findAverageCapacity() << "\n";
    std::cout <<  db1.countByColor(RED) << "\n";
    std::cout << db1.findModelById(02) << "\n";
    std::cout <<  db1.findAveragePriceByYear(2020) << "\n";
    std::cout <<  &db1.findModelWithMinPrice() << "\n";
    std::cout <<  db1.findMaxPrice() << "\n";
    std::cout <<  db1.removeById(02) << "\n";

    return 0;
}

