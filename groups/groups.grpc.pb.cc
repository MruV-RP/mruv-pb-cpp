// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: groups/groups.proto

#include "groups/groups.pb.h"
#include "groups/groups.grpc.pb.h"

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

static const char* MruVGroupsService_method_names[] = {
  "/mruv.MruVGroupsService/CreateGroup",
  "/mruv.MruVGroupsService/GetGroup",
  "/mruv.MruVGroupsService/DeleteGroup",
  "/mruv.MruVGroupsService/GetGroups",
  "/mruv.MruVGroupsService/AddGroupMember",
  "/mruv.MruVGroupsService/RemoveGroupMember",
  "/mruv.MruVGroupsService/GetServiceStatus",
  "/mruv.MruVGroupsService/GetServiceVersion",
};

std::unique_ptr< MruVGroupsService::Stub> MruVGroupsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVGroupsService::Stub> stub(new MruVGroupsService::Stub(channel));
  return stub;
}

MruVGroupsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateGroup_(MruVGroupsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGroup_(MruVGroupsService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteGroup_(MruVGroupsService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetGroups_(MruVGroupsService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_AddGroupMember_(MruVGroupsService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_RemoveGroupMember_(MruVGroupsService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceStatus_(MruVGroupsService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetServiceVersion_(MruVGroupsService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVGroupsService::Stub::CreateGroup(::grpc::ClientContext* context, const ::mruv::Group& request, ::mruv::GroupID* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateGroup_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::CreateGroup(::grpc::ClientContext* context, const ::mruv::Group* request, ::mruv::GroupID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::CreateGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GroupID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreateGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::CreateGroup(::grpc::ClientContext* context, const ::mruv::Group* request, ::mruv::GroupID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateGroup_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::CreateGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GroupID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreateGroup_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::GroupID>* MruVGroupsService::Stub::AsyncCreateGroupRaw(::grpc::ClientContext* context, const ::mruv::Group& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GroupID>::Create(channel_.get(), cq, rpcmethod_CreateGroup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::GroupID>* MruVGroupsService::Stub::PrepareAsyncCreateGroupRaw(::grpc::ClientContext* context, const ::mruv::Group& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GroupID>::Create(channel_.get(), cq, rpcmethod_CreateGroup_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::GetGroup(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::mruv::Group* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetGroup_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::GetGroup(::grpc::ClientContext* context, const ::mruv::GroupID* request, ::mruv::Group* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::Group* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetGroup(::grpc::ClientContext* context, const ::mruv::GroupID* request, ::mruv::Group* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGroup_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::GetGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::Group* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGroup_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::Group>* MruVGroupsService::Stub::AsyncGetGroupRaw(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::Group>::Create(channel_.get(), cq, rpcmethod_GetGroup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::Group>* MruVGroupsService::Stub::PrepareAsyncGetGroupRaw(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::Group>::Create(channel_.get(), cq, rpcmethod_GetGroup_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::DeleteGroup(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::mruv::GroupID* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteGroup_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::DeleteGroup(::grpc::ClientContext* context, const ::mruv::GroupID* request, ::mruv::GroupID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::DeleteGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GroupID* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeleteGroup_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::DeleteGroup(::grpc::ClientContext* context, const ::mruv::GroupID* request, ::mruv::GroupID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteGroup_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::DeleteGroup(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GroupID* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeleteGroup_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::GroupID>* MruVGroupsService::Stub::AsyncDeleteGroupRaw(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GroupID>::Create(channel_.get(), cq, rpcmethod_DeleteGroup_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::GroupID>* MruVGroupsService::Stub::PrepareAsyncDeleteGroupRaw(::grpc::ClientContext* context, const ::mruv::GroupID& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GroupID>::Create(channel_.get(), cq, rpcmethod_DeleteGroup_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::GetGroups(::grpc::ClientContext* context, const ::mruv::GetGroupsRequest& request, ::mruv::GetGroupsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetGroups_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::GetGroups(::grpc::ClientContext* context, const ::mruv::GetGroupsRequest* request, ::mruv::GetGroupsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGroups_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetGroups(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetGroupsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetGroups_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetGroups(::grpc::ClientContext* context, const ::mruv::GetGroupsRequest* request, ::mruv::GetGroupsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGroups_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::GetGroups(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::GetGroupsResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetGroups_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetGroupsResponse>* MruVGroupsService::Stub::AsyncGetGroupsRaw(::grpc::ClientContext* context, const ::mruv::GetGroupsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetGroupsResponse>::Create(channel_.get(), cq, rpcmethod_GetGroups_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::GetGroupsResponse>* MruVGroupsService::Stub::PrepareAsyncGetGroupsRaw(::grpc::ClientContext* context, const ::mruv::GetGroupsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::GetGroupsResponse>::Create(channel_.get(), cq, rpcmethod_GetGroups_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::AddGroupMember(::grpc::ClientContext* context, const ::mruv::AddGroupMemberRequest& request, ::mruv::AddGroupMemberResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_AddGroupMember_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::AddGroupMember(::grpc::ClientContext* context, const ::mruv::AddGroupMemberRequest* request, ::mruv::AddGroupMemberResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddGroupMember_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::AddGroupMember(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::AddGroupMemberResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_AddGroupMember_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::AddGroupMember(::grpc::ClientContext* context, const ::mruv::AddGroupMemberRequest* request, ::mruv::AddGroupMemberResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AddGroupMember_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::AddGroupMember(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::AddGroupMemberResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_AddGroupMember_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::AddGroupMemberResponse>* MruVGroupsService::Stub::AsyncAddGroupMemberRaw(::grpc::ClientContext* context, const ::mruv::AddGroupMemberRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::AddGroupMemberResponse>::Create(channel_.get(), cq, rpcmethod_AddGroupMember_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::AddGroupMemberResponse>* MruVGroupsService::Stub::PrepareAsyncAddGroupMemberRaw(::grpc::ClientContext* context, const ::mruv::AddGroupMemberRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::AddGroupMemberResponse>::Create(channel_.get(), cq, rpcmethod_AddGroupMember_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::RemoveGroupMember(::grpc::ClientContext* context, const ::mruv::RemoveGroupMemberRequest& request, ::mruv::RemoveGroupMemberResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_RemoveGroupMember_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::RemoveGroupMember(::grpc::ClientContext* context, const ::mruv::RemoveGroupMemberRequest* request, ::mruv::RemoveGroupMemberResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RemoveGroupMember_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::RemoveGroupMember(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RemoveGroupMemberResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_RemoveGroupMember_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::RemoveGroupMember(::grpc::ClientContext* context, const ::mruv::RemoveGroupMemberRequest* request, ::mruv::RemoveGroupMemberResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RemoveGroupMember_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::RemoveGroupMember(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::RemoveGroupMemberResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_RemoveGroupMember_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::RemoveGroupMemberResponse>* MruVGroupsService::Stub::AsyncRemoveGroupMemberRaw(::grpc::ClientContext* context, const ::mruv::RemoveGroupMemberRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RemoveGroupMemberResponse>::Create(channel_.get(), cq, rpcmethod_RemoveGroupMember_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::RemoveGroupMemberResponse>* MruVGroupsService::Stub::PrepareAsyncRemoveGroupMemberRaw(::grpc::ClientContext* context, const ::mruv::RemoveGroupMemberRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::RemoveGroupMemberResponse>::Create(channel_.get(), cq, rpcmethod_RemoveGroupMember_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::mruv::ServiceStatusResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceStatus_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::GetServiceStatus(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::ServiceStatusResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceStatus_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVGroupsService::Stub::AsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::ServiceStatusResponse>* MruVGroupsService::Stub::PrepareAsyncGetServiceStatusRaw(::grpc::ClientContext* context, const ::mruv::ServiceStatusRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::ServiceStatusResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceStatus_, context, request, false);
}

::grpc::Status MruVGroupsService::Stub::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::mruv::VersionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetServiceVersion_, context, request, response);
}

void MruVGroupsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, std::move(f));
}

void MruVGroupsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

void MruVGroupsService::Stub::experimental_async::GetServiceVersion(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::mruv::VersionResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetServiceVersion_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVGroupsService::Stub::AsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::mruv::VersionResponse>* MruVGroupsService::Stub::PrepareAsyncGetServiceVersionRaw(::grpc::ClientContext* context, const ::mruv::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::mruv::VersionResponse>::Create(channel_.get(), cq, rpcmethod_GetServiceVersion_, context, request, false);
}

MruVGroupsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::Group, ::mruv::GroupID>(
          std::mem_fn(&MruVGroupsService::Service::CreateGroup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::GroupID, ::mruv::Group>(
          std::mem_fn(&MruVGroupsService::Service::GetGroup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::GroupID, ::mruv::GroupID>(
          std::mem_fn(&MruVGroupsService::Service::DeleteGroup), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::GetGroupsRequest, ::mruv::GetGroupsResponse>(
          std::mem_fn(&MruVGroupsService::Service::GetGroups), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::AddGroupMemberRequest, ::mruv::AddGroupMemberResponse>(
          std::mem_fn(&MruVGroupsService::Service::AddGroupMember), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::RemoveGroupMemberRequest, ::mruv::RemoveGroupMemberResponse>(
          std::mem_fn(&MruVGroupsService::Service::RemoveGroupMember), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::ServiceStatusRequest, ::mruv::ServiceStatusResponse>(
          std::mem_fn(&MruVGroupsService::Service::GetServiceStatus), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVGroupsService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVGroupsService::Service, ::mruv::VersionRequest, ::mruv::VersionResponse>(
          std::mem_fn(&MruVGroupsService::Service::GetServiceVersion), this)));
}

MruVGroupsService::Service::~Service() {
}

::grpc::Status MruVGroupsService::Service::CreateGroup(::grpc::ServerContext* context, const ::mruv::Group* request, ::mruv::GroupID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::GetGroup(::grpc::ServerContext* context, const ::mruv::GroupID* request, ::mruv::Group* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::DeleteGroup(::grpc::ServerContext* context, const ::mruv::GroupID* request, ::mruv::GroupID* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::GetGroups(::grpc::ServerContext* context, const ::mruv::GetGroupsRequest* request, ::mruv::GetGroupsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::AddGroupMember(::grpc::ServerContext* context, const ::mruv::AddGroupMemberRequest* request, ::mruv::AddGroupMemberResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::RemoveGroupMember(::grpc::ServerContext* context, const ::mruv::RemoveGroupMemberRequest* request, ::mruv::RemoveGroupMemberResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::GetServiceStatus(::grpc::ServerContext* context, const ::mruv::ServiceStatusRequest* request, ::mruv::ServiceStatusResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVGroupsService::Service::GetServiceVersion(::grpc::ServerContext* context, const ::mruv::VersionRequest* request, ::mruv::VersionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
