#include <string>
#include <iostream>

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
    (_newscore1) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore1 ;

    if ((_newscore1)>=(_bestscore1));
        (_bestscore1) == (_newscore1);
    return;
}

void Player::updateScore2(int _bestscore2,int _newscore2){
    (_newscore2) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore2 ;

    if ((_newscore2)>=(_bestscore2));
        (_bestscore2) == (_newscore2);
    return;
}

void Player::updateScore3(int _bestscore3,int _newscore3){
    (_newscore3) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore3 ;

    if ((_newscore3)>=(_bestscore3));
        (_bestscore3) == (_newscore3);
    return;
}

void Player::updateScore4(int _bestscore4,int _newscore4){
    (_newscore4) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore4 ;

    if ((_newscore4)>=(_bestscore4));
        (_bestscore4) == (_newscore4);
    return;
}

void Player::updateScore5(int _bestscore5,int _newscore5){
    (_newscore5) == 0;
    std::cout<<"Donnez votre nouveau score (entre 50 et 100) : ";
    cin>> _newscore5 ;

    if ((_newscore5)>=(_bestscore5));
        (_bestscore5) == (_newscore5);
    return;
}

//______________________________________________________________________________________

Player::Player()