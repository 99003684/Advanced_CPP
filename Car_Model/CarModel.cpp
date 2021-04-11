/**
 * @file CarModel.cpp
 * @author Manisha Chandra
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "CarModel.h"

   /**
    * @brief Construct a new Car Model object
    *  Parametric Constructor
    * @param int m_id[in]            the model id of the car
    * @param std::string m_oem[in]   the model number of the car
    * @param Color m_color[in]       the colour of the car
    * @param int m_capacity[in]      the capacity of the car in cc
    * @param double m_price[in]      the price of the car in lakhs
    * @param int m_year[in]          the year of manufacture of the car
    */
   CarModel::CarModel(int id, Color color, int capacity, double price, int year)
   {
        m_id = id;
        m_color = color;
        m_capacity = capacity;      
        m_price = price;      
        m_year = year; 
   }

   /**
    * @brief Construct a new Car Model object
    * Copy Constructor
    * @param CarModel& ref[in]      the object that is to be copied
    */
   CarModel::CarModel(CarModel& ref)
   {
        m_id = ref.id();
        m_color = ref.color();
        m_capacity = ref.capacity();      
        m_price = ref.price();      
        m_year = ref.year(); 

   }

   //Do you need copy ctor, if not disable it
   
   /**
    * @brief 
    * The getter function for model id
    * @return int returns the model id 
    */
   int CarModel::id() const
   {
       return m_id;
   }

   /**
    * @brief 
    * The getter function for the OEM
    * @return std::string returns the model OEM
    */
//    std::string CarModel::oem() const
//    {
//        return m_oem;
//    }

   /**
    * @brief 
    * The getter function for the color
    * @return Color returns the car color
    */
   Color CarModel::color() const
   {
       return m_color;
   } 

   /**
    * @brief 
    * The getter function for the model capacity
    * @return int returns the model capacity
    */
   int CarModel::capacity() const
    {  
        return m_capacity;
    }

   /**
    * @brief 
    * The getter function for the model price
    * @return double returns the model price
    */
   double CarModel::price() const
   {
       return m_price;
   }

   /**
    * @brief 
    * The getter function for the manufacture year
    * @return int returns the year of manufacture
    */
   int CarModel::year() const
   {
       return m_year;
   }

   /**
    * @brief 
    * display the details of the car
    */
   void CarModel::display() const
   {
       std::cout << "******************Details****************\n\n" ;
       std::cout << "Model Id " << m_id << "\n" ;
       std::cout << "Model Color " << m_color << "\n" ;
       std::cout << "Model Capacity " << m_capacity << "\n" ;
       std::cout << "Model Price " << m_price << "\n" ;
       std::cout << "Year of Manufacture " << m_year << "\n\n" ;
   }
   //void updatePrice(double);
   
   /**
    * @brief Destroy the Car Model object
    * 
    */
   CarModel::~CarModel()
   {

   }