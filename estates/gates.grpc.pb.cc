// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: estates/gates.proto

#include "estates/gates.pb.h"
#include "estates/gates.grpc.pb.h"

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
namespace gates {

static const char* MruVGatesService_method_names[] = {
  "/mruv.gates.MruVGatesService/CreateGate",
  "/mruv.gates.MruVGatesService/GetGate",
  "/mruv.gates.MruVGatesService/UpdateGate",
  "/mruv.gates.MruVGatesService/DeleteGate",
  "/mruv.gates.MruVGatesService/Lock",
  "/mruv.gates.MruVGatesService/Unlock",
  "/mruv.gates.MruVGatesService/Open",
  "/mruv.gates.MruVGatesService/Close",
  "/mruv.gates.MruVGatesService/FindNearestGate",
};

std::unique_ptr< MruVGatesService::Stub> MruVGatesService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVGatesService::Stub> stub(new MruVGatesService::Stub(channel));
  return stub;
}

MruVGatesService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateGate_(MruVGatesService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGate_(MruVGatesService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateGate_(MruVGatesService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteGate_(MruVGatesService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Lock_(MruVGatesService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Unlock_(MruVGatesService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Open_(MruVGatesService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Close_(MruVGatesService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FindNearestGate_(MruVGatesService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVGatesService::Stub::CreateGate(::grpc::ClientContext* context, const ::mruv::gates::CreateGateRequest& request, ::mruv::gates::CreateGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateGate_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::CreateGate(::grpc::ClientContext* context, const ::mruv::gates::CreateGateRequest* request, ::mruv::gates::CreateGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::CreateGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::CreateGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::CreateGate(::grpc::ClientContext* context, const ::mruv::gates::CreateGateRequest* request, ::mruv::gates::CreateGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateGate_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::CreateGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::CreateGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateGate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::CreateGateResponse>* MruVGatesService::Stub::AsyncCreateGateRaw(::grpc::ClientContext* context, const ::mruv::gates::CreateGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::CreateGateResponse>::Create(channel_.get(), cq, rpcmethod_CreateGate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::CreateGateResponse>* MruVGatesService::Stub::PrepareAsyncCreateGateRaw(::grpc::ClientContext* context, const ::mruv::gates::CreateGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::CreateGateResponse>::Create(channel_.get(), cq, rpcmethod_CreateGate_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::GetGate(::grpc::ClientContext* context, const ::mruv::gates::GetGateRequest& request, ::mruv::gates::GetGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetGate_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::GetGate(::grpc::ClientContext* context, const ::mruv::gates::GetGateRequest* request, ::mruv::gates::GetGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::GetGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::GetGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::GetGate(::grpc::ClientContext* context, const ::mruv::gates::GetGateRequest* request, ::mruv::gates::GetGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGate_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::GetGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::GetGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::GetGateResponse>* MruVGatesService::Stub::AsyncGetGateRaw(::grpc::ClientContext* context, const ::mruv::gates::GetGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::GetGateResponse>::Create(channel_.get(), cq, rpcmethod_GetGate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::GetGateResponse>* MruVGatesService::Stub::PrepareAsyncGetGateRaw(::grpc::ClientContext* context, const ::mruv::gates::GetGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::GetGateResponse>::Create(channel_.get(), cq, rpcmethod_GetGate_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::UpdateGate(::grpc::ClientContext* context, const ::mruv::gates::UpdateGateRequest& request, ::mruv::gates::UpdateGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateGate_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::UpdateGate(::grpc::ClientContext* context, const ::mruv::gates::UpdateGateRequest* request, ::mruv::gates::UpdateGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::UpdateGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::UpdateGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::UpdateGate(::grpc::ClientContext* context, const ::mruv::gates::UpdateGateRequest* request, ::mruv::gates::UpdateGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateGate_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::UpdateGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::UpdateGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateGate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::UpdateGateResponse>* MruVGatesService::Stub::AsyncUpdateGateRaw(::grpc::ClientContext* context, const ::mruv::gates::UpdateGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::UpdateGateResponse>::Create(channel_.get(), cq, rpcmethod_UpdateGate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::UpdateGateResponse>* MruVGatesService::Stub::PrepareAsyncUpdateGateRaw(::grpc::ClientContext* context, const ::mruv::gates::UpdateGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::UpdateGateResponse>::Create(channel_.get(), cq, rpcmethod_UpdateGate_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::DeleteGate(::grpc::ClientContext* context, const ::mruv::gates::DeleteGateRequest& request, ::mruv::gates::DeleteGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteGate_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::DeleteGate(::grpc::ClientContext* context, const ::mruv::gates::DeleteGateRequest* request, ::mruv::gates::DeleteGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::DeleteGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::DeleteGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::DeleteGate(::grpc::ClientContext* context, const ::mruv::gates::DeleteGateRequest* request, ::mruv::gates::DeleteGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteGate_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::DeleteGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::DeleteGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteGate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::DeleteGateResponse>* MruVGatesService::Stub::AsyncDeleteGateRaw(::grpc::ClientContext* context, const ::mruv::gates::DeleteGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::DeleteGateResponse>::Create(channel_.get(), cq, rpcmethod_DeleteGate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::DeleteGateResponse>* MruVGatesService::Stub::PrepareAsyncDeleteGateRaw(::grpc::ClientContext* context, const ::mruv::gates::DeleteGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::DeleteGateResponse>::Create(channel_.get(), cq, rpcmethod_DeleteGate_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::Lock(::grpc::ClientContext* context, const ::mruv::gates::LockRequest& request, ::mruv::gates::LockResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Lock_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::mruv::gates::LockRequest* request, ::mruv::gates::LockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::LockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::mruv::gates::LockRequest* request, ::mruv::gates::LockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::LockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::LockResponse>* MruVGatesService::Stub::AsyncLockRaw(::grpc::ClientContext* context, const ::mruv::gates::LockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::LockResponse>::Create(channel_.get(), cq, rpcmethod_Lock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::LockResponse>* MruVGatesService::Stub::PrepareAsyncLockRaw(::grpc::ClientContext* context, const ::mruv::gates::LockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::LockResponse>::Create(channel_.get(), cq, rpcmethod_Lock_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::Unlock(::grpc::ClientContext* context, const ::mruv::gates::UnlockRequest& request, ::mruv::gates::UnlockResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Unlock_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::mruv::gates::UnlockRequest* request, ::mruv::gates::UnlockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::UnlockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::mruv::gates::UnlockRequest* request, ::mruv::gates::UnlockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::UnlockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::UnlockResponse>* MruVGatesService::Stub::AsyncUnlockRaw(::grpc::ClientContext* context, const ::mruv::gates::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::UnlockResponse>::Create(channel_.get(), cq, rpcmethod_Unlock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::UnlockResponse>* MruVGatesService::Stub::PrepareAsyncUnlockRaw(::grpc::ClientContext* context, const ::mruv::gates::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::UnlockResponse>::Create(channel_.get(), cq, rpcmethod_Unlock_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::Open(::grpc::ClientContext* context, const ::mruv::gates::OpenRequest& request, ::mruv::gates::OpenResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Open_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::Open(::grpc::ClientContext* context, const ::mruv::gates::OpenRequest* request, ::mruv::gates::OpenResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Open_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Open(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::OpenResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Open_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Open(::grpc::ClientContext* context, const ::mruv::gates::OpenRequest* request, ::mruv::gates::OpenResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Open_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::Open(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::OpenResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Open_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::OpenResponse>* MruVGatesService::Stub::AsyncOpenRaw(::grpc::ClientContext* context, const ::mruv::gates::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::OpenResponse>* MruVGatesService::Stub::PrepareAsyncOpenRaw(::grpc::ClientContext* context, const ::mruv::gates::OpenRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::OpenResponse>::Create(channel_.get(), cq, rpcmethod_Open_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::Close(::grpc::ClientContext* context, const ::mruv::gates::CloseRequest& request, ::mruv::gates::CloseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Close_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::mruv::gates::CloseRequest* request, ::mruv::gates::CloseResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::CloseResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::mruv::gates::CloseRequest* request, ::mruv::gates::CloseResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::Close(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::CloseResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Close_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::CloseResponse>* MruVGatesService::Stub::AsyncCloseRaw(::grpc::ClientContext* context, const ::mruv::gates::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::CloseResponse>* MruVGatesService::Stub::PrepareAsyncCloseRaw(::grpc::ClientContext* context, const ::mruv::gates::CloseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::CloseResponse>::Create(channel_.get(), cq, rpcmethod_Close_, context, request, false);
}

::grpc::Status MruVGatesService::Stub::FindNearestGate(::grpc::ClientContext* context, const ::mruv::gates::FindNearestGateRequest& request, ::mruv::gates::FindNearestGateResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_FindNearestGate_, context, request, response);
}

void MruVGatesService::Stub::experimental_async::FindNearestGate(::grpc::ClientContext* context, const ::mruv::gates::FindNearestGateRequest* request, ::mruv::gates::FindNearestGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_FindNearestGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::FindNearestGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::FindNearestGateResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_FindNearestGate_, context, request, response, std::move(f));
}

void MruVGatesService::Stub::experimental_async::FindNearestGate(::grpc::ClientContext* context, const ::mruv::gates::FindNearestGateRequest* request, ::mruv::gates::FindNearestGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_FindNearestGate_, context, request, response, reactor);
}

void MruVGatesService::Stub::experimental_async::FindNearestGate(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::gates::FindNearestGateResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_FindNearestGate_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::FindNearestGateResponse>* MruVGatesService::Stub::AsyncFindNearestGateRaw(::grpc::ClientContext* context, const ::mruv::gates::FindNearestGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::FindNearestGateResponse>::Create(channel_.get(), cq, rpcmethod_FindNearestGate_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::gates::FindNearestGateResponse>* MruVGatesService::Stub::PrepareAsyncFindNearestGateRaw(::grpc::ClientContext* context, const ::mruv::gates::FindNearestGateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::gates::FindNearestGateResponse>::Create(channel_.get(), cq, rpcmethod_FindNearestGate_, context, request, false);
}

MruVGatesService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::CreateGateRequest, ::mruv::gates::CreateGateResponse>(
          std::mem_fn(&MruVGatesService::Service::CreateGate), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::GetGateRequest, ::mruv::gates::GetGateResponse>(
          std::mem_fn(&MruVGatesService::Service::GetGate), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::UpdateGateRequest, ::mruv::gates::UpdateGateResponse>(
          std::mem_fn(&MruVGatesService::Service::UpdateGate), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::DeleteGateRequest, ::mruv::gates::DeleteGateResponse>(
          std::mem_fn(&MruVGatesService::Service::DeleteGate), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::LockRequest, ::mruv::gates::LockResponse>(
          std::mem_fn(&MruVGatesService::Service::Lock), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::UnlockRequest, ::mruv::gates::UnlockResponse>(
          std::mem_fn(&MruVGatesService::Service::Unlock), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::OpenRequest, ::mruv::gates::OpenResponse>(
          std::mem_fn(&MruVGatesService::Service::Open), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::CloseRequest, ::mruv::gates::CloseResponse>(
          std::mem_fn(&MruVGatesService::Service::Close), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGatesService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGatesService::Service, ::mruv::gates::FindNearestGateRequest, ::mruv::gates::FindNearestGateResponse>(
          std::mem_fn(&MruVGatesService::Service::FindNearestGate), this)));
}

MruVGatesService::Service::~Service() {
}

::grpc::Status MruVGatesService::Service::CreateGate(::grpc::ServerContext* context, const ::mruv::gates::CreateGateRequest* request, ::mruv::gates::CreateGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::GetGate(::grpc::ServerContext* context, const ::mruv::gates::GetGateRequest* request, ::mruv::gates::GetGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::UpdateGate(::grpc::ServerContext* context, const ::mruv::gates::UpdateGateRequest* request, ::mruv::gates::UpdateGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::DeleteGate(::grpc::ServerContext* context, const ::mruv::gates::DeleteGateRequest* request, ::mruv::gates::DeleteGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::Lock(::grpc::ServerContext* context, const ::mruv::gates::LockRequest* request, ::mruv::gates::LockResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::Unlock(::grpc::ServerContext* context, const ::mruv::gates::UnlockRequest* request, ::mruv::gates::UnlockResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::Open(::grpc::ServerContext* context, const ::mruv::gates::OpenRequest* request, ::mruv::gates::OpenResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::Close(::grpc::ServerContext* context, const ::mruv::gates::CloseRequest* request, ::mruv::gates::CloseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGatesService::Service::FindNearestGate(::grpc::ServerContext* context, const ::mruv::gates::FindNearestGateRequest* request, ::mruv::gates::FindNearestGateResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace gates
