# C# WPF Client Documentation

## Overview
This project contains a C# WPF client that communicates with a gRPC server implemented in C++. The client allows users to interact with the server's functionalities, such as adding, updating, and retrieving data.

## Prerequisites
- .NET SDK (version 5.0 or later)
- Visual Studio or any compatible IDE for C# development
- gRPC tools for .NET

## Setup Instructions
1. **Clone the Repository**
   Clone the repository to your local machine using:
   ```
   git clone <repository-url>
   ```

2. **Navigate to the Client Directory**
   Change to the client directory:
   ```
   cd grpc-server-client-project/client-csharp-wpf
   ```

3. **Restore Dependencies**
   Restore the project dependencies using the following command:
   ```
   dotnet restore
   ```

4. **Build the Project**
   Build the project to ensure all components are correctly set up:
   ```
   dotnet build
   ```

5. **Run the Application**
   Start the WPF client application:
   ```
   dotnet run
   ```

## Usage
- The main window provides a user interface for interacting with the gRPC server.
- Users can perform operations such as adding new entries, updating existing ones, and retrieving data from the server.

## Additional Information
For more details on the gRPC service and its methods, refer to the `service.proto` file located in the `Protos` directory.