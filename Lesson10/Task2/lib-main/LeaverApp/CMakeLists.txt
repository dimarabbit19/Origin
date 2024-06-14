   project(LeaverApp VERSION 1.0 LANGUAGES CXX)

   add_executable(LeaverApp src/main.cpp)

   target_link_libraries(LeaverApp PRIVATE LeaverLib)
   


