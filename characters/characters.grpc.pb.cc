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
namespace characters {

static const char* MruVCharactersService_method_names[] = {
  "/mruv.characters.MruVCharactersService/CreateCharacter",
  "/mruv.characters.MruVCharactersService/GetCharacter",
  "/mruv.characters.MruVCharactersService/UpdateCharacter",
  "/mruv.characters.MruVCharactersService/DeleteCharacter",
  "/mruv.characters.MruVCharactersService/PermanentCharacterKill",
  "/mruv.characters.MruVCharactersService/ChangeClothes",
  "/mruv.characters.MruVCharactersService/DeathsStream",
  "/mruv.characters.MruVCharactersService/GetServiceStatus",
  "/mruv.characters.MruVCharactersService/GetServiceVersion",
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
  , rpcmethod_ChangeClothes_(MruVCharactersService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeathsStream_(MruVCharactersService_method_names[6], ::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetServiceStatus_(MruVCharactersService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceVersion_(MruVCharactersService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVCharactersService::Stub::CreateCharacter(::grpc::ClientContext* context, const ::mruv::characters::CreateCharacterRequest& request, ::mruv::characters::CreateCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::mruv::characters::CreateCharacterRequest* request, ::mruv::characters::CreateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::CreateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::mruv::characters::CreateCharacterRequest* request, ::mruv::characters::CreateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::CreateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::CreateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::CreateCharacterResponse>* MruVCharactersService::Stub::AsyncCreateCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::CreateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::CreateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_CreateCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::CreateCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncCreateCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::CreateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::CreateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_CreateCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::GetCharacter(::grpc::ClientContext* context, const ::mruv::characters::GetCharacterRequest& request, ::mruv::characters::GetCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::mruv::characters::GetCharacterRequest* request, ::mruv::characters::GetCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::GetCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::mruv::characters::GetCharacterRequest* request, ::mruv::characters::GetCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::GetCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::GetCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::GetCharacterResponse>* MruVCharactersService::Stub::AsyncGetCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::GetCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::GetCharacterResponse>::Create(channel_.get(), cq, rpcmethod_GetCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::GetCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncGetCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::GetCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::GetCharacterResponse>::Create(channel_.get(), cq, rpcmethod_GetCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::characters::UpdateCharacterRequest& request, ::mruv::characters::UpdateCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::characters::UpdateCharacterRequest* request, ::mruv::characters::UpdateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::UpdateCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::mruv::characters::UpdateCharacterRequest* request, ::mruv::characters::UpdateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::UpdateCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::UpdateCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdateCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::UpdateCharacterResponse>* MruVCharactersService::Stub::AsyncUpdateCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::UpdateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::UpdateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_UpdateCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::UpdateCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncUpdateCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::UpdateCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::UpdateCharacterResponse>::Create(channel_.get(), cq, rpcmethod_UpdateCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::characters::DeleteCharacterRequest& request, ::mruv::characters::DeleteCharacterResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteCharacter_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::characters::DeleteCharacterRequest* request, ::mruv::characters::DeleteCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::DeleteCharacterResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::mruv::characters::DeleteCharacterRequest* request, ::mruv::characters::DeleteCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::DeleteCharacter(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::DeleteCharacterResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteCharacter_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::DeleteCharacterResponse>* MruVCharactersService::Stub::AsyncDeleteCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::DeleteCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::DeleteCharacterResponse>::Create(channel_.get(), cq, rpcmethod_DeleteCharacter_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::DeleteCharacterResponse>* MruVCharactersService::Stub::PrepareAsyncDeleteCharacterRaw(::grpc::ClientContext* context, const ::mruv::characters::DeleteCharacterRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::DeleteCharacterResponse>::Create(channel_.get(), cq, rpcmethod_DeleteCharacter_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::characters::CharacterID& request, ::mruv::characters::CharacterID* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_PermanentCharacterKill_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::characters::CharacterID* request, ::mruv::characters::CharacterID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::CharacterID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::mruv::characters::CharacterID* request, ::mruv::characters::CharacterID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::PermanentCharacterKill(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::CharacterID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_PermanentCharacterKill_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::CharacterID>* MruVCharactersService::Stub::AsyncPermanentCharacterKillRaw(::grpc::ClientContext* context, const ::mruv::characters::CharacterID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::CharacterID>::Create(channel_.get(), cq, rpcmethod_PermanentCharacterKill_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::CharacterID>* MruVCharactersService::Stub::PrepareAsyncPermanentCharacterKillRaw(::grpc::ClientContext* context, const ::mruv::characters::CharacterID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::CharacterID>::Create(channel_.get(), cq, rpcmethod_PermanentCharacterKill_, context, request, false);
}

::grpc::Status MruVCharactersService::Stub::ChangeClothes(::grpc::ClientContext* context, const ::mruv::characters::ChangeClothesRequest& request, ::mruv::characters::ChangeClothesResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_ChangeClothes_, context, request, response);
}

void MruVCharactersService::Stub::experimental_async::ChangeClothes(::grpc::ClientContext* context, const ::mruv::characters::ChangeClothesRequest* request, ::mruv::characters::ChangeClothesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ChangeClothes_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::ChangeClothes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::ChangeClothesResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_ChangeClothes_, context, request, response, std::move(f));
}

void MruVCharactersService::Stub::experimental_async::ChangeClothes(::grpc::ClientContext* context, const ::mruv::characters::ChangeClothesRequest* request, ::mruv::characters::ChangeClothesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ChangeClothes_, context, request, response, reactor);
}

void MruVCharactersService::Stub::experimental_async::ChangeClothes(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::characters::ChangeClothesResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_ChangeClothes_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::ChangeClothesResponse>* MruVCharactersService::Stub::AsyncChangeClothesRaw(::grpc::ClientContext* context, const ::mruv::characters::ChangeClothesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::ChangeClothesResponse>::Create(channel_.get(), cq, rpcmethod_ChangeClothes_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::characters::ChangeClothesResponse>* MruVCharactersService::Stub::PrepareAsyncChangeClothesRaw(::grpc::ClientContext* context, const ::mruv::characters::ChangeClothesRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::characters::ChangeClothesResponse>::Create(channel_.get(), cq, rpcmethod_ChangeClothes_, context, request, false);
}

::grpc::ClientReader< ::mruv::characters::DeathStreamResponse>* MruVCharactersService::Stub::DeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::characters::DeathStreamRequest& request) {
  return ::grpc_impl::internal::ClientReaderFactory< ::mruv::characters::DeathStreamResponse>::Create(channel_.get(), rpcmethod_DeathsStream_, context, request);
}

void MruVCharactersService::Stub::experimental_async::DeathsStream(::grpc::ClientContext* context, ::mruv::characters::DeathStreamRequest* request, ::grpc::experimental::ClientReadReactor< ::mruv::characters::DeathStreamResponse>* reactor) {
  ::grpc_impl::internal::ClientCallbackReaderFactory< ::mruv::characters::DeathStreamResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_DeathsStream_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mruv::characters::DeathStreamResponse>* MruVCharactersService::Stub::AsyncDeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::characters::DeathStreamRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::characters::DeathStreamResponse>::Create(channel_.get(), cq, rpcmethod_DeathsStream_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mruv::characters::DeathStreamResponse>* MruVCharactersService::Stub::PrepareAsyncDeathsStreamRaw(::grpc::ClientContext* context, const ::mruv::characters::DeathStreamRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncReaderFactory< ::mruv::characters::DeathStreamResponse>::Create(channel_.get(), cq, rpcmethod_DeathsStream_, context, request, false, nullptr);
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
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::CreateCharacterRequest, ::mruv::characters::CreateCharacterResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::CreateCharacterRequest* req,
             ::mruv::characters::CreateCharacterResponse* resp) {
               return service->CreateCharacter(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::GetCharacterRequest, ::mruv::characters::GetCharacterResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::GetCharacterRequest* req,
             ::mruv::characters::GetCharacterResponse* resp) {
               return service->GetCharacter(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::UpdateCharacterRequest, ::mruv::characters::UpdateCharacterResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::UpdateCharacterRequest* req,
             ::mruv::characters::UpdateCharacterResponse* resp) {
               return service->UpdateCharacter(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::DeleteCharacterRequest, ::mruv::characters::DeleteCharacterResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::DeleteCharacterRequest* req,
             ::mruv::characters::DeleteCharacterResponse* resp) {
               return service->DeleteCharacter(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::CharacterID, ::mruv::characters::CharacterID>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::CharacterID* req,
             ::mruv::characters::CharacterID* resp) {
               return service->PermanentCharacterKill(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::characters::ChangeClothesRequest, ::mruv::characters::ChangeClothesResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::ChangeClothesRequest* req,
             ::mruv::characters::ChangeClothesResponse* resp) {
               return service->ChangeClothes(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[6],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< MruVCharactersService::Service, ::mruv::characters::DeathStreamRequest, ::mruv::characters::DeathStreamResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::characters::DeathStreamRequest* req,
             ::grpc_impl::ServerWriter<::mruv::characters::DeathStreamResponse>* writer) {
               return service->DeathsStream(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::ServiceStatusRequest, ::mruv::ServiceStatusResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::ServiceStatusRequest* req,
             ::mruv::ServiceStatusResponse* resp) {
               return service->GetServiceStatus(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVCharactersService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVCharactersService::Service, ::mruv::VersionRequest, ::mruv::VersionResponse>(
          [](MruVCharactersService::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::mruv::VersionRequest* req,
             ::mruv::VersionResponse* resp) {
               return service->GetServiceVersion(ctx, req, resp);
             }, this)));
}

MruVCharactersService::Service::~Service() {
}

::grpc::Status MruVCharactersService::Service::CreateCharacter(::grpc::ServerContext* context, const ::mruv::characters::CreateCharacterRequest* request, ::mruv::characters::CreateCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::GetCharacter(::grpc::ServerContext* context, const ::mruv::characters::GetCharacterRequest* request, ::mruv::characters::GetCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::UpdateCharacter(::grpc::ServerContext* context, const ::mruv::characters::UpdateCharacterRequest* request, ::mruv::characters::UpdateCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::DeleteCharacter(::grpc::ServerContext* context, const ::mruv::characters::DeleteCharacterRequest* request, ::mruv::characters::DeleteCharacterResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::PermanentCharacterKill(::grpc::ServerContext* context, const ::mruv::characters::CharacterID* request, ::mruv::characters::CharacterID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::ChangeClothes(::grpc::ServerContext* context, const ::mruv::characters::ChangeClothesRequest* request, ::mruv::characters::ChangeClothesResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVCharactersService::Service::DeathsStream(::grpc::ServerContext* context, const ::mruv::characters::DeathStreamRequest* request, ::grpc::ServerWriter< ::mruv::characters::DeathStreamResponse>* writer) {
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
}  // namespace characters

