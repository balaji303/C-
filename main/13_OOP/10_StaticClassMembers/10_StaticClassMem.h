#ifndef _10_STATIC_CLASS_MEMBER_H_
 #define _10_STATIC_CLASS_MEMBER_H_

class Movie
{
private:
    int xp;
    int health;
    string name;
    static int numPlayers; /* We can't assign it a value because we can assign values only to the non-const variables */
public:
    string getname();
    void setname(string);
    static int get_numPlayers(); /*Static Function can return only static variable*/

    //Constructor
    Movie();
    Movie(string name);
    Movie(string name_val,int health_val,int xp_val);
    //Destructor
    ~Movie();
};

#endif  //_10_STATIC_CLASS_MEMBER_H_