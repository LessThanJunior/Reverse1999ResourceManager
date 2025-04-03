#include "../../include/Character/CharacterStats.h"

uint16_t CharacterStats::getAttack(){
    return this->attack;
}
uint16_t CharacterStats::getMentalDefense(){
    return this->mentalDefense;
}
uint16_t CharacterStats::getRealityDefense(){
    return this->realityDefense;
}
uint16_t CharacterStats::getHealthPoint(){
    return this->healthPoint;
}
uint16_t CharacterStats::getInsight(){
    return this->insight;
}
uint16_t CharacterStats::getLevel(){
    return this->level;
}

void CharacterStats::setInsightAndLevel(int insight, int level){}
