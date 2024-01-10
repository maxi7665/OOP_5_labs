#include <string>

#ifndef ROOM_H
#define ROOM_H


class Room
{
public:
    Room();

    int getId() const;
    void setId(int newId);

    int getCapacity() const;
    void setCapacity(int newCapacity);

    int getArea() const;
    void setArea(int newArea);

    const std::string &getName() const;
    void setName(const std::string &newName);

    const std::string &getType() const;
    void setType(const std::string &newType);

private:

    int id;
    int capacity;
    int area;
    std::string name;
    std::string type;
};

#endif // ROOM_H
