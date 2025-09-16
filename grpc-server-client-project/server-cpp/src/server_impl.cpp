#include "server_impl.h"
#include <iostream>
#include <unordered_map>

class MyServiceImpl final : public MyService::Service {
public:
    grpc::Status Add(grpc::ServerContext* context, const AddRequest* request, AddResponse* response) override {
        // Dummy implementation for adding data
        data_[request->key()] = request->value();
        response->set_success(true);
        return grpc::Status::OK;
    }

    grpc::Status Update(grpc::ServerContext* context, const UpdateRequest* request, UpdateResponse* response) override {
        // Dummy implementation for updating data
        auto it = data_.find(request->key());
        if (it != data_.end()) {
            it->second = request->value();
            response->set_success(true);
        } else {
            response->set_success(false);
        }
        return grpc::Status::OK;
    }

    grpc::Status Get(grpc::ServerContext* context, const GetRequest* request, GetResponse* response) override {
        // Dummy implementation for retrieving data
        auto it = data_.find(request->key());
        if (it != data_.end()) {
            response->set_value(it->second);
            response->set_success(true);
        } else {
            response->set_success(false);
        }
        return grpc::Status::OK;
    }

private:
    std::unordered_map<std::string, std::string> data_;
};