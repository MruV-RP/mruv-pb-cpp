// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: common/spatial.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_common_2fspatial_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_common_2fspatial_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_common_2fspatial_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_common_2fspatial_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_common_2fspatial_2eproto;
namespace mruv {
namespace common {
class Position;
class PositionDefaultTypeInternal;
extern PositionDefaultTypeInternal _Position_default_instance_;
class Rotation;
class RotationDefaultTypeInternal;
extern RotationDefaultTypeInternal _Rotation_default_instance_;
}  // namespace common
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> ::mruv::common::Position* Arena::CreateMaybeMessage<::mruv::common::Position>(Arena*);
template<> ::mruv::common::Rotation* Arena::CreateMaybeMessage<::mruv::common::Rotation>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mruv {
namespace common {

// ===================================================================

class Position PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.common.Position) */ {
 public:
  inline Position() : Position(nullptr) {}
  virtual ~Position();

  Position(const Position& from);
  Position(Position&& from) noexcept
    : Position() {
    *this = ::std::move(from);
  }

  inline Position& operator=(const Position& from) {
    CopyFrom(from);
    return *this;
  }
  inline Position& operator=(Position&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Position& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Position* internal_default_instance() {
    return reinterpret_cast<const Position*>(
               &_Position_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Position& a, Position& b) {
    a.Swap(&b);
  }
  inline void Swap(Position* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Position* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Position* New() const final {
    return CreateMaybeMessage<Position>(nullptr);
  }

  Position* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Position>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Position& from);
  void MergeFrom(const Position& from);
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
  void InternalSwap(Position* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.common.Position";
  }
  protected:
  explicit Position(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fspatial_2eproto);
    return ::descriptor_table_common_2fspatial_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // @@protoc_insertion_point(class_scope:mruv.common.Position)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double x_;
  double y_;
  double z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fspatial_2eproto;
};
// -------------------------------------------------------------------

class Rotation PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.common.Rotation) */ {
 public:
  inline Rotation() : Rotation(nullptr) {}
  virtual ~Rotation();

  Rotation(const Rotation& from);
  Rotation(Rotation&& from) noexcept
    : Rotation() {
    *this = ::std::move(from);
  }

  inline Rotation& operator=(const Rotation& from) {
    CopyFrom(from);
    return *this;
  }
  inline Rotation& operator=(Rotation&& from) noexcept {
    if (GetArena() == from.GetArena()) {
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
  static const Rotation& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Rotation* internal_default_instance() {
    return reinterpret_cast<const Rotation*>(
               &_Rotation_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Rotation& a, Rotation& b) {
    a.Swap(&b);
  }
  inline void Swap(Rotation* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Rotation* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Rotation* New() const final {
    return CreateMaybeMessage<Rotation>(nullptr);
  }

  Rotation* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Rotation>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Rotation& from);
  void MergeFrom(const Rotation& from);
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
  void InternalSwap(Rotation* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.common.Rotation";
  }
  protected:
  explicit Rotation(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_common_2fspatial_2eproto);
    return ::descriptor_table_common_2fspatial_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRxFieldNumber = 1,
    kRyFieldNumber = 2,
    kRzFieldNumber = 3,
  };
  // double rx = 1;
  void clear_rx();
  double rx() const;
  void set_rx(double value);
  private:
  double _internal_rx() const;
  void _internal_set_rx(double value);
  public:

  // double ry = 2;
  void clear_ry();
  double ry() const;
  void set_ry(double value);
  private:
  double _internal_ry() const;
  void _internal_set_ry(double value);
  public:

  // double rz = 3;
  void clear_rz();
  double rz() const;
  void set_rz(double value);
  private:
  double _internal_rz() const;
  void _internal_set_rz(double value);
  public:

  // @@protoc_insertion_point(class_scope:mruv.common.Rotation)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  double rx_;
  double ry_;
  double rz_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_common_2fspatial_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Position

// double x = 1;
inline void Position::clear_x() {
  x_ = 0;
}
inline double Position::_internal_x() const {
  return x_;
}
inline double Position::x() const {
  // @@protoc_insertion_point(field_get:mruv.common.Position.x)
  return _internal_x();
}
inline void Position::_internal_set_x(double value) {
  
  x_ = value;
}
inline void Position::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:mruv.common.Position.x)
}

// double y = 2;
inline void Position::clear_y() {
  y_ = 0;
}
inline double Position::_internal_y() const {
  return y_;
}
inline double Position::y() const {
  // @@protoc_insertion_point(field_get:mruv.common.Position.y)
  return _internal_y();
}
inline void Position::_internal_set_y(double value) {
  
  y_ = value;
}
inline void Position::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:mruv.common.Position.y)
}

// double z = 3;
inline void Position::clear_z() {
  z_ = 0;
}
inline double Position::_internal_z() const {
  return z_;
}
inline double Position::z() const {
  // @@protoc_insertion_point(field_get:mruv.common.Position.z)
  return _internal_z();
}
inline void Position::_internal_set_z(double value) {
  
  z_ = value;
}
inline void Position::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:mruv.common.Position.z)
}

// -------------------------------------------------------------------

// Rotation

// double rx = 1;
inline void Rotation::clear_rx() {
  rx_ = 0;
}
inline double Rotation::_internal_rx() const {
  return rx_;
}
inline double Rotation::rx() const {
  // @@protoc_insertion_point(field_get:mruv.common.Rotation.rx)
  return _internal_rx();
}
inline void Rotation::_internal_set_rx(double value) {
  
  rx_ = value;
}
inline void Rotation::set_rx(double value) {
  _internal_set_rx(value);
  // @@protoc_insertion_point(field_set:mruv.common.Rotation.rx)
}

// double ry = 2;
inline void Rotation::clear_ry() {
  ry_ = 0;
}
inline double Rotation::_internal_ry() const {
  return ry_;
}
inline double Rotation::ry() const {
  // @@protoc_insertion_point(field_get:mruv.common.Rotation.ry)
  return _internal_ry();
}
inline void Rotation::_internal_set_ry(double value) {
  
  ry_ = value;
}
inline void Rotation::set_ry(double value) {
  _internal_set_ry(value);
  // @@protoc_insertion_point(field_set:mruv.common.Rotation.ry)
}

// double rz = 3;
inline void Rotation::clear_rz() {
  rz_ = 0;
}
inline double Rotation::_internal_rz() const {
  return rz_;
}
inline double Rotation::rz() const {
  // @@protoc_insertion_point(field_get:mruv.common.Rotation.rz)
  return _internal_rz();
}
inline void Rotation::_internal_set_rz(double value) {
  
  rz_ = value;
}
inline void Rotation::set_rz(double value) {
  _internal_set_rz(value);
  // @@protoc_insertion_point(field_set:mruv.common.Rotation.rz)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace mruv

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_common_2fspatial_2eproto
