/*
 * Copyright HeteroCL authors. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0
 */

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ip.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ip_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ip_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ip_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ip_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ip_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_ip_2eproto_metadata_getter(int index);
class ObjectList;
struct ObjectListDefaultTypeInternal;
extern ObjectListDefaultTypeInternal _ObjectList_default_instance_;
class Param;
struct ParamDefaultTypeInternal;
extern ParamDefaultTypeInternal _Param_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::ObjectList* Arena::CreateMaybeMessage<::ObjectList>(Arena*);
template<> ::Param* Arena::CreateMaybeMessage<::Param>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Param PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Param) */ {
 public:
  inline Param() : Param(nullptr) {}
  virtual ~Param();
  explicit constexpr Param(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Param(const Param& from);
  Param(Param&& from) noexcept
    : Param() {
    *this = ::std::move(from);
  }

  inline Param& operator=(const Param& from) {
    CopyFrom(from);
    return *this;
  }
  inline Param& operator=(Param&& from) noexcept {
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
  static const Param& default_instance() {
    return *internal_default_instance();
  }
  static inline const Param* internal_default_instance() {
    return reinterpret_cast<const Param*>(
               &_Param_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Param& a, Param& b) {
    a.Swap(&b);
  }
  inline void Swap(Param* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Param* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Param* New() const final {
    return CreateMaybeMessage<Param>(nullptr);
  }

  Param* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Param>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Param& from);
  void MergeFrom(const Param& from);
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
  void InternalSwap(Param* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Param";
  }
  protected:
  explicit Param(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ip_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kDataTypeFieldNumber = 2,
    kBitWidthFieldNumber = 3,
    kIntWidthFieldNumber = 4,
    kFracWidthFieldNumber = 5,
    kValueFieldNumber = 6,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string data_type = 2;
  void clear_data_type();
  const std::string& data_type() const;
  void set_data_type(const std::string& value);
  void set_data_type(std::string&& value);
  void set_data_type(const char* value);
  void set_data_type(const char* value, size_t size);
  std::string* mutable_data_type();
  std::string* release_data_type();
  void set_allocated_data_type(std::string* data_type);
  private:
  const std::string& _internal_data_type() const;
  void _internal_set_data_type(const std::string& value);
  std::string* _internal_mutable_data_type();
  public:

  // int32 bit_width = 3;
  void clear_bit_width();
  ::PROTOBUF_NAMESPACE_ID::int32 bit_width() const;
  void set_bit_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_bit_width() const;
  void _internal_set_bit_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 int_width = 4;
  void clear_int_width();
  ::PROTOBUF_NAMESPACE_ID::int32 int_width() const;
  void set_int_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_int_width() const;
  void _internal_set_int_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 frac_width = 5;
  void clear_frac_width();
  ::PROTOBUF_NAMESPACE_ID::int32 frac_width() const;
  void set_frac_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_frac_width() const;
  void _internal_set_frac_width(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // float value = 6;
  void clear_value();
  float value() const;
  void set_value(float value);
  private:
  float _internal_value() const;
  void _internal_set_value(float value);
  public:

  // @@protoc_insertion_point(class_scope:Param)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_type_;
  ::PROTOBUF_NAMESPACE_ID::int32 bit_width_;
  ::PROTOBUF_NAMESPACE_ID::int32 int_width_;
  ::PROTOBUF_NAMESPACE_ID::int32 frac_width_;
  float value_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ip_2eproto;
};
// -------------------------------------------------------------------

class ObjectList PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ObjectList) */ {
 public:
  inline ObjectList() : ObjectList(nullptr) {}
  virtual ~ObjectList();
  explicit constexpr ObjectList(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ObjectList(const ObjectList& from);
  ObjectList(ObjectList&& from) noexcept
    : ObjectList() {
    *this = ::std::move(from);
  }

  inline ObjectList& operator=(const ObjectList& from) {
    CopyFrom(from);
    return *this;
  }
  inline ObjectList& operator=(ObjectList&& from) noexcept {
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
  static const ObjectList& default_instance() {
    return *internal_default_instance();
  }
  static inline const ObjectList* internal_default_instance() {
    return reinterpret_cast<const ObjectList*>(
               &_ObjectList_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ObjectList& a, ObjectList& b) {
    a.Swap(&b);
  }
  inline void Swap(ObjectList* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ObjectList* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ObjectList* New() const final {
    return CreateMaybeMessage<ObjectList>(nullptr);
  }

  ObjectList* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ObjectList>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ObjectList& from);
  void MergeFrom(const ObjectList& from);
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
  void InternalSwap(ObjectList* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ObjectList";
  }
  protected:
  explicit ObjectList(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ip_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kObjectsFieldNumber = 1,
  };
  // repeated .Param objects = 1;
  int objects_size() const;
  private:
  int _internal_objects_size() const;
  public:
  void clear_objects();
  ::Param* mutable_objects(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Param >*
      mutable_objects();
  private:
  const ::Param& _internal_objects(int index) const;
  ::Param* _internal_add_objects();
  public:
  const ::Param& objects(int index) const;
  ::Param* add_objects();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Param >&
      objects() const;

  // @@protoc_insertion_point(class_scope:ObjectList)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Param > objects_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ip_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Param

// string name = 1;
inline void Param::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Param::name() const {
  // @@protoc_insertion_point(field_get:Param.name)
  return _internal_name();
}
inline void Param::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:Param.name)
}
inline std::string* Param::mutable_name() {
  // @@protoc_insertion_point(field_mutable:Param.name)
  return _internal_mutable_name();
}
inline const std::string& Param::_internal_name() const {
  return name_.Get();
}
inline void Param::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Param::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Param.name)
}
inline void Param::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Param.name)
}
inline void Param::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Param.name)
}
inline std::string* Param::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Param::release_name() {
  // @@protoc_insertion_point(field_release:Param.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Param::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Param.name)
}

// string data_type = 2;
inline void Param::clear_data_type() {
  data_type_.ClearToEmpty();
}
inline const std::string& Param::data_type() const {
  // @@protoc_insertion_point(field_get:Param.data_type)
  return _internal_data_type();
}
inline void Param::set_data_type(const std::string& value) {
  _internal_set_data_type(value);
  // @@protoc_insertion_point(field_set:Param.data_type)
}
inline std::string* Param::mutable_data_type() {
  // @@protoc_insertion_point(field_mutable:Param.data_type)
  return _internal_mutable_data_type();
}
inline const std::string& Param::_internal_data_type() const {
  return data_type_.Get();
}
inline void Param::_internal_set_data_type(const std::string& value) {
  
  data_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Param::set_data_type(std::string&& value) {
  
  data_type_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:Param.data_type)
}
inline void Param::set_data_type(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:Param.data_type)
}
inline void Param::set_data_type(const char* value,
    size_t size) {
  
  data_type_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:Param.data_type)
}
inline std::string* Param::_internal_mutable_data_type() {
  
  return data_type_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Param::release_data_type() {
  // @@protoc_insertion_point(field_release:Param.data_type)
  return data_type_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Param::set_allocated_data_type(std::string* data_type) {
  if (data_type != nullptr) {
    
  } else {
    
  }
  data_type_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data_type,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:Param.data_type)
}

// int32 bit_width = 3;
inline void Param::clear_bit_width() {
  bit_width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::_internal_bit_width() const {
  return bit_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::bit_width() const {
  // @@protoc_insertion_point(field_get:Param.bit_width)
  return _internal_bit_width();
}
inline void Param::_internal_set_bit_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  bit_width_ = value;
}
inline void Param::set_bit_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_bit_width(value);
  // @@protoc_insertion_point(field_set:Param.bit_width)
}

// int32 int_width = 4;
inline void Param::clear_int_width() {
  int_width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::_internal_int_width() const {
  return int_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::int_width() const {
  // @@protoc_insertion_point(field_get:Param.int_width)
  return _internal_int_width();
}
inline void Param::_internal_set_int_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  int_width_ = value;
}
inline void Param::set_int_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_int_width(value);
  // @@protoc_insertion_point(field_set:Param.int_width)
}

// int32 frac_width = 5;
inline void Param::clear_frac_width() {
  frac_width_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::_internal_frac_width() const {
  return frac_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Param::frac_width() const {
  // @@protoc_insertion_point(field_get:Param.frac_width)
  return _internal_frac_width();
}
inline void Param::_internal_set_frac_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  frac_width_ = value;
}
inline void Param::set_frac_width(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_frac_width(value);
  // @@protoc_insertion_point(field_set:Param.frac_width)
}

// float value = 6;
inline void Param::clear_value() {
  value_ = 0;
}
inline float Param::_internal_value() const {
  return value_;
}
inline float Param::value() const {
  // @@protoc_insertion_point(field_get:Param.value)
  return _internal_value();
}
inline void Param::_internal_set_value(float value) {
  
  value_ = value;
}
inline void Param::set_value(float value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:Param.value)
}

// -------------------------------------------------------------------

// ObjectList

// repeated .Param objects = 1;
inline int ObjectList::_internal_objects_size() const {
  return objects_.size();
}
inline int ObjectList::objects_size() const {
  return _internal_objects_size();
}
inline void ObjectList::clear_objects() {
  objects_.Clear();
}
inline ::Param* ObjectList::mutable_objects(int index) {
  // @@protoc_insertion_point(field_mutable:ObjectList.objects)
  return objects_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Param >*
ObjectList::mutable_objects() {
  // @@protoc_insertion_point(field_mutable_list:ObjectList.objects)
  return &objects_;
}
inline const ::Param& ObjectList::_internal_objects(int index) const {
  return objects_.Get(index);
}
inline const ::Param& ObjectList::objects(int index) const {
  // @@protoc_insertion_point(field_get:ObjectList.objects)
  return _internal_objects(index);
}
inline ::Param* ObjectList::_internal_add_objects() {
  return objects_.Add();
}
inline ::Param* ObjectList::add_objects() {
  // @@protoc_insertion_point(field_add:ObjectList.objects)
  return _internal_add_objects();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Param >&
ObjectList::objects() const {
  // @@protoc_insertion_point(field_list:ObjectList.objects)
  return objects_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ip_2eproto
