#include <string>
#include <iostream>

#include "Player.h"

void Player::getName(std::string _name){
    std::cout<<"Votre pseudo est"<< _name <<"."<<std::endl;
    return;
}

void Player::getScore1(int _bestscore1){
    std::cout<<"Votre meilleur score sur 1 est de"<< _bestscore1 <<"points."<<std::endl;
    return;
}

void Player::getScore2(int _bestscore2){
    std::cout<<"Votre meilleur score sur 2 est de"<< _bestscore2 <<"points."<<std::endl;
    return;
}

void Player::getScore3(int _bestscore3){
    std::cout<<"Votre meilleur score sur 3 est de"<< _bestscore3 <<"points."<<std::endl;
    return;
}

void Player::getScore4(int _bestscore4){
    std::cout<<"Votre meilleur score sur 4 est de"<< _bestscore4 <<"points."<<std::endl;
    return;
}

void Player::getScore5(int _bestscore5){
    std::cout<<"Votre meilleur score sur 5 est de"<< _bestscore5 <<"points."<<std::endl;
    return;
}

//______________________________________________________________________________________

void Player::updateScore1(int _bestscore1,int _newscore1){
    (_newscore5) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore1 ;

    if ((_newscore1)>=(_bestscore1));
        (_bestscore1) == (_newscore1);
    return;
}