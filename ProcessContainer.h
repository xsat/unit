#pragma once

#include <vector>
#include "Process.h"

#define Processes std::vector<unit::Process *>

namespace unit
{

class ProcessContainer
{
public:
	virtual const Processes *getProcesses() const = 0;
};

}; // namespace unit
