cmake_minimum_required(VERSION 2.8.12.2)
project(CardGame)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        CardGame main.cpp
        Classes/Card.cpp Classes/Card.h
        Classes/Deck.cpp Classes/Deck.h
        Classes/Match.cpp Classes/Match.h)