#include "Airplane.h"
#include <iostream>
using namespace std;

Airplane::Airplane()
    : flightNumber("Unknown")
    , departure("Unknown")
    , destination("Unknown")
    , model("Unknown")
    , totalSeats(0)
    , occupiedSeats(0)
{
}

Airplane::Airplane(const string& flightNum,
    const string& from,
    const string& to,
    const string& mdl,
    int total,
    int occupied)
    : flightNumber(flightNum)
    , departure(from)
    , destination(to)
    , model(mdl)
    , totalSeats(total)
    , occupiedSeats(occupied)
{
}

Airplane::Airplane(const Airplane& other)
    : flightNumber(other.flightNumber)
    , departure(other.departure)
    , destination(other.destination)
    , model(other.model)
    , totalSeats(other.totalSeats)
    , occupiedSeats(other.occupiedSeats)
{
}

void Airplane::printInfo() const {
    cout << "Рейс: " << flightNumber
        << "\nВідправлення: " << departure
        << "\nПризначення: " << destination
        << "\nМарка літака: " << model
        << "\nМісць всього: " << totalSeats
        << "\nЗайнято місць: " << occupiedSeats
        << "\nВільних місць: " << (totalSeats - occupiedSeats)
        << "\n\n";
}

const std::string& Airplane::getFlightNumber() const { return flightNumber; }
const std::string& Airplane::getDeparture()    const { return departure; }
const std::string& Airplane::getDestination()  const { return destination; }
const std::string& Airplane::getModel()        const { return model; }
int Airplane::getTotalSeats()                  const { return totalSeats; }
int Airplane::getOccupiedSeats()               const { return occupiedSeats; }

bool Airplane::sellTickets(int count) {
    if (count <= 0 || occupiedSeats + count > totalSeats) return false;
    occupiedSeats += count;
    return true;
}

bool Airplane::returnTickets(int count) {
    if (count <= 0 || count > occupiedSeats) return false;
    occupiedSeats -= count;
    return true;
}
