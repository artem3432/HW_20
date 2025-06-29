#pragma once

#include <string>
using namespace std;

class Plane {
private:
    string flightNumber_;
    string departure_;
    string destination_;
    string model_;
    int    totalSeats_;
    int    occupiedSeats_;

public:
    Plane();
    Plane(const string& flightNumber,
        const string& departure,
        const string& destination,
        const string& model,
        int totalSeats,
        int occupiedSeats = 0);

    const string& getFlightNumber() const;
    const string& getDeparture()    const;
    const string& getDestination()  const;
    const string& getModel()        const;
    int           getTotalSeats()   const;
    int           getOccupiedSeats()const;

    void printInfo() const;

    bool sellTickets(int count);
    bool returnTickets(int count);
};
