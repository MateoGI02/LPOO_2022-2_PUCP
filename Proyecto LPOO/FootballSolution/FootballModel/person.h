/**
 * Project Untitled
 */
#pragma once 
using namespace System;

namespace FootballModel {
    [Serializable]
    public ref class person {
    public:
        property int Number; 
        property  String^ DocNumber;
        property  String^ Name;
        property  String^ Surname;
        property  int Age;
        property  String^  Nationality;
        property char Status;
        property  int Id;
        array <Byte>^ Photo;
    };

}



