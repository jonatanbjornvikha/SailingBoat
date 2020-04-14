#include "../include/module_gps.h"
#include <iostream>

ModuleGPS::ModuleGPS() {
  initialized_ = gps_hardware_connection_.GetInitialized();
  new_data_available_ = false;
}

bool ModuleGPS::GetInitialized() {
  return initialized_;
}

void ModuleGPS::Run() {
  if(initialized_) {
    GPSData gps_data = gps_hardware_connection_.Read();
    if((gps_data.latitude >= 0.0) && (gps_data.longitude >= 0.0)) {
      data_reading_ = gps_data;
      new_data_available_ = true;
    }
  }
}

GPSData ModuleGPS::GetReading() {
  return data_reading_;
}

void ModuleGPS::Report() {
  if (new_data_available_) {
    std::cout << "- - GPS SENSOR - -" << std::endl;
    std::cout << "GPS lat: " << data_reading_.latitude << std::endl;
    std::cout << "GPS long: " << data_reading_.longitude << std::endl;
    std::cout << "GPS timestamp: " << data_reading_.timestamp << std::endl;
    std::cout << "------------------" << std::endl;
    new_data_available_ = false;
  }
}
