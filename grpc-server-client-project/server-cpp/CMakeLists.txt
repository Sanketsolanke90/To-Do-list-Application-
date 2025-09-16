cmake_minimum_required(VERSION 3.10)

project(grpc_server_client)

set(CMAKE_CXX_STANDARD 14)

find_package(gRPC REQUIRED)
find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS} ${gRPC_INCLUDE_DIRS} include)

set(PROTO_SRC
    proto/service.proto
)

set(SRC_FILES
    src/main.cpp
    src/server_impl.cpp
)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_SRC})
add_library(proto ${PROTO_SRCS} ${PROTO_HDRS})

add_executable(grpc_server ${SRC_FILES})
target_link_libraries(grpc_server grpc++ protobuf)