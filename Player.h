#include <string>

class Player {
    
    private:

        std::string _name;
        int _bestscore;

    public:

        void getName(std::string _name);
        void getScore(int _bestscore);
        void updateName(std::string _name);
        void updateScore(int _bestscore);

        Player();
        Player(std::string _name,int _bestscore);

};