#pragma once
/**
 * Project Untitled
 */

#pragma once

#include "person.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Organizer : public person {
    public:
        property int Id;
        property  String^ Name;
        property  String^ Surname;
        property int Age;
       
        property  char Status;

    };
}
