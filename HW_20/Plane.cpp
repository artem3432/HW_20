#include "Plane.h"
#include <iostream>
#include <clocale>
using namespace std;

Plane::Plane()
    : flightNumber_("N/A"), departure_("N/A"), destination_("N/A"),
    model_("N/A"), totalSeats_(0), occupiedSeats_(0) {
}

Plane::Plane(const string& flightNumber,
    const string& departure,
    const string& destination,
    const string& model,
    int totalSeats,
    int occupiedSeats)
    : flightNumber_(flightNumber), departure_(departure),
    destination_(destination), model_(model),
    totalSeats_(totalSeats), occupiedSeats_(occupiedSeats) {
}

const string& Plane::getFlightNumber() const { return flightNumber_; }
const string& Plane::getDeparture()    const { return departure_; }
const string& Plane::getDestination()  const { return destination_; }
const string& Plane::getModel()        const { return model_; }
int           Plane::getTotalSeats()   const { return totalSeats_; }
int           Plane::getOccupiedSeats()const { return occupiedSeats_; }

void Plane::printInfo() const {
    cout << "Flight: " << flightNumber_ << "\n"
        << "  From: " << departure_ << "\n"
        << "  To: " << destination_ << "\n"
        << "  Model: " << model_ << "\n"
        << "  Seats: " << occupiedSeats_
        << "/" << totalSeats_ << "\n";
}

bool Plane::sellTickets(int count) {
    if (count <= 0) return false;
    if (occupiedSeats_ + count > totalSeats_) {
        cerr << "Error: Not enough seats\n";
        return false;
    }
    occupiedSeats_ += count;
    return true;
}

bool Plane::returnTickets(int count) {
    if (count <= 0) return false;
    if (occupiedSeats_ - count < 0) {
        cerr << "Error: Too many tickets to return\n";
        return false;
    }
    occupiedSeats_ -= count;
    return true;
}
