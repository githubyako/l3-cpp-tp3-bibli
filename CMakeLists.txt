project(l3-cpp-tp3-bibli)

add_executable(l3-cpp-tp3-bibli bibliotheque.cpp docpapier.cpp video.cpp periodique.cpp document.cpp livre.cpp main.cpp)

install(TARGETS l3-cpp-tp3-bibli RUNTIME DESTINATION bin)

add_definitions(-Wall)