/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef item.sc_TYPES_H
#define item.sc_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include "struct_types.h"




typedef struct _SCItemInfoMsg__isset {
  _SCItemInfoMsg__isset() : id(false), itemInfo(false) {}
  bool id;
  bool itemInfo;
} _SCItemInfoMsg__isset;

class SCItemInfoMsg {
 public:

  static const char* ascii_fingerprint; // = "8184D1228B40CE0D49EC815C2A6473BB";
  static const uint8_t binary_fingerprint[16]; // = {0x81,0x84,0xD1,0x22,0x8B,0x40,0xCE,0x0D,0x49,0xEC,0x81,0x5C,0x2A,0x64,0x73,0xBB};

  SCItemInfoMsg() : id(0) {
  }

  virtual ~SCItemInfoMsg() throw() {}

  int16_t id;
   ::MallItem itemInfo;

  _SCItemInfoMsg__isset __isset;

  void __set_id(const int16_t val) {
    id = val;
  }

  void __set_itemInfo(const  ::MallItem& val) {
    itemInfo = val;
  }

  bool operator == (const SCItemInfoMsg & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(itemInfo == rhs.itemInfo))
      return false;
    return true;
  }
  bool operator != (const SCItemInfoMsg &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const SCItemInfoMsg & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(SCItemInfoMsg &a, SCItemInfoMsg &b);



#endif
