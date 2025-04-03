#include "../include/Character/CharacterBasic.h"
#include "../include/Character/CharacterStats.h"
#include <iostream>

class CharacterLoperaStats : public CharacterStats{
public:
    void setInsightAndLevel(int insight, int level) override{
        this->healthPoint = 52;
        this->attack = 124;
        this->insight = insight;
        this->level = level;
        this->realityDefense = 143;
        this->mentalDefense = 123;
    }
};

class CharacterLopera : public CharacterBasic{
public:
    CharacterLopera(int insight, int level){
        stats = new CharacterLoperaStats();
        stats->setInsightAndLevel(insight, level);
    }
    std::vector<MaterialBasic> getExpensedMaterials() override{
        uint16_t insight = stats->getInsight();
        uint16_t level = stats->getLevel();

        int dustQuantity = (level-1)*400+insight*10000;
        std::cout << dustQuantity << "\n";
        return {MaterialBasic(),MaterialBasic()};
    }
    CharacterStats getCharacterStats(){
        return *stats;
    }
};

int main(){
    CharacterLopera Lopera(1,10);
    auto materials = Lopera.getExpensedMaterials();
    if(!materials.empty()){
        std::cout << materials.size() << "\n";
    }
    uint16_t attack = Lopera.getCharacterStats().getAttack();
    std::cout << attack;
}