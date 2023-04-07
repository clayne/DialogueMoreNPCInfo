# DialogueMoreNPCInfo

## Nexus Mods
* [DialogueMoreNPCInfo](https://www.nexusmods.com/skyrimspecialedition/mods/71866)

## End User Dependencies
* [SKSE64](https://skse.silverlock.org/)
* [Address Library for SKSE Plugins](https://www.nexusmods.com/skyrimspecialedition/mods/32444)
* [Scaleform Translation Plus Plus](https://www.nexusmods.com/skyrimspecialedition/mods/22603)
* [Icons for Dialog More NPC Info](https://www.nexusmods.com/skyrimspecialedition/mods/71868)
* [Auto Input Switch](https://www.nexusmods.com/skyrimspecialedition/mods/54309)

## Build Dependencies
* [CommonLibSSE NG](https://github.com/CharmedBaryon/CommonLibSSE-NG)
* [spdlog](https://github.com/gabime/spdlog)
* [simpleini](https://github.com/brofield/simpleini)
* [vcpkg](https://github.com/microsoft/vcpkg) 
  - Add the environment variable `VCPKG_ROOT` with the value as the path to the folder containing vcpkg
* [cmake](https://cmake.org) 
  - installed dir needs to be added to the `PATH` environment variable

## Building
```
git clone https://github.com/mlthelama/DialogueMoreNPCInfo.git
cd DialogueMoreNPCInfo

cmake --preset vs2022-windows
cmake --build --preset vs2022-windows --config Release
```
