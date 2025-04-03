#ifndef CHARACTER_STATS_H
#define CHARACTER_STATS_H
#include <cstdint>

class CharacterStats{
protected:
    uint16_t attack;
    uint16_t mentalDefense;
    uint16_t realityDefense;
    uint16_t healthPoint;
    uint16_t level = 1;
    uint16_t insight = 0;
public:
    virtual void setInsightAndLevel(int insight, int level);
    uint16_t getAttack();
    uint16_t getMentalDefense();
    uint16_t getRealityDefense();
    uint16_t getHealthPoint();
    uint16_t getInsight();
    uint16_t getLevel();
    virtual ~CharacterStats() = default;
};

#endif