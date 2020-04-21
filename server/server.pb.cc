// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server/server.proto

#include "server/server.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace mruv {
class RegisterServerRequestDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RegisterServerRequest> _instance;
} _RegisterServerRequest_default_instance_;
class RegisterServerResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<RegisterServerResponse> _instance;
} _RegisterServerResponse_default_instance_;
}  // namespace mruv
static void InitDefaultsscc_info_RegisterServerRequest_server_2fserver_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_RegisterServerRequest_default_instance_;
    new (ptr) ::mruv::RegisterServerRequest();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::RegisterServerRequest::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RegisterServerRequest_server_2fserver_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RegisterServerRequest_server_2fserver_2eproto}, {}};

static void InitDefaultsscc_info_RegisterServerResponse_server_2fserver_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_RegisterServerResponse_default_instance_;
    new (ptr) ::mruv::RegisterServerResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::RegisterServerResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_RegisterServerResponse_server_2fserver_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_RegisterServerResponse_server_2fserver_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_server_2fserver_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_server_2fserver_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_server_2fserver_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_server_2fserver_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::RegisterServerRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::RegisterServerResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mruv::RegisterServerRequest)},
  { 5, -1, sizeof(::mruv::RegisterServerResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_RegisterServerRequest_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_RegisterServerResponse_default_instance_),
};

const char descriptor_table_protodef_server_2fserver_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023server/server.proto\022\004mruv\032\034google/api/"
  "annotations.proto\032\031server/server_model.p"
  "roto\"\027\n\025RegisterServerRequest\"\030\n\026Registe"
  "rServerResponse2\227\001\n\021MruVServerService\022K\n"
  "\016RegisterServer\022\033.mruv.RegisterServerReq"
  "uest\032\034.mruv.RegisterServerResponse\0225\n\017Ge"
  "tServerStatus\022\016.mruv.ServerID\032\022.mruv.Ser"
  "verStatusB&Z$github.com/MruV-RP/mruv-pb-"
  "go/serverb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_server_2fserver_2eproto_deps[2] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
  &::descriptor_table_server_2fserver_5fmodel_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_server_2fserver_2eproto_sccs[2] = {
  &scc_info_RegisterServerRequest_server_2fserver_2eproto.base,
  &scc_info_RegisterServerResponse_server_2fserver_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_server_2fserver_2eproto_once;
static bool descriptor_table_server_2fserver_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_server_2fserver_2eproto = {
  &descriptor_table_server_2fserver_2eproto_initialized, descriptor_table_protodef_server_2fserver_2eproto, "server/server.proto", 337,
  &descriptor_table_server_2fserver_2eproto_once, descriptor_table_server_2fserver_2eproto_sccs, descriptor_table_server_2fserver_2eproto_deps, 2, 2,
  schemas, file_default_instances, TableStruct_server_2fserver_2eproto::offsets,
  file_level_metadata_server_2fserver_2eproto, 2, file_level_enum_descriptors_server_2fserver_2eproto, file_level_service_descriptors_server_2fserver_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_server_2fserver_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_server_2fserver_2eproto), true);
namespace mruv {

// ===================================================================

void RegisterServerRequest::InitAsDefaultInstance() {
}
class RegisterServerRequest::_Internal {
 public:
};

RegisterServerRequest::RegisterServerRequest()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.RegisterServerRequest)
}
RegisterServerRequest::RegisterServerRequest(const RegisterServerRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mruv.RegisterServerRequest)
}

void RegisterServerRequest::SharedCtor() {
}

RegisterServerRequest::~RegisterServerRequest() {
  // @@protoc_insertion_point(destructor:mruv.RegisterServerRequest)
  SharedDtor();
}

void RegisterServerRequest::SharedDtor() {
}

void RegisterServerRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RegisterServerRequest& RegisterServerRequest::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RegisterServerRequest_server_2fserver_2eproto.base);
  return *internal_default_instance();
}


void RegisterServerRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.RegisterServerRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

const char* RegisterServerRequest::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RegisterServerRequest::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.RegisterServerRequest)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.RegisterServerRequest)
  return target;
}

size_t RegisterServerRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.RegisterServerRequest)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RegisterServerRequest::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.RegisterServerRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const RegisterServerRequest* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RegisterServerRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.RegisterServerRequest)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.RegisterServerRequest)
    MergeFrom(*source);
  }
}

void RegisterServerRequest::MergeFrom(const RegisterServerRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.RegisterServerRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void RegisterServerRequest::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.RegisterServerRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegisterServerRequest::CopyFrom(const RegisterServerRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.RegisterServerRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterServerRequest::IsInitialized() const {
  return true;
}

void RegisterServerRequest::InternalSwap(RegisterServerRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RegisterServerRequest::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void RegisterServerResponse::InitAsDefaultInstance() {
}
class RegisterServerResponse::_Internal {
 public:
};

RegisterServerResponse::RegisterServerResponse()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.RegisterServerResponse)
}
RegisterServerResponse::RegisterServerResponse(const RegisterServerResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:mruv.RegisterServerResponse)
}

void RegisterServerResponse::SharedCtor() {
}

RegisterServerResponse::~RegisterServerResponse() {
  // @@protoc_insertion_point(destructor:mruv.RegisterServerResponse)
  SharedDtor();
}

void RegisterServerResponse::SharedDtor() {
}

void RegisterServerResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const RegisterServerResponse& RegisterServerResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_RegisterServerResponse_server_2fserver_2eproto.base);
  return *internal_default_instance();
}


void RegisterServerResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.RegisterServerResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

const char* RegisterServerResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* RegisterServerResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.RegisterServerResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.RegisterServerResponse)
  return target;
}

size_t RegisterServerResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.RegisterServerResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RegisterServerResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.RegisterServerResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const RegisterServerResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<RegisterServerResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.RegisterServerResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.RegisterServerResponse)
    MergeFrom(*source);
  }
}

void RegisterServerResponse::MergeFrom(const RegisterServerResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.RegisterServerResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void RegisterServerResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.RegisterServerResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RegisterServerResponse::CopyFrom(const RegisterServerResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.RegisterServerResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RegisterServerResponse::IsInitialized() const {
  return true;
}

void RegisterServerResponse::InternalSwap(RegisterServerResponse* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata RegisterServerResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mruv::RegisterServerRequest* Arena::CreateMaybeMessage< ::mruv::RegisterServerRequest >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::RegisterServerRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::mruv::RegisterServerResponse* Arena::CreateMaybeMessage< ::mruv::RegisterServerResponse >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::RegisterServerResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
