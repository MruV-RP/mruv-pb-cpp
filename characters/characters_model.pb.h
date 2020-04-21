// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: characters/characters_model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_characters_2fcharacters_5fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_characters_2fcharacters_5fmodel_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "common/spatial.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_characters_2fcharacters_5fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_characters_2fcharacters_5fmodel_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_characters_2fcharacters_5fmodel_2eproto;
namespace mruv {
class Character;
class CharacterDefaultTypeInternal;
extern CharacterDefaultTypeInternal _Character_default_instance_;
class CharacterID;
class CharacterIDDefaultTypeInternal;
extern CharacterIDDefaultTypeInternal _CharacterID_default_instance_;
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> ::mruv::Character* Arena::CreateMaybeMessage<::mruv::Character>(Arena*);
template<> ::mruv::CharacterID* Arena::CreateMaybeMessage<::mruv::CharacterID>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mruv {

enum DeathType : int {
  DEATH_TYPE_NONE = 0,
  DEATH_TYPE_BW = 1,
  DEATH_TYPE_BW_KILL = 2,
  DEATH_TYPE_CK = 3,
  DeathType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  DeathType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool DeathType_IsValid(int value);
constexpr DeathType DeathType_MIN = DEATH_TYPE_NONE;
constexpr DeathType DeathType_MAX = DEATH_TYPE_CK;
constexpr int DeathType_ARRAYSIZE = DeathType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DeathType_descriptor();
template<typename T>
inline const std::string& DeathType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeathType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeathType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DeathType_descriptor(), enum_t_value);
}
inline bool DeathType_Parse(
    const std::string& name, DeathType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DeathType>(
    DeathType_descriptor(), name, value);
}
// ===================================================================

class Character :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.Character) */ {
 public:
  Character();
  virtual ~Character();

  Character(const Character& from);
  Character(Character&& from) noexcept
    : Character() {
    *this = ::std::move(from);
  }

  inline Character& operator=(const Character& from) {
    CopyFrom(from);
    return *this;
  }
  inline Character& operator=(Character&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Character& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Character* internal_default_instance() {
    return reinterpret_cast<const Character*>(
               &_Character_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Character& a, Character& b) {
    a.Swap(&b);
  }
  inline void Swap(Character* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Character* New() const final {
    return CreateMaybeMessage<Character>(nullptr);
  }

  Character* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Character>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Character& from);
  void MergeFrom(const Character& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Character* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.Character";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_characters_2fcharacters_5fmodel_2eproto);
    return ::descriptor_table_characters_2fcharacters_5fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstNameFieldNumber = 3,
    kSecondNameFieldNumber = 4,
    kPositionFieldNumber = 7,
    kIdFieldNumber = 1,
    kOwnerIdFieldNumber = 2,
    kAgeFieldNumber = 5,
    kSexFieldNumber = 6,
  };
  // string first_name = 3;
  void clear_first_name();
  const std::string& first_name() const;
  void set_first_name(const std::string& value);
  void set_first_name(std::string&& value);
  void set_first_name(const char* value);
  void set_first_name(const char* value, size_t size);
  std::string* mutable_first_name();
  std::string* release_first_name();
  void set_allocated_first_name(std::string* first_name);
  private:
  const std::string& _internal_first_name() const;
  void _internal_set_first_name(const std::string& value);
  std::string* _internal_mutable_first_name();
  public:

  // string second_name = 4;
  void clear_second_name();
  const std::string& second_name() const;
  void set_second_name(const std::string& value);
  void set_second_name(std::string&& value);
  void set_second_name(const char* value);
  void set_second_name(const char* value, size_t size);
  std::string* mutable_second_name();
  std::string* release_second_name();
  void set_allocated_second_name(std::string* second_name);
  private:
  const std::string& _internal_second_name() const;
  void _internal_set_second_name(const std::string& value);
  std::string* _internal_mutable_second_name();
  public:

  // .mruv.Position position = 7;
  bool has_position() const;
  private:
  bool _internal_has_position() const;
  public:
  void clear_position();
  const ::mruv::Position& position() const;
  ::mruv::Position* release_position();
  ::mruv::Position* mutable_position();
  void set_allocated_position(::mruv::Position* position);
  private:
  const ::mruv::Position& _internal_position() const;
  ::mruv::Position* _internal_mutable_position();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 owner_id = 2;
  void clear_owner_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 owner_id() const;
  void set_owner_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_owner_id() const;
  void _internal_set_owner_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 age = 5;
  void clear_age();
  ::PROTOBUF_NAMESPACE_ID::uint32 age() const;
  void set_age(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_age() const;
  void _internal_set_age(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 sex = 6;
  void clear_sex();
  ::PROTOBUF_NAMESPACE_ID::uint32 sex() const;
  void set_sex(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_sex() const;
  void _internal_set_sex(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mruv.Character)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr first_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr second_name_;
  ::mruv::Position* position_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 owner_id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 age_;
  ::PROTOBUF_NAMESPACE_ID::uint32 sex_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_characters_2fcharacters_5fmodel_2eproto;
};
// -------------------------------------------------------------------

class CharacterID :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.CharacterID) */ {
 public:
  CharacterID();
  virtual ~CharacterID();

  CharacterID(const CharacterID& from);
  CharacterID(CharacterID&& from) noexcept
    : CharacterID() {
    *this = ::std::move(from);
  }

  inline CharacterID& operator=(const CharacterID& from) {
    CopyFrom(from);
    return *this;
  }
  inline CharacterID& operator=(CharacterID&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CharacterID& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const CharacterID* internal_default_instance() {
    return reinterpret_cast<const CharacterID*>(
               &_CharacterID_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CharacterID& a, CharacterID& b) {
    a.Swap(&b);
  }
  inline void Swap(CharacterID* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CharacterID* New() const final {
    return CreateMaybeMessage<CharacterID>(nullptr);
  }

  CharacterID* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CharacterID>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CharacterID& from);
  void MergeFrom(const CharacterID& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CharacterID* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.CharacterID";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_characters_2fcharacters_5fmodel_2eproto);
    return ::descriptor_table_characters_2fcharacters_5fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mruv.CharacterID)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_characters_2fcharacters_5fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Character

// uint32 id = 1;
inline void Character::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::id() const {
  // @@protoc_insertion_point(field_get:mruv.Character.id)
  return _internal_id();
}
inline void Character::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Character::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:mruv.Character.id)
}

// uint32 owner_id = 2;
inline void Character::clear_owner_id() {
  owner_id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::_internal_owner_id() const {
  return owner_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::owner_id() const {
  // @@protoc_insertion_point(field_get:mruv.Character.owner_id)
  return _internal_owner_id();
}
inline void Character::_internal_set_owner_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  owner_id_ = value;
}
inline void Character::set_owner_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_owner_id(value);
  // @@protoc_insertion_point(field_set:mruv.Character.owner_id)
}

// string first_name = 3;
inline void Character::clear_first_name() {
  first_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Character::first_name() const {
  // @@protoc_insertion_point(field_get:mruv.Character.first_name)
  return _internal_first_name();
}
inline void Character::set_first_name(const std::string& value) {
  _internal_set_first_name(value);
  // @@protoc_insertion_point(field_set:mruv.Character.first_name)
}
inline std::string* Character::mutable_first_name() {
  // @@protoc_insertion_point(field_mutable:mruv.Character.first_name)
  return _internal_mutable_first_name();
}
inline const std::string& Character::_internal_first_name() const {
  return first_name_.GetNoArena();
}
inline void Character::_internal_set_first_name(const std::string& value) {
  
  first_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Character::set_first_name(std::string&& value) {
  
  first_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mruv.Character.first_name)
}
inline void Character::set_first_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  first_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mruv.Character.first_name)
}
inline void Character::set_first_name(const char* value, size_t size) {
  
  first_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mruv.Character.first_name)
}
inline std::string* Character::_internal_mutable_first_name() {
  
  return first_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Character::release_first_name() {
  // @@protoc_insertion_point(field_release:mruv.Character.first_name)
  
  return first_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Character::set_allocated_first_name(std::string* first_name) {
  if (first_name != nullptr) {
    
  } else {
    
  }
  first_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), first_name);
  // @@protoc_insertion_point(field_set_allocated:mruv.Character.first_name)
}

// string second_name = 4;
inline void Character::clear_second_name() {
  second_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Character::second_name() const {
  // @@protoc_insertion_point(field_get:mruv.Character.second_name)
  return _internal_second_name();
}
inline void Character::set_second_name(const std::string& value) {
  _internal_set_second_name(value);
  // @@protoc_insertion_point(field_set:mruv.Character.second_name)
}
inline std::string* Character::mutable_second_name() {
  // @@protoc_insertion_point(field_mutable:mruv.Character.second_name)
  return _internal_mutable_second_name();
}
inline const std::string& Character::_internal_second_name() const {
  return second_name_.GetNoArena();
}
inline void Character::_internal_set_second_name(const std::string& value) {
  
  second_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Character::set_second_name(std::string&& value) {
  
  second_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mruv.Character.second_name)
}
inline void Character::set_second_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  second_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mruv.Character.second_name)
}
inline void Character::set_second_name(const char* value, size_t size) {
  
  second_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mruv.Character.second_name)
}
inline std::string* Character::_internal_mutable_second_name() {
  
  return second_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Character::release_second_name() {
  // @@protoc_insertion_point(field_release:mruv.Character.second_name)
  
  return second_name_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Character::set_allocated_second_name(std::string* second_name) {
  if (second_name != nullptr) {
    
  } else {
    
  }
  second_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), second_name);
  // @@protoc_insertion_point(field_set_allocated:mruv.Character.second_name)
}

// uint32 age = 5;
inline void Character::clear_age() {
  age_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::_internal_age() const {
  return age_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::age() const {
  // @@protoc_insertion_point(field_get:mruv.Character.age)
  return _internal_age();
}
inline void Character::_internal_set_age(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  age_ = value;
}
inline void Character::set_age(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:mruv.Character.age)
}

// uint32 sex = 6;
inline void Character::clear_sex() {
  sex_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::_internal_sex() const {
  return sex_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Character::sex() const {
  // @@protoc_insertion_point(field_get:mruv.Character.sex)
  return _internal_sex();
}
inline void Character::_internal_set_sex(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  sex_ = value;
}
inline void Character::set_sex(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_sex(value);
  // @@protoc_insertion_point(field_set:mruv.Character.sex)
}

// .mruv.Position position = 7;
inline bool Character::_internal_has_position() const {
  return this != internal_default_instance() && position_ != nullptr;
}
inline bool Character::has_position() const {
  return _internal_has_position();
}
inline const ::mruv::Position& Character::_internal_position() const {
  const ::mruv::Position* p = position_;
  return p != nullptr ? *p : *reinterpret_cast<const ::mruv::Position*>(
      &::mruv::_Position_default_instance_);
}
inline const ::mruv::Position& Character::position() const {
  // @@protoc_insertion_point(field_get:mruv.Character.position)
  return _internal_position();
}
inline ::mruv::Position* Character::release_position() {
  // @@protoc_insertion_point(field_release:mruv.Character.position)
  
  ::mruv::Position* temp = position_;
  position_ = nullptr;
  return temp;
}
inline ::mruv::Position* Character::_internal_mutable_position() {
  
  if (position_ == nullptr) {
    auto* p = CreateMaybeMessage<::mruv::Position>(GetArenaNoVirtual());
    position_ = p;
  }
  return position_;
}
inline ::mruv::Position* Character::mutable_position() {
  // @@protoc_insertion_point(field_mutable:mruv.Character.position)
  return _internal_mutable_position();
}
inline void Character::set_allocated_position(::mruv::Position* position) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(position_);
  }
  if (position) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      position = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, position, submessage_arena);
    }
    
  } else {
    
  }
  position_ = position;
  // @@protoc_insertion_point(field_set_allocated:mruv.Character.position)
}

// -------------------------------------------------------------------

// CharacterID

// uint32 id = 1;
inline void CharacterID::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacterID::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 CharacterID::id() const {
  // @@protoc_insertion_point(field_get:mruv.CharacterID.id)
  return _internal_id();
}
inline void CharacterID::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void CharacterID::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:mruv.CharacterID.id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mruv

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::mruv::DeathType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::mruv::DeathType>() {
  return ::mruv::DeathType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_characters_2fcharacters_5fmodel_2eproto
