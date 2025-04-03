#include "../../include/Character/CharacterBasic.h"
#include <vector>
#include <string>

std::vector<MaterialBasic> CharacterBasic::getExpensedMaterials(){
    return {};
}

std::vector<MaterialBasic> CharacterBasic::getMaterialsFromInsightAndLevel(CharacterStats& stats){
    return getMaterialsFromInsightAndLevel(stats.getInsight(), stats.getLevel());
}

std::vector<MaterialBasic> CharacterBasic::getMaterialsFromInsightAndLevel(int insight, int level){
    return {};
}