#include "city.h"
vector<saturn::City> saturn::City::cities;
namespace saturn {

int City::getTotalDistance(vector<City> &vacCities)
{
    int total=0;
    for(int i =0; i<=vacCities.size()-2 ;i++)
    {
       vector<Distance> dist = vacCities[i].getDistanceFromOthers();
       for(auto it = dist.begin(); it!= dist.end() ;++it)
       {
           if(it->OtherCityID == vacCities[i+1].getCityId() )
                total+= it->distance;
       }
    }
    return total;

}


void City::calcDistancRecursively(vector<City>& vacCities, int position)
{
   if(position == (int)vacCities.size() )
   {
       return;
   }
   int min=0;
   int minCityId=0;
   int minPosition =0;
   for(int i= position;i<(int)vacCities.size();i++)
   {
      for(auto it = vacCities[position-1].distanceFromOthers.begin(); it!= vacCities[position-1].distanceFromOthers.end() ;++it)
      {
          if(min ==0 && vacCities[i].getCityId()==it->OtherCityID )
          {
              min= it->distance;
              minCityId= it->OtherCityID;
              minPosition=i;
          }
          else if(vacCities[i].getCityId()==it->OtherCityID && it->distance < min )
          {
                  min = it->distance;
                  minCityId= it->OtherCityID;
                  minPosition =i;
          }
      }

   }

    std::iter_swap(vacCities.begin()+minPosition,vacCities.begin()+position);
    calcDistancRecursively(vacCities, position+1);

}
void City::orderCitiesByDistance(vector<City>& vacCities, int idCityStart)
{
    if(vacCities[0].getCityId()!= idCityStart)
    {
        for (auto it =vacCities.begin(); it != vacCities.end(); ++it)
        {
            if(it->getCityId() == idCityStart)
            {
                std::iter_swap(it,vacCities.begin());
                break;
            }
        }
    }

    if(vacCities.size()>1)
    {
       calcDistancRecursively(vacCities, 1);
    }
}



vector<City> City::getCities(){
    return cities;
}

vector<FoodType> City::getFoodByCityId(int id)
{
    vector<FoodType> foodV ;

    for (auto it = City::cities.begin(); it != City::cities.end(); ++it)
    {
        if(it->getCityId() ==id)
        {
          foodV = it->getFoodType();
        }
    }
    return foodV;
}

string City::formateNumbers(float number)
{
   stringstream stream;
    stream << std::fixed << std::setprecision(2) << number;
    return stream.str();
}

void City::initializeCities(){
    cities.clear();
    QSqlQuery query,query2;
    query.exec("SELECT * FROM cities ORDER BY CityName ASC");

    while(query.next())
    {
        City city;
        QString id;
        string name;
        string country;
        Distance dist;
        FoodType fooditem;

        id = query.value("_id").toString();
        name= query.value("CityName").toString().toStdString() ;
        country= query.value("CountryIsoCode").toString().toStdString();

        city.setCityId(id.toInt());
        city.setCityName(name);
        city.setCountryCode(country);



        query2.exec("SELECT * , (select CityName from cities where cities._id= cities_distances.ToCity) as OtherCityName FROM cities_distances where FromCity="+id+ " order by distance ASC ");
        while(query2.next())
        {

            dist.OtherCityID = query2.value("ToCity").toInt();
            dist.distance = query2.value("Distance").toInt();
            dist.OtherCityName = query2.value("OtherCityName").toString().toStdString();
            city.addDistance(dist);
        }


        query2.exec("SELECT * FROM cities_foods where IdCity="+id+ " order by FoodName ASC ");
        while(query2.next())
        {
            fooditem.foodID = query2.value("_id").toInt();
            fooditem.foodName = query2.value("FoodName").toString().toStdString();
            fooditem.price = query2.value("Cost").toFloat();
            fooditem.CityID = query2.value("IdCity").toInt();
            city.addFood(fooditem);
        }

    cities.push_back(city);
    }


}

City& City::getCityById(int CityId)
{
    auto it = City::cities.begin();
    for (; it != City::cities.end(); ++it)
    {
        if(it->getCityId()==CityId)
        {

            break;
        }
    }
    return *it;
}

}
