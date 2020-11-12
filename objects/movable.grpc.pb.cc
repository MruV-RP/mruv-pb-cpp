// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: objects/movable.proto

#include "objects/movable.pb.h"
#include "objects/movable.grpc.pb.h"

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
namespace objects {

static const char* MruVMovableObjectsService_method_names[] = {
  "/mruv.objects.MruVMovableObjectsService/CreateMovableObject",
  "/mruv.objects.MruVMovableObjectsService/GetMovableObject",
  "/mruv.objects.MruVMovableObjectsService/UpdateMovableObject",
  "/mruv.objects.MruVMovableObjectsService/DeleteMovableObject",
  "/mruv.objects.MruVMovableObjectsService/MoveObject",
  "/mruv.objects.MruVMovableObjectsService/MoveObjectNext",
  "/mruv.objects.MruVMovableObjectsService/MoveObjectPrevious",
  "/mruv.objects.MruVMovableObjectsService/FetchAllMovableObjects",
};

std::unique_ptr< MruVMovableObjectsService::Stub> MruVMovableObjectsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVMovableObjectsService::Stub> stub(new MruVMovableObjectsService::Stub(channel));
  return stub;
}

MruVMovableObjectsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateMovableObject_(MruVMovableObjectsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetMovableObject_(MruVMovableObjectsService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateMovableObject_(MruVMovableObjectsService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteMovableObject_(MruVMovableObjectsService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MoveObject_(MruVMovableObjectsService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MoveObjectNext_(MruVMovableObjectsService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_MoveObjectPrevious_(MruVMovableObjectsService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchAllMovableObjects_(MruVMovableObjectsService_method_names[7], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status MruVMovableObjectsService::Stub::CreateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::CreateMovableObjectRequest& request, ::mruv::objects::CreateMovableObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateMovableObject_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::CreateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::CreateMovableObjectRequest* request, ::mruv::objects::CreateMovableObjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateMovableObject_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::CreateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::CreateMovableObjectRequest* request, ::mruv::objects::CreateMovableObjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateMovableObject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::CreateMovableObjectResponse>* MruVMovableObjectsService::Stub::PrepareAsyncCreateMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::CreateMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::CreateMovableObjectResponse>::Create(channel_.get(), cq, rpcmethod_CreateMovableObject_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::CreateMovableObjectResponse>* MruVMovableObjectsService::Stub::AsyncCreateMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::CreateMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreateMovableObjectRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::GetMovableObject(::grpc::ClientContext* context, const ::mruv::objects::GetMovableObjectRequest& request, ::mruv::objects::GetMovableObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetMovableObject_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::GetMovableObject(::grpc::ClientContext* context, const ::mruv::objects::GetMovableObjectRequest* request, ::mruv::objects::GetMovableObjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetMovableObject_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::GetMovableObject(::grpc::ClientContext* context, const ::mruv::objects::GetMovableObjectRequest* request, ::mruv::objects::GetMovableObjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetMovableObject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::GetMovableObjectResponse>* MruVMovableObjectsService::Stub::PrepareAsyncGetMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::GetMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::GetMovableObjectResponse>::Create(channel_.get(), cq, rpcmethod_GetMovableObject_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::GetMovableObjectResponse>* MruVMovableObjectsService::Stub::AsyncGetMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::GetMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetMovableObjectRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::UpdateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::UpdateMovableObjectRequest& request, ::mruv::objects::UpdateMovableObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateMovableObject_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::UpdateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::UpdateMovableObjectRequest* request, ::mruv::objects::UpdateMovableObjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateMovableObject_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::UpdateMovableObject(::grpc::ClientContext* context, const ::mruv::objects::UpdateMovableObjectRequest* request, ::mruv::objects::UpdateMovableObjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateMovableObject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::UpdateMovableObjectResponse>* MruVMovableObjectsService::Stub::PrepareAsyncUpdateMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::UpdateMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::UpdateMovableObjectResponse>::Create(channel_.get(), cq, rpcmethod_UpdateMovableObject_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::UpdateMovableObjectResponse>* MruVMovableObjectsService::Stub::AsyncUpdateMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::UpdateMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdateMovableObjectRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::DeleteMovableObject(::grpc::ClientContext* context, const ::mruv::objects::DeleteMovableObjectRequest& request, ::mruv::objects::DeleteMovableObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteMovableObject_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::DeleteMovableObject(::grpc::ClientContext* context, const ::mruv::objects::DeleteMovableObjectRequest* request, ::mruv::objects::DeleteMovableObjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteMovableObject_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::DeleteMovableObject(::grpc::ClientContext* context, const ::mruv::objects::DeleteMovableObjectRequest* request, ::mruv::objects::DeleteMovableObjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteMovableObject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::DeleteMovableObjectResponse>* MruVMovableObjectsService::Stub::PrepareAsyncDeleteMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::DeleteMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::DeleteMovableObjectResponse>::Create(channel_.get(), cq, rpcmethod_DeleteMovableObject_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::DeleteMovableObjectResponse>* MruVMovableObjectsService::Stub::AsyncDeleteMovableObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::DeleteMovableObjectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeleteMovableObjectRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::MoveObject(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectRequest& request, ::mruv::objects::MoveObjectResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MoveObject_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObject(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectRequest* request, ::mruv::objects::MoveObjectResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MoveObject_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObject(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectRequest* request, ::mruv::objects::MoveObjectResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_MoveObject_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectResponse>* MruVMovableObjectsService::Stub::PrepareAsyncMoveObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::MoveObjectResponse>::Create(channel_.get(), cq, rpcmethod_MoveObject_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectResponse>* MruVMovableObjectsService::Stub::AsyncMoveObjectRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveObjectRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::MoveObjectNext(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectNextRequest& request, ::mruv::objects::MoveObjectNextResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MoveObjectNext_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObjectNext(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectNextRequest* request, ::mruv::objects::MoveObjectNextResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MoveObjectNext_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObjectNext(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectNextRequest* request, ::mruv::objects::MoveObjectNextResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_MoveObjectNext_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectNextResponse>* MruVMovableObjectsService::Stub::PrepareAsyncMoveObjectNextRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectNextRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::MoveObjectNextResponse>::Create(channel_.get(), cq, rpcmethod_MoveObjectNext_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectNextResponse>* MruVMovableObjectsService::Stub::AsyncMoveObjectNextRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectNextRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveObjectNextRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVMovableObjectsService::Stub::MoveObjectPrevious(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectPreviousRequest& request, ::mruv::objects::MoveObjectPreviousResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_MoveObjectPrevious_, context, request, response);
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObjectPrevious(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectPreviousRequest* request, ::mruv::objects::MoveObjectPreviousResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_MoveObjectPrevious_, context, request, response, std::move(f));
}

void MruVMovableObjectsService::Stub::experimental_async::MoveObjectPrevious(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectPreviousRequest* request, ::mruv::objects::MoveObjectPreviousResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_MoveObjectPrevious_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectPreviousResponse>* MruVMovableObjectsService::Stub::PrepareAsyncMoveObjectPreviousRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectPreviousRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::objects::MoveObjectPreviousResponse>::Create(channel_.get(), cq, rpcmethod_MoveObjectPrevious_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::objects::MoveObjectPreviousResponse>* MruVMovableObjectsService::Stub::AsyncMoveObjectPreviousRaw(::grpc::ClientContext* context, const ::mruv::objects::MoveObjectPreviousRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncMoveObjectPreviousRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::ClientReader< ::mruv::objects::FetchAllMovableObjectsResponse>* MruVMovableObjectsService::Stub::FetchAllMovableObjectsRaw(::grpc::ClientContext* context, const ::mruv::objects::FetchAllMovableObjectsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mruv::objects::FetchAllMovableObjectsResponse>::Create(channel_.get(), rpcmethod_FetchAllMovableObjects_, context, request);
}

void MruVMovableObjectsService::Stub::experimental_async::FetchAllMovableObjects(::grpc::ClientContext* context, ::mruv::objects::FetchAllMovableObjectsRequest* request, ::grpc::experimental::ClientReadReactor< ::mruv::objects::FetchAllMovableObjectsResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mruv::objects::FetchAllMovableObjectsResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_FetchAllMovableObjects_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mruv::objects::FetchAllMovableObjectsResponse>* MruVMovableObjectsService::Stub::AsyncFetchAllMovableObjectsRaw(::grpc::ClientContext* context, const ::mruv::objects::FetchAllMovableObjectsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mruv::objects::FetchAllMovableObjectsResponse>::Create(channel_.get(), cq, rpcmethod_FetchAllMovableObjects_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mruv::objects::FetchAllMovableObjectsResponse>* MruVMovableObjectsService::Stub::PrepareAsyncFetchAllMovableObjectsRaw(::grpc::ClientContext* context, const ::mruv::objects::FetchAllMovableObjectsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mruv::objects::FetchAllMovableObjectsResponse>::Create(channel_.get(), cq, rpcmethod_FetchAllMovableObjects_, context, request, false, nullptr);
}

MruVMovableObjectsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::CreateMovableObjectRequest, ::mruv::objects::CreateMovableObjectResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::CreateMovableObjectRequest* req,
             ::mruv::objects::CreateMovableObjectResponse* resp) {
               return service->CreateMovableObject(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::GetMovableObjectRequest, ::mruv::objects::GetMovableObjectResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::GetMovableObjectRequest* req,
             ::mruv::objects::GetMovableObjectResponse* resp) {
               return service->GetMovableObject(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::UpdateMovableObjectRequest, ::mruv::objects::UpdateMovableObjectResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::UpdateMovableObjectRequest* req,
             ::mruv::objects::UpdateMovableObjectResponse* resp) {
               return service->UpdateMovableObject(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::DeleteMovableObjectRequest, ::mruv::objects::DeleteMovableObjectResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::DeleteMovableObjectRequest* req,
             ::mruv::objects::DeleteMovableObjectResponse* resp) {
               return service->DeleteMovableObject(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::MoveObjectRequest, ::mruv::objects::MoveObjectResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::MoveObjectRequest* req,
             ::mruv::objects::MoveObjectResponse* resp) {
               return service->MoveObject(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::MoveObjectNextRequest, ::mruv::objects::MoveObjectNextResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::MoveObjectNextRequest* req,
             ::mruv::objects::MoveObjectNextResponse* resp) {
               return service->MoveObjectNext(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVMovableObjectsService::Service, ::mruv::objects::MoveObjectPreviousRequest, ::mruv::objects::MoveObjectPreviousResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::MoveObjectPreviousRequest* req,
             ::mruv::objects::MoveObjectPreviousResponse* resp) {
               return service->MoveObjectPrevious(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVMovableObjectsService_method_names[7],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MruVMovableObjectsService::Service, ::mruv::objects::FetchAllMovableObjectsRequest, ::mruv::objects::FetchAllMovableObjectsResponse>(
          [](MruVMovableObjectsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::objects::FetchAllMovableObjectsRequest* req,
             ::grpc::ServerWriter<::mruv::objects::FetchAllMovableObjectsResponse>* writer) {
               return service->FetchAllMovableObjects(ctx, req, writer);
             }, this)));
}

MruVMovableObjectsService::Service::~Service() {
}

::grpc::Status MruVMovableObjectsService::Service::CreateMovableObject(::grpc::ServerContext* context, const ::mruv::objects::CreateMovableObjectRequest* request, ::mruv::objects::CreateMovableObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::GetMovableObject(::grpc::ServerContext* context, const ::mruv::objects::GetMovableObjectRequest* request, ::mruv::objects::GetMovableObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::UpdateMovableObject(::grpc::ServerContext* context, const ::mruv::objects::UpdateMovableObjectRequest* request, ::mruv::objects::UpdateMovableObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::DeleteMovableObject(::grpc::ServerContext* context, const ::mruv::objects::DeleteMovableObjectRequest* request, ::mruv::objects::DeleteMovableObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::MoveObject(::grpc::ServerContext* context, const ::mruv::objects::MoveObjectRequest* request, ::mruv::objects::MoveObjectResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::MoveObjectNext(::grpc::ServerContext* context, const ::mruv::objects::MoveObjectNextRequest* request, ::mruv::objects::MoveObjectNextResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::MoveObjectPrevious(::grpc::ServerContext* context, const ::mruv::objects::MoveObjectPreviousRequest* request, ::mruv::objects::MoveObjectPreviousResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVMovableObjectsService::Service::FetchAllMovableObjects(::grpc::ServerContext* context, const ::mruv::objects::FetchAllMovableObjectsRequest* request, ::grpc::ServerWriter< ::mruv::objects::FetchAllMovableObjectsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace objects

