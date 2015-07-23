/* 
 * File:   SavedSend.h
 * Author: cde
 *
 * Created on 26 mai 2015, 14:30
 */

#ifndef SAVEDSEND_H
#define	SAVEDSEND_H

#include <Wt/WDateTime>
#include <Wt/Dbo/Dbo>
#include <Wt/Dbo/backend/Sqlite3>
#include <string>

namespace dbo = Wt::Dbo;

class SavedSend {
public:
    SavedSend();
    SavedSend(const SavedSend& orig);
    virtual ~SavedSend();
    
    std::string adress_sender;
    int         port;
    std::string number;
    std::string refenvoi;
    std::string code_ref;
    

    template<class Action>
    void persist(Action& a)
    {
      dbo::field(a, adress_sender, "adress_sender");
      dbo::field(a, port,          "port");
      dbo::field(a, number,        "number");
      dbo::field(a, refenvoi,        "refenvoi");
      dbo::field(a, code_ref,        "code_ref");
    }
    
private:

};

#endif	/* SAVEDSEND_H */

