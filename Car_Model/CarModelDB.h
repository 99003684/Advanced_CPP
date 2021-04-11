/**
 * @file CarModelDB.h
 * @author Manisha Chandra
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __CARMODELDB_H
#define __CARMODELDB_H
#include <algorithm>
#include "carmodel.h"
#include <list>

typedef enum {
   SUCCESS,
   FAILURE
}error_t;

class CarModelDB
{
  /**
   * @brief 
   * The Private Data Members
   */
  private:
    std::list<CarModel> models;
  /**
   * @brief 
   * The public Member Functions
   */
  public:
  /**
   * @brief 
   *  The function to add a car model details in the list
   * @param id[in]          the model id of the car
   * @param oem[in]         the model number of the car
   * @param color[in]       the colour of the car
   * @param capacity[in]    the capacity of the car in cc
   * @param price[in]       the price of the car in lakhs
   * @param year[in]        the year of manufacture of the car
   * @return error_t        returns SUCCESS when model is added to the list
   */
  error_t addModel(int id, Color color, int capacity, double price, int year);

  /**
   * @brief 
   *  The function to add a car model details in the list
   * @param ref[in]         The model object that is supposed to be copied 
   * @return error_t        returns SUCCESS when model is added to the list
   */
  error_t addModel(const CarModel& ref);

  /**
   * @brief 
   * Displays the details of all the model in the list
   */
  void displayAllModels();                          
  
  /**
   * @brief 
   * The function to remove a model from the list
   * @param id              the id of the model to be deleted
   * @return error_t        returns SUCCESS when model is removed from the list
   */
  error_t removeById(int id);  

  /**
   * @brief 
   * The function to find a model by its id
   * @param id              the id of the model to be found
   * @return CarModel*      returns the object with the given id
   */
  CarModel* findModelById(int id);
  
  /**
   * @brief 
   * The function to find the Max price
   * @return double       returns the maximum price of the car among the models in the list
   */
  double findMaxPrice();

  /**
   * @brief 
   * The function to find the model with the Minimum Price
   * @return CarModel&      returns the object with the minimum price
   */
  CarModel& findModelWithMinPrice();
  
  /**
   * @brief 
   * The function to find the count of the models with the given colour
   * @param color          the given color to be found
   * @return int           returns the number of cars with the same color
   */
  int countByColor(Color color);

  /**
   * @brief 
   * The function to find the average capacity of all the models in the list
   * @return double         returns average capacity of all the models in the list
   */
  double findAverageCapacity();

  /**
   * @brief 
   * The function to find the average price of all the models in the given year in the list
   * @param key             the given year  
   * @return double         returns the average price of all the models in the given year in the list
   */
  double findAveragePriceByYear(int key);

  /**
   * @brief 
   * The function to sort the models in the list by the id
   */
  void sortById();
};

#endif
