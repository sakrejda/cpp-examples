#include <iostream>
#include <pqxx/pqxx>

class CreateTable : public pqxx::transactor<>
{
  std::string table__;

public:
  explicit CreateTable(std::string table) :
    pqxx::transactor<>("CreateTable"), table__(table) { }

  void operator()(pqxx::work &T)
  {
    T.exec("CREATE TABLE " + table__ + "(digit INTEGER);" );
  }
};

int main()
{
  try
  {
    pqxx::connection c;
    c.perform(CreateTable("bubbles"));
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}



