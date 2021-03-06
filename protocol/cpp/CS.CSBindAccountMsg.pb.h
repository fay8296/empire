// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CS.CSBindAccountMsg.proto

#ifndef PROTOBUF_CS_2eCSBindAccountMsg_2eproto__INCLUDED
#define PROTOBUF_CS_2eCSBindAccountMsg_2eproto__INCLUDED

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
void  protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto();
void protobuf_AssignDesc_CS_2eCSBindAccountMsg_2eproto();
void protobuf_ShutdownFile_CS_2eCSBindAccountMsg_2eproto();

class CSBindAccountMsg;

// ===================================================================

class CSBindAccountMsg : public ::google::protobuf::Message {
 public:
  CSBindAccountMsg();
  virtual ~CSBindAccountMsg();

  CSBindAccountMsg(const CSBindAccountMsg& from);

  inline CSBindAccountMsg& operator=(const CSBindAccountMsg& from) {
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
  static const CSBindAccountMsg& default_instance();

  void Swap(CSBindAccountMsg* other);

  // implements Message ----------------------------------------------

  CSBindAccountMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CSBindAccountMsg& from);
  void MergeFrom(const CSBindAccountMsg& from);
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

  // optional string accountName = 1;
  inline bool has_accountname() const;
  inline void clear_accountname();
  static const int kAccountNameFieldNumber = 1;
  inline const ::std::string& accountname() const;
  inline void set_accountname(const ::std::string& value);
  inline void set_accountname(const char* value);
  inline void set_accountname(const char* value, size_t size);
  inline ::std::string* mutable_accountname();
  inline ::std::string* release_accountname();
  inline void set_allocated_accountname(::std::string* accountname);

  // optional string passwd = 2;
  inline bool has_passwd() const;
  inline void clear_passwd();
  static const int kPasswdFieldNumber = 2;
  inline const ::std::string& passwd() const;
  inline void set_passwd(const ::std::string& value);
  inline void set_passwd(const char* value);
  inline void set_passwd(const char* value, size_t size);
  inline ::std::string* mutable_passwd();
  inline ::std::string* release_passwd();
  inline void set_allocated_passwd(::std::string* passwd);

  // @@protoc_insertion_point(class_scope:com.empire.msg.auto.cs.CSBindAccountMsg)
 private:
  inline void set_has_accountname();
  inline void clear_has_accountname();
  inline void set_has_passwd();
  inline void clear_has_passwd();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* accountname_;
  ::std::string* passwd_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto();
  friend void protobuf_AssignDesc_CS_2eCSBindAccountMsg_2eproto();
  friend void protobuf_ShutdownFile_CS_2eCSBindAccountMsg_2eproto();

  void InitAsDefaultInstance();
  static CSBindAccountMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// CSBindAccountMsg

// optional string accountName = 1;
inline bool CSBindAccountMsg::has_accountname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CSBindAccountMsg::set_has_accountname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CSBindAccountMsg::clear_has_accountname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CSBindAccountMsg::clear_accountname() {
  if (accountname_ != &::google::protobuf::internal::kEmptyString) {
    accountname_->clear();
  }
  clear_has_accountname();
}
inline const ::std::string& CSBindAccountMsg::accountname() const {
  return *accountname_;
}
inline void CSBindAccountMsg::set_accountname(const ::std::string& value) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::kEmptyString) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(value);
}
inline void CSBindAccountMsg::set_accountname(const char* value) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::kEmptyString) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(value);
}
inline void CSBindAccountMsg::set_accountname(const char* value, size_t size) {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::kEmptyString) {
    accountname_ = new ::std::string;
  }
  accountname_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSBindAccountMsg::mutable_accountname() {
  set_has_accountname();
  if (accountname_ == &::google::protobuf::internal::kEmptyString) {
    accountname_ = new ::std::string;
  }
  return accountname_;
}
inline ::std::string* CSBindAccountMsg::release_accountname() {
  clear_has_accountname();
  if (accountname_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = accountname_;
    accountname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSBindAccountMsg::set_allocated_accountname(::std::string* accountname) {
  if (accountname_ != &::google::protobuf::internal::kEmptyString) {
    delete accountname_;
  }
  if (accountname) {
    set_has_accountname();
    accountname_ = accountname;
  } else {
    clear_has_accountname();
    accountname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string passwd = 2;
inline bool CSBindAccountMsg::has_passwd() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CSBindAccountMsg::set_has_passwd() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CSBindAccountMsg::clear_has_passwd() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CSBindAccountMsg::clear_passwd() {
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    passwd_->clear();
  }
  clear_has_passwd();
}
inline const ::std::string& CSBindAccountMsg::passwd() const {
  return *passwd_;
}
inline void CSBindAccountMsg::set_passwd(const ::std::string& value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
}
inline void CSBindAccountMsg::set_passwd(const char* value) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(value);
}
inline void CSBindAccountMsg::set_passwd(const char* value, size_t size) {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  passwd_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CSBindAccountMsg::mutable_passwd() {
  set_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    passwd_ = new ::std::string;
  }
  return passwd_;
}
inline ::std::string* CSBindAccountMsg::release_passwd() {
  clear_has_passwd();
  if (passwd_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = passwd_;
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CSBindAccountMsg::set_allocated_passwd(::std::string* passwd) {
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    delete passwd_;
  }
  if (passwd) {
    set_has_passwd();
    passwd_ = passwd;
  } else {
    clear_has_passwd();
    passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
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

#endif  // PROTOBUF_CS_2eCSBindAccountMsg_2eproto__INCLUDED
