/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "item.sc_types.h"

#include <algorithm>



const char* SCItemInfoMsg::ascii_fingerprint = "8184D1228B40CE0D49EC815C2A6473BB";
const uint8_t SCItemInfoMsg::binary_fingerprint[16] = {0x81,0x84,0xD1,0x22,0x8B,0x40,0xCE,0x0D,0x49,0xEC,0x81,0x5C,0x2A,0x64,0x73,0xBB};

uint32_t SCItemInfoMsg::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I16) {
          xfer += iprot->readI16(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->itemInfo.read(iprot);
          this->__isset.itemInfo = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t SCItemInfoMsg::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("SCItemInfoMsg");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_I16, 1);
  xfer += oprot->writeI16(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("itemInfo", ::apache::thrift::protocol::T_STRUCT, 2);
  xfer += this->itemInfo.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(SCItemInfoMsg &a, SCItemInfoMsg &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.itemInfo, b.itemInfo);
  swap(a.__isset, b.__isset);
}


