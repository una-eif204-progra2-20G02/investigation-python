set(BINARY ${investigation-python})

# add_executable(ExampleProject main.cpp file1.cpp file1.h)
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp) #simplification

set(SOURCES ${SOURCES})

add_executable(${BINARY}_run ${SOURCES})

add_library(${BINARY}_lib STATIC ${SOURCES} Headphones.h Headphones.cpp Mouse.h Mouse.cpp BaseObject.h BaseObject.cpp BoxOfObjects.h BoxOfObjects.cpp Pen.h Pen.cpp Scissors.h Scissors.cpp)