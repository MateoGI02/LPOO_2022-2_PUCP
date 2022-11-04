/**
 * Project Untitled
 */

#pragma once
#include "DT.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Footballteams : public DT {
    public:

        property int Id;
        property String^ NameTeam;
        property int numplayers;
        array <Byte>^ Photo;
        property char Status;
      
    };
}
