/**
 * @file CarModel.h
 * @author Manisha Chandra
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CAR_H
#define __CAR_H

#include<string>
#include<iostream>

enum Color {        //enum class Color
  RED,
  BLUE,
  WHITE,
  BLACK
};

class CarModel {
   /**
    * @brief 
    * Private Data Members
    *  int m_id             the model id of the car
    *  std::string m_oem;   the model number of the car
    *  Color m_color;       the colour of the car
    *  int m_capacity;      the capacity of the car in cc
    *  double m_price;      the price of the car in lakhs
    *  int m_year;          the year of manufacture of the car
    */
   int m_id;
   //std::string m_oem;   
   Color m_color;
   int m_capacity;      
   double m_price;      
   int m_year;    

   /**
    * @brief 
    * Public Member Functions
    */
   public:

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
   CarModel(int id, Color color, int capacity, double price, int year);

   /**
    * @brief Construct a new Car Model object
    * Copy Constructor
    * @param CarModel& ref[in]      the object that is to be copied
    */
   CarModel(CarModel& ref);

   //Do you need copy ctor, if not disable it
   
   /**
    * @brief 
    * The getter function for model id
    * @return int returns the model id 
    */
   int id() const;

   /**
    * @brief 
    * The getter function for the OEM
    * @return std::string returns the model OEM
    */
   //std::string oem() const;

   /**
    * @brief 
    * The getter function for the color
    * @return Color returns the car color
    */
   Color color() const; 

   /**
    * @brief 
    * The getter function for the model capacity
    * @return int returns the model capacity
    */
   int capacity() const;
  //   {  
  //    return m_capacity;
  //  }

  /**
   * @brief 
   * The getter function for the model price
   * @return double returns the model price
   */
   double price() const;

   /**
    * @brief 
    * The getter function for the manufacture year
    * @return int returns the year of manufacture
    */
   int year() const;

   /**
    * @brief 
    * display the details of the car
    */
   void display() const;
   //void updatePrice(double);
   
   /**
    * @brief Destroy the Car Model object
    * 
    */
   ~CarModel();
};

#endif
