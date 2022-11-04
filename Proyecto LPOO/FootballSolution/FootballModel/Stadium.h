/**
 * Project Untitled
 */
#pragma once

using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class Stadium {
    public:
        property int Id;
        property String^ Name;
        property String^ Place;
        property String^ Direction;
        property char Status;
    };

}