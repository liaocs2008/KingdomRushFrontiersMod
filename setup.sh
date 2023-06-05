rm -rf game_folder
cocos new KingdomRushFrontiersHSL  -p com.random_company.hsl -l cpp -d game_folder

cp ./CMakeLists.txt ./game_folder/KingdomRushFrontiersHSL/
cp ./build.gradle ./game_folder/KingdomRushFrontiersHSL/proj.android/
cp ./app.build.gradle ./game_folder/KingdomRushFrontiersHSL/proj.android/app/
cp ./gradle.properties ./game_folder/KingdomRushFrontiersHSL/proj.android/

# add src and resources
rm -rf ./game_folder/KingdomRushFrontiersHSL/Classes 
cp -r ./Classes ./game_folder/KingdomRushFrontiersHSL/

rm -rf ./game_folder/KingdomRushFrontiersHSL/Resources 
cp -r ./Resources ./game_folder/KingdomRushFrontiersHSL/

