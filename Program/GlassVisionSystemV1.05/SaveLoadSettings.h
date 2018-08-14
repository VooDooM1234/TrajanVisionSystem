#pragma once
void LoadImageSettingsFromFile(std::string filename);
void LoadImageSettingsFromGUI();
void SaveImageSettings(ImageSettings settings, std::string filename);
void SaveProductSettings(ProductSettings settings);
void SaveProductSettings(ProductSettings settings, std::string folderLocation);

ProductSettings LoadProductSettings(std::string filename);
void SaveLog(LogInfo log);

