# 

set(LIBRARIES
)


include_directories (
  ./
)

set (SOURCES
  main.cc
)

add_subdirectory(./pokemon/)

add_executable(${PROJECT} ${SOURCES})
target_link_libraries(${PROJECT} ${LIBRARIES})