// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: accounts/accounts_model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_accounts_2faccounts_5fmodel_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_accounts_2faccounts_5fmodel_2eproto

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_accounts_2faccounts_5fmodel_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_accounts_2faccounts_5fmodel_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_accounts_2faccounts_5fmodel_2eproto;
namespace mruv {
class Account;
class AccountDefaultTypeInternal;
extern AccountDefaultTypeInternal _Account_default_instance_;
class AccountID;
class AccountIDDefaultTypeInternal;
extern AccountIDDefaultTypeInternal _AccountID_default_instance_;
}  // namespace mruv
PROTOBUF_NAMESPACE_OPEN
template<> ::mruv::Account* Arena::CreateMaybeMessage<::mruv::Account>(Arena*);
template<> ::mruv::AccountID* Arena::CreateMaybeMessage<::mruv::AccountID>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace mruv {

// ===================================================================

class AccountID :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.AccountID) */ {
 public:
  AccountID();
  virtual ~AccountID();

  AccountID(const AccountID& from);
  AccountID(AccountID&& from) noexcept
    : AccountID() {
    *this = ::std::move(from);
  }

  inline AccountID& operator=(const AccountID& from) {
    CopyFrom(from);
    return *this;
  }
  inline AccountID& operator=(AccountID&& from) noexcept {
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
  static const AccountID& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const AccountID* internal_default_instance() {
    return reinterpret_cast<const AccountID*>(
               &_AccountID_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AccountID& a, AccountID& b) {
    a.Swap(&b);
  }
  inline void Swap(AccountID* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline AccountID* New() const final {
    return CreateMaybeMessage<AccountID>(nullptr);
  }

  AccountID* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AccountID>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const AccountID& from);
  void MergeFrom(const AccountID& from);
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
  void InternalSwap(AccountID* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.AccountID";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_accounts_2faccounts_5fmodel_2eproto);
    return ::descriptor_table_accounts_2faccounts_5fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
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

  // @@protoc_insertion_point(class_scope:mruv.AccountID)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_accounts_2faccounts_5fmodel_2eproto;
};
// -------------------------------------------------------------------

class Account :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:mruv.Account) */ {
 public:
  Account();
  virtual ~Account();

  Account(const Account& from);
  Account(Account&& from) noexcept
    : Account() {
    *this = ::std::move(from);
  }

  inline Account& operator=(const Account& from) {
    CopyFrom(from);
    return *this;
  }
  inline Account& operator=(Account&& from) noexcept {
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
  static const Account& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Account* internal_default_instance() {
    return reinterpret_cast<const Account*>(
               &_Account_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Account& a, Account& b) {
    a.Swap(&b);
  }
  inline void Swap(Account* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Account* New() const final {
    return CreateMaybeMessage<Account>(nullptr);
  }

  Account* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Account>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Account& from);
  void MergeFrom(const Account& from);
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
  void InternalSwap(Account* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "mruv.Account";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_accounts_2faccounts_5fmodel_2eproto);
    return ::descriptor_table_accounts_2faccounts_5fmodel_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLoginFieldNumber = 2,
    kNickFieldNumber = 3,
    kEmailFieldNumber = 4,
    kIdFieldNumber = 1,
  };
  // string login = 2;
  void clear_login();
  const std::string& login() const;
  void set_login(const std::string& value);
  void set_login(std::string&& value);
  void set_login(const char* value);
  void set_login(const char* value, size_t size);
  std::string* mutable_login();
  std::string* release_login();
  void set_allocated_login(std::string* login);
  private:
  const std::string& _internal_login() const;
  void _internal_set_login(const std::string& value);
  std::string* _internal_mutable_login();
  public:

  // string nick = 3;
  void clear_nick();
  const std::string& nick() const;
  void set_nick(const std::string& value);
  void set_nick(std::string&& value);
  void set_nick(const char* value);
  void set_nick(const char* value, size_t size);
  std::string* mutable_nick();
  std::string* release_nick();
  void set_allocated_nick(std::string* nick);
  private:
  const std::string& _internal_nick() const;
  void _internal_set_nick(const std::string& value);
  std::string* _internal_mutable_nick();
  public:

  // string email = 4;
  void clear_email();
  const std::string& email() const;
  void set_email(const std::string& value);
  void set_email(std::string&& value);
  void set_email(const char* value);
  void set_email(const char* value, size_t size);
  std::string* mutable_email();
  std::string* release_email();
  void set_allocated_email(std::string* email);
  private:
  const std::string& _internal_email() const;
  void _internal_set_email(const std::string& value);
  std::string* _internal_mutable_email();
  public:

  // uint32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:mruv.Account)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr login_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr nick_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr email_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_accounts_2faccounts_5fmodel_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AccountID

// uint32 id = 1;
inline void AccountID::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AccountID::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 AccountID::id() const {
  // @@protoc_insertion_point(field_get:mruv.AccountID.id)
  return _internal_id();
}
inline void AccountID::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void AccountID::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:mruv.AccountID.id)
}

// -------------------------------------------------------------------

// Account

// uint32 id = 1;
inline void Account::clear_id() {
  id_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Account::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 Account::id() const {
  // @@protoc_insertion_point(field_get:mruv.Account.id)
  return _internal_id();
}
inline void Account::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  id_ = value;
}
inline void Account::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:mruv.Account.id)
}

// string login = 2;
inline void Account::clear_login() {
  login_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Account::login() const {
  // @@protoc_insertion_point(field_get:mruv.Account.login)
  return _internal_login();
}
inline void Account::set_login(const std::string& value) {
  _internal_set_login(value);
  // @@protoc_insertion_point(field_set:mruv.Account.login)
}
inline std::string* Account::mutable_login() {
  // @@protoc_insertion_point(field_mutable:mruv.Account.login)
  return _internal_mutable_login();
}
inline const std::string& Account::_internal_login() const {
  return login_.GetNoArena();
}
inline void Account::_internal_set_login(const std::string& value) {
  
  login_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Account::set_login(std::string&& value) {
  
  login_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mruv.Account.login)
}
inline void Account::set_login(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  login_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mruv.Account.login)
}
inline void Account::set_login(const char* value, size_t size) {
  
  login_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mruv.Account.login)
}
inline std::string* Account::_internal_mutable_login() {
  
  return login_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Account::release_login() {
  // @@protoc_insertion_point(field_release:mruv.Account.login)
  
  return login_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_login(std::string* login) {
  if (login != nullptr) {
    
  } else {
    
  }
  login_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), login);
  // @@protoc_insertion_point(field_set_allocated:mruv.Account.login)
}

// string nick = 3;
inline void Account::clear_nick() {
  nick_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Account::nick() const {
  // @@protoc_insertion_point(field_get:mruv.Account.nick)
  return _internal_nick();
}
inline void Account::set_nick(const std::string& value) {
  _internal_set_nick(value);
  // @@protoc_insertion_point(field_set:mruv.Account.nick)
}
inline std::string* Account::mutable_nick() {
  // @@protoc_insertion_point(field_mutable:mruv.Account.nick)
  return _internal_mutable_nick();
}
inline const std::string& Account::_internal_nick() const {
  return nick_.GetNoArena();
}
inline void Account::_internal_set_nick(const std::string& value) {
  
  nick_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Account::set_nick(std::string&& value) {
  
  nick_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mruv.Account.nick)
}
inline void Account::set_nick(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  nick_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mruv.Account.nick)
}
inline void Account::set_nick(const char* value, size_t size) {
  
  nick_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mruv.Account.nick)
}
inline std::string* Account::_internal_mutable_nick() {
  
  return nick_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Account::release_nick() {
  // @@protoc_insertion_point(field_release:mruv.Account.nick)
  
  return nick_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_nick(std::string* nick) {
  if (nick != nullptr) {
    
  } else {
    
  }
  nick_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), nick);
  // @@protoc_insertion_point(field_set_allocated:mruv.Account.nick)
}

// string email = 4;
inline void Account::clear_email() {
  email_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Account::email() const {
  // @@protoc_insertion_point(field_get:mruv.Account.email)
  return _internal_email();
}
inline void Account::set_email(const std::string& value) {
  _internal_set_email(value);
  // @@protoc_insertion_point(field_set:mruv.Account.email)
}
inline std::string* Account::mutable_email() {
  // @@protoc_insertion_point(field_mutable:mruv.Account.email)
  return _internal_mutable_email();
}
inline const std::string& Account::_internal_email() const {
  return email_.GetNoArena();
}
inline void Account::_internal_set_email(const std::string& value) {
  
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Account::set_email(std::string&& value) {
  
  email_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:mruv.Account.email)
}
inline void Account::set_email(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:mruv.Account.email)
}
inline void Account::set_email(const char* value, size_t size) {
  
  email_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:mruv.Account.email)
}
inline std::string* Account::_internal_mutable_email() {
  
  return email_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Account::release_email() {
  // @@protoc_insertion_point(field_release:mruv.Account.email)
  
  return email_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Account::set_allocated_email(std::string* email) {
  if (email != nullptr) {
    
  } else {
    
  }
  email_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), email);
  // @@protoc_insertion_point(field_set_allocated:mruv.Account.email)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace mruv

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_accounts_2faccounts_5fmodel_2eproto
