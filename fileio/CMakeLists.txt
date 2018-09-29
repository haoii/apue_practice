cmake_minimum_required (VERSION 2.8)

project (fileio)

aux_source_directory(. DIR_SRCS)

add_executable (test_open ${DIR_SRCS})