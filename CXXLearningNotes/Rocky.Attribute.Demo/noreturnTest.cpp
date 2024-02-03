#pragma once

// import maybe nouseful , use include
#include <iostream> 
#include <cstdlib>


[[noreturn]]void forceProgramTermination() {
	std::exit(1);
}

bool isDongleAvailable() {
	bool isAvailable{ false };

	return isAvailable;
}

bool isFeatureLicensed(int featureId) {
        if (!isDongleAvailable()) {
          forceProgramTermination();
        } else {
          bool isLicensed{featureId == 42};
          return isLicensed;
        }
}

int main() { bool isLicensed{isFeatureLicensed(42)}; }