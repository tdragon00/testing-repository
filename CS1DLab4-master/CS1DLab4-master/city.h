#ifndef CITY_H
#define CITY_H

#include"FoodType.h"



namespace saturn  {
class City
{

public:
    City(){
        CityID=0;
        CityName="";
        CountryIso="";
        vector<Distance> distanceFromOthers;
        vector <FoodType>foods;
    }
    City(int city_id, string city_name, string country_iso):
       CityID{city_id}, CityName{city_name}, CountryIso{country_iso}{}

    static vector<City> cities;
    static vector<City> getCities();
    static void initializeCities();
    static vector<FoodType> getFoodByCityId(int id);
    static string formateNumbers(float number);
    static void orderCitiesByDistance(vector<City>& vacCities, int idCityStart);
    static City& getCityById(int CityId);
    static int getTotalDistance(vector<City>& vacCities);

    static  void calcDistancRecursively(vector<City>& vacCities, int position);


    vector<Distance> getDistanceFromOthers(){
        return distanceFromOthers;
    }

    vector<FoodType> getFoodType(){
        return foods;
    }

    ~City(){

    }

    void addDistance(Distance dist){
        distanceFromOthers.push_back(dist);


    }
    void addFood(FoodType food){
        foods.push_back(food);

    }

    void setCityId(int id){CityID =id;}
    int getCityId(){ return CityID;}

    void setCityName(string name){CityName =name;}
    string getCityName(){ return CityName;}

    void setCountryCode(string code){CountryIso =code;}
    string getCountryCode(){ return CountryIso;}




private:
   int CityID;
   string CityName;
   string CountryIso;
   vector<Distance> distanceFromOthers;
   vector <FoodType>foods;
};



}

#endif // CITY_H
