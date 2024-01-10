#ifndef DBCONTEXT_H
#define DBCONTEXT_H


class DbContext
{
private:

    // Паттерн Singleton
    static DbContext * p_instance;
    // Конструкторы и оператор присваивания недоступны клиентам
    DbContext();
    DbContext( const DbContext& );
    DbContext& operator=( DbContext& );
  public:
    static DbContext * getInstance() {
        if(!p_instance)
            p_instance = new DbContext();
        return p_instance;
    }
};

#endif // DBCONTEXT_H
