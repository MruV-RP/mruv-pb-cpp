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
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace mruv {
namespace server {

static const char* MruVServerService_method_names[] = {
  "/mruv.server.MruVServerService/RegisterServer",
  "/mruv.server.MruVServerService/GetRegisteredServers",
  "/mruv.server.MruVServerService/GetServerInfo",
  "/mruv.server.MruVServerService/UpdateServerStatus",
  "/mruv.server.MruVServerService/ServerEventsStream",
};

std::unique_ptr< MruVServerService::Stub> MruVServerService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVServerService::Stub> stub(new MruVServerService::Stub(channel));
  return stub;
}

MruVServerService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RegisterServer_(MruVServerService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetRegisteredServers_(MruVServerService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServerInfo_(MruVServerService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateServerStatus_(MruVServerService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ServerEventsStream_(MruVServerService_method_names[4], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status MruVServerService::Stub::RegisterServer(::grpc::ClientContext* context, const ::mruv::server::ServerInfo& request, ::mruv::server::ServerID* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegisterServer_, context, request, response);
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::mruv::server::ServerInfo* request, ::mruv::server::ServerID* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::RegisterServer(::grpc::ClientContext* context, const ::mruv::server::ServerInfo* request, ::mruv::server::ServerID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterServer_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::ServerID>* MruVServerService::Stub::PrepareAsyncRegisterServerRaw(::grpc::ClientContext* context, const ::mruv::server::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::server::ServerID>::Create(channel_.get(), cq, rpcmethod_RegisterServer_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::ServerID>* MruVServerService::Stub::AsyncRegisterServerRaw(::grpc::ClientContext* context, const ::mruv::server::ServerInfo& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncRegisterServerRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVServerService::Stub::GetRegisteredServers(::grpc::ClientContext* context, const ::mruv::server::GetRegisteredServersRequest& request, ::mruv::server::GetRegisteredServersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetRegisteredServers_, context, request, response);
}

void MruVServerService::Stub::experimental_async::GetRegisteredServers(::grpc::ClientContext* context, const ::mruv::server::GetRegisteredServersRequest* request, ::mruv::server::GetRegisteredServersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetRegisteredServers_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::GetRegisteredServers(::grpc::ClientContext* context, const ::mruv::server::GetRegisteredServersRequest* request, ::mruv::server::GetRegisteredServersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetRegisteredServers_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::GetRegisteredServersResponse>* MruVServerService::Stub::PrepareAsyncGetRegisteredServersRaw(::grpc::ClientContext* context, const ::mruv::server::GetRegisteredServersRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::server::GetRegisteredServersResponse>::Create(channel_.get(), cq, rpcmethod_GetRegisteredServers_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::GetRegisteredServersResponse>* MruVServerService::Stub::AsyncGetRegisteredServersRaw(::grpc::ClientContext* context, const ::mruv::server::GetRegisteredServersRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetRegisteredServersRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVServerService::Stub::GetServerInfo(::grpc::ClientContext* context, const ::mruv::server::ServerID& request, ::mruv::server::ServerInfo* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServerInfo_, context, request, response);
}

void MruVServerService::Stub::experimental_async::GetServerInfo(::grpc::ClientContext* context, const ::mruv::server::ServerID* request, ::mruv::server::ServerInfo* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServerInfo_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::GetServerInfo(::grpc::ClientContext* context, const ::mruv::server::ServerID* request, ::mruv::server::ServerInfo* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServerInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::ServerInfo>* MruVServerService::Stub::PrepareAsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::mruv::server::ServerID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::server::ServerInfo>::Create(channel_.get(), cq, rpcmethod_GetServerInfo_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::ServerInfo>* MruVServerService::Stub::AsyncGetServerInfoRaw(::grpc::ClientContext* context, const ::mruv::server::ServerID& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetServerInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVServerService::Stub::UpdateServerStatus(::grpc::ClientContext* context, const ::mruv::server::UpdateServerStatusRequest& request, ::mruv::server::UpdateServerStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateServerStatus_, context, request, response);
}

void MruVServerService::Stub::experimental_async::UpdateServerStatus(::grpc::ClientContext* context, const ::mruv::server::UpdateServerStatusRequest* request, ::mruv::server::UpdateServerStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateServerStatus_, context, request, response, std::move(f));
}

void MruVServerService::Stub::experimental_async::UpdateServerStatus(::grpc::ClientContext* context, const ::mruv::server::UpdateServerStatusRequest* request, ::mruv::server::UpdateServerStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateServerStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::UpdateServerStatusResponse>* MruVServerService::Stub::PrepareAsyncUpdateServerStatusRaw(::grpc::ClientContext* context, const ::mruv::server::UpdateServerStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::server::UpdateServerStatusResponse>::Create(channel_.get(), cq, rpcmethod_UpdateServerStatus_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::server::UpdateServerStatusResponse>* MruVServerService::Stub::AsyncUpdateServerStatusRaw(::grpc::ClientContext* context, const ::mruv::server::UpdateServerStatusRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateServerStatusRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mruv::server::ServerEvent>* MruVServerService::Stub::ServerEventsStreamRaw(::grpc::ClientContext* context, const ::mruv::server::ServerEventsStreamRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mruv::server::ServerEvent>::Create(channel_.get(), rpcmethod_ServerEventsStream_, context, request);
}

void MruVServerService::Stub::experimental_async::ServerEventsStream(::grpc::ClientContext* context, ::mruv::server::ServerEventsStreamRequest* request, ::grpc::experimental::ClientReadReactor< ::mruv::server::ServerEvent>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mruv::server::ServerEvent>::Create(stub_->channel_.get(), stub_->rpcmethod_ServerEventsStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mruv::server::ServerEvent>* MruVServerService::Stub::AsyncServerEventsStreamRaw(::grpc::ClientContext* context, const ::mruv::server::ServerEventsStreamRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mruv::server::ServerEvent>::Create(channel_.get(), cq, rpcmethod_ServerEventsStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mruv::server::ServerEvent>* MruVServerService::Stub::PrepareAsyncServerEventsStreamRaw(::grpc::ClientContext* context, const ::mruv::server::ServerEventsStreamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mruv::server::ServerEvent>::Create(channel_.get(), cq, rpcmethod_ServerEventsStream_, context, request, false, nullptr);
}

MruVServerService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::server::ServerInfo, ::mruv::server::ServerID>(
          [](MruVServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::server::ServerInfo* req,
             ::mruv::server::ServerID* resp) {
               return service->RegisterServer(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::server::GetRegisteredServersRequest, ::mruv::server::GetRegisteredServersResponse>(
          [](MruVServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::server::GetRegisteredServersRequest* req,
             ::mruv::server::GetRegisteredServersResponse* resp) {
               return service->GetRegisteredServers(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::server::ServerID, ::mruv::server::ServerInfo>(
          [](MruVServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::server::ServerID* req,
             ::mruv::server::ServerInfo* resp) {
               return service->GetServerInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVServerService::Service, ::mruv::server::UpdateServerStatusRequest, ::mruv::server::UpdateServerStatusResponse>(
          [](MruVServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::server::UpdateServerStatusRequest* req,
             ::mruv::server::UpdateServerStatusResponse* resp) {
               return service->UpdateServerStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVServerService_method_names[4],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MruVServerService::Service, ::mruv::server::ServerEventsStreamRequest, ::mruv::server::ServerEvent>(
          [](MruVServerService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::server::ServerEventsStreamRequest* req,
             ::grpc::ServerWriter<::mruv::server::ServerEvent>* writer) {
               return service->ServerEventsStream(ctx, req, writer);
             }, this)));
}

MruVServerService::Service::~Service() {
}

::grpc::Status MruVServerService::Service::RegisterServer(::grpc::ServerContext* context, const ::mruv::server::ServerInfo* request, ::mruv::server::ServerID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVServerService::Service::GetRegisteredServers(::grpc::ServerContext* context, const ::mruv::server::GetRegisteredServersRequest* request, ::mruv::server::GetRegisteredServersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVServerService::Service::GetServerInfo(::grpc::ServerContext* context, const ::mruv::server::ServerID* request, ::mruv::server::ServerInfo* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVServerService::Service::UpdateServerStatus(::grpc::ServerContext* context, const ::mruv::server::UpdateServerStatusRequest* request, ::mruv::server::UpdateServerStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVServerService::Service::ServerEventsStream(::grpc::ServerContext* context, const ::mruv::server::ServerEventsStreamRequest* request, ::grpc::ServerWriter< ::mruv::server::ServerEvent>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace server

