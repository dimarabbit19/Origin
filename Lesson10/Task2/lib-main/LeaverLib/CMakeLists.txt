   project(LeaverLib VERSION 1.0 LANGUAGES CXX)

   add_library(LeaverLib SHARED
       src/Leaver.cpp
   )

   target_include_directories(LeaverLib PUBLIC
       ${CMAKE_CURRENT_SOURCE_DIR}/include
   )
   

