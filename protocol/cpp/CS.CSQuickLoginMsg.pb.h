// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CS.CSQuickLoginMsg.proto

#ifndef PROTOBUF_CS_2eCSQuickLoginMsg_2eproto__INCLUDED
#define PROTOBUF_CS_2eCSQuickLoginMsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "struct.pb.h"
// @@protoc_insertion_point(includes)

namespace com {
namespace empire {
namespace msg {
namespace auto {
namespace cs {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CS_2eCSQuickLoginMsg_2eproto();
void protobuf_AssignDesc_CS_2eCSQuickLoginMsg_2eproto();
void protobuf_ShutdownFile_CS_2eCSQuickLoginMsg_2eproto();

class CSQuickLoginMsg;

// ===================================================================

class CSQuickLoginMsg : public ::google::protobuf::Message {
 public:
  CSQuickLoginMsg();
  virtual ~CSQuickLoginMsg();

  CSQuickLoginMsg(const CSQuickLoginMsg& from);

  inline CSQuickLoginMsg& operator=(const CSQuickLoginMsg& from) {
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
  static const CSQuickLoginMsg& default_instance();

  void Swap(CSQuickLoginMsg* other);

  // implements Message ----------------------------------------------

  CSQuickLoginMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSQuickLoginMsg& from);
  void MergeFrom(const CSQuickLoginMsg& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 deviceType = 1;
  inline bool has_devicetype() const;
  inline void clear_devicetype();
  static const int kDeviceTypeFieldNumber = 1;
  inline ::google::protobuf::int32 devicetype() const;
  inline void set_devicetype(::google::protobuf::int32 value);

  // optional string deviceId = 2;
  inline bool has_deviceid() const;
  inline void clear_deviceid();
  static const int kDeviceIdFieldNumber = 2;
  inline const ::std::string& deviceid() const;
  inline void set_deviceid(const ::std::string& value);
  inline void set_deviceid(const char* value);
  inline void set_deviceid(const char* value, size_t size);
  inline ::std::string* mutable_deviceid();
  inline ::std::string* release_deviceid();
  inline void set_allocated_deviceid(::std::string* deviceid);

  // @@protoc_insertion_point(class_scope:com.empire.msg.auto.cs.CSQuickLoginMsg)
 private:
  inline void set_has_devicetype();
  inline void clear_has_devicetype();
  inline void set_has_deviceid();
  inline void clear_has_deviceid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* deviceid_;
  ::google::protobuf::int32 devicetype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CS_2eCSQuickLoginMsg_2eproto();
  friend void protobuf_AssignDesc_CS_2eCSQuickLoginMsg_2eproto();
  friend void protobuf_ShutdownFile_CS_2eCSQuickLoginMsg_2eproto();

  void InitAsDefaultInstance();
  static CSQuickLoginMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// CSQuickLoginMsg

// optional int32 deviceType = 1;
inline bool CSQuickLoginMsg::has_devicetype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSQuickLoginMsg::set_has_devicetype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSQuickLoginMsg::clear_has_devicetype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSQuickLoginMsg::clear_devicetype() {
  devicetype_ = 0;
  clear_has_devicetype();
}
inline ::google::protobuf::int32 CSQuickLoginMsg::devicetype() const {
  return devicetype_;
}
inline void CSQuickLoginMsg::set_devicetype(::google::protobuf::int32 value) {
  set_has_devicetype();
  devicetype_ = value;
}

// optional string deviceId = 2;
inline bool CSQuickLoginMsg::has_deviceid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSQuickLoginMsg::set_has_deviceid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSQuickLoginMsg::clear_has_deviceid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSQuickLoginMsg::clear_deviceid() {
  if (deviceid_ != &::google::protobuf::internal::kEmptyString) {
    deviceid_->clear();
  }
  clear_has_deviceid();
}
inline const ::std::string& CSQuickLoginMsg::deviceid() const {
  return *deviceid_;
}
inline void CSQuickLoginMsg::set_deviceid(const ::std::string& value) {
  set_has_deviceid();
  if (deviceid_ == &::google::protobuf::internal::kEmptyString) {
    deviceid_ = new ::std::string;
  }
  deviceid_->assign(value);
}
inline void CSQuickLoginMsg::set_deviceid(const char* value) {
  set_has_deviceid();
  if (deviceid_ == &::google::protobuf::internal::kEmptyString) {
    deviceid_ = new ::std::string;
  }
  deviceid_->assign(value);
}
inline void CSQuickLoginMsg::set_deviceid(const char* value, size_t size) {
  set_has_deviceid();
  if (deviceid_ == &::google::protobuf::internal::kEmptyString) {
    deviceid_ = new ::std::string;
  }
  deviceid_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSQuickLoginMsg::mutable_deviceid() {
  set_has_deviceid();
  if (deviceid_ == &::google::protobuf::internal::kEmptyString) {
    deviceid_ = new ::std::string;
  }
  return deviceid_;
}
inline ::std::string* CSQuickLoginMsg::release_deviceid() {
  clear_has_deviceid();
  if (deviceid_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = deviceid_;
    deviceid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSQuickLoginMsg::set_allocated_deviceid(::std::string* deviceid) {
  if (deviceid_ != &::google::protobuf::internal::kEmptyString) {
    delete deviceid_;
  }
  if (deviceid) {
    set_has_deviceid();
    deviceid_ = deviceid;
  } else {
    clear_has_deviceid();
    deviceid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cs
}  // namespace auto
}  // namespace msg
}  // namespace empire
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CS_2eCSQuickLoginMsg_2eproto__INCLUDED
