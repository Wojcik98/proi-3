cmake_minimum_required(VERSION 3.9)
project(3prj)

set(CMAKE_CXX_STANDARD 17)

add_executable(3prj main.cpp Vehicle.cpp Vehicle.h Owner.cpp Owner.h ElectricVehicle.cpp ElectricVehicle.h Database.cpp Database.h Painter.cpp Painter.h ElectricMotorcycle.cpp ElectricMotorcycle.h Company.cpp Company.h Person.cpp Person.h Coownership.cpp Coownership.h FuelVehicle.cpp FuelVehicle.h FuelCar.cpp FuelCar.h Truck.cpp Truck.h ElectricCar.cpp ElectricCar.h FuelMotorcycle.cpp FuelMotorcycle.h Litter.cpp Litter.h Bus.cpp Bus.h Military.cpp Military.h Rickshaw.cpp Rickshaw.h Agricultural.cpp Agricultural.h PeopleVehicle.cpp PeopleVehicle.h)