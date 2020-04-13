// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: server/server.proto

#include "server/server.pb.h"
#include "server/server.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mruv {

static const char* MruVServerService_method_names[] = {
  "/mruv.MruVServerService/RegisterServer",
  "/mruv.MruVServerService/GetServerStatus",
};

std::unique_ptr< MruVServerService::Stub> MruVServerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVServerService::Stub> stub(new MruVServerService::Stub(channel));
  return stub;
}

MruVServerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RegisterServer_(MruVServerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServerStatus_(MruVServerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVServerService::Stub::RegisterServer(::grpc::ClientContext* context, const ::mruv::RegisterServerRequest& request, ::mruv::RegisterServerResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegisterServer_, context, request, response);
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::mruv::RegisterServerRequest* request, ::mruv::RegisterServerResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RegisterServerResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::mruv::RegisterServerRequest* request, ::mruv::RegisterServerResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, reactor);
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RegisterServerResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::RegisterServerResponse>* MruVServerService::Stub::AsyncRegisterServerRaw(::grpc::ClientContext* context, const ::mruv::RegisterServerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RegisterServerResponse>::Create(channel_.get(), cq, rpcmethod_RegisterServer_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::RegisterServerResponse>* MruVServerService::Stub::PrepareAsyncRegisterServerRaw(::grpc::ClientContext* context, const ::mruv::RegisterServerRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RegisterServerResponse>::Create(channel_.get(), cq, rpcmethod_RegisterServer_, context, request, false);
}

::grpc::Status MruVServerService::Stub::GetServerStatus(::grpc::ClientContext* context, const ::mruv::ServerID& request, ::mruv::ServerStatus* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServerStatus_, context, request, response);
}

void MruVServerService::Stub::experimental_async::GetServerStatus(::grpc::ClientContext* context, const ::mruv::ServerID* request, ::mruv::ServerStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServerStatus_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::GetServerStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServerStatus* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServerStatus_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::GetServerStatus(::grpc::ClientContext* context, const ::mruv::ServerID* request, ::mruv::ServerStatus* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServerStatus_, context, request, response, reactor);
}

void MruVServerService::Stub::experimental_async::GetServerStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServerStatus* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServerStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServerStatus>* MruVServerService::Stub::AsyncGetServerStatusRaw(::grpc::ClientContext* context, const ::mruv::ServerID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServerStatus>::Create(channel_.get(), cq, rpcmethod_GetServerStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServerStatus>* MruVServerService::Stub::PrepareAsyncGetServerStatusRaw(::grpc::ClientContext* context, const ::mruv::ServerID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServerStatus>::Create(channel_.get(), cq, rpcmethod_GetServerStatus_, context, request, false);
}

MruVServerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::RegisterServerRequest, ::mruv::RegisterServerResponse>(
          std::mem_fn(&MruVServerService::Service::RegisterServer), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::ServerID, ::mruv::ServerStatus>(
          std::mem_fn(&MruVServerService::Service::GetServerStatus), this)));
}

MruVServerService::Service::~Service() {
}

::grpc::Status MruVServerService::Service::RegisterServer(::grpc::ServerContext* context, const ::mruv::RegisterServerRequest* request, ::mruv::RegisterServerResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVServerService::Service::GetServerStatus(::grpc::ServerContext* context, const ::mruv::ServerID* request, ::mruv::ServerStatus* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv

