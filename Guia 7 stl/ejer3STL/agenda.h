#ifndef AGENDA_H
#define AGENDA_H
#include <map>
#include <algorithm>
#include <string>

class Agenda
{
public:
    Agenda(string,string);
    void add();



private:
    map<std::string,std::string> agenda;
    int nroPersonaPresente = 0;




};

#endif // AGENDA_H
