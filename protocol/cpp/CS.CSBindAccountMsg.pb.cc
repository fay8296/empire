// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CS.CSBindAccountMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CS.CSBindAccountMsg.pb.h"

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
namespace cs {

namespace {

const ::google::protobuf::Descriptor* CSBindAccountMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CSBindAccountMsg_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CS_2eCSBindAccountMsg_2eproto() {
  protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CS.CSBindAccountMsg.proto");
  GOOGLE_CHECK(file != NULL);
  CSBindAccountMsg_descriptor_ = file->message_type(0);
  static const int CSBindAccountMsg_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSBindAccountMsg, accountname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSBindAccountMsg, passwd_),
  };
  CSBindAccountMsg_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CSBindAccountMsg_descriptor_,
      CSBindAccountMsg::default_instance_,
      CSBindAccountMsg_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSBindAccountMsg, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CSBindAccountMsg, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CSBindAccountMsg));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CS_2eCSBindAccountMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CSBindAccountMsg_descriptor_, &CSBindAccountMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CS_2eCSBindAccountMsg_2eproto() {
  delete CSBindAccountMsg::default_instance_;
  delete CSBindAccountMsg_reflection_;
}

void protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::empire::msg::protobuf_AddDesc_struct_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031CS.CSBindAccountMsg.proto\022\021com.empire."
    "msg.cs\032\014struct.proto\"7\n\020CSBindAccountMsg"
    "\022\023\n\013accountName\030\001 \001(\t\022\016\n\006passwd\030\002 \001(\t", 117);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CS.CSBindAccountMsg.proto", &protobuf_RegisterTypes);
  CSBindAccountMsg::default_instance_ = new CSBindAccountMsg();
  CSBindAccountMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CS_2eCSBindAccountMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CS_2eCSBindAccountMsg_2eproto {
  StaticDescriptorInitializer_CS_2eCSBindAccountMsg_2eproto() {
    protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto();
  }
} static_descriptor_initializer_CS_2eCSBindAccountMsg_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CSBindAccountMsg::kAccountNameFieldNumber;
const int CSBindAccountMsg::kPasswdFieldNumber;
#endif  // !_MSC_VER

CSBindAccountMsg::CSBindAccountMsg()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CSBindAccountMsg::InitAsDefaultInstance() {
}

CSBindAccountMsg::CSBindAccountMsg(const CSBindAccountMsg& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CSBindAccountMsg::SharedCtor() {
  _cached_size_ = 0;
  accountname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  passwd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CSBindAccountMsg::~CSBindAccountMsg() {
  SharedDtor();
}

void CSBindAccountMsg::SharedDtor() {
  if (accountname_ != &::google::protobuf::internal::kEmptyString) {
    delete accountname_;
  }
  if (passwd_ != &::google::protobuf::internal::kEmptyString) {
    delete passwd_;
  }
  if (this != default_instance_) {
  }
}

void CSBindAccountMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CSBindAccountMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CSBindAccountMsg_descriptor_;
}

const CSBindAccountMsg& CSBindAccountMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_CS_2eCSBindAccountMsg_2eproto();
  return *default_instance_;
}

CSBindAccountMsg* CSBindAccountMsg::default_instance_ = NULL;

CSBindAccountMsg* CSBindAccountMsg::New() const {
  return new CSBindAccountMsg;
}

void CSBindAccountMsg::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_accountname()) {
      if (accountname_ != &::google::protobuf::internal::kEmptyString) {
        accountname_->clear();
      }
    }
    if (has_passwd()) {
      if (passwd_ != &::google::protobuf::internal::kEmptyString) {
        passwd_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CSBindAccountMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string accountName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_accountname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->accountname().data(), this->accountname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_passwd;
        break;
      }

      // optional string passwd = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_passwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_passwd()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->passwd().data(), this->passwd().length(),
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

void CSBindAccountMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string accountName = 1;
  if (has_accountname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->accountname().data(), this->accountname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->accountname(), output);
  }

  // optional string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->passwd(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CSBindAccountMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string accountName = 1;
  if (has_accountname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->accountname().data(), this->accountname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->accountname(), target);
  }

  // optional string passwd = 2;
  if (has_passwd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->passwd(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CSBindAccountMsg::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string accountName = 1;
    if (has_accountname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->accountname());
    }

    // optional string passwd = 2;
    if (has_passwd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->passwd());
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

void CSBindAccountMsg::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CSBindAccountMsg* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CSBindAccountMsg*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CSBindAccountMsg::MergeFrom(const CSBindAccountMsg& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_accountname()) {
      set_accountname(from.accountname());
    }
    if (from.has_passwd()) {
      set_passwd(from.passwd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CSBindAccountMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CSBindAccountMsg::CopyFrom(const CSBindAccountMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CSBindAccountMsg::IsInitialized() const {

  return true;
}

void CSBindAccountMsg::Swap(CSBindAccountMsg* other) {
  if (other != this) {
    std::swap(accountname_, other->accountname_);
    std::swap(passwd_, other->passwd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CSBindAccountMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CSBindAccountMsg_descriptor_;
  metadata.reflection = CSBindAccountMsg_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cs
}  // namespace msg
}  // namespace empire
}  // namespace com

// @@protoc_insertion_point(global_scope)
