cmake_minimum_required(VERSION 3.14)
project(Nesoft_Desigen)

set(CMAKE_CXX_STANDARD 14)

add_executable(Nesoft_Desigen main.cpp user/user.h Login_Register/Login_Register.cpp Login_Register/Login_Register.h Login_Register/test.cpp Util/Util.cpp Util/Util.h)