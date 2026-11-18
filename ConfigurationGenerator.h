//
// Created by jfran on 11/7/2026.
//

#ifndef BUILDTOOL_CONFIGURATIONGENERATOR_H
#define BUILDTOOL_CONFIGURATIONGENERATOR_H

#include <string>
#include <filesystem>
#include <nlohmann/json.hpp>

class ConfigurationGenerator {
public:
    ConfigurationGenerator(const std::string& lockfile_path);
    void Generate(const std::string& user_project_root);
    void SetParentPresetName(const std::string &);

private:
    nlohmann::ordered_json lockfileData;
    nlohmann::ordered_json extra_directories_blob;
    nlohmann::ordered_json configuration_blob;
    nlohmann::ordered_json manifest_blob;
    nlohmann::ordered_json env_vars_blob;
    std::string overlayTripletsPath;
    std::string targetTripletName;
    std::string inheritsPreset;

    void generate_directory_structure_from_json_blob(nlohmann::ordered_json blob, const std::filesystem::path& destination);
};


#endif //BUILDTOOL_CONFIGURATIONGENERATOR_H
