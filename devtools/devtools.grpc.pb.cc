// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: devtools/devtools.proto

#include "devtools/devtools.pb.h"
#include "devtools/devtools.grpc.pb.h"

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
namespace devtools {

static const char* MruVDevToolsService_method_names[] = {
  "/mruv.devtools.MruVDevToolsService/GetPositions",
  "/mruv.devtools.MruVDevToolsService/SavePosition",
  "/mruv.devtools.MruVDevToolsService/DeletePosition",
  "/mruv.devtools.MruVDevToolsService/GetOutfits",
  "/mruv.devtools.MruVDevToolsService/SaveOutfit",
  "/mruv.devtools.MruVDevToolsService/GetAnimations",
  "/mruv.devtools.MruVDevToolsService/GetAnimation",
  "/mruv.devtools.MruVDevToolsService/SaveAnimation",
  "/mruv.devtools.MruVDevToolsService/GetServiceStatus",
  "/mruv.devtools.MruVDevToolsService/GetServiceVersion",
};

std::unique_ptr< MruVDevToolsService::Stub> MruVDevToolsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVDevToolsService::Stub> stub(new MruVDevToolsService::Stub(channel));
  return stub;
}

MruVDevToolsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_GetPositions_(MruVDevToolsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SavePosition_(MruVDevToolsService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeletePosition_(MruVDevToolsService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetOutfits_(MruVDevToolsService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SaveOutfit_(MruVDevToolsService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAnimations_(MruVDevToolsService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAnimation_(MruVDevToolsService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SaveAnimation_(MruVDevToolsService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceStatus_(MruVDevToolsService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceVersion_(MruVDevToolsService_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVDevToolsService::Stub::GetPositions(::grpc::ClientContext* context, const ::mruv::devtools::GetPositionsRequest& request, ::mruv::devtools::GetPositionsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetPositions_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetPositions(::grpc::ClientContext* context, const ::mruv::devtools::GetPositionsRequest* request, ::mruv::devtools::GetPositionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPositions_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetPositions(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetPositionsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPositions_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetPositions(::grpc::ClientContext* context, const ::mruv::devtools::GetPositionsRequest* request, ::mruv::devtools::GetPositionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPositions_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetPositions(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetPositionsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPositions_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetPositionsResponse>* MruVDevToolsService::Stub::AsyncGetPositionsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetPositionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetPositionsResponse>::Create(channel_.get(), cq, rpcmethod_GetPositions_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetPositionsResponse>* MruVDevToolsService::Stub::PrepareAsyncGetPositionsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetPositionsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetPositionsResponse>::Create(channel_.get(), cq, rpcmethod_GetPositions_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::SavePosition(::grpc::ClientContext* context, const ::mruv::devtools::SavePositionRequest& request, ::mruv::devtools::SavePositionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SavePosition_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::SavePosition(::grpc::ClientContext* context, const ::mruv::devtools::SavePositionRequest* request, ::mruv::devtools::SavePositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SavePosition_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SavePosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SavePositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SavePosition_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SavePosition(::grpc::ClientContext* context, const ::mruv::devtools::SavePositionRequest* request, ::mruv::devtools::SavePositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SavePosition_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::SavePosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SavePositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SavePosition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SavePositionResponse>* MruVDevToolsService::Stub::AsyncSavePositionRaw(::grpc::ClientContext* context, const ::mruv::devtools::SavePositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SavePositionResponse>::Create(channel_.get(), cq, rpcmethod_SavePosition_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SavePositionResponse>* MruVDevToolsService::Stub::PrepareAsyncSavePositionRaw(::grpc::ClientContext* context, const ::mruv::devtools::SavePositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SavePositionResponse>::Create(channel_.get(), cq, rpcmethod_SavePosition_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::DeletePosition(::grpc::ClientContext* context, const ::mruv::devtools::DeletePositionRequest& request, ::mruv::devtools::DeletePositionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeletePosition_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::DeletePosition(::grpc::ClientContext* context, const ::mruv::devtools::DeletePositionRequest* request, ::mruv::devtools::DeletePositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeletePosition_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::DeletePosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::DeletePositionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeletePosition_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::DeletePosition(::grpc::ClientContext* context, const ::mruv::devtools::DeletePositionRequest* request, ::mruv::devtools::DeletePositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeletePosition_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::DeletePosition(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::DeletePositionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeletePosition_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::DeletePositionResponse>* MruVDevToolsService::Stub::AsyncDeletePositionRaw(::grpc::ClientContext* context, const ::mruv::devtools::DeletePositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::DeletePositionResponse>::Create(channel_.get(), cq, rpcmethod_DeletePosition_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::DeletePositionResponse>* MruVDevToolsService::Stub::PrepareAsyncDeletePositionRaw(::grpc::ClientContext* context, const ::mruv::devtools::DeletePositionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::DeletePositionResponse>::Create(channel_.get(), cq, rpcmethod_DeletePosition_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::GetOutfits(::grpc::ClientContext* context, const ::mruv::devtools::GetOutfitsRequest& request, ::mruv::devtools::GetOutfitsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetOutfits_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetOutfits(::grpc::ClientContext* context, const ::mruv::devtools::GetOutfitsRequest* request, ::mruv::devtools::GetOutfitsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetOutfits_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetOutfits(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetOutfitsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetOutfits_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetOutfits(::grpc::ClientContext* context, const ::mruv::devtools::GetOutfitsRequest* request, ::mruv::devtools::GetOutfitsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetOutfits_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetOutfits(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetOutfitsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetOutfits_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetOutfitsResponse>* MruVDevToolsService::Stub::AsyncGetOutfitsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetOutfitsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetOutfitsResponse>::Create(channel_.get(), cq, rpcmethod_GetOutfits_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetOutfitsResponse>* MruVDevToolsService::Stub::PrepareAsyncGetOutfitsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetOutfitsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetOutfitsResponse>::Create(channel_.get(), cq, rpcmethod_GetOutfits_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::SaveOutfit(::grpc::ClientContext* context, const ::mruv::devtools::SaveOutfitRequest& request, ::mruv::devtools::SaveOutfitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SaveOutfit_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::SaveOutfit(::grpc::ClientContext* context, const ::mruv::devtools::SaveOutfitRequest* request, ::mruv::devtools::SaveOutfitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveOutfit_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SaveOutfit(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SaveOutfitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveOutfit_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SaveOutfit(::grpc::ClientContext* context, const ::mruv::devtools::SaveOutfitRequest* request, ::mruv::devtools::SaveOutfitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveOutfit_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::SaveOutfit(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SaveOutfitResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveOutfit_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SaveOutfitResponse>* MruVDevToolsService::Stub::AsyncSaveOutfitRaw(::grpc::ClientContext* context, const ::mruv::devtools::SaveOutfitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SaveOutfitResponse>::Create(channel_.get(), cq, rpcmethod_SaveOutfit_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SaveOutfitResponse>* MruVDevToolsService::Stub::PrepareAsyncSaveOutfitRaw(::grpc::ClientContext* context, const ::mruv::devtools::SaveOutfitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SaveOutfitResponse>::Create(channel_.get(), cq, rpcmethod_SaveOutfit_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::GetAnimations(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationsRequest& request, ::mruv::devtools::GetAnimationsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAnimations_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetAnimations(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationsRequest* request, ::mruv::devtools::GetAnimationsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAnimations_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetAnimations(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetAnimationsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAnimations_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetAnimations(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationsRequest* request, ::mruv::devtools::GetAnimationsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAnimations_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetAnimations(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetAnimationsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAnimations_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetAnimationsResponse>* MruVDevToolsService::Stub::AsyncGetAnimationsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetAnimationsResponse>::Create(channel_.get(), cq, rpcmethod_GetAnimations_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetAnimationsResponse>* MruVDevToolsService::Stub::PrepareAsyncGetAnimationsRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetAnimationsResponse>::Create(channel_.get(), cq, rpcmethod_GetAnimations_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::GetAnimation(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationRequest& request, ::mruv::devtools::GetAnimationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAnimation_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetAnimation(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationRequest* request, ::mruv::devtools::GetAnimationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAnimation_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetAnimation(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetAnimationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAnimation_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetAnimation(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationRequest* request, ::mruv::devtools::GetAnimationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAnimation_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetAnimation(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::GetAnimationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAnimation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetAnimationResponse>* MruVDevToolsService::Stub::AsyncGetAnimationRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetAnimationResponse>::Create(channel_.get(), cq, rpcmethod_GetAnimation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::GetAnimationResponse>* MruVDevToolsService::Stub::PrepareAsyncGetAnimationRaw(::grpc::ClientContext* context, const ::mruv::devtools::GetAnimationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::GetAnimationResponse>::Create(channel_.get(), cq, rpcmethod_GetAnimation_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::SaveAnimation(::grpc::ClientContext* context, const ::mruv::devtools::SaveAnimationRequest& request, ::mruv::devtools::SaveAnimationResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SaveAnimation_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::SaveAnimation(::grpc::ClientContext* context, const ::mruv::devtools::SaveAnimationRequest* request, ::mruv::devtools::SaveAnimationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveAnimation_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SaveAnimation(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SaveAnimationResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_SaveAnimation_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::SaveAnimation(::grpc::ClientContext* context, const ::mruv::devtools::SaveAnimationRequest* request, ::mruv::devtools::SaveAnimationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveAnimation_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::SaveAnimation(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::devtools::SaveAnimationResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_SaveAnimation_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SaveAnimationResponse>* MruVDevToolsService::Stub::AsyncSaveAnimationRaw(::grpc::ClientContext* context, const ::mruv::devtools::SaveAnimationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SaveAnimationResponse>::Create(channel_.get(), cq, rpcmethod_SaveAnimation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::devtools::SaveAnimationResponse>* MruVDevToolsService::Stub::PrepareAsyncSaveAnimationRaw(::grpc::ClientContext* context, const ::mruv::devtools::SaveAnimationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::devtools::SaveAnimationResponse>::Create(channel_.get(), cq, rpcmethod_SaveAnimation_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::mruv::ServiceStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceStatus_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVDevToolsService::Stub::AsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVDevToolsService::Stub::PrepareAsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, false);
}

::grpc::Status MruVDevToolsService::Stub::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::mruv::VersionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceVersion_, context, request, response);
}

void MruVDevToolsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVDevToolsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

void MruVDevToolsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVDevToolsService::Stub::AsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVDevToolsService::Stub::PrepareAsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, false);
}

MruVDevToolsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::GetPositionsRequest, ::mruv::devtools::GetPositionsResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetPositions), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::SavePositionRequest, ::mruv::devtools::SavePositionResponse>(
          std::mem_fn(&MruVDevToolsService::Service::SavePosition), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::DeletePositionRequest, ::mruv::devtools::DeletePositionResponse>(
          std::mem_fn(&MruVDevToolsService::Service::DeletePosition), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::GetOutfitsRequest, ::mruv::devtools::GetOutfitsResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetOutfits), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::SaveOutfitRequest, ::mruv::devtools::SaveOutfitResponse>(
          std::mem_fn(&MruVDevToolsService::Service::SaveOutfit), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::GetAnimationsRequest, ::mruv::devtools::GetAnimationsResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetAnimations), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::GetAnimationRequest, ::mruv::devtools::GetAnimationResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetAnimation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::devtools::SaveAnimationRequest, ::mruv::devtools::SaveAnimationResponse>(
          std::mem_fn(&MruVDevToolsService::Service::SaveAnimation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::ServiceStatusRequest, ::mruv::ServiceStatusResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetServiceStatus), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVDevToolsService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVDevToolsService::Service, ::mruv::VersionRequest, ::mruv::VersionResponse>(
          std::mem_fn(&MruVDevToolsService::Service::GetServiceVersion), this)));
}

MruVDevToolsService::Service::~Service() {
}

::grpc::Status MruVDevToolsService::Service::GetPositions(::grpc::ServerContext* context, const ::mruv::devtools::GetPositionsRequest* request, ::mruv::devtools::GetPositionsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::SavePosition(::grpc::ServerContext* context, const ::mruv::devtools::SavePositionRequest* request, ::mruv::devtools::SavePositionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::DeletePosition(::grpc::ServerContext* context, const ::mruv::devtools::DeletePositionRequest* request, ::mruv::devtools::DeletePositionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::GetOutfits(::grpc::ServerContext* context, const ::mruv::devtools::GetOutfitsRequest* request, ::mruv::devtools::GetOutfitsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::SaveOutfit(::grpc::ServerContext* context, const ::mruv::devtools::SaveOutfitRequest* request, ::mruv::devtools::SaveOutfitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::GetAnimations(::grpc::ServerContext* context, const ::mruv::devtools::GetAnimationsRequest* request, ::mruv::devtools::GetAnimationsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::GetAnimation(::grpc::ServerContext* context, const ::mruv::devtools::GetAnimationRequest* request, ::mruv::devtools::GetAnimationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::SaveAnimation(::grpc::ServerContext* context, const ::mruv::devtools::SaveAnimationRequest* request, ::mruv::devtools::SaveAnimationResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::GetServiceStatus(::grpc::ServerContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVDevToolsService::Service::GetServiceVersion(::grpc::ServerContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace devtools

