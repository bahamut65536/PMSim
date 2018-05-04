# 

set(target pokemon)

include_directories (
  ./include
)

set (SOURCES
  ./src/pokemon.cc
)

add_library(${target} ${SOURCES})
#target_link_libraries(${target} ProtocolLibrary)
