// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: characters/characters.proto

#include "characters/characters.pb.h"
#include "characters/characters.grpc.pb.h"

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

static const char* MruVCharactersService_method_names[] = {
  "/mruv.MruVCharactersService/CreateCharacter",
  "/mruv.MruVCharactersService/GetCharacter",
  "/mruv.MruVCharactersService/UpdateCharacter",
  "/mruv.MruVCharactersService/DeleteCharacter",
  "/mruv.MruVCharactersService/PermanentCharacterKill",
  "/mruv.MruVCharactersService/DeathsStream",
  "/mruv.MruVCharactersService/GetServiceStatus",
  "/mruv.MruVCharactersService/GetServiceVersion",
};

std::unique_ptr< MruVCharactersService::Stub> MruVCharactersService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVCharactersService::Stub> stub(new MruVCharactersService::Stub(channel));
  return stub;
}

MruVCharactersService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateCharacter_(MruVCharactersService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetCharacter_(MruVCharactersService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateCharacter_(MruVCharactersService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteCharacter_(MruVCharactersService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PermanentCharacterKill_(MruVCharactersService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeathsStream_(MruVCharactersService_method_names[5], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetServiceStatus_(MruVCharactersService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceVersion_(MruVCharactersService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVCharactersService::Stub::CreateCharacter(::grpc::ClientContext* context, const ::mruv::CreateCharacterRequest& request, ::mruv::CreateCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::mruv::CreateCharacterRequest* request, ::mruv::CreateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::CreateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::mruv::CreateCharacterRequest* request, ::mruv::CreateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::CreateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::CreateCharacterResponse>* MruVCharactersService::Stub::AsyncCreateCharacterRaw(::grpc::ClientContext* context, const ::mruv::CreateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::CreateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_CreateCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::CreateCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncCreateCharacterRaw(::grpc::ClientContext* context, const ::mruv::CreateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::CreateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_CreateCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::GetCharacter(::grpc::ClientContext* context, const ::mruv::GetCharacterRequest& request, ::mruv::GetCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::mruv::GetCharacterRequest* request, ::mruv::GetCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::mruv::GetCharacterRequest* request, ::mruv::GetCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetCharacterResponse>* MruVCharactersService::Stub::AsyncGetCharacterRaw(::grpc::ClientContext* context, const ::mruv::GetCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetCharacterResponse>::Create(channel_.get(), cq, rpcmethod_GetCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncGetCharacterRaw(::grpc::ClientContext* context, const ::mruv::GetCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetCharacterResponse>::Create(channel_.get(), cq, rpcmethod_GetCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::UpdateCharacterRequest& request, ::mruv::UpdateCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::UpdateCharacterRequest* request, ::mruv::UpdateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::UpdateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::UpdateCharacterRequest* request, ::mruv::UpdateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::UpdateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::UpdateCharacterResponse>* MruVCharactersService::Stub::AsyncUpdateCharacterRaw(::grpc::ClientContext* context, const ::mruv::UpdateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::UpdateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_UpdateCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::UpdateCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncUpdateCharacterRaw(::grpc::ClientContext* context, const ::mruv::UpdateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::UpdateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_UpdateCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::DeleteCharacterRequest& request, ::mruv::DeleteCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::DeleteCharacterRequest* request, ::mruv::DeleteCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::DeleteCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::DeleteCharacterRequest* request, ::mruv::DeleteCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::DeleteCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::DeleteCharacterResponse>* MruVCharactersService::Stub::AsyncDeleteCharacterRaw(::grpc::ClientContext* context, const ::mruv::DeleteCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::DeleteCharacterResponse>::Create(channel_.get(), cq, rpcmethod_DeleteCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::DeleteCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncDeleteCharacterRaw(::grpc::ClientContext* context, const ::mruv::DeleteCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::DeleteCharacterResponse>::Create(channel_.get(), cq, rpcmethod_DeleteCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::CharacterID& request, ::mruv::CharacterID* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PermanentCharacterKill_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::CharacterID* request, ::mruv::CharacterID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::CharacterID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::CharacterID* request, ::mruv::CharacterID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::CharacterID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::CharacterID>* MruVCharactersService::Stub::AsyncPermanentCharacterKillRaw(::grpc::ClientContext* context, const ::mruv::CharacterID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::CharacterID>::Create(channel_.get(), cq, rpcmethod_PermanentCharacterKill_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::CharacterID>* MruVCharactersService::Stub::PrepareAsyncPermanentCharacterKillRaw(::grpc::ClientContext* context, const ::mruv::CharacterID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::CharacterID>::Create(channel_.get(), cq, rpcmethod_PermanentCharacterKill_, context, request, false);
}

::grpc::ClientReader< ::mruv::DeathStreamResponse>* MruVCharactersService::Stub::DeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::DeathStreamRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::mruv::DeathStreamResponse>::Create(channel_.get(), rpcmethod_DeathsStream_, context, request);
}

void MruVCharactersService::Stub::experimental_async::DeathsStream(::grpc::ClientContext* context, ::mruv::DeathStreamRequest* request, ::grpc::experimental::ClientReadReactor< ::mruv::DeathStreamResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::mruv::DeathStreamResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_DeathsStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mruv::DeathStreamResponse>* MruVCharactersService::Stub::AsyncDeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::DeathStreamRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::DeathStreamResponse>::Create(channel_.get(), cq, rpcmethod_DeathsStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mruv::DeathStreamResponse>* MruVCharactersService::Stub::PrepareAsyncDeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::DeathStreamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::DeathStreamResponse>::Create(channel_.get(), cq, rpcmethod_DeathsStream_, context, request, false, nullptr);
}

::grpc::Status MruVCharactersService::Stub::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::mruv::ServiceStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceStatus_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVCharactersService::Stub::AsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVCharactersService::Stub::PrepareAsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::mruv::VersionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceVersion_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVCharactersService::Stub::AsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVCharactersService::Stub::PrepareAsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, false);
}

MruVCharactersService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::CreateCharacterRequest, ::mruv::CreateCharacterResponse>(
          std::mem_fn(&MruVCharactersService::Service::CreateCharacter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::GetCharacterRequest, ::mruv::GetCharacterResponse>(
          std::mem_fn(&MruVCharactersService::Service::GetCharacter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::UpdateCharacterRequest, ::mruv::UpdateCharacterResponse>(
          std::mem_fn(&MruVCharactersService::Service::UpdateCharacter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::DeleteCharacterRequest, ::mruv::DeleteCharacterResponse>(
          std::mem_fn(&MruVCharactersService::Service::DeleteCharacter), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::CharacterID, ::mruv::CharacterID>(
          std::mem_fn(&MruVCharactersService::Service::PermanentCharacterKill), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[5],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MruVCharactersService::Service, ::mruv::DeathStreamRequest, ::mruv::DeathStreamResponse>(
          std::mem_fn(&MruVCharactersService::Service::DeathsStream), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::ServiceStatusRequest, ::mruv::ServiceStatusResponse>(
          std::mem_fn(&MruVCharactersService::Service::GetServiceStatus), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::VersionRequest, ::mruv::VersionResponse>(
          std::mem_fn(&MruVCharactersService::Service::GetServiceVersion), this)));
}

MruVCharactersService::Service::~Service() {
}

::grpc::Status MruVCharactersService::Service::CreateCharacter(::grpc::ServerContext* context, const ::mruv::CreateCharacterRequest* request, ::mruv::CreateCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::GetCharacter(::grpc::ServerContext* context, const ::mruv::GetCharacterRequest* request, ::mruv::GetCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::UpdateCharacter(::grpc::ServerContext* context, const ::mruv::UpdateCharacterRequest* request, ::mruv::UpdateCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::DeleteCharacter(::grpc::ServerContext* context, const ::mruv::DeleteCharacterRequest* request, ::mruv::DeleteCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::PermanentCharacterKill(::grpc::ServerContext* context, const ::mruv::CharacterID* request, ::mruv::CharacterID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::DeathsStream(::grpc::ServerContext* context, const ::mruv::DeathStreamRequest* request, ::grpc::ServerWriter< ::mruv::DeathStreamResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::GetServiceStatus(::grpc::ServerContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::GetServiceVersion(::grpc::ServerContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv

