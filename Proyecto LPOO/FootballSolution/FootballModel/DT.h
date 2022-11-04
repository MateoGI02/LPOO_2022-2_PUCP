/**
 * Project Untitled
 */

#pragma once
#include "person.h"

using namespace System;

namespace FootballModel {
	[Serializable]
	public ref class DT : public person {
	public:
		property  String^ Name;
		property  String^ Surname;
		property int Age;
		property  String^ DocNumber;
		property String^ Username;
		property String^ Password;

	};

}
