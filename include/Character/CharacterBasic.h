#ifndef CHARACTER_BASIC_H

#define CHARACTER_BASIC_H
#include <vector>
#include "CharacterStats.h"
#include "../Euphoria/EuphoriaBasic.h"
#include "../Psychube/PsychubeBasic.h"
#include "../Resonance/ResonanceBasic.h"
#include "../Material/MaterialBasic.h"
#include "Skills/SkillBasic.h"
#include <string>

class CharacterBasic{
protected:
    CharacterStats* stats = nullptr;
    std::vector<SkillBasic> skills;
    std::string path; // image represantation
    PsychubeBasic* psychube = nullptr;
    EuphoriaBasic* euphoria = nullptr;
    ResonanceBasic* resonance = nullptr;
    std::vector<MaterialBasic> expensed;
    virtual std::vector<MaterialBasic> getMaterialsFromInsightAndLevel(CharacterStats& stats);
public:
    virtual std::vector<MaterialBasic> getExpensedMaterials();
    virtual std::vector<MaterialBasic> getMaterialsFromInsightAndLevel(int insight, int level);
    virtual ~CharacterBasic() = default;
};

#endif