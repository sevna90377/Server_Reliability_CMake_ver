#pragma once

class Server {

public:

    enum Type{
        PvE,
        PvP,
        RP
    };

protected:
    Server(Type type, int capacity, float shutdown_rate) : type(type), capacity(capacity), shutdown_rate(shutdown_rate) {}

    ~Server() = default;

private:
    Type type = PvE;
    int capacity;
    float shutdown_rate = 0.5;  //ustalic wartosc
    //Shutdown *
    //Player *

public:
    void addPlayer();
    void removePlayer();

    //shutdown();


protected:
    void turnOn();
    void turnOff();

};