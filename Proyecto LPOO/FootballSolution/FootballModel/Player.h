/**
 * Project Untitled
 */

#pragma once

#include "person.h"
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Player : public person {
    public:

        property   String^ Position;
        property  String^ Number;
        property char Status;
        property  int Id;
        };
}
