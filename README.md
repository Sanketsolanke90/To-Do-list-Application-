# To-Do-list-Application-
# gRPC Server-Client Project

This project implements a gRPC-based API with a C++ server and a C# WPF client. It allows for communication between the server and client using defined RPC methods.

## Project Structure

```
grpc-server-client-project
├── server-cpp
│   ├── src
│   │   ├── main.cpp
│   │   └── server_impl.cpp
│   ├── include
│   │   └── server_impl.h
│   ├── proto
│   │   └── service.proto
│   ├── CMakeLists.txt
│   └── README.md
├── client-csharp-wpf
│   ├── App.xaml
│   ├── App.xaml.cs
│   ├── MainWindow.xaml
│   ├── MainWindow.xaml.cs
│   ├── Protos
│   │   └── Service.proto
│   ├── grpc_client.csproj
│   └── README.md
└── README.md
```

## Server (C++)

The C++ server is implemented in the `server-cpp` directory. It includes:

- **main.cpp**: Entry point for the server, initializes and starts the gRPC service.
- **server_impl.cpp**: Contains the implementation of the server's core functions (add, update, get).
- **server_impl.h**: Header file declaring the service class and core functions.
- **service.proto**: Defines the gRPC service and message types.
- **CMakeLists.txt**: Build configuration for the C++ server.

### Setup Instructions

1. Navigate to the `server-cpp` directory.
2. Build the project using CMake.
3. Run the server executable.

## Client (C# WPF)

The C# WPF client is implemented in the `client-csharp-wpf` directory. It includes:

- **App.xaml**: Defines application resources and startup behavior.
- **App.xaml.cs**: Handles application-level events and initialization.
- **MainWindow.xaml**: Defines the layout and UI elements for the main window.
- **MainWindow.xaml.cs**: Handles user interactions and connects to the gRPC server.
- **Service.proto**: Copy of the gRPC service definition for client-side code generation.
- **grpc_client.csproj**: Project configuration for the C# WPF client.

### Setup Instructions

1. Open the `client-csharp-wpf` project in a compatible IDE.
2. Restore the NuGet packages.
3. Run the WPF application.

## Usage

Once both the server and client are running, you can interact with the server through the client interface. The client will allow you to add, update, and retrieve data using the defined gRPC methods.

## License

This project is licensed under the MIT License.
