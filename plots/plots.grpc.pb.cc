// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: plots/plots.proto

#include "plots/plots.pb.h"
#include "plots/plots.grpc.pb.h"

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
namespace plots {

static const char* MruVPlotsService_method_names[] = {
  "/mruv.plots.MruVPlotsService/CreatePlot",
  "/mruv.plots.MruVPlotsService/GetPlot",
  "/mruv.plots.MruVPlotsService/UpdatePlot",
  "/mruv.plots.MruVPlotsService/DeletePlot",
};

std::unique_ptr< MruVPlotsService::Stub> MruVPlotsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< MruVPlotsService::Stub> stub(new MruVPlotsService::Stub(channel));
  return stub;
}

MruVPlotsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreatePlot_(MruVPlotsService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetPlot_(MruVPlotsService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdatePlot_(MruVPlotsService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeletePlot_(MruVPlotsService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status MruVPlotsService::Stub::CreatePlot(::grpc::ClientContext* context, const ::mruv::plots::CreatePlotRequest& request, ::mruv::plots::CreatePlotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreatePlot_, context, request, response);
}

void MruVPlotsService::Stub::experimental_async::CreatePlot(::grpc::ClientContext* context, const ::mruv::plots::CreatePlotRequest* request, ::mruv::plots::CreatePlotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_CreatePlot_, context, request, response, std::move(f));
}

void MruVPlotsService::Stub::experimental_async::CreatePlot(::grpc::ClientContext* context, const ::mruv::plots::CreatePlotRequest* request, ::mruv::plots::CreatePlotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_CreatePlot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::CreatePlotResponse>* MruVPlotsService::Stub::PrepareAsyncCreatePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::CreatePlotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::plots::CreatePlotResponse>::Create(channel_.get(), cq, rpcmethod_CreatePlot_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::CreatePlotResponse>* MruVPlotsService::Stub::AsyncCreatePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::CreatePlotRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCreatePlotRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVPlotsService::Stub::GetPlot(::grpc::ClientContext* context, const ::mruv::plots::GetPlotRequest& request, ::mruv::plots::GetPlotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetPlot_, context, request, response);
}

void MruVPlotsService::Stub::experimental_async::GetPlot(::grpc::ClientContext* context, const ::mruv::plots::GetPlotRequest* request, ::mruv::plots::GetPlotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_GetPlot_, context, request, response, std::move(f));
}

void MruVPlotsService::Stub::experimental_async::GetPlot(::grpc::ClientContext* context, const ::mruv::plots::GetPlotRequest* request, ::mruv::plots::GetPlotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_GetPlot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::GetPlotResponse>* MruVPlotsService::Stub::PrepareAsyncGetPlotRaw(::grpc::ClientContext* context, const ::mruv::plots::GetPlotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::plots::GetPlotResponse>::Create(channel_.get(), cq, rpcmethod_GetPlot_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::GetPlotResponse>* MruVPlotsService::Stub::AsyncGetPlotRaw(::grpc::ClientContext* context, const ::mruv::plots::GetPlotRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetPlotRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVPlotsService::Stub::UpdatePlot(::grpc::ClientContext* context, const ::mruv::plots::UpdatePlotRequest& request, ::mruv::plots::UpdatePlotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdatePlot_, context, request, response);
}

void MruVPlotsService::Stub::experimental_async::UpdatePlot(::grpc::ClientContext* context, const ::mruv::plots::UpdatePlotRequest* request, ::mruv::plots::UpdatePlotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_UpdatePlot_, context, request, response, std::move(f));
}

void MruVPlotsService::Stub::experimental_async::UpdatePlot(::grpc::ClientContext* context, const ::mruv::plots::UpdatePlotRequest* request, ::mruv::plots::UpdatePlotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_UpdatePlot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::UpdatePlotResponse>* MruVPlotsService::Stub::PrepareAsyncUpdatePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::UpdatePlotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::plots::UpdatePlotResponse>::Create(channel_.get(), cq, rpcmethod_UpdatePlot_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::UpdatePlotResponse>* MruVPlotsService::Stub::AsyncUpdatePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::UpdatePlotRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncUpdatePlotRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status MruVPlotsService::Stub::DeletePlot(::grpc::ClientContext* context, const ::mruv::plots::DeletePlotRequest& request, ::mruv::plots::DeletePlotResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeletePlot_, context, request, response);
}

void MruVPlotsService::Stub::experimental_async::DeletePlot(::grpc::ClientContext* context, const ::mruv::plots::DeletePlotRequest* request, ::mruv::plots::DeletePlotResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_DeletePlot_, context, request, response, std::move(f));
}

void MruVPlotsService::Stub::experimental_async::DeletePlot(::grpc::ClientContext* context, const ::mruv::plots::DeletePlotRequest* request, ::mruv::plots::DeletePlotResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_DeletePlot_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::DeletePlotResponse>* MruVPlotsService::Stub::PrepareAsyncDeletePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::DeletePlotRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::mruv::plots::DeletePlotResponse>::Create(channel_.get(), cq, rpcmethod_DeletePlot_, context, request, false);
}

::grpc::ClientAsyncResponseReader< ::mruv::plots::DeletePlotResponse>* MruVPlotsService::Stub::AsyncDeletePlotRaw(::grpc::ClientContext* context, const ::mruv::plots::DeletePlotRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDeletePlotRaw(context, request, cq);
  result->StartCall();
  return result;
}

MruVPlotsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVPlotsService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVPlotsService::Service, ::mruv::plots::CreatePlotRequest, ::mruv::plots::CreatePlotResponse>(
          [](MruVPlotsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::plots::CreatePlotRequest* req,
             ::mruv::plots::CreatePlotResponse* resp) {
               return service->CreatePlot(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVPlotsService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVPlotsService::Service, ::mruv::plots::GetPlotRequest, ::mruv::plots::GetPlotResponse>(
          [](MruVPlotsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::plots::GetPlotRequest* req,
             ::mruv::plots::GetPlotResponse* resp) {
               return service->GetPlot(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVPlotsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVPlotsService::Service, ::mruv::plots::UpdatePlotRequest, ::mruv::plots::UpdatePlotResponse>(
          [](MruVPlotsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::plots::UpdatePlotRequest* req,
             ::mruv::plots::UpdatePlotResponse* resp) {
               return service->UpdatePlot(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      MruVPlotsService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< MruVPlotsService::Service, ::mruv::plots::DeletePlotRequest, ::mruv::plots::DeletePlotResponse>(
          [](MruVPlotsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mruv::plots::DeletePlotRequest* req,
             ::mruv::plots::DeletePlotResponse* resp) {
               return service->DeletePlot(ctx, req, resp);
             }, this)));
}

MruVPlotsService::Service::~Service() {
}

::grpc::Status MruVPlotsService::Service::CreatePlot(::grpc::ServerContext* context, const ::mruv::plots::CreatePlotRequest* request, ::mruv::plots::CreatePlotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVPlotsService::Service::GetPlot(::grpc::ServerContext* context, const ::mruv::plots::GetPlotRequest* request, ::mruv::plots::GetPlotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVPlotsService::Service::UpdatePlot(::grpc::ServerContext* context, const ::mruv::plots::UpdatePlotRequest* request, ::mruv::plots::UpdatePlotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status MruVPlotsService::Service::DeletePlot(::grpc::ServerContext* context, const ::mruv::plots::DeletePlotRequest* request, ::mruv::plots::DeletePlotResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mruv
}  // namespace plots

