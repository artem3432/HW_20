#pragma once
#include <string>

class Airplane {
private:
    std::string flightNumber;
    std::string departure;
    std::string destination;
    std::string model;
    int totalSeats;
    int occupiedSeats;
public:
    Airplane();
    Airplane(const std::string& flightNum,
        const std::string& from,
        const std::string& to,
        const std::string& mdl,
        int total,
        int occupied);
    Airplane(const Airplane& other);
    void printInfo() const;
    const std::string& getFlightNumber() const;
    const std::string& getDeparture() const;
    const std::string& getDestination() const;
    const std::string& getModel() const;
    int getTotalSeats() const;
    int getOccupiedSeats() const;
    bool sellTickets(int count);
    bool returnTickets(int count);
};


