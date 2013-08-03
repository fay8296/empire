// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SC.SCServerListMsg.proto

#ifndef PROTOBUF_SC_2eSCServerListMsg_2eproto__INCLUDED
#define PROTOBUF_SC_2eSCServerListMsg_2eproto__INCLUDED

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
namespace sc {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_SC_2eSCServerListMsg_2eproto();
void protobuf_AssignDesc_SC_2eSCServerListMsg_2eproto();
void protobuf_ShutdownFile_SC_2eSCServerListMsg_2eproto();

class SCServerListMsg;

// ===================================================================

class SCServerListMsg : public ::google::protobuf::Message {
 public:
  SCServerListMsg();
  virtual ~SCServerListMsg();

  SCServerListMsg(const SCServerListMsg& from);

  inline SCServerListMsg& operator=(const SCServerListMsg& from) {
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
  static const SCServerListMsg& default_instance();

  void Swap(SCServerListMsg* other);

  // implements Message ----------------------------------------------

  SCServerListMsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SCServerListMsg& from);
  void MergeFrom(const SCServerListMsg& from);
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

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // repeated .com.empire.msg.ServerInfo serverInfos = 2;
  inline int serverinfos_size() const;
  inline void clear_serverinfos();
  static const int kServerInfosFieldNumber = 2;
  inline const ::com::empire::msg::ServerInfo& serverinfos(int index) const;
  inline ::com::empire::msg::ServerInfo* mutable_serverinfos(int index);
  inline ::com::empire::msg::ServerInfo* add_serverinfos();
  inline const ::google::protobuf::RepeatedPtrField< ::com::empire::msg::ServerInfo >&
      serverinfos() const;
  inline ::google::protobuf::RepeatedPtrField< ::com::empire::msg::ServerInfo >*
      mutable_serverinfos();

  // @@protoc_insertion_point(class_scope:com.empire.msg.sc.SCServerListMsg)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::com::empire::msg::ServerInfo > serverinfos_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_SC_2eSCServerListMsg_2eproto();
  friend void protobuf_AssignDesc_SC_2eSCServerListMsg_2eproto();
  friend void protobuf_ShutdownFile_SC_2eSCServerListMsg_2eproto();

  void InitAsDefaultInstance();
  static SCServerListMsg* default_instance_;
};
// ===================================================================


// ===================================================================

// SCServerListMsg

// optional int32 id = 1;
inline bool SCServerListMsg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SCServerListMsg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SCServerListMsg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SCServerListMsg::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 SCServerListMsg::id() const {
  return id_;
}
inline void SCServerListMsg::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// repeated .com.empire.msg.ServerInfo serverInfos = 2;
inline int SCServerListMsg::serverinfos_size() const {
  return serverinfos_.size();
}
inline void SCServerListMsg::clear_serverinfos() {
  serverinfos_.Clear();
}
inline const ::com::empire::msg::ServerInfo& SCServerListMsg::serverinfos(int index) const {
  return serverinfos_.Get(index);
}
inline ::com::empire::msg::ServerInfo* SCServerListMsg::mutable_serverinfos(int index) {
  return serverinfos_.Mutable(index);
}
inline ::com::empire::msg::ServerInfo* SCServerListMsg::add_serverinfos() {
  return serverinfos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::com::empire::msg::ServerInfo >&
SCServerListMsg::serverinfos() const {
  return serverinfos_;
}
inline ::google::protobuf::RepeatedPtrField< ::com::empire::msg::ServerInfo >*
SCServerListMsg::mutable_serverinfos() {
  return &serverinfos_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sc
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

#endif  // PROTOBUF_SC_2eSCServerListMsg_2eproto__INCLUDED
