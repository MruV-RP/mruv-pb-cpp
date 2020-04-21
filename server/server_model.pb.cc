// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server/server_model.proto

#include "server/server_model.pb.h"

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
class ServerIDDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerID> _instance;
} _ServerID_default_instance_;
class ServerInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerInfo> _instance;
} _ServerInfo_default_instance_;
class ServerStatusDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerStatus> _instance;
} _ServerStatus_default_instance_;
}  // namespace mruv
static void InitDefaultsscc_info_ServerID_server_2fserver_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_ServerID_default_instance_;
    new (ptr) ::mruv::ServerID();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::ServerID::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServerID_server_2fserver_5fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServerID_server_2fserver_5fmodel_2eproto}, {}};

static void InitDefaultsscc_info_ServerInfo_server_2fserver_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_ServerInfo_default_instance_;
    new (ptr) ::mruv::ServerInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::ServerInfo::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServerInfo_server_2fserver_5fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServerInfo_server_2fserver_5fmodel_2eproto}, {}};

static void InitDefaultsscc_info_ServerStatus_server_2fserver_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_ServerStatus_default_instance_;
    new (ptr) ::mruv::ServerStatus();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::ServerStatus::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServerStatus_server_2fserver_5fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServerStatus_server_2fserver_5fmodel_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_server_2fserver_5fmodel_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_server_2fserver_5fmodel_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_server_2fserver_5fmodel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_server_2fserver_5fmodel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerID, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerID, id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerInfo, name_),
  PROTOBUF_FIELD_OFFSET(::mruv::ServerInfo, host_),
  PROTOBUF_FIELD_OFFSET(::mruv::ServerInfo, port_),
  PROTOBUF_FIELD_OFFSET(::mruv::ServerInfo, platform_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerStatus, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mruv::ServerStatus, active_),
  PROTOBUF_FIELD_OFFSET(::mruv::ServerStatus, players_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mruv::ServerID)},
  { 6, -1, sizeof(::mruv::ServerInfo)},
  { 15, -1, sizeof(::mruv::ServerStatus)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_ServerID_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_ServerInfo_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_ServerStatus_default_instance_),
};

const char descriptor_table_protodef_server_2fserver_5fmodel_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031server/server_model.proto\022\004mruv\"\026\n\010Ser"
  "verID\022\n\n\002id\030\001 \001(\003\"H\n\nServerInfo\022\014\n\004name\030"
  "\001 \001(\t\022\014\n\004host\030\002 \001(\t\022\014\n\004port\030\003 \001(\t\022\020\n\010pla"
  "tform\030\004 \001(\t\"/\n\014ServerStatus\022\016\n\006active\030\001 "
  "\001(\010\022\017\n\007players\030\002 \001(\005B&Z$github.com/MruV-"
  "RP/mruv-pb-go/serverb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_server_2fserver_5fmodel_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_server_2fserver_5fmodel_2eproto_sccs[3] = {
  &scc_info_ServerID_server_2fserver_5fmodel_2eproto.base,
  &scc_info_ServerInfo_server_2fserver_5fmodel_2eproto.base,
  &scc_info_ServerStatus_server_2fserver_5fmodel_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_server_2fserver_5fmodel_2eproto_once;
static bool descriptor_table_server_2fserver_5fmodel_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_server_2fserver_5fmodel_2eproto = {
  &descriptor_table_server_2fserver_5fmodel_2eproto_initialized, descriptor_table_protodef_server_2fserver_5fmodel_2eproto, "server/server_model.proto", 228,
  &descriptor_table_server_2fserver_5fmodel_2eproto_once, descriptor_table_server_2fserver_5fmodel_2eproto_sccs, descriptor_table_server_2fserver_5fmodel_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_server_2fserver_5fmodel_2eproto::offsets,
  file_level_metadata_server_2fserver_5fmodel_2eproto, 3, file_level_enum_descriptors_server_2fserver_5fmodel_2eproto, file_level_service_descriptors_server_2fserver_5fmodel_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_server_2fserver_5fmodel_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_server_2fserver_5fmodel_2eproto), true);
namespace mruv {

// ===================================================================

void ServerID::InitAsDefaultInstance() {
}
class ServerID::_Internal {
 public:
};

ServerID::ServerID()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.ServerID)
}
ServerID::ServerID(const ServerID& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:mruv.ServerID)
}

void ServerID::SharedCtor() {
  id_ = PROTOBUF_LONGLONG(0);
}

ServerID::~ServerID() {
  // @@protoc_insertion_point(destructor:mruv.ServerID)
  SharedDtor();
}

void ServerID::SharedDtor() {
}

void ServerID::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerID& ServerID::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerID_server_2fserver_5fmodel_2eproto.base);
  return *internal_default_instance();
}


void ServerID::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.ServerID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear();
}

const char* ServerID::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ServerID::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.ServerID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.ServerID)
  return target;
}

size_t ServerID::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.ServerID)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerID::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.ServerID)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerID* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServerID>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.ServerID)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.ServerID)
    MergeFrom(*source);
  }
}

void ServerID::MergeFrom(const ServerID& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.ServerID)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    _internal_set_id(from._internal_id());
  }
}

void ServerID::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.ServerID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerID::CopyFrom(const ServerID& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.ServerID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerID::IsInitialized() const {
  return true;
}

void ServerID::InternalSwap(ServerID* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerID::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ServerInfo::InitAsDefaultInstance() {
}
class ServerInfo::_Internal {
 public:
};

ServerInfo::ServerInfo()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.ServerInfo)
}
ServerInfo::ServerInfo(const ServerInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  host_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_host().empty()) {
    host_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  port_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_port().empty()) {
    port_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.port_);
  }
  platform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_platform().empty()) {
    platform_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.platform_);
  }
  // @@protoc_insertion_point(copy_constructor:mruv.ServerInfo)
}

void ServerInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ServerInfo_server_2fserver_5fmodel_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  host_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  port_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  platform_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ServerInfo::~ServerInfo() {
  // @@protoc_insertion_point(destructor:mruv.ServerInfo)
  SharedDtor();
}

void ServerInfo::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  host_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  port_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  platform_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ServerInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerInfo& ServerInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerInfo_server_2fserver_5fmodel_2eproto.base);
  return *internal_default_instance();
}


void ServerInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.ServerInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  host_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  port_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  platform_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

const char* ServerInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mruv.ServerInfo.name"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string host = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_host();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mruv.ServerInfo.host"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string port = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_port();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mruv.ServerInfo.port"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string platform = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_platform();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "mruv.ServerInfo.platform"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ServerInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.ServerInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.ServerInfo.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string host = 2;
  if (this->host().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_host().data(), static_cast<int>(this->_internal_host().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.ServerInfo.host");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_host(), target);
  }

  // string port = 3;
  if (this->port().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_port().data(), static_cast<int>(this->_internal_port().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.ServerInfo.port");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_port(), target);
  }

  // string platform = 4;
  if (this->platform().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_platform().data(), static_cast<int>(this->_internal_platform().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.ServerInfo.platform");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_platform(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.ServerInfo)
  return target;
}

size_t ServerInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.ServerInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string host = 2;
  if (this->host().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_host());
  }

  // string port = 3;
  if (this->port().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_port());
  }

  // string platform = 4;
  if (this->platform().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_platform());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.ServerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServerInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.ServerInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.ServerInfo)
    MergeFrom(*source);
  }
}

void ServerInfo::MergeFrom(const ServerInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.ServerInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.host().size() > 0) {

    host_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.host_);
  }
  if (from.port().size() > 0) {

    port_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.port_);
  }
  if (from.platform().size() > 0) {

    platform_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.platform_);
  }
}

void ServerInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.ServerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerInfo::CopyFrom(const ServerInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.ServerInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerInfo::IsInitialized() const {
  return true;
}

void ServerInfo::InternalSwap(ServerInfo* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  host_.Swap(&other->host_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  port_.Swap(&other->port_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  platform_.Swap(&other->platform_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ServerStatus::InitAsDefaultInstance() {
}
class ServerStatus::_Internal {
 public:
};

ServerStatus::ServerStatus()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.ServerStatus)
}
ServerStatus::ServerStatus(const ServerStatus& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&active_, &from.active_,
    static_cast<size_t>(reinterpret_cast<char*>(&players_) -
    reinterpret_cast<char*>(&active_)) + sizeof(players_));
  // @@protoc_insertion_point(copy_constructor:mruv.ServerStatus)
}

void ServerStatus::SharedCtor() {
  ::memset(&active_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&players_) -
      reinterpret_cast<char*>(&active_)) + sizeof(players_));
}

ServerStatus::~ServerStatus() {
  // @@protoc_insertion_point(destructor:mruv.ServerStatus)
  SharedDtor();
}

void ServerStatus::SharedDtor() {
}

void ServerStatus::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerStatus& ServerStatus::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerStatus_server_2fserver_5fmodel_2eproto.base);
  return *internal_default_instance();
}


void ServerStatus::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.ServerStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&active_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&players_) -
      reinterpret_cast<char*>(&active_)) + sizeof(players_));
  _internal_metadata_.Clear();
}

const char* ServerStatus::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool active = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          active_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 players = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          players_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ServerStatus::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.ServerStatus)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool active = 1;
  if (this->active() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_active(), target);
  }

  // int32 players = 2;
  if (this->players() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(2, this->_internal_players(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.ServerStatus)
  return target;
}

size_t ServerStatus::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.ServerStatus)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool active = 1;
  if (this->active() != 0) {
    total_size += 1 + 1;
  }

  // int32 players = 2;
  if (this->players() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_players());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerStatus::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.ServerStatus)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerStatus* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ServerStatus>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.ServerStatus)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.ServerStatus)
    MergeFrom(*source);
  }
}

void ServerStatus::MergeFrom(const ServerStatus& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.ServerStatus)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.active() != 0) {
    _internal_set_active(from._internal_active());
  }
  if (from.players() != 0) {
    _internal_set_players(from._internal_players());
  }
}

void ServerStatus::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.ServerStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerStatus::CopyFrom(const ServerStatus& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.ServerStatus)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerStatus::IsInitialized() const {
  return true;
}

void ServerStatus::InternalSwap(ServerStatus* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(active_, other->active_);
  swap(players_, other->players_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ServerStatus::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mruv::ServerID* Arena::CreateMaybeMessage< ::mruv::ServerID >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::ServerID >(arena);
}
template<> PROTOBUF_NOINLINE ::mruv::ServerInfo* Arena::CreateMaybeMessage< ::mruv::ServerInfo >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::ServerInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::mruv::ServerStatus* Arena::CreateMaybeMessage< ::mruv::ServerStatus >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::ServerStatus >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
