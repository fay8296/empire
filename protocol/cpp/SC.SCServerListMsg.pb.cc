// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SC.SCServerListMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SC.SCServerListMsg.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace empire {
namespace msg {
namespace sc {

namespace {

const ::google::protobuf::Descriptor* SCServerListMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SCServerListMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SC_2eSCServerListMsg_2eproto() {
  protobuf_AddDesc_SC_2eSCServerListMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SC.SCServerListMsg.proto");
  GOOGLE_CHECK(file != NULL);
  SCServerListMsg_descriptor_ = file->message_type(0);
  static const int SCServerListMsg_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCServerListMsg, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCServerListMsg, serverinfos_),
  };
  SCServerListMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SCServerListMsg_descriptor_,
      SCServerListMsg::default_instance_,
      SCServerListMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCServerListMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SCServerListMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SCServerListMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SC_2eSCServerListMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SCServerListMsg_descriptor_, &SCServerListMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SC_2eSCServerListMsg_2eproto() {
  delete SCServerListMsg::default_instance_;
  delete SCServerListMsg_reflection_;
}

void protobuf_AddDesc_SC_2eSCServerListMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::empire::msg::protobuf_AddDesc_struct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030SC.SCServerListMsg.proto\022\021com.empire.m"
    "sg.sc\032\014struct.proto\"N\n\017SCServerListMsg\022\n"
    "\n\002id\030\001 \001(\005\022/\n\013serverInfos\030\002 \003(\0132\032.com.em"
    "pire.msg.ServerInfo", 139);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SC.SCServerListMsg.proto", &protobuf_RegisterTypes);
  SCServerListMsg::default_instance_ = new SCServerListMsg();
  SCServerListMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SC_2eSCServerListMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SC_2eSCServerListMsg_2eproto {
  StaticDescriptorInitializer_SC_2eSCServerListMsg_2eproto() {
    protobuf_AddDesc_SC_2eSCServerListMsg_2eproto();
  }
} static_descriptor_initializer_SC_2eSCServerListMsg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SCServerListMsg::kIdFieldNumber;
const int SCServerListMsg::kServerInfosFieldNumber;
#endif  // !_MSC_VER

SCServerListMsg::SCServerListMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SCServerListMsg::InitAsDefaultInstance() {
}

SCServerListMsg::SCServerListMsg(const SCServerListMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SCServerListMsg::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SCServerListMsg::~SCServerListMsg() {
  SharedDtor();
}

void SCServerListMsg::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SCServerListMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SCServerListMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SCServerListMsg_descriptor_;
}

const SCServerListMsg& SCServerListMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SC_2eSCServerListMsg_2eproto();
  return *default_instance_;
}

SCServerListMsg* SCServerListMsg::default_instance_ = NULL;

SCServerListMsg* SCServerListMsg::New() const {
  return new SCServerListMsg;
}

void SCServerListMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  serverinfos_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SCServerListMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_serverInfos;
        break;
      }

      // repeated .com.empire.msg.ServerInfo serverInfos = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_serverInfos:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_serverinfos()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_serverInfos;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SCServerListMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // repeated .com.empire.msg.ServerInfo serverInfos = 2;
  for (int i = 0; i < this->serverinfos_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->serverinfos(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SCServerListMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // repeated .com.empire.msg.ServerInfo serverInfos = 2;
  for (int i = 0; i < this->serverinfos_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->serverinfos(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SCServerListMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  // repeated .com.empire.msg.ServerInfo serverInfos = 2;
  total_size += 1 * this->serverinfos_size();
  for (int i = 0; i < this->serverinfos_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->serverinfos(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SCServerListMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SCServerListMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SCServerListMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SCServerListMsg::MergeFrom(const SCServerListMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  serverinfos_.MergeFrom(from.serverinfos_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SCServerListMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SCServerListMsg::CopyFrom(const SCServerListMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SCServerListMsg::IsInitialized() const {

  return true;
}

void SCServerListMsg::Swap(SCServerListMsg* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    serverinfos_.Swap(&other->serverinfos_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SCServerListMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SCServerListMsg_descriptor_;
  metadata.reflection = SCServerListMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sc
}  // namespace msg
}  // namespace empire
}  // namespace com

// @@protoc_insertion_point(global_scope)
