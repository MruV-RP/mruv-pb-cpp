// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: characters/characters_model.proto

#include "characters/characters_model.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_common_2fspatial_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Position_common_2fspatial_2eproto;
namespace mruv {
class CharacterDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Character> _instance;
} _Character_default_instance_;
class CharacterIDDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CharacterID> _instance;
} _CharacterID_default_instance_;
}  // namespace mruv
static void InitDefaultsscc_info_Character_characters_2fcharacters_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_Character_default_instance_;
    new (ptr) ::mruv::Character();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::Character::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Character_characters_2fcharacters_5fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsscc_info_Character_characters_2fcharacters_5fmodel_2eproto}, {
      &scc_info_Position_common_2fspatial_2eproto.base,}};

static void InitDefaultsscc_info_CharacterID_characters_2fcharacters_5fmodel_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::mruv::_CharacterID_default_instance_;
    new (ptr) ::mruv::CharacterID();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::mruv::CharacterID::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CharacterID_characters_2fcharacters_5fmodel_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_CharacterID_characters_2fcharacters_5fmodel_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_characters_2fcharacters_5fmodel_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_characters_2fcharacters_5fmodel_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_characters_2fcharacters_5fmodel_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_characters_2fcharacters_5fmodel_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::Character, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mruv::Character, id_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, owner_id_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, first_name_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, second_name_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, age_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, sex_),
  PROTOBUF_FIELD_OFFSET(::mruv::Character, position_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::mruv::CharacterID, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::mruv::CharacterID, id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::mruv::Character)},
  { 12, -1, sizeof(::mruv::CharacterID)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_Character_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::mruv::_CharacterID_default_instance_),
};

const char descriptor_table_protodef_characters_2fcharacters_5fmodel_2eproto[] =
  "\n!characters/characters_model.proto\022\004mru"
  "v\032\024common/spatial.proto\"\216\001\n\tCharacter\022\n\n"
  "\002id\030\001 \001(\r\022\020\n\010owner_id\030\002 \001(\r\022\022\n\nfirst_nam"
  "e\030\003 \001(\t\022\023\n\013second_name\030\004 \001(\t\022\013\n\003age\030\005 \001("
  "\r\022\013\n\003sex\030\006 \001(\r\022 \n\010position\030\007 \001(\0132\016.mruv."
  "Position\"\031\n\013CharacterID\022\n\n\002id\030\001 \001(\r*^\n\tD"
  "eathType\022\023\n\017DEATH_TYPE_NONE\020\000\022\021\n\rDEATH_T"
  "YPE_BW\020\001\022\026\n\022DEATH_TYPE_BW_KILL\020\002\022\021\n\rDEAT"
  "H_TYPE_CK\020\003B*Z(github.com/MruV-RP/mruv-p"
  "b-go/charactersb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_characters_2fcharacters_5fmodel_2eproto_deps[1] = {
  &::descriptor_table_common_2fspatial_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_characters_2fcharacters_5fmodel_2eproto_sccs[2] = {
  &scc_info_Character_characters_2fcharacters_5fmodel_2eproto.base,
  &scc_info_CharacterID_characters_2fcharacters_5fmodel_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_characters_2fcharacters_5fmodel_2eproto_once;
static bool descriptor_table_characters_2fcharacters_5fmodel_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_characters_2fcharacters_5fmodel_2eproto = {
  &descriptor_table_characters_2fcharacters_5fmodel_2eproto_initialized, descriptor_table_protodef_characters_2fcharacters_5fmodel_2eproto, "characters/characters_model.proto", 383,
  &descriptor_table_characters_2fcharacters_5fmodel_2eproto_once, descriptor_table_characters_2fcharacters_5fmodel_2eproto_sccs, descriptor_table_characters_2fcharacters_5fmodel_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_characters_2fcharacters_5fmodel_2eproto::offsets,
  file_level_metadata_characters_2fcharacters_5fmodel_2eproto, 2, file_level_enum_descriptors_characters_2fcharacters_5fmodel_2eproto, file_level_service_descriptors_characters_2fcharacters_5fmodel_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_characters_2fcharacters_5fmodel_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_characters_2fcharacters_5fmodel_2eproto), true);
namespace mruv {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DeathType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_characters_2fcharacters_5fmodel_2eproto);
  return file_level_enum_descriptors_characters_2fcharacters_5fmodel_2eproto[0];
}
bool DeathType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Character::InitAsDefaultInstance() {
  ::mruv::_Character_default_instance_._instance.get_mutable()->position_ = const_cast< ::mruv::Position*>(
      ::mruv::Position::internal_default_instance());
}
class Character::HasBitSetters {
 public:
  static const ::mruv::Position& position(const Character* msg);
};

const ::mruv::Position&
Character::HasBitSetters::position(const Character* msg) {
  return *msg->position_;
}
void Character::clear_position() {
  if (GetArenaNoVirtual() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Character::kIdFieldNumber;
const int Character::kOwnerIdFieldNumber;
const int Character::kFirstNameFieldNumber;
const int Character::kSecondNameFieldNumber;
const int Character::kAgeFieldNumber;
const int Character::kSexFieldNumber;
const int Character::kPositionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Character::Character()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.Character)
}
Character::Character(const Character& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  first_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.first_name().size() > 0) {
    first_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.first_name_);
  }
  second_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from.second_name().size() > 0) {
    second_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.second_name_);
  }
  if (from.has_position()) {
    position_ = new ::mruv::Position(*from.position_);
  } else {
    position_ = nullptr;
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&sex_) -
    reinterpret_cast<char*>(&id_)) + sizeof(sex_));
  // @@protoc_insertion_point(copy_constructor:mruv.Character)
}

void Character::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Character_characters_2fcharacters_5fmodel_2eproto.base);
  first_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  second_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&position_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&position_)) + sizeof(sex_));
}

Character::~Character() {
  // @@protoc_insertion_point(destructor:mruv.Character)
  SharedDtor();
}

void Character::SharedDtor() {
  first_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  second_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete position_;
}

void Character::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Character& Character::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Character_characters_2fcharacters_5fmodel_2eproto.base);
  return *internal_default_instance();
}


void Character::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.Character)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  first_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  second_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == nullptr && position_ != nullptr) {
    delete position_;
  }
  position_ = nullptr;
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&id_)) + sizeof(sex_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Character::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 owner_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          owner_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string first_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_first_name(), ptr, ctx, "mruv.Character.first_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string second_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8(mutable_second_name(), ptr, ctx, "mruv.Character.second_name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 age = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          age_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 sex = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          sex_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .mruv.Position position = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(mutable_position(), ptr);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Character::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:mruv.Character)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 owner_id = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &owner_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string first_name = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (26 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_first_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->first_name().data(), static_cast<int>(this->first_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "mruv.Character.first_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string second_name = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (34 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadString(
                input, this->mutable_second_name()));
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
            this->second_name().data(), static_cast<int>(this->second_name().length()),
            ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE,
            "mruv.Character.second_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 age = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &age_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint32 sex = 6;
      case 6: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (48 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &sex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .mruv.Position position = 7;
      case 7: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (58 & 0xFF)) {
          DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadMessage(
               input, mutable_position()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mruv.Character)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mruv.Character)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Character::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mruv.Character)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  // uint32 owner_id = 2;
  if (this->owner_id() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(2, this->owner_id(), output);
  }

  // string first_name = 3;
  if (this->first_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->first_name().data(), static_cast<int>(this->first_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.Character.first_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->first_name(), output);
  }

  // string second_name = 4;
  if (this->second_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->second_name().data(), static_cast<int>(this->second_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.Character.second_name");
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->second_name(), output);
  }

  // uint32 age = 5;
  if (this->age() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(5, this->age(), output);
  }

  // uint32 sex = 6;
  if (this->sex() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(6, this->sex(), output);
  }

  // .mruv.Position position = 7;
  if (this->has_position()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, HasBitSetters::position(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mruv.Character)
}

::PROTOBUF_NAMESPACE_ID::uint8* Character::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.Character)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  // uint32 owner_id = 2;
  if (this->owner_id() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->owner_id(), target);
  }

  // string first_name = 3;
  if (this->first_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->first_name().data(), static_cast<int>(this->first_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.Character.first_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        3, this->first_name(), target);
  }

  // string second_name = 4;
  if (this->second_name().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->second_name().data(), static_cast<int>(this->second_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "mruv.Character.second_name");
    target =
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteStringToArray(
        4, this->second_name(), target);
  }

  // uint32 age = 5;
  if (this->age() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->age(), target);
  }

  // uint32 sex = 6;
  if (this->sex() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(6, this->sex(), target);
  }

  // .mruv.Position position = 7;
  if (this->has_position()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, HasBitSetters::position(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.Character)
  return target;
}

size_t Character::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.Character)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string first_name = 3;
  if (this->first_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->first_name());
  }

  // string second_name = 4;
  if (this->second_name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->second_name());
  }

  // .mruv.Position position = 7;
  if (this->has_position()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *position_);
  }

  // uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  // uint32 owner_id = 2;
  if (this->owner_id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->owner_id());
  }

  // uint32 age = 5;
  if (this->age() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->age());
  }

  // uint32 sex = 6;
  if (this->sex() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->sex());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Character::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.Character)
  GOOGLE_DCHECK_NE(&from, this);
  const Character* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Character>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.Character)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.Character)
    MergeFrom(*source);
  }
}

void Character::MergeFrom(const Character& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.Character)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.first_name().size() > 0) {

    first_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.first_name_);
  }
  if (from.second_name().size() > 0) {

    second_name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.second_name_);
  }
  if (from.has_position()) {
    mutable_position()->::mruv::Position::MergeFrom(from.position());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.owner_id() != 0) {
    set_owner_id(from.owner_id());
  }
  if (from.age() != 0) {
    set_age(from.age());
  }
  if (from.sex() != 0) {
    set_sex(from.sex());
  }
}

void Character::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.Character)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Character::CopyFrom(const Character& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.Character)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Character::IsInitialized() const {
  return true;
}

void Character::Swap(Character* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Character::InternalSwap(Character* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  first_name_.Swap(&other->first_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  second_name_.Swap(&other->second_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(position_, other->position_);
  swap(id_, other->id_);
  swap(owner_id_, other->owner_id_);
  swap(age_, other->age_);
  swap(sex_, other->sex_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Character::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void CharacterID::InitAsDefaultInstance() {
}
class CharacterID::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CharacterID::kIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CharacterID::CharacterID()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:mruv.CharacterID)
}
CharacterID::CharacterID(const CharacterID& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:mruv.CharacterID)
}

void CharacterID::SharedCtor() {
  id_ = 0u;
}

CharacterID::~CharacterID() {
  // @@protoc_insertion_point(destructor:mruv.CharacterID)
  SharedDtor();
}

void CharacterID::SharedDtor() {
}

void CharacterID::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CharacterID& CharacterID::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CharacterID_characters_2fcharacters_5fmodel_2eproto.base);
  return *internal_default_instance();
}


void CharacterID::Clear() {
// @@protoc_insertion_point(message_clear_start:mruv.CharacterID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  id_ = 0u;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* CharacterID::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint32 id = 1;
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool CharacterID::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:mruv.CharacterID)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // uint32 id = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {

          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   ::PROTOBUF_NAMESPACE_ID::uint32, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:mruv.CharacterID)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:mruv.CharacterID)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void CharacterID::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:mruv.CharacterID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32(1, this->id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:mruv.CharacterID)
}

::PROTOBUF_NAMESPACE_ID::uint8* CharacterID::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:mruv.CharacterID)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:mruv.CharacterID)
  return target;
}

size_t CharacterID::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:mruv.CharacterID)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CharacterID::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:mruv.CharacterID)
  GOOGLE_DCHECK_NE(&from, this);
  const CharacterID* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CharacterID>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:mruv.CharacterID)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:mruv.CharacterID)
    MergeFrom(*source);
  }
}

void CharacterID::MergeFrom(const CharacterID& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:mruv.CharacterID)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.id() != 0) {
    set_id(from.id());
  }
}

void CharacterID::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:mruv.CharacterID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CharacterID::CopyFrom(const CharacterID& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:mruv.CharacterID)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CharacterID::IsInitialized() const {
  return true;
}

void CharacterID::Swap(CharacterID* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CharacterID::InternalSwap(CharacterID* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CharacterID::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::mruv::Character* Arena::CreateMaybeMessage< ::mruv::Character >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::Character >(arena);
}
template<> PROTOBUF_NOINLINE ::mruv::CharacterID* Arena::CreateMaybeMessage< ::mruv::CharacterID >(Arena* arena) {
  return Arena::CreateInternal< ::mruv::CharacterID >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
