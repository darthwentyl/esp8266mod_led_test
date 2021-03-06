set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Werror -Wpedantic -liw")

set(PROJECT_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(PROJECT_SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(SOURCES
    ${PROJECT_SOURCES_DIR}/main.cpp
    ${PROJECT_SOURCES_DIR}/wifi/WifiConnector.cpp
    ${PROJECT_SOURCES_DIR}/wifi/WifiMngr.cpp
    ${PROJECT_SOURCES_DIR}/wifi/WifiReceiver.cpp
    ${PROJECT_SOURCES_DIR}/wifi/WifiSender.cpp
    ${PROJECT_SOURCES_DIR}/wifi/tcp/TcpClient.cpp
    ${PROJECT_SOURCES_DIR}/wifi/tcp/TcpListener.cpp
    ${PROJECT_SOURCES_DIR}/wifi/tcp/TcpReceiver.cpp
    ${PROJECT_SOURCES_DIR}/wifi/tcp/TcpSender.cpp
    ${PROJECT_SOURCES_DIR}/wifi/tcp/TcpSetup.cpp
    ${PROJECT_SOURCES_DIR}/wifi/helpers/WifiConnect.cpp
    ${PROJECT_SOURCES_DIR}/wifi/helpers/ConfigFileReader.cpp
    ${PROJECT_SOURCES_DIR}/wifi/helpers/WifiGetIp.cpp
    ${PROJECT_SOURCES_DIR}/wifi/helpers/WifiInfo.cpp
)

include_directories(${PROJECT_INCLUDE_DIR})
include_directories(${PROJECT_SOURCES_DIR})

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})
