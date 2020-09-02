// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: entrances/entrances.proto

#include "entrances/entrances.pb.h"
#include "entrances/entrances.grpc.pb.h"

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
namespace entrances {

static const char* MruVEntrancesService_method_names[] = {
  "/mruv.entrances.MruVEntrancesService/CreateEntrance",
  "/mruv.entrances.MruVEntrancesService/GetEntrance",
  "/mruv.entrances.MruVEntrancesService/UpdateEntrance",
  "/mruv.entrances.MruVEntrancesService/DeleteEntrance",
  "/mruv.entrances.MruVEntrancesService/Lock",
  "/mruv.entrances.MruVEntrancesService/Unlock",
  "/mruv.entrances.MruVEntrancesService/FindNearestEntrance",
  "/mruv.entrances.MruVEntrancesService/Enter",
  "/mruv.entrances.MruVEntrancesService/Exit",
  "/mruv.entrances.MruVEntrancesService/FetchAll",
};

std::unique_ptr< MruVEntrancesService::Stub> MruVEntrancesService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVEntrancesService::Stub> stub(new MruVEntrancesService::Stub(channel));
  return stub;
}

MruVEntrancesService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateEntrance_(MruVEntrancesService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetEntrance_(MruVEntrancesService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateEntrance_(MruVEntrancesService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteEntrance_(MruVEntrancesService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Lock_(MruVEntrancesService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Unlock_(MruVEntrancesService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FindNearestEntrance_(MruVEntrancesService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Enter_(MruVEntrancesService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Exit_(MruVEntrancesService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_FetchAll_(MruVEntrancesService_method_names[9], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  {}

::grpc::Status MruVEntrancesService::Stub::CreateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::CreateEntranceRequest& request, ::mruv::entrances::CreateEntranceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateEntrance_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::CreateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::CreateEntranceRequest* request, ::mruv::entrances::CreateEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::CreateEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::CreateEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::CreateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::CreateEntranceRequest* request, ::mruv::entrances::CreateEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateEntrance_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::CreateEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::CreateEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateEntrance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::CreateEntranceResponse>* MruVEntrancesService::Stub::AsyncCreateEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::CreateEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::CreateEntranceResponse>::Create(channel_.get(), cq, rpcmethod_CreateEntrance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::CreateEntranceResponse>* MruVEntrancesService::Stub::PrepareAsyncCreateEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::CreateEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::CreateEntranceResponse>::Create(channel_.get(), cq, rpcmethod_CreateEntrance_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::GetEntrance(::grpc::ClientContext* context, const ::mruv::entrances::GetEntranceRequest& request, ::mruv::entrances::GetEntranceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetEntrance_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::GetEntrance(::grpc::ClientContext* context, const ::mruv::entrances::GetEntranceRequest* request, ::mruv::entrances::GetEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::GetEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::GetEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::GetEntrance(::grpc::ClientContext* context, const ::mruv::entrances::GetEntranceRequest* request, ::mruv::entrances::GetEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetEntrance_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::GetEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::GetEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetEntrance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::GetEntranceResponse>* MruVEntrancesService::Stub::AsyncGetEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::GetEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::GetEntranceResponse>::Create(channel_.get(), cq, rpcmethod_GetEntrance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::GetEntranceResponse>* MruVEntrancesService::Stub::PrepareAsyncGetEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::GetEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::GetEntranceResponse>::Create(channel_.get(), cq, rpcmethod_GetEntrance_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::UpdateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::UpdateEntranceRequest& request, ::mruv::entrances::UpdateEntranceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateEntrance_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::UpdateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::UpdateEntranceRequest* request, ::mruv::entrances::UpdateEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::UpdateEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::UpdateEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::UpdateEntrance(::grpc::ClientContext* context, const ::mruv::entrances::UpdateEntranceRequest* request, ::mruv::entrances::UpdateEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateEntrance_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::UpdateEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::UpdateEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateEntrance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::UpdateEntranceResponse>* MruVEntrancesService::Stub::AsyncUpdateEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::UpdateEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::UpdateEntranceResponse>::Create(channel_.get(), cq, rpcmethod_UpdateEntrance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::UpdateEntranceResponse>* MruVEntrancesService::Stub::PrepareAsyncUpdateEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::UpdateEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::UpdateEntranceResponse>::Create(channel_.get(), cq, rpcmethod_UpdateEntrance_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::DeleteEntrance(::grpc::ClientContext* context, const ::mruv::entrances::DeleteEntranceRequest& request, ::mruv::entrances::DeleteEntranceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteEntrance_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::DeleteEntrance(::grpc::ClientContext* context, const ::mruv::entrances::DeleteEntranceRequest* request, ::mruv::entrances::DeleteEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::DeleteEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::DeleteEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::DeleteEntrance(::grpc::ClientContext* context, const ::mruv::entrances::DeleteEntranceRequest* request, ::mruv::entrances::DeleteEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteEntrance_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::DeleteEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::DeleteEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteEntrance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::DeleteEntranceResponse>* MruVEntrancesService::Stub::AsyncDeleteEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::DeleteEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::DeleteEntranceResponse>::Create(channel_.get(), cq, rpcmethod_DeleteEntrance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::DeleteEntranceResponse>* MruVEntrancesService::Stub::PrepareAsyncDeleteEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::DeleteEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::DeleteEntranceResponse>::Create(channel_.get(), cq, rpcmethod_DeleteEntrance_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::Lock(::grpc::ClientContext* context, const ::mruv::entrances::LockRequest& request, ::mruv::entrances::LockResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Lock_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::mruv::entrances::LockRequest* request, ::mruv::entrances::LockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::LockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::mruv::entrances::LockRequest* request, ::mruv::entrances::LockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::Lock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::LockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Lock_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::LockResponse>* MruVEntrancesService::Stub::AsyncLockRaw(::grpc::ClientContext* context, const ::mruv::entrances::LockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::LockResponse>::Create(channel_.get(), cq, rpcmethod_Lock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::LockResponse>* MruVEntrancesService::Stub::PrepareAsyncLockRaw(::grpc::ClientContext* context, const ::mruv::entrances::LockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::LockResponse>::Create(channel_.get(), cq, rpcmethod_Lock_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::Unlock(::grpc::ClientContext* context, const ::mruv::entrances::UnlockRequest& request, ::mruv::entrances::UnlockResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Unlock_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::mruv::entrances::UnlockRequest* request, ::mruv::entrances::UnlockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::UnlockResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::mruv::entrances::UnlockRequest* request, ::mruv::entrances::UnlockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::Unlock(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::UnlockResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Unlock_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::UnlockResponse>* MruVEntrancesService::Stub::AsyncUnlockRaw(::grpc::ClientContext* context, const ::mruv::entrances::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::UnlockResponse>::Create(channel_.get(), cq, rpcmethod_Unlock_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::UnlockResponse>* MruVEntrancesService::Stub::PrepareAsyncUnlockRaw(::grpc::ClientContext* context, const ::mruv::entrances::UnlockRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::UnlockResponse>::Create(channel_.get(), cq, rpcmethod_Unlock_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::FindNearestEntrance(::grpc::ClientContext* context, const ::mruv::entrances::FindNearestEntranceRequest& request, ::mruv::entrances::FindNearestEntranceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_FindNearestEntrance_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::FindNearestEntrance(::grpc::ClientContext* context, const ::mruv::entrances::FindNearestEntranceRequest* request, ::mruv::entrances::FindNearestEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_FindNearestEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::FindNearestEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::FindNearestEntranceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_FindNearestEntrance_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::FindNearestEntrance(::grpc::ClientContext* context, const ::mruv::entrances::FindNearestEntranceRequest* request, ::mruv::entrances::FindNearestEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_FindNearestEntrance_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::FindNearestEntrance(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::FindNearestEntranceResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_FindNearestEntrance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::FindNearestEntranceResponse>* MruVEntrancesService::Stub::AsyncFindNearestEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::FindNearestEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::FindNearestEntranceResponse>::Create(channel_.get(), cq, rpcmethod_FindNearestEntrance_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::FindNearestEntranceResponse>* MruVEntrancesService::Stub::PrepareAsyncFindNearestEntranceRaw(::grpc::ClientContext* context, const ::mruv::entrances::FindNearestEntranceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::FindNearestEntranceResponse>::Create(channel_.get(), cq, rpcmethod_FindNearestEntrance_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::Enter(::grpc::ClientContext* context, const ::mruv::entrances::EnterRequest& request, ::mruv::entrances::EnterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Enter_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::Enter(::grpc::ClientContext* context, const ::mruv::entrances::EnterRequest* request, ::mruv::entrances::EnterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Enter_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Enter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::EnterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Enter_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Enter(::grpc::ClientContext* context, const ::mruv::entrances::EnterRequest* request, ::mruv::entrances::EnterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Enter_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::Enter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::EnterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Enter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::EnterResponse>* MruVEntrancesService::Stub::AsyncEnterRaw(::grpc::ClientContext* context, const ::mruv::entrances::EnterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::EnterResponse>::Create(channel_.get(), cq, rpcmethod_Enter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::EnterResponse>* MruVEntrancesService::Stub::PrepareAsyncEnterRaw(::grpc::ClientContext* context, const ::mruv::entrances::EnterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::EnterResponse>::Create(channel_.get(), cq, rpcmethod_Enter_, context, request, false);
}

::grpc::Status MruVEntrancesService::Stub::Exit(::grpc::ClientContext* context, const ::mruv::entrances::ExitRequest& request, ::mruv::entrances::ExitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_Exit_, context, request, response);
}

void MruVEntrancesService::Stub::experimental_async::Exit(::grpc::ClientContext* context, const ::mruv::entrances::ExitRequest* request, ::mruv::entrances::ExitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Exit_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Exit(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::ExitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_Exit_, context, request, response, std::move(f));
}

void MruVEntrancesService::Stub::experimental_async::Exit(::grpc::ClientContext* context, const ::mruv::entrances::ExitRequest* request, ::mruv::entrances::ExitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Exit_, context, request, response, reactor);
}

void MruVEntrancesService::Stub::experimental_async::Exit(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::entrances::ExitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_Exit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::ExitResponse>* MruVEntrancesService::Stub::AsyncExitRaw(::grpc::ClientContext* context, const ::mruv::entrances::ExitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::ExitResponse>::Create(channel_.get(), cq, rpcmethod_Exit_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::entrances::ExitResponse>* MruVEntrancesService::Stub::PrepareAsyncExitRaw(::grpc::ClientContext* context, const ::mruv::entrances::ExitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::entrances::ExitResponse>::Create(channel_.get(), cq, rpcmethod_Exit_, context, request, false);
}

::grpc::ClientReader< ::mruv::entrances::FetchAllEntrancesResponse>* MruVEntrancesService::Stub::FetchAllRaw(::grpc::ClientContext* context, const ::mruv::entrances::FetchAllEntrancesRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::mruv::entrances::FetchAllEntrancesResponse>::Create(channel_.get(), rpcmethod_FetchAll_, context, request);
}

void MruVEntrancesService::Stub::experimental_async::FetchAll(::grpc::ClientContext* context, ::mruv::entrances::FetchAllEntrancesRequest* request, ::grpc::experimental::ClientReadReactor< ::mruv::entrances::FetchAllEntrancesResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::mruv::entrances::FetchAllEntrancesResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_FetchAll_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mruv::entrances::FetchAllEntrancesResponse>* MruVEntrancesService::Stub::AsyncFetchAllRaw(::grpc::ClientContext* context, const ::mruv::entrances::FetchAllEntrancesRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::entrances::FetchAllEntrancesResponse>::Create(channel_.get(), cq, rpcmethod_FetchAll_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mruv::entrances::FetchAllEntrancesResponse>* MruVEntrancesService::Stub::PrepareAsyncFetchAllRaw(::grpc::ClientContext* context, const ::mruv::entrances::FetchAllEntrancesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::entrances::FetchAllEntrancesResponse>::Create(channel_.get(), cq, rpcmethod_FetchAll_, context, request, false, nullptr);
}

MruVEntrancesService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::CreateEntranceRequest, ::mruv::entrances::CreateEntranceResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::CreateEntranceRequest* req,
             ::mruv::entrances::CreateEntranceResponse* resp) {
               return service->CreateEntrance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::GetEntranceRequest, ::mruv::entrances::GetEntranceResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::GetEntranceRequest* req,
             ::mruv::entrances::GetEntranceResponse* resp) {
               return service->GetEntrance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::UpdateEntranceRequest, ::mruv::entrances::UpdateEntranceResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::UpdateEntranceRequest* req,
             ::mruv::entrances::UpdateEntranceResponse* resp) {
               return service->UpdateEntrance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::DeleteEntranceRequest, ::mruv::entrances::DeleteEntranceResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::DeleteEntranceRequest* req,
             ::mruv::entrances::DeleteEntranceResponse* resp) {
               return service->DeleteEntrance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::LockRequest, ::mruv::entrances::LockResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::LockRequest* req,
             ::mruv::entrances::LockResponse* resp) {
               return service->Lock(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::UnlockRequest, ::mruv::entrances::UnlockResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::UnlockRequest* req,
             ::mruv::entrances::UnlockResponse* resp) {
               return service->Unlock(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::FindNearestEntranceRequest, ::mruv::entrances::FindNearestEntranceResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::FindNearestEntranceRequest* req,
             ::mruv::entrances::FindNearestEntranceResponse* resp) {
               return service->FindNearestEntrance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::EnterRequest, ::mruv::entrances::EnterResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::EnterRequest* req,
             ::mruv::entrances::EnterResponse* resp) {
               return service->Enter(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVEntrancesService::Service, ::mruv::entrances::ExitRequest, ::mruv::entrances::ExitResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::ExitRequest* req,
             ::mruv::entrances::ExitResponse* resp) {
               return service->Exit(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVEntrancesService_method_names[9],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MruVEntrancesService::Service, ::mruv::entrances::FetchAllEntrancesRequest, ::mruv::entrances::FetchAllEntrancesResponse>(
          [](MruVEntrancesService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::entrances::FetchAllEntrancesRequest* req,
             ::grpc_impl::ServerWriter<::mruv::entrances::FetchAllEntrancesResponse>* writer) {
               return service->FetchAll(ctx, req, writer);
             }, this)));
}

MruVEntrancesService::Service::~Service() {
}

::grpc::Status MruVEntrancesService::Service::CreateEntrance(::grpc::ServerContext* context, const ::mruv::entrances::CreateEntranceRequest* request, ::mruv::entrances::CreateEntranceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::GetEntrance(::grpc::ServerContext* context, const ::mruv::entrances::GetEntranceRequest* request, ::mruv::entrances::GetEntranceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::UpdateEntrance(::grpc::ServerContext* context, const ::mruv::entrances::UpdateEntranceRequest* request, ::mruv::entrances::UpdateEntranceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::DeleteEntrance(::grpc::ServerContext* context, const ::mruv::entrances::DeleteEntranceRequest* request, ::mruv::entrances::DeleteEntranceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::Lock(::grpc::ServerContext* context, const ::mruv::entrances::LockRequest* request, ::mruv::entrances::LockResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::Unlock(::grpc::ServerContext* context, const ::mruv::entrances::UnlockRequest* request, ::mruv::entrances::UnlockResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::FindNearestEntrance(::grpc::ServerContext* context, const ::mruv::entrances::FindNearestEntranceRequest* request, ::mruv::entrances::FindNearestEntranceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::Enter(::grpc::ServerContext* context, const ::mruv::entrances::EnterRequest* request, ::mruv::entrances::EnterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::Exit(::grpc::ServerContext* context, const ::mruv::entrances::ExitRequest* request, ::mruv::entrances::ExitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVEntrancesService::Service::FetchAll(::grpc::ServerContext* context, const ::mruv::entrances::FetchAllEntrancesRequest* request, ::grpc::ServerWriter< ::mruv::entrances::FetchAllEntrancesResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace entrances

