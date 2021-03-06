// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tcp_with_conf.proto

#ifndef PROTOBUF_tcp_5fwith_5fconf_2eproto__INCLUDED
#define PROTOBUF_tcp_5fwith_5fconf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace TcpHead {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

class Head;
class Data;
class Conf;
class Connect_conf;
class PingPong;

enum Head_HeadInfo {
  Head_HeadInfo_Tcp_id_start = 1,
  Head_HeadInfo_Tcp_id_max = 65535,
  Head_HeadInfo_Tcp_size_max = 20480
};
bool Head_HeadInfo_IsValid(int value);
const Head_HeadInfo Head_HeadInfo_HeadInfo_MIN = Head_HeadInfo_Tcp_id_start;
const Head_HeadInfo Head_HeadInfo_HeadInfo_MAX = Head_HeadInfo_Tcp_id_max;
const int Head_HeadInfo_HeadInfo_ARRAYSIZE = Head_HeadInfo_HeadInfo_MAX + 1;

const ::google::protobuf::EnumDescriptor* Head_HeadInfo_descriptor();
inline const ::std::string& Head_HeadInfo_Name(Head_HeadInfo value) {
  return ::google::protobuf::internal::NameOfEnum(
    Head_HeadInfo_descriptor(), value);
}
inline bool Head_HeadInfo_Parse(
    const ::std::string& name, Head_HeadInfo* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Head_HeadInfo>(
    Head_HeadInfo_descriptor(), name, value);
}
enum Head_MessageType {
  Head_MessageType_Normal = 1,
  Head_MessageType_Conf_message = 2,
  Head_MessageType_PingPong = 3,
  Head_MessageType_connect_conf = 4
};
bool Head_MessageType_IsValid(int value);
const Head_MessageType Head_MessageType_MessageType_MIN = Head_MessageType_Normal;
const Head_MessageType Head_MessageType_MessageType_MAX = Head_MessageType_connect_conf;
const int Head_MessageType_MessageType_ARRAYSIZE = Head_MessageType_MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Head_MessageType_descriptor();
inline const ::std::string& Head_MessageType_Name(Head_MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Head_MessageType_descriptor(), value);
}
inline bool Head_MessageType_Parse(
    const ::std::string& name, Head_MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Head_MessageType>(
    Head_MessageType_descriptor(), name, value);
}
enum PingPong_PingType {
  PingPong_PingType_Ping = 1,
  PingPong_PingType_Pong = 2
};
bool PingPong_PingType_IsValid(int value);
const PingPong_PingType PingPong_PingType_PingType_MIN = PingPong_PingType_Ping;
const PingPong_PingType PingPong_PingType_PingType_MAX = PingPong_PingType_Pong;
const int PingPong_PingType_PingType_ARRAYSIZE = PingPong_PingType_PingType_MAX + 1;

const ::google::protobuf::EnumDescriptor* PingPong_PingType_descriptor();
inline const ::std::string& PingPong_PingType_Name(PingPong_PingType value) {
  return ::google::protobuf::internal::NameOfEnum(
    PingPong_PingType_descriptor(), value);
}
inline bool PingPong_PingType_Parse(
    const ::std::string& name, PingPong_PingType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PingPong_PingType>(
    PingPong_PingType_descriptor(), name, value);
}
// ===================================================================

class Head : public ::google::protobuf::Message {
 public:
  Head();
  virtual ~Head();

  Head(const Head& from);

  inline Head& operator=(const Head& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Head& default_instance();

  void Swap(Head* other);

  // implements Message ----------------------------------------------

  Head* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Head_HeadInfo HeadInfo;
  static const HeadInfo Tcp_id_start = Head_HeadInfo_Tcp_id_start;
  static const HeadInfo Tcp_id_max = Head_HeadInfo_Tcp_id_max;
  static const HeadInfo Tcp_size_max = Head_HeadInfo_Tcp_size_max;
  static inline bool HeadInfo_IsValid(int value) {
    return Head_HeadInfo_IsValid(value);
  }
  static const HeadInfo HeadInfo_MIN =
    Head_HeadInfo_HeadInfo_MIN;
  static const HeadInfo HeadInfo_MAX =
    Head_HeadInfo_HeadInfo_MAX;
  static const int HeadInfo_ARRAYSIZE =
    Head_HeadInfo_HeadInfo_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  HeadInfo_descriptor() {
    return Head_HeadInfo_descriptor();
  }
  static inline const ::std::string& HeadInfo_Name(HeadInfo value) {
    return Head_HeadInfo_Name(value);
  }
  static inline bool HeadInfo_Parse(const ::std::string& name,
      HeadInfo* value) {
    return Head_HeadInfo_Parse(name, value);
  }

  typedef Head_MessageType MessageType;
  static const MessageType Normal = Head_MessageType_Normal;
  static const MessageType Conf_message = Head_MessageType_Conf_message;
  static const MessageType PingPong = Head_MessageType_PingPong;
  static const MessageType connect_conf = Head_MessageType_connect_conf;
  static inline bool MessageType_IsValid(int value) {
    return Head_MessageType_IsValid(value);
  }
  static const MessageType MessageType_MIN =
    Head_MessageType_MessageType_MIN;
  static const MessageType MessageType_MAX =
    Head_MessageType_MessageType_MAX;
  static const int MessageType_ARRAYSIZE =
    Head_MessageType_MessageType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  MessageType_descriptor() {
    return Head_MessageType_descriptor();
  }
  static inline const ::std::string& MessageType_Name(MessageType value) {
    return Head_MessageType_Name(value);
  }
  static inline bool MessageType_Parse(const ::std::string& name,
      MessageType* value) {
    return Head_MessageType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required fixed32 message_id = 1 [default = 0];
  inline bool has_message_id() const;
  inline void clear_message_id();
  static const int kMessageIdFieldNumber = 1;
  inline ::google::protobuf::uint32 message_id() const;
  inline void set_message_id(::google::protobuf::uint32 value);

  // required fixed32 message_size = 2 [default = 0];
  inline bool has_message_size() const;
  inline void clear_message_size();
  static const int kMessageSizeFieldNumber = 2;
  inline ::google::protobuf::uint32 message_size() const;
  inline void set_message_size(::google::protobuf::uint32 value);

  // required fixed32 message_type = 3 [default = 1];
  inline bool has_message_type() const;
  inline void clear_message_type();
  static const int kMessageTypeFieldNumber = 3;
  inline ::google::protobuf::uint32 message_type() const;
  inline void set_message_type(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:TcpHead.Head)
 private:
  inline void set_has_message_id();
  inline void clear_has_message_id();
  inline void set_has_message_size();
  inline void clear_has_message_size();
  inline void set_has_message_type();
  inline void clear_has_message_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 message_id_;
  ::google::protobuf::uint32 message_size_;
  ::google::protobuf::uint32 message_type_;
  friend void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

  void InitAsDefaultInstance();
  static Head* default_instance_;
};
// -------------------------------------------------------------------

class Data : public ::google::protobuf::Message {
 public:
  Data();
  virtual ~Data();

  Data(const Data& from);

  inline Data& operator=(const Data& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Data& default_instance();

  void Swap(Data* other);

  // implements Message ----------------------------------------------

  Data* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes info = 1;
  inline bool has_info() const;
  inline void clear_info();
  static const int kInfoFieldNumber = 1;
  inline const ::std::string& info() const;
  inline void set_info(const ::std::string& value);
  inline void set_info(const char* value);
  inline void set_info(const void* value, size_t size);
  inline ::std::string* mutable_info();
  inline ::std::string* release_info();
  inline void set_allocated_info(::std::string* info);

  // @@protoc_insertion_point(class_scope:TcpHead.Data)
 private:
  inline void set_has_info();
  inline void clear_has_info();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* info_;
  friend void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

  void InitAsDefaultInstance();
  static Data* default_instance_;
};
// -------------------------------------------------------------------

class Conf : public ::google::protobuf::Message {
 public:
  Conf();
  virtual ~Conf();

  Conf(const Conf& from);

  inline Conf& operator=(const Conf& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Conf& default_instance();

  void Swap(Conf* other);

  // implements Message ----------------------------------------------

  Conf* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 message_id = 1;
  inline bool has_message_id() const;
  inline void clear_message_id();
  static const int kMessageIdFieldNumber = 1;
  inline ::google::protobuf::int32 message_id() const;
  inline void set_message_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TcpHead.Conf)
 private:
  inline void set_has_message_id();
  inline void clear_has_message_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 message_id_;
  friend void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

  void InitAsDefaultInstance();
  static Conf* default_instance_;
};
// -------------------------------------------------------------------

class Connect_conf : public ::google::protobuf::Message {
 public:
  Connect_conf();
  virtual ~Connect_conf();

  Connect_conf(const Connect_conf& from);

  inline Connect_conf& operator=(const Connect_conf& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Connect_conf& default_instance();

  void Swap(Connect_conf* other);

  // implements Message ----------------------------------------------

  Connect_conf* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int64 servertime = 1;
  inline bool has_servertime() const;
  inline void clear_servertime();
  static const int kServertimeFieldNumber = 1;
  inline ::google::protobuf::int64 servertime() const;
  inline void set_servertime(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:TcpHead.Connect_conf)
 private:
  inline void set_has_servertime();
  inline void clear_has_servertime();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 servertime_;
  friend void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

  void InitAsDefaultInstance();
  static Connect_conf* default_instance_;
};
// -------------------------------------------------------------------

class PingPong : public ::google::protobuf::Message {
 public:
  PingPong();
  virtual ~PingPong();

  PingPong(const PingPong& from);

  inline PingPong& operator=(const PingPong& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PingPong& default_instance();

  void Swap(PingPong* other);

  // implements Message ----------------------------------------------

  PingPong* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef PingPong_PingType PingType;
  static const PingType Ping = PingPong_PingType_Ping;
  static const PingType Pong = PingPong_PingType_Pong;
  static inline bool PingType_IsValid(int value) {
    return PingPong_PingType_IsValid(value);
  }
  static const PingType PingType_MIN =
    PingPong_PingType_PingType_MIN;
  static const PingType PingType_MAX =
    PingPong_PingType_PingType_MAX;
  static const int PingType_ARRAYSIZE =
    PingPong_PingType_PingType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PingType_descriptor() {
    return PingPong_PingType_descriptor();
  }
  static inline const ::std::string& PingType_Name(PingType value) {
    return PingPong_PingType_Name(value);
  }
  static inline bool PingType_Parse(const ::std::string& name,
      PingType* value) {
    return PingPong_PingType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 ping_type = 1;
  inline bool has_ping_type() const;
  inline void clear_ping_type();
  static const int kPingTypeFieldNumber = 1;
  inline ::google::protobuf::int32 ping_type() const;
  inline void set_ping_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:TcpHead.PingPong)
 private:
  inline void set_has_ping_type();
  inline void clear_has_ping_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 ping_type_;
  friend void  protobuf_AddDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_AssignDesc_tcp_5fwith_5fconf_2eproto();
  friend void protobuf_ShutdownFile_tcp_5fwith_5fconf_2eproto();

  void InitAsDefaultInstance();
  static PingPong* default_instance_;
};
// ===================================================================


// ===================================================================

// Head

// required fixed32 message_id = 1 [default = 0];
inline bool Head::has_message_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Head::set_has_message_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Head::clear_has_message_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Head::clear_message_id() {
  message_id_ = 0u;
  clear_has_message_id();
}
inline ::google::protobuf::uint32 Head::message_id() const {
  // @@protoc_insertion_point(field_get:TcpHead.Head.message_id)
  return message_id_;
}
inline void Head::set_message_id(::google::protobuf::uint32 value) {
  set_has_message_id();
  message_id_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.Head.message_id)
}

// required fixed32 message_size = 2 [default = 0];
inline bool Head::has_message_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Head::set_has_message_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Head::clear_has_message_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Head::clear_message_size() {
  message_size_ = 0u;
  clear_has_message_size();
}
inline ::google::protobuf::uint32 Head::message_size() const {
  // @@protoc_insertion_point(field_get:TcpHead.Head.message_size)
  return message_size_;
}
inline void Head::set_message_size(::google::protobuf::uint32 value) {
  set_has_message_size();
  message_size_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.Head.message_size)
}

// required fixed32 message_type = 3 [default = 1];
inline bool Head::has_message_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Head::set_has_message_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Head::clear_has_message_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Head::clear_message_type() {
  message_type_ = 1u;
  clear_has_message_type();
}
inline ::google::protobuf::uint32 Head::message_type() const {
  // @@protoc_insertion_point(field_get:TcpHead.Head.message_type)
  return message_type_;
}
inline void Head::set_message_type(::google::protobuf::uint32 value) {
  set_has_message_type();
  message_type_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.Head.message_type)
}

// -------------------------------------------------------------------

// Data

// required bytes info = 1;
inline bool Data::has_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Data::set_has_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Data::clear_has_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Data::clear_info() {
  if (info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    info_->clear();
  }
  clear_has_info();
}
inline const ::std::string& Data::info() const {
  // @@protoc_insertion_point(field_get:TcpHead.Data.info)
  return *info_;
}
inline void Data::set_info(const ::std::string& value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    info_ = new ::std::string;
  }
  info_->assign(value);
  // @@protoc_insertion_point(field_set:TcpHead.Data.info)
}
inline void Data::set_info(const char* value) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    info_ = new ::std::string;
  }
  info_->assign(value);
  // @@protoc_insertion_point(field_set_char:TcpHead.Data.info)
}
inline void Data::set_info(const void* value, size_t size) {
  set_has_info();
  if (info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    info_ = new ::std::string;
  }
  info_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TcpHead.Data.info)
}
inline ::std::string* Data::mutable_info() {
  set_has_info();
  if (info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    info_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:TcpHead.Data.info)
  return info_;
}
inline ::std::string* Data::release_info() {
  clear_has_info();
  if (info_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = info_;
    info_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Data::set_allocated_info(::std::string* info) {
  if (info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete info_;
  }
  if (info) {
    set_has_info();
    info_ = info;
  } else {
    clear_has_info();
    info_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:TcpHead.Data.info)
}

// -------------------------------------------------------------------

// Conf

// required int32 message_id = 1;
inline bool Conf::has_message_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Conf::set_has_message_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Conf::clear_has_message_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Conf::clear_message_id() {
  message_id_ = 0;
  clear_has_message_id();
}
inline ::google::protobuf::int32 Conf::message_id() const {
  // @@protoc_insertion_point(field_get:TcpHead.Conf.message_id)
  return message_id_;
}
inline void Conf::set_message_id(::google::protobuf::int32 value) {
  set_has_message_id();
  message_id_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.Conf.message_id)
}

// -------------------------------------------------------------------

// Connect_conf

// required int64 servertime = 1;
inline bool Connect_conf::has_servertime() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Connect_conf::set_has_servertime() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Connect_conf::clear_has_servertime() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Connect_conf::clear_servertime() {
  servertime_ = GOOGLE_LONGLONG(0);
  clear_has_servertime();
}
inline ::google::protobuf::int64 Connect_conf::servertime() const {
  // @@protoc_insertion_point(field_get:TcpHead.Connect_conf.servertime)
  return servertime_;
}
inline void Connect_conf::set_servertime(::google::protobuf::int64 value) {
  set_has_servertime();
  servertime_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.Connect_conf.servertime)
}

// -------------------------------------------------------------------

// PingPong

// required int32 ping_type = 1;
inline bool PingPong::has_ping_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PingPong::set_has_ping_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PingPong::clear_has_ping_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PingPong::clear_ping_type() {
  ping_type_ = 0;
  clear_has_ping_type();
}
inline ::google::protobuf::int32 PingPong::ping_type() const {
  // @@protoc_insertion_point(field_get:TcpHead.PingPong.ping_type)
  return ping_type_;
}
inline void PingPong::set_ping_type(::google::protobuf::int32 value) {
  set_has_ping_type();
  ping_type_ = value;
  // @@protoc_insertion_point(field_set:TcpHead.PingPong.ping_type)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace TcpHead

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::TcpHead::Head_HeadInfo> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TcpHead::Head_HeadInfo>() {
  return ::TcpHead::Head_HeadInfo_descriptor();
}
template <> struct is_proto_enum< ::TcpHead::Head_MessageType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TcpHead::Head_MessageType>() {
  return ::TcpHead::Head_MessageType_descriptor();
}
template <> struct is_proto_enum< ::TcpHead::PingPong_PingType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::TcpHead::PingPong_PingType>() {
  return ::TcpHead::PingPong_PingType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_tcp_5fwith_5fconf_2eproto__INCLUDED
