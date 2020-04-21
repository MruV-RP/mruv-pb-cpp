// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: accounts/accounts.proto

#include "accounts/accounts.pb.h"
#include "accounts/accounts.grpc.pb.h"

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

static const char* MruVAccountsService_method_names[] = {
  "/mruv.MruVAccountsService/RegisterAccount",
  "/mruv.MruVAccountsService/LogIn",
  "/mruv.MruVAccountsService/GetAccount",
  "/mruv.MruVAccountsService/GetAccountCharacters",
};

std::unique_ptr< MruVAccountsService::Stub> MruVAccountsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVAccountsService::Stub> stub(new MruVAccountsService::Stub(channel));
  return stub;
}

MruVAccountsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_RegisterAccount_(MruVAccountsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_LogIn_(MruVAccountsService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAccount_(MruVAccountsService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAccountCharacters_(MruVAccountsService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVAccountsService::Stub::RegisterAccount(::grpc::ClientContext* context, const ::mruv::RegisterAccountRequest& request, ::mruv::RegisterAccountResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RegisterAccount_, context, request, response);
}

void MruVAccountsService::Stub::experimental_async::RegisterAccount(::grpc::ClientContext* context, const ::mruv::RegisterAccountRequest* request, ::mruv::RegisterAccountResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterAccount_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::RegisterAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RegisterAccountResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RegisterAccount_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::RegisterAccount(::grpc::ClientContext* context, const ::mruv::RegisterAccountRequest* request, ::mruv::RegisterAccountResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterAccount_, context, request, response, reactor);
}

void MruVAccountsService::Stub::experimental_async::RegisterAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RegisterAccountResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RegisterAccount_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::RegisterAccountResponse>* MruVAccountsService::Stub::AsyncRegisterAccountRaw(::grpc::ClientContext* context, const ::mruv::RegisterAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RegisterAccountResponse>::Create(channel_.get(), cq, rpcmethod_RegisterAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::RegisterAccountResponse>* MruVAccountsService::Stub::PrepareAsyncRegisterAccountRaw(::grpc::ClientContext* context, const ::mruv::RegisterAccountRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RegisterAccountResponse>::Create(channel_.get(), cq, rpcmethod_RegisterAccount_, context, request, false);
}

::grpc::Status MruVAccountsService::Stub::LogIn(::grpc::ClientContext* context, const ::mruv::LogInRequest& request, ::mruv::LogInResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_LogIn_, context, request, response);
}

void MruVAccountsService::Stub::experimental_async::LogIn(::grpc::ClientContext* context, const ::mruv::LogInRequest* request, ::mruv::LogInResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LogIn_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::LogIn(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::LogInResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_LogIn_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::LogIn(::grpc::ClientContext* context, const ::mruv::LogInRequest* request, ::mruv::LogInResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LogIn_, context, request, response, reactor);
}

void MruVAccountsService::Stub::experimental_async::LogIn(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::LogInResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_LogIn_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::LogInResponse>* MruVAccountsService::Stub::AsyncLogInRaw(::grpc::ClientContext* context, const ::mruv::LogInRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::LogInResponse>::Create(channel_.get(), cq, rpcmethod_LogIn_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::LogInResponse>* MruVAccountsService::Stub::PrepareAsyncLogInRaw(::grpc::ClientContext* context, const ::mruv::LogInRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::LogInResponse>::Create(channel_.get(), cq, rpcmethod_LogIn_, context, request, false);
}

::grpc::Status MruVAccountsService::Stub::GetAccount(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::mruv::Account* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAccount_, context, request, response);
}

void MruVAccountsService::Stub::experimental_async::GetAccount(::grpc::ClientContext* context, const ::mruv::AccountID* request, ::mruv::Account* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccount_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::GetAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::Account* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccount_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::GetAccount(::grpc::ClientContext* context, const ::mruv::AccountID* request, ::mruv::Account* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccount_, context, request, response, reactor);
}

void MruVAccountsService::Stub::experimental_async::GetAccount(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::Account* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccount_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::Account>* MruVAccountsService::Stub::AsyncGetAccountRaw(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::Account>::Create(channel_.get(), cq, rpcmethod_GetAccount_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::Account>* MruVAccountsService::Stub::PrepareAsyncGetAccountRaw(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::Account>::Create(channel_.get(), cq, rpcmethod_GetAccount_, context, request, false);
}

::grpc::Status MruVAccountsService::Stub::GetAccountCharacters(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::mruv::GetAccountCharactersResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAccountCharacters_, context, request, response);
}

void MruVAccountsService::Stub::experimental_async::GetAccountCharacters(::grpc::ClientContext* context, const ::mruv::AccountID* request, ::mruv::GetAccountCharactersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccountCharacters_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::GetAccountCharacters(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetAccountCharactersResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetAccountCharacters_, context, request, response, std::move(f));
}

void MruVAccountsService::Stub::experimental_async::GetAccountCharacters(::grpc::ClientContext* context, const ::mruv::AccountID* request, ::mruv::GetAccountCharactersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccountCharacters_, context, request, response, reactor);
}

void MruVAccountsService::Stub::experimental_async::GetAccountCharacters(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetAccountCharactersResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetAccountCharacters_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetAccountCharactersResponse>* MruVAccountsService::Stub::AsyncGetAccountCharactersRaw(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetAccountCharactersResponse>::Create(channel_.get(), cq, rpcmethod_GetAccountCharacters_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetAccountCharactersResponse>* MruVAccountsService::Stub::PrepareAsyncGetAccountCharactersRaw(::grpc::ClientContext* context, const ::mruv::AccountID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetAccountCharactersResponse>::Create(channel_.get(), cq, rpcmethod_GetAccountCharacters_, context, request, false);
}

MruVAccountsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVAccountsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVAccountsService::Service, ::mruv::RegisterAccountRequest, ::mruv::RegisterAccountResponse>(
          std::mem_fn(&MruVAccountsService::Service::RegisterAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVAccountsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVAccountsService::Service, ::mruv::LogInRequest, ::mruv::LogInResponse>(
          std::mem_fn(&MruVAccountsService::Service::LogIn), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVAccountsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVAccountsService::Service, ::mruv::AccountID, ::mruv::Account>(
          std::mem_fn(&MruVAccountsService::Service::GetAccount), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVAccountsService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVAccountsService::Service, ::mruv::AccountID, ::mruv::GetAccountCharactersResponse>(
          std::mem_fn(&MruVAccountsService::Service::GetAccountCharacters), this)));
}

MruVAccountsService::Service::~Service() {
}

::grpc::Status MruVAccountsService::Service::RegisterAccount(::grpc::ServerContext* context, const ::mruv::RegisterAccountRequest* request, ::mruv::RegisterAccountResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVAccountsService::Service::LogIn(::grpc::ServerContext* context, const ::mruv::LogInRequest* request, ::mruv::LogInResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVAccountsService::Service::GetAccount(::grpc::ServerContext* context, const ::mruv::AccountID* request, ::mruv::Account* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVAccountsService::Service::GetAccountCharacters(::grpc::ServerContext* context, const ::mruv::AccountID* request, ::mruv::GetAccountCharactersResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv

