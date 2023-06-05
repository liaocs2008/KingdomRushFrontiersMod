#/****************************************************************************
# Copyright (c) 2013-2014 cocos2d-x.org
# Copyright (c) 2015-2017 Chukong Technologies Inc.
#
# http://www.cocos2d-x.org
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:

# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.

# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
# ****************************************************************************/

cmake_minimum_required(VERSION 3.6)

set(APP_NAME KingdomRushFrontiersHSL)

project(${APP_NAME})

if(XCODE)
    if(NOT DEFINED CMAKE_XCODE_ATTRIBUTE_IPHONEOS_DEPLOYMENT_TARGET)
        SET (CMAKE_XCODE_ATTRIBUTE_IPHONEOS_DEPLOYMENT_TARGET 8.0)
    endif()
endif()

if(NOT DEFINED BUILD_ENGINE_DONE) # to test KingdomRushFrontiersHSL into root project
    set(COCOS2DX_ROOT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d)
    set(CMAKE_MODULE_PATH ${COCOS2DX_ROOT_PATH}/cmake/Modules/)

    include(CocosBuildSet)
    add_subdirectory(${COCOS2DX_ROOT_PATH}/cocos ${ENGINE_BINARY_PATH}/cocos/core)
endif()

# record sources, headers, resources...
set(GAME_SOURCE)
set(GAME_HEADER)

set(GAME_RES_FOLDER
    "${CMAKE_CURRENT_SOURCE_DIR}/Resources"
    )
if(APPLE OR WINDOWS)
    cocos_mark_multi_resources(common_res_files RES_TO "Resources" FOLDERS ${GAME_RES_FOLDER})
endif()

# add cross-platforms source files and header files 
#list(APPEND GAME_SOURCE
#     Classes/AppDelegate.cpp
#     Classes/HelloWorldScene.cpp
#     )
#list(APPEND GAME_HEADER
#     Classes/AppDelegate.h
#     Classes/HelloWorldScene.h
#     )



list(APPEND GAME_SOURCE
     Classes/HelloWorldScene.cpp
     Classes/Layer/Victory.cpp
     Classes/Layer/TouchLayer.cpp
     Classes/Layer/PlayerStateMenu.cpp
     Classes/Layer/Menu/UpdatePanleLayer.cpp
     Classes/Layer/Menu/UpdatePanleLayer2WithFlag.cpp
     Classes/Layer/Menu/TowerPanleLayer.cpp
     Classes/Layer/Menu/SimplePanleLayerWithFlag.cpp
     Classes/Layer/Menu/UpdatePanleLayer2.cpp
     Classes/Layer/Menu/SimplePanleLayer.cpp
     Classes/Layer/Menu/UpdatePanleLayerWithFlag.cpp
     Classes/Layer/Failure.cpp
     Classes/Layer/GameOption.cpp
     Classes/Layer/GameViewMenu.cpp
     Classes/Map/Level9.cpp
     Classes/Map/Level1.cpp
     Classes/Map/BaseMap.cpp
     Classes/Map/Level10.cpp
     Classes/Map/Level3.cpp
     Classes/Map/Level7.cpp
     Classes/Map/Level0.cpp
     Classes/Map/Level4.cpp
     Classes/Map/Level12.cpp
     Classes/Map/Level8.cpp
     Classes/Map/Level2.cpp
     Classes/Map/Level13.cpp
     Classes/Map/Level6.cpp
     Classes/Map/Level5.cpp
     Classes/Map/Level11.cpp
     Classes/Bullet/Missile.cpp
     Classes/Bullet/Shit.cpp
     Classes/Bullet/Bomb.cpp
     Classes/Bullet/Freeze.cpp
     Classes/Bullet/RedTotem.cpp
     Classes/Bullet/MageBolt.cpp
     Classes/Bullet/Lava.cpp
     Classes/Bullet/Arrow.cpp
     Classes/Bullet/ArchMageBolt.cpp
     Classes/Bullet/Dynamite.cpp
     Classes/Bullet/Twister.cpp
     Classes/Bullet/Drill.cpp
     Classes/Bullet/NecrBolt.cpp
     Classes/Bullet/VioletTotem.cpp
     Classes/Bullet/MechaBomb.cpp
     Classes/Bullet/FireBall.cpp
     Classes/Bullet/EarthquakeSmoke.cpp
     Classes/Bullet/Bullet.cpp
     Classes/Bullet/TotemAxe.cpp
     Classes/Monster/HSL_soldier.cpp
     Classes/Monster/Jungle/Shield.cpp
     Classes/Monster/Jungle/Hunter.cpp
     Classes/Monster/Jungle/Gorilla.cpp
     Classes/Monster/Jungle/Priest.cpp
     Classes/Monster/Jungle/WingRider.cpp
     Classes/Monster/Jungle/Canibal.cpp
     Classes/Monster/Jungle/Shaman.cpp
     Classes/Monster/GroupMonster.cpp
     Classes/Monster/Boss/CanibalOffspring.cpp
     Classes/Monster/Boss/Boss_Efreeti.cpp
     Classes/Monster/Boss/Boss_Canibal.cpp
     Classes/Monster/Boss/Efreeti.cpp
     Classes/Monster/BaseMonster.cpp
     Classes/Monster/Underground/Myrmidon.cpp
     Classes/Monster/Underground/Nightscale.cpp
     Classes/Monster/Underground/Broodguard.cpp
     Classes/Monster/Underground/Blazefang.cpp
     Classes/Monster/Underground/Quetzal.cpp
     Classes/Monster/Underground/Elite.cpp
     Classes/Monster/Desert/Munra.cpp
     Classes/Monster/Desert/WaspQueen.cpp
     Classes/Monster/Desert/Scorpion.cpp
     Classes/Monster/Desert/Tremor.cpp
     Classes/Monster/Desert/Raider.cpp
     Classes/Monster/Desert/Wolf.cpp
     Classes/Monster/Desert/Immortal.cpp
     Classes/Monster/Desert/Executioner.cpp
     Classes/Monster/Desert/Thug.cpp
     Classes/Monster/Desert/WaspHornet.cpp
     Classes/Monster/Desert/Fallen.cpp
     Classes/Sprite/MapFlag.cpp
     Classes/Sprite/WaveFlag.cpp
     Classes/Sprite/Circle/RallyCircle.cpp
     Classes/Sprite/Circle/Circle.cpp
     Classes/Sprite/UpdateIcon.cpp
     Classes/Sprite/RespirationSprite.cpp
     Classes/Sprite/TowerInfoLayer.cpp
     Classes/Sprite/Smoke.cpp
     Classes/Sprite/MagicIcon.cpp
     Classes/Sprite/MonsterInfoLayer.cpp
     Classes/Sprite/ShopIcon.cpp
     Classes/Sprite/SlotMenu.cpp
     Classes/Sprite/TowerIcon/BaseBuildIcon.cpp
     Classes/Sprite/TowerIcon/SellIcon.cpp
     Classes/Scene/GameView.cpp
     Classes/Scene/UpdateTowerScene/Icons.cpp
     Classes/Scene/UpdateTowerScene/Upgrades.cpp
     Classes/Scene/TransitionGame.cpp
     Classes/Scene/Story/BeginAnimation.cpp
     Classes/Scene/ChooseDifficulty.cpp
     Classes/Scene/LoadingScene.cpp
     Classes/Scene/ShopScene.cpp
     Classes/Scene/GameScene.cpp
     Classes/Scene/WelcomeScene.cpp
     Classes/Scene/Introduction/EnemyScene.cpp
     Classes/Scene/Introduction/EnemyDesc.cpp
     Classes/Scene/Introduction/EncyclopaediaTips.cpp
     Classes/Scene/Introduction/EncyclopediaScene.cpp
     Classes/Scene/Introduction/Information.cpp
     Classes/Scene/Introduction/TowerDesc.cpp
     Classes/Scene/Introduction/TowerScene.cpp
     Classes/Soldier/BarrackSoldier.cpp
     Classes/Soldier/Mecha.cpp
     Classes/Soldier/BaseSoldier.cpp
     Classes/Soldier/Assassin.cpp
     Classes/Soldier/BarrackHSLSoldier.cpp
     Classes/Soldier/Templar.cpp
     Classes/Soldier/Skeleton.cpp
     Classes/Soldier/ReinforceSoldier2.cpp
     Classes/Soldier/ReinforceSoldier1.cpp
     Classes/Soldier/DeathKnight.cpp
     Classes/Road/Road.cpp
     Classes/AppDelegate.cpp
     Classes/Tower/CossbowHunterTower.cpp
     Classes/Tower/SimpleArrowTowerlvl1.cpp
     Classes/Tower/Terrain.cpp
     Classes/Tower/SimpleArrowTowerLvl2.cpp
     Classes/Tower/SimpleMageTowerlvl1.cpp
     Classes/Tower/BaseArrowTower.cpp
     Classes/Tower/BaseTower.cpp
     Classes/Tower/ArchMageTower.cpp
     Classes/Tower/SimpleArrowTowerLvl3.cpp
     Classes/Tower/SimpleArtilleryTowerlvl3.cpp
     Classes/Tower/BaseBarracksTower.cpp
     Classes/Tower/EarthquakeTower.cpp
     Classes/Tower/MechsTower.cpp
     Classes/Tower/BaseArtilleryTower.cpp
     Classes/Tower/BaseMageTower.cpp
     Classes/Tower/SimpleMageTowerlvl2.cpp
     Classes/Tower/TotemTower.cpp
     Classes/Tower/SimpleArtilleryTowerlvl2.cpp
     Classes/Tower/NecromancerTower.cpp
     Classes/Tower/SimpleMageTowerlvl3.cpp
     Classes/Tower/SimpleArtilleryTowerlvl1.cpp
     Classes/Data/MyAnimation.cpp
     Classes/Data/GameManager.cpp
     Classes/Data/SoundManager.cpp
     )
list(APPEND GAME_HEADER
     Classes/HelloWorldScene.h
     Classes/Layer/Failure.h
     Classes/Layer/Victory.h
     Classes/Layer/GameViewMenu.h
     Classes/Layer/TouchLayer.h
     Classes/Layer/Menu/UpdatePanleLayer2.h
     Classes/Layer/Menu/UpdatePanleLayerWithFlag.h
     Classes/Layer/Menu/SimplePanleLayer.h
     Classes/Layer/Menu/UpdatePanleLayer.h
     Classes/Layer/Menu/UpdatePanleLayer2WithFlag.h
     Classes/Layer/Menu/SimplePanleLayerWithFlag.h
     Classes/Layer/Menu/TowerPanleLayer.h
     Classes/Layer/GameOption.h
     Classes/Layer/PlayerStateMenu.h
     Classes/Map/Level13.h
     Classes/Map/Level1.h
     Classes/Map/Level5.h
     Classes/Map/Level10.h
     Classes/Map/Level8.h
     Classes/Map/Level11.h
     Classes/Map/Level12.h
     Classes/Map/Level3.h
     Classes/Map/Level0.h
     Classes/Map/Level4.h
     Classes/Map/Level7.h
     Classes/Map/Level6.h
     Classes/Map/Level2.h
     Classes/Map/Level9.h
     Classes/Map/BaseMap.h
     Classes/Bullet/Dynamite.h
     Classes/Bullet/ArchMageBolt.h
     Classes/Bullet/Twister.h
     Classes/Bullet/EarthquakeSmoke.h
     Classes/Bullet/Drill.h
     Classes/Bullet/RedTotem.h
     Classes/Bullet/Arrow.h
     Classes/Bullet/Lava.h
     Classes/Bullet/Missile.h
     Classes/Bullet/MechaBomb.h
     Classes/Bullet/Bomb.h
     Classes/Bullet/Smoke.h
     Classes/Bullet/Bullet.h
     Classes/Bullet/MageBolt.h
     Classes/Bullet/Shit.h
     Classes/Bullet/Freeze.h
     Classes/Bullet/VioletTotem.h
     Classes/Bullet/FireBall.h
     Classes/Bullet/NecrBolt.h
     Classes/Bullet/TotemAxe.h
     Classes/Monster/Jungle/WingRider.h
     Classes/Monster/Jungle/Shield.h
     Classes/Monster/Jungle/Gorilla.h
     Classes/Monster/Jungle/Canibal.h
     Classes/Monster/Jungle/Priest.h
     Classes/Monster/Jungle/Hunter.h
     Classes/Monster/Jungle/Shaman.h
     Classes/Monster/BaseMonster.h
     Classes/Monster/Boss/Boss_Efreeti.h
     Classes/Monster/Boss/Boss_Canibal.h
     Classes/Monster/Boss/Efreeti.h
     Classes/Monster/Boss/CanibalOffspring.h
     Classes/Monster/GroupMonster.h
     Classes/Monster/Underground/Broodguard.h
     Classes/Monster/Underground/Blazefang.h
     Classes/Monster/Underground/Myrmidon.h
     Classes/Monster/Underground/Quetzal.h
     Classes/Monster/Underground/Elite.h
     Classes/Monster/Underground/Nightscale.h
     Classes/Monster/HSL_soldier.h
     Classes/Monster/Desert/Scorpion.h
     Classes/Monster/Desert/Executioner.h
     Classes/Monster/Desert/Tremor.h
     Classes/Monster/Desert/Immortal.h
     Classes/Monster/Desert/Munra.h
     Classes/Monster/Desert/Wolf.h
     Classes/Monster/Desert/Raider.h
     Classes/Monster/Desert/WaspQueen.h
     Classes/Monster/Desert/Fallen.h
     Classes/Monster/Desert/Thug.h
     Classes/Monster/Desert/WaspHornet.h
     Classes/Sprite/Circle/RallyCircle.h
     Classes/Sprite/Circle/Circle.h
     Classes/Sprite/MonsterInfoLayer.h
     Classes/Sprite/MapFlag.h
     Classes/Sprite/RespirationSprite.h
     Classes/Sprite/MagicIcon.h
     Classes/Sprite/SlotMenu.h
     Classes/Sprite/ShopIcon.h
     Classes/Sprite/TowerInfoLayer.h
     Classes/Sprite/TowerIcon/BaseBuildIcon.h
     Classes/Sprite/TowerIcon/SellIcon.h
     Classes/Sprite/WaveFlag.h
     Classes/Sprite/UpdateIcon.h
     Classes/Scene/WelcomeScene.h
     Classes/Scene/ShopScene.h
     Classes/Scene/TransitionGame.h
     Classes/Scene/UpdateTowerScene/Icons.h
     Classes/Scene/UpdateTowerScene/Upgrades.h
     Classes/Scene/ChooseDifficulty.h
     Classes/Scene/Story/BeginAnimation.h
     Classes/Scene/GameView.h
     Classes/Scene/GameScene.h
     Classes/Scene/Introduction/EnemyScene.h
     Classes/Scene/Introduction/EncyclopaediaTips.h
     Classes/Scene/Introduction/TowerDesc.h
     Classes/Scene/Introduction/EnemyDesc.h
     Classes/Scene/Introduction/EncyclopediaScene.h
     Classes/Scene/Introduction/Information.h
     Classes/Scene/Introduction/TowerScene.h
     Classes/Scene/LoadingScene.h
     Classes/Soldier/BarrackSoldier.h
     Classes/Soldier/BarrackHSLSoldier.h
     Classes/Soldier/Mecha.h
     Classes/Soldier/Skeleton.h
     Classes/Soldier/Templar.h
     Classes/Soldier/Assassin.h
     Classes/Soldier/ReinforceSoldier2.h
     Classes/Soldier/BaseSoldier.h
     Classes/Soldier/DeathKnight.h
     Classes/Soldier/ReinforceSoldier1.h
     Classes/Road/Road.h
     Classes/Tower/TotemTower.h
     Classes/Tower/SimpleArrowTowerLvl3.h
     Classes/Tower/ArchMageTower.h
     Classes/Tower/SimpleArrowTowerLvl2.h
     Classes/Tower/SimpleArrowTowerlvl1.h
     Classes/Tower/BaseArrowTower.h
     Classes/Tower/EarthquakeTower.h
     Classes/Tower/Terrain.h
     Classes/Tower/MechsTower.h
     Classes/Tower/NecromancerTower.h
     Classes/Tower/CossbowHunterTower.h
     Classes/Tower/SimpleMageTowerlvl1.h
     Classes/Tower/SimpleArtilleryTowerlvl3.h
     Classes/Tower/SimpleArtilleryTowerlvl2.h
     Classes/Tower/BaseBarracksTower.h
     Classes/Tower/BaseTower.h
     Classes/Tower/BaseArtilleryTower.h
     Classes/Tower/SimpleMageTowerlvl2.h
     Classes/Tower/SimpleMageTowerlvl3.h
     Classes/Tower/SimpleArtilleryTowerlvl1.h
     Classes/Tower/BaseMageTower.h
     Classes/AppDelegate.h
     Classes/Data/GameManager.h
     Classes/Data/SoundManager.h
     Classes/Data/MyAnimation.h
     )




if(ANDROID)
    # change APP_NAME to the share library name for Android, it's value depend on AndroidManifest.xml
    set(APP_NAME MyGame)
    list(APPEND GAME_SOURCE
         proj.android/app/jni/hellocpp/main.cpp
         )
elseif(LINUX)
    list(APPEND GAME_SOURCE
         proj.linux/main.cpp
         )
elseif(WINDOWS)
    list(APPEND GAME_HEADER
         proj.win32/main.h
         proj.win32/resource.h
         )
    list(APPEND GAME_SOURCE
         proj.win32/main.cpp
         proj.win32/game.rc
         ${common_res_files}
         )
elseif(APPLE)
    if(IOS)
        list(APPEND GAME_HEADER
             proj.ios_mac/ios/AppController.h
             proj.ios_mac/ios/RootViewController.h
             )
        set(APP_UI_RES
            proj.ios_mac/ios/LaunchScreen.storyboard
            proj.ios_mac/ios/LaunchScreenBackground.png
            proj.ios_mac/ios/Images.xcassets
            )
        list(APPEND GAME_SOURCE
             proj.ios_mac/ios/main.m
             proj.ios_mac/ios/AppController.mm
             proj.ios_mac/ios/RootViewController.mm
             proj.ios_mac/ios/Prefix.pch
             ${APP_UI_RES}
             )
    elseif(MACOSX)
        set(APP_UI_RES
            proj.ios_mac/mac/Icon.icns
            proj.ios_mac/mac/Info.plist
            )
        list(APPEND GAME_SOURCE
             proj.ios_mac/mac/main.cpp
             proj.ios_mac/mac/Prefix.pch
             ${APP_UI_RES}
             )
    endif()
    list(APPEND GAME_SOURCE ${common_res_files})
endif()

# mark app complie info and libs info
set(all_code_files
    ${GAME_HEADER}
    ${GAME_SOURCE}
    )
if(NOT ANDROID)
    add_executable(${APP_NAME} ${all_code_files})
else()
    add_library(${APP_NAME} SHARED ${all_code_files})
    add_subdirectory(${COCOS2DX_ROOT_PATH}/cocos/platform/android ${ENGINE_BINARY_PATH}/cocos/platform)
    target_link_libraries(${APP_NAME} -Wl,--whole-archive cpp_android_spec -Wl,--no-whole-archive)
endif()

target_link_libraries(${APP_NAME} cocos2d)
target_include_directories(${APP_NAME}
        PRIVATE Classes
        PRIVATE ${COCOS2DX_ROOT_PATH}/cocos/audio/include/
)

# mark app resources
setup_cocos_app_config(${APP_NAME})
if(APPLE)
    set_target_properties(${APP_NAME} PROPERTIES RESOURCE "${APP_UI_RES}")
    set_xcode_property(${APP_NAME} INSTALL_PATH "\$(LOCAL_APPS_DIR)")

    if(MACOSX)
        set_xcode_property(${APP_NAME} INFOPLIST_FILE "${CMAKE_CURRENT_SOURCE_DIR}/proj.ios_mac/mac/Info.plist")
    elseif(IOS)
        set_xcode_property(${APP_NAME} INFOPLIST_FILE "${CMAKE_CURRENT_SOURCE_DIR}/proj.ios_mac/ios/Info.plist")
        set_xcode_property(${APP_NAME} ASSETCATALOG_COMPILER_APPICON_NAME "AppIcon")
    endif()

    # For code-signing, set the DEVELOPMENT_TEAM:
    #set_xcode_property(${APP_NAME} DEVELOPMENT_TEAM "GRLXXXX2K9")
elseif(WINDOWS)
    cocos_copy_target_dll(${APP_NAME})
endif()

if(LINUX OR WINDOWS)
    cocos_get_resource_path(APP_RES_DIR ${APP_NAME})
    cocos_copy_target_res(${APP_NAME} LINK_TO ${APP_RES_DIR} FOLDERS ${GAME_RES_FOLDER})
endif()
