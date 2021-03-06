// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: boat.cs.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "boat.cs.pb.h"

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
namespace auto {
namespace cs {

namespace {

const ::google::protobuf::Descriptor* CSQueryBoatInfoMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CSQueryBoatInfoMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_boat_2ecs_2eproto() {
  protobuf_AddDesc_boat_2ecs_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "boat.cs.proto");
  GOOGLE_CHECK(file != NULL);
  CSQueryBoatInfoMsg_descriptor_ = file->message_type(0);
  static const int CSQueryBoatInfoMsg_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSQueryBoatInfoMsg, boatid_),
  };
  CSQueryBoatInfoMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CSQueryBoatInfoMsg_descriptor_,
      CSQueryBoatInfoMsg::default_instance_,
      CSQueryBoatInfoMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSQueryBoatInfoMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSQueryBoatInfoMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CSQueryBoatInfoMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_boat_2ecs_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CSQueryBoatInfoMsg_descriptor_, &CSQueryBoatInfoMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_boat_2ecs_2eproto() {
  delete CSQueryBoatInfoMsg::default_instance_;
  delete CSQueryBoatInfoMsg_reflection_;
}

void protobuf_AddDesc_boat_2ecs_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rboat.cs.proto\022\026com.empire.msg.auto.cs\""
    "$\n\022CSQueryBoatInfoMsg\022\016\n\006boatId\030\001 \001(\t", 77);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "boat.cs.proto", &protobuf_RegisterTypes);
  CSQueryBoatInfoMsg::default_instance_ = new CSQueryBoatInfoMsg();
  CSQueryBoatInfoMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_boat_2ecs_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_boat_2ecs_2eproto {
  StaticDescriptorInitializer_boat_2ecs_2eproto() {
    protobuf_AddDesc_boat_2ecs_2eproto();
  }
} static_descriptor_initializer_boat_2ecs_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CSQueryBoatInfoMsg::kBoatIdFieldNumber;
#endif  // !_MSC_VER

CSQueryBoatInfoMsg::CSQueryBoatInfoMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CSQueryBoatInfoMsg::InitAsDefaultInstance() {
}

CSQueryBoatInfoMsg::CSQueryBoatInfoMsg(const CSQueryBoatInfoMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CSQueryBoatInfoMsg::SharedCtor() {
  _cached_size_ = 0;
  boatid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSQueryBoatInfoMsg::~CSQueryBoatInfoMsg() {
  SharedDtor();
}

void CSQueryBoatInfoMsg::SharedDtor() {
  if (boatid_ != &::google::protobuf::internal::kEmptyString) {
    delete boatid_;
  }
  if (this != default_instance_) {
  }
}

void CSQueryBoatInfoMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSQueryBoatInfoMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CSQueryBoatInfoMsg_descriptor_;
}

const CSQueryBoatInfoMsg& CSQueryBoatInfoMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_boat_2ecs_2eproto();
  return *default_instance_;
}

CSQueryBoatInfoMsg* CSQueryBoatInfoMsg::default_instance_ = NULL;

CSQueryBoatInfoMsg* CSQueryBoatInfoMsg::New() const {
  return new CSQueryBoatInfoMsg;
}

void CSQueryBoatInfoMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_boatid()) {
      if (boatid_ != &::google::protobuf::internal::kEmptyString) {
        boatid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CSQueryBoatInfoMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string boatId = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_boatid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->boatid().data(), this->boatid().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
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

void CSQueryBoatInfoMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string boatId = 1;
  if (has_boatid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->boatid().data(), this->boatid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->boatid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CSQueryBoatInfoMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string boatId = 1;
  if (has_boatid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->boatid().data(), this->boatid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->boatid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CSQueryBoatInfoMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string boatId = 1;
    if (has_boatid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->boatid());
    }

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

void CSQueryBoatInfoMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CSQueryBoatInfoMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CSQueryBoatInfoMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CSQueryBoatInfoMsg::MergeFrom(const CSQueryBoatInfoMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_boatid()) {
      set_boatid(from.boatid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSQueryBoatInfoMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CSQueryBoatInfoMsg::CopyFrom(const CSQueryBoatInfoMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CSQueryBoatInfoMsg::IsInitialized() const {

  return true;
}

void CSQueryBoatInfoMsg::Swap(CSQueryBoatInfoMsg* other) {
  if (other != this) {
    std::swap(boatid_, other->boatid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CSQueryBoatInfoMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CSQueryBoatInfoMsg_descriptor_;
  metadata.reflection = CSQueryBoatInfoMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cs
}  // namespace auto
}  // namespace msg
}  // namespace empire
}  // namespace com

// @@protoc_insertion_point(global_scope)
