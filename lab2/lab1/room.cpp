#include "room.h"

Room::Room()
{

}

int Room::getId() const
{
    return id;
}

void Room::setId(int newId)
{
    id = newId;
}

int Room::getCapacity() const
{
    return capacity;
}

void Room::setCapacity(int newCapacity)
{
    capacity = newCapacity;
}

int Room::getArea() const
{
    return area;
}

void Room::setArea(int newArea)
{
    area = newArea;
}

const std::string &Room::getName() const
{
    return name;
}

void Room::setName(const std::string &newName)
{
    name = newName;
}

const std::string &Room::getType() const
{
    return type;
}

void Room::setType(const std::string &newType)
{
    type = newType;
}
