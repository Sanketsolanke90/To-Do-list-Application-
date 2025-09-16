# C++ gRPC Server Project

This directory contains the implementation of a gRPC server using C++. The server provides a set of RPC methods for adding, updating, and retrieving data.

## Project Structure

- **src/**: Contains the source files for the server implementation.
  - **main.cpp**: Entry point for the server, initializes and starts the gRPC server.
  - **server_impl.cpp**: Implements the core functions of the server.
  
- **include/**: Contains header files.
  - **server_impl.h**: Declares the service class and core functions.

- **proto/**: Contains Protocol Buffers definitions.
  - **service.proto**: Defines the gRPC service and message types.

- **CMakeLists.txt**: Build configuration for the C++ server project.

## Setup Instructions

1. **Install Dependencies**: Ensure you have gRPC and Protocol Buffers installed on your system.

2. **Build the Project**:
   - Navigate to the `server-cpp` directory.
   - Create a build directory: `mkdir build && cd build`.
   - Run CMake: `cmake ..`.
   - Compile the project: `make`.

3. **Run the Server**:
   - Execute the compiled server binary: `./your_server_executable`.

## Usage Examples

Once the server is running, you can connect to it using a gRPC client. The client can be implemented in various languages, including C# using WPF, as defined in the `client-csharp-wpf` directory.

Refer to the client documentation for more details on how to set up and use the client application.