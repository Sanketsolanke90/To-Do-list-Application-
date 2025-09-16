#ifndef SERVER_IMPL_H
#define SERVER_IMPL_H

#include <grpcpp/grpcpp.h>
#include "service.grpc.pb.h"

class MyServiceImpl final : public MyService::Service {
public:
    grpc::Status Add(grpc::ServerContext* context, const AddRequest* request, AddResponse* response) override;
    grpc::Status Update(grpc::ServerContext* context, const UpdateRequest* request, UpdateResponse* response) override;
    grpc::Status Get(grpc::ServerContext* context, const GetRequest* request, GetResponse* response) override;
};

#endif // SERVER_IMPL_H