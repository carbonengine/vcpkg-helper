//
// Created by josephf on 13/11/2026.
//

#ifndef BUILDTOOL_VCPKGCONFIGURATIONMERGER_H
#define BUILDTOOL_VCPKGCONFIGURATIONMERGER_H

#include <nlohmann/json.hpp>

#include "Dependency.h"


nlohmann::ordered_json MergeManifests(nlohmann::ordered_json user_manifest_blob, nlohmann::ordered_json target_manifest_blob, std::vector<Dependency> exiting_overrides={});
nlohmann::ordered_json MergeConfigurations(nlohmann::ordered_json user_configuration_blob, nlohmann::ordered_json target_configuration_blob);


#endif //BUILDTOOL_VCPKGCONFIGURATIONMERGER_H
