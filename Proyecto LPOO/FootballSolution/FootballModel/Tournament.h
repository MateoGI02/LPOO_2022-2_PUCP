/**
 * Project Untitled
 */
#pragma once
#include "Organizer.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Tournament : public Organizer {
    public:
        property String^ NameTournament;
        property int numteams;
        property String^ Inidate;
        property String^ Enddate;
        property String^ Premio;
       property String^ IniGame;
    };

}