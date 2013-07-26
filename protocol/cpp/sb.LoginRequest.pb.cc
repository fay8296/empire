// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sb.LoginRequest.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "sb.LoginRequest.pb.h"

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

namespace org {
namespace net {
namespace obj {

namespace {

const ::google::protobuf::Descriptor* LoginRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginRequest_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_sb_2eLoginRequest_2eproto() {
  protobuf_AddDesc_sb_2eLoginRequest_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "sb.LoginRequest.proto");
  GOOGLE_CHECK(file != NULL);
  LoginRequest_descriptor_ = file->message_type(0);
  static const int LoginRequest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, devicetype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, deviceid_),
  };
  LoginRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginRequest_descriptor_,
      LoginRequest::default_instance_,
      LoginRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginRequest));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_sb_2eLoginRequest_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginRequest_descriptor_, &LoginRequest::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_sb_2eLoginRequest_2eproto() {
  delete LoginRequest::default_instance_;
  delete LoginRequest_reflection_;
}

void protobuf_AddDesc_sb_2eLoginRequest_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025sb.LoginRequest.proto\022\013org.net.obj\"4\n\014"
    "LoginRequest\022\022\n\ndeviceType\030\001 \001(\005\022\020\n\010devi"
    "ceId\030\002 \001(\t", 90);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sb.LoginRequest.proto", &protobuf_RegisterTypes);
  LoginRequest::default_instance_ = new LoginRequest();
  LoginRequest::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_sb_2eLoginRequest_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_sb_2eLoginRequest_2eproto {
  StaticDescriptorInitializer_sb_2eLoginRequest_2eproto() {
    protobuf_AddDesc_sb_2eLoginRequest_2eproto();
  }
} static_descriptor_initializer_sb_2eLoginRequest_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LoginRequest::kDeviceTypeFieldNumber;
const int LoginRequest::kDeviceIdFieldNumber;
#endif  // !_MSC_VER

LoginRequest::LoginRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginRequest::InitAsDefaultInstance() {
}

LoginRequest::LoginRequest(const LoginRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginRequest::SharedCtor() {
  _cached_size_ = 0;
  devicetype_ = 0;
  deviceid_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginRequest::~LoginRequest() {
  SharedDtor();
}

void LoginRequest::SharedDtor() {
  if (deviceid_ != &::google::protobuf::internal::kEmptyString) {
    delete deviceid_;
  }
  if (this != default_instance_) {
  }
}

void LoginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginRequest_descriptor_;
}

const LoginRequest& LoginRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_sb_2eLoginRequest_2eproto();
  return *default_instance_;
}

LoginRequest* LoginRequest::default_instance_ = NULL;

LoginRequest* LoginRequest::New() const {
  return new LoginRequest;
}

void LoginRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    devicetype_ = 0;
    if (has_deviceid()) {
      if (deviceid_ != &::google::protobuf::internal::kEmptyString) {
        deviceid_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 deviceType = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &devicetype_)));
          set_has_devicetype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_deviceId;
        break;
      }

      // optional string deviceId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_deviceId:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deviceid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->deviceid().data(), this->deviceid().length(),
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

void LoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 deviceType = 1;
  if (has_devicetype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->devicetype(), output);
  }

  // optional string deviceId = 2;
  if (has_deviceid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->deviceid().data(), this->deviceid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->deviceid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 deviceType = 1;
  if (has_devicetype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->devicetype(), target);
  }

  // optional string deviceId = 2;
  if (has_deviceid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->deviceid().data(), this->deviceid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->deviceid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 deviceType = 1;
    if (has_devicetype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->devicetype());
    }

    // optional string deviceId = 2;
    if (has_deviceid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->deviceid());
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

void LoginRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginRequest::MergeFrom(const LoginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_devicetype()) {
      set_devicetype(from.devicetype());
    }
    if (from.has_deviceid()) {
      set_deviceid(from.deviceid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequest::IsInitialized() const {

  return true;
}

void LoginRequest::Swap(LoginRequest* other) {
  if (other != this) {
    std::swap(devicetype_, other->devicetype_);
    std::swap(deviceid_, other->deviceid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginRequest_descriptor_;
  metadata.reflection = LoginRequest_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace obj
}  // namespace net
}  // namespace org

// @@protoc_insertion_point(global_scope)
