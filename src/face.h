#include <Arduino.h>
#include <Watchy.h>

#ifndef FACE_H
#define FACE_H

//Weather Settings
#define CITY_ID "2633548" //Worle, GB https://openweathermap.org/current#cityid
#define OPENWEATHERMAP_APIKEY "3f5e578d4966f4dfbe42de482d6d809c" //use your own API key :)
#define OPENWEATHERMAP_URL "http://api.openweathermap.org/data/2.5/weather?id=" //open weather api
#define TEMP_UNIT "metric" //metric = Celsius , imperial = Fahrenheit
#define TEMP_LANG "en"
#define WEATHER_UPDATE_INTERVAL 20 //must be greater than 5, measured in minutes
//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 //New York is UTC -5 EST, -4 EDT, will be overwritten by weather data

watchySettings settings{
    .cityID = CITY_ID,
    .weatherAPIKey = OPENWEATHERMAP_APIKEY,
    .weatherURL = OPENWEATHERMAP_URL,
    .weatherUnit = TEMP_UNIT,
    .weatherLang = TEMP_LANG,
    .weatherUpdateInterval = WEATHER_UPDATE_INTERVAL,
    .ntpServer = NTP_SERVER,
    .gmtOffset = GMT_OFFSET_SEC,
    .vibrateOClock = true,
};//Weather Settings

class face : public Watchy
{
    public:
        face(const watchySettings& s) : Watchy(s) {};
        void drawWatchFace();

    private:
        void drawBackground();

};

#endif