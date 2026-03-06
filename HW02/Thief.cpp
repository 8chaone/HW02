#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    speed = 80;
}

void Thief::attack() {
    cout << "* 수리검 폭풍을 흩뿌린다" << endl;
}