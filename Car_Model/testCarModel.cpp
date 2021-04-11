/**
 * @file testCarModel.cpp
 * @author Manisha Chandra
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <gtest/gtest.h>
#include <iostream>
#include<bits/stdc++.h>
#include "CarModelDB.h"

CarModel Car1(01, RED, 220, 24.5, 2020);
CarModelDB db1;

TEST(CarModel, getter) 
{ 
    EXPECT_EQ(01, Car1.id());
    EXPECT_EQ(RED, Car1.color());
    EXPECT_EQ(220, Car1.capacity());
    EXPECT_EQ(24.5, Car1.price());
    EXPECT_EQ(2020, Car1.year());
}

TEST(CarModelDB, addModel)
{ 
    EXPECT_EQ(SUCCESS, db1.addModel(Car1));
    EXPECT_EQ(SUCCESS, db1.addModel(02, BLUE, 220, 26.5, 2020));
}

TEST(CarModelDB, findAverageCapacity) 
{ 
    EXPECT_EQ(220, db1.findAverageCapacity());
}

TEST(CarModelDB, countByColor) 
{ 
    EXPECT_EQ(1, db1.countByColor(RED));
}

TEST(CarModelDB, findAveragePriceByYear) 
{ 
    EXPECT_EQ(2, db1.findAveragePriceByYear(2020));
}

// TEST(CarModelDB, findModelById) 
// { 
//     // CarModel Car1(01, RED, 220, 24.5, 2020);
//     // CarModelDB db1;
//     EXPECT_EQ(, db1.findModelById(02));
// }

TEST(CarModelDB, findModelWithMinPrice) 
{ 
    EXPECT_EQ(01, db1.findModelWithMinPrice());
}

TEST(CarModelDB, findMaxPrice) 
{ 
    EXPECT_EQ(26.5, db1.findMaxPrice());
}

TEST(CarModelDB, removeById) 
{ 
    EXPECT_EQ(SUCCESS, db1.removeById(02));
}