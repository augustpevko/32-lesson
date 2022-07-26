// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_model_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_model_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_model_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_model_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_model_2eproto;
class Company;
class CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Company* Arena::CreateMaybeMessage<::Company>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Company PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Company) */ {
 public:
  inline Company() : Company(nullptr) {};
  virtual ~Company();

  Company(const Company& from);
  Company(Company&& from) noexcept
    : Company() {
    *this = ::std::move(from);
  }

  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
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
  static const Company& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
               &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Company& a, Company& b) {
    a.Swap(&b);
  }
  inline void Swap(Company* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Company* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Company* New() const final {
    return CreateMaybeMessage<Company>(nullptr);
  }

  Company* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Company>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Company& from);
  void MergeFrom(const Company& from);
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
  void InternalSwap(Company* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Company";
  }
  protected:
  explicit Company(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_model_2eproto);
    return ::descriptor_table_model_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLegalAddressFieldNumber = 2,
    kNameFieldNumber = 3,
    kActivityFieldNumber = 4,
    kYearFoundationFieldNumber = 1,
    kForeignEconomicActivityFieldNumber = 5,
  };
  // required string legalAddress = 2;
  bool has_legaladdress() const;
  private:
  bool _internal_has_legaladdress() const;
  public:
  void clear_legaladdress();
  const std::string& legaladdress() const;
  void set_legaladdress(const std::string& value);
  void set_legaladdress(std::string&& value);
  void set_legaladdress(const char* value);
  void set_legaladdress(const char* value, size_t size);
  std::string* mutable_legaladdress();
  std::string* release_legaladdress();
  void set_allocated_legaladdress(std::string* legaladdress);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_legaladdress();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_legaladdress(
      std::string* legaladdress);
  private:
  const std::string& _internal_legaladdress() const;
  void _internal_set_legaladdress(const std::string& value);
  std::string* _internal_mutable_legaladdress();
  public:

  // required string name = 3;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_name();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_name(
      std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional string activity = 4;
  bool has_activity() const;
  private:
  bool _internal_has_activity() const;
  public:
  void clear_activity();
  const std::string& activity() const;
  void set_activity(const std::string& value);
  void set_activity(std::string&& value);
  void set_activity(const char* value);
  void set_activity(const char* value, size_t size);
  std::string* mutable_activity();
  std::string* release_activity();
  void set_allocated_activity(std::string* activity);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_activity();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_activity(
      std::string* activity);
  private:
  const std::string& _internal_activity() const;
  void _internal_set_activity(const std::string& value);
  std::string* _internal_mutable_activity();
  public:

  // required int32 yearFoundation = 1;
  bool has_yearfoundation() const;
  private:
  bool _internal_has_yearfoundation() const;
  public:
  void clear_yearfoundation();
  ::PROTOBUF_NAMESPACE_ID::int32 yearfoundation() const;
  void set_yearfoundation(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_yearfoundation() const;
  void _internal_set_yearfoundation(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // optional bool foreignEconomicActivity = 5;
  bool has_foreigneconomicactivity() const;
  private:
  bool _internal_has_foreigneconomicactivity() const;
  public:
  void clear_foreigneconomicactivity();
  bool foreigneconomicactivity() const;
  void set_foreigneconomicactivity(bool value);
  private:
  bool _internal_foreigneconomicactivity() const;
  void _internal_set_foreigneconomicactivity(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Company)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr legaladdress_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr activity_;
  ::PROTOBUF_NAMESPACE_ID::int32 yearfoundation_;
  bool foreigneconomicactivity_;
  friend struct ::TableStruct_model_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Company

// required int32 yearFoundation = 1;
inline bool Company::_internal_has_yearfoundation() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Company::has_yearfoundation() const {
  return _internal_has_yearfoundation();
}
inline void Company::clear_yearfoundation() {
  yearfoundation_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Company::_internal_yearfoundation() const {
  return yearfoundation_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Company::yearfoundation() const {
  // @@protoc_insertion_point(field_get:Company.yearFoundation)
  return _internal_yearfoundation();
}
inline void Company::_internal_set_yearfoundation(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000008u;
  yearfoundation_ = value;
}
inline void Company::set_yearfoundation(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_yearfoundation(value);
  // @@protoc_insertion_point(field_set:Company.yearFoundation)
}

// required string legalAddress = 2;
inline bool Company::_internal_has_legaladdress() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Company::has_legaladdress() const {
  return _internal_has_legaladdress();
}
inline void Company::clear_legaladdress() {
  legaladdress_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Company::legaladdress() const {
  // @@protoc_insertion_point(field_get:Company.legalAddress)
  return _internal_legaladdress();
}
inline void Company::set_legaladdress(const std::string& value) {
  _internal_set_legaladdress(value);
  // @@protoc_insertion_point(field_set:Company.legalAddress)
}
inline std::string* Company::mutable_legaladdress() {
  // @@protoc_insertion_point(field_mutable:Company.legalAddress)
  return _internal_mutable_legaladdress();
}
inline const std::string& Company::_internal_legaladdress() const {
  return legaladdress_.Get();
}
inline void Company::_internal_set_legaladdress(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  legaladdress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_legaladdress(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  legaladdress_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.legalAddress)
}
inline void Company::set_legaladdress(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  legaladdress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.legalAddress)
}
inline void Company::set_legaladdress(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000001u;
  legaladdress_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.legalAddress)
}
inline std::string* Company::_internal_mutable_legaladdress() {
  _has_bits_[0] |= 0x00000001u;
  return legaladdress_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_legaladdress() {
  // @@protoc_insertion_point(field_release:Company.legalAddress)
  if (!_internal_has_legaladdress()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return legaladdress_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_legaladdress(std::string* legaladdress) {
  if (legaladdress != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  legaladdress_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), legaladdress,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.legalAddress)
}
inline std::string* Company::unsafe_arena_release_legaladdress() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.legalAddress)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000001u;
  return legaladdress_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_legaladdress(
    std::string* legaladdress) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (legaladdress != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  legaladdress_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      legaladdress, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.legalAddress)
}

// required string name = 3;
inline bool Company::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Company::has_name() const {
  return _internal_has_name();
}
inline void Company::clear_name() {
  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Company::name() const {
  // @@protoc_insertion_point(field_get:Company.name)
  return _internal_name();
}
inline void Company::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Company.name)
}
inline std::string* Company::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Company.name)
  return _internal_mutable_name();
}
inline const std::string& Company::_internal_name() const {
  return name_.Get();
}
inline void Company::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_name(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.name)
}
inline void Company::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.name)
}
inline void Company::set_name(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000002u;
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.name)
}
inline std::string* Company::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  return name_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_name() {
  // @@protoc_insertion_point(field_release:Company.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.name)
}
inline std::string* Company::unsafe_arena_release_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.name)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000002u;
  return name_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_name(
    std::string* name) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      name, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.name)
}

// optional string activity = 4;
inline bool Company::_internal_has_activity() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Company::has_activity() const {
  return _internal_has_activity();
}
inline void Company::clear_activity() {
  activity_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Company::activity() const {
  // @@protoc_insertion_point(field_get:Company.activity)
  return _internal_activity();
}
inline void Company::set_activity(const std::string& value) {
  _internal_set_activity(value);
  // @@protoc_insertion_point(field_set:Company.activity)
}
inline std::string* Company::mutable_activity() {
  // @@protoc_insertion_point(field_mutable:Company.activity)
  return _internal_mutable_activity();
}
inline const std::string& Company::_internal_activity() const {
  return activity_.Get();
}
inline void Company::_internal_set_activity(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void Company::set_activity(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Company.activity)
}
inline void Company::set_activity(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:Company.activity)
}
inline void Company::set_activity(const char* value,
    size_t size) {
  _has_bits_[0] |= 0x00000004u;
  activity_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Company.activity)
}
inline std::string* Company::_internal_mutable_activity() {
  _has_bits_[0] |= 0x00000004u;
  return activity_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* Company::release_activity() {
  // @@protoc_insertion_point(field_release:Company.activity)
  if (!_internal_has_activity()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return activity_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Company::set_allocated_activity(std::string* activity) {
  if (activity != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  activity_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), activity,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Company.activity)
}
inline std::string* Company::unsafe_arena_release_activity() {
  // @@protoc_insertion_point(field_unsafe_arena_release:Company.activity)
  GOOGLE_DCHECK(GetArena() != nullptr);
  _has_bits_[0] &= ~0x00000004u;
  return activity_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void Company::unsafe_arena_set_allocated_activity(
    std::string* activity) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (activity != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  activity_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      activity, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:Company.activity)
}

// optional bool foreignEconomicActivity = 5;
inline bool Company::_internal_has_foreigneconomicactivity() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Company::has_foreigneconomicactivity() const {
  return _internal_has_foreigneconomicactivity();
}
inline void Company::clear_foreigneconomicactivity() {
  foreigneconomicactivity_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Company::_internal_foreigneconomicactivity() const {
  return foreigneconomicactivity_;
}
inline bool Company::foreigneconomicactivity() const {
  // @@protoc_insertion_point(field_get:Company.foreignEconomicActivity)
  return _internal_foreigneconomicactivity();
}
inline void Company::_internal_set_foreigneconomicactivity(bool value) {
  _has_bits_[0] |= 0x00000010u;
  foreigneconomicactivity_ = value;
}
inline void Company::set_foreigneconomicactivity(bool value) {
  _internal_set_foreigneconomicactivity(value);
  // @@protoc_insertion_point(field_set:Company.foreignEconomicActivity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_model_2eproto
