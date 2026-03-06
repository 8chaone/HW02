#include "player.h"
#include <iostream>
using namespace std;

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}

Player::Player(string nickname) {
    this->nickname = nickname;
    level = 1;
    HP = 50;
    MP = 30;
    power = 10;
    defence = 10;
    accuracy = 10;
    speed = 10;

}