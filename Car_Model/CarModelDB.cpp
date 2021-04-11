/**
 * @file CarModelDB.cpp
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
#include <list>


/**
 * @brief 
 * The function to add a car model details in the list
 * @param id[in]          the model id of the car
 * @param oem[in]         the model number of the car
 * @param color[in]       the colour of the car
 * @param capacity[in]    the capacity of the car in cc
 * @param price[in]       the price of the car in lakhs
 * @param year[in]        the year of manufacture of the car
 * @return error_t        returns SUCCESS when model is added to the list
 */
error_t CarModelDB::addModel(int id, Color color, int capacity, double price, int year)
{
   models.emplace_back(id,color,capacity,price,year); 
   return SUCCESS;
}

/**
 * @brief 
 *  The function to add a car model details in the list
 * @param ref[in]         The model object that is supposed to be copied 
 * @return error_t        returns SUCCESS when model is added to the list
 */
error_t CarModelDB::addModel(const CarModel& ref) {
   models.push_back(ref);
   return SUCCESS;
}

/**
 * @brief 
 * Displays the details of all the model in the list
 */
void CarModelDB::displayAllModels()
{
   for(CarModel& ref:models)
   {
      ref.display();
   }
}

/**
 * @brief 
 * The function to find the average capacity of all the models in the list
 * @return double         returns average capacity of all the models in the list
 */
double CarModelDB::findAverageCapacity()
{
   double total=0;
   for(CarModel& ref:models)
   {
      total += ref.capacity();
   }
   return total/models.size();
}

/**
 * @brief 
 * The function to find the count of the models with the given colour
 * @param color          the given color to be found
 * @return int           returns the number of cars with the same color
 */
int CarModelDB::countByColor(Color key)
{
   int count;
   //count = std::count_if(models.begin(), models.end(), compareByColor);
   count = std::count_if (models.begin(), models.end(), [key](const CarModel& ref)
   {
      return ref.color()==key;
   });
   return count;
}

/**
 * @brief 
 * The function to find the average price of all the models in the given year in the list
 * @param key             the given year  
 * @return double         returns the average price of all the models in the given year in the list
 */
double CarModelDB::findAveragePriceByYear(int key) 
{
   double total=0;
   int count=0;
   std::for_each(models.begin(), models.end(), [&total,&count, key](const CarModel& ref)
   {  
     if(ref.year()==key) 
     {
      total += ref.price();
      count++;
     }
   });   
   return total/count;
}

/**
 * @brief 
 * The function to find a model by its id
 * @param key             the id of the model to be found
 * @return CarModel*      returns the object with the given id
 */
CarModel* CarModelDB::findModelById(int key)
{
   std::list<CarModel>::iterator iter;
   iter = std::find_if(models.begin(), models.end(), [key](const CarModel& ref) {
        return ref.id()==key;
   });
   if(iter!=models.end())
     return &(*iter);  
   else 
     return nullptr;    
}

/**
 * @brief 
 * The function to remove a model from the list
 * @param key             the id of the model to be deleted
 * @return error_t        returns SUCCESS when model is removed from the list
 */
error_t CarModelDB::removeById(int key) 
{
  auto iter= std::remove_if(models.begin(), models.end(), [key](const CarModel& ref) 
  {
     if(ref.id()==key)
      return SUCCESS;
  });
  //TODO: return err value
}

/**
  * @brief 
 * The function to find the Max price
 * @return double       returns the maximum price of the car among the models in the list
 */
double CarModelDB::findMaxPrice()
{
  auto maxIter = std::max_element(models.begin(), models.end(), [](const CarModel& r1, const CarModel& r2) 
  {
   return r1.price() < r2.price();
  });
  return maxIter->price();
}

/**
 * @brief 
 * The function to find the model with the Minimum Price
 * @return CarModel&      returns the object with the minimum price
 */
CarModel& CarModelDB::findModelWithMinPrice()
{
  auto minIter = std::min_element(models.begin(), models.end(), [](const CarModel& r1, const CarModel& r2) 
  {
   return r1.price() < r2.price();
  });
  return *minIter;
}

/**
 * @brief 
 * The function to sort the models in the list by the id
 */
void CarModelDB::sortById() {
   std::sort(models.begin(), models.end(), [](const CarModel& r1, const CarModel& r2)
   {
      return r1.id() < r2.id();
   });
}
