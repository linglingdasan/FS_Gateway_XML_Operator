// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: head.proto

#ifndef PROTOBUF_head_2eproto__INCLUDED
#define PROTOBUF_head_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace nway_fs_opterator {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_head_2eproto();
void protobuf_AssignDesc_head_2eproto();
void protobuf_ShutdownFile_head_2eproto();

class MsgHead;

// ===================================================================

class MsgHead : public ::google::protobuf::Message {
 public:
  MsgHead();
  virtual ~MsgHead();

  MsgHead(const MsgHead& from);

  inline MsgHead& operator=(const MsgHead& from) {
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
  static const MsgHead& default_instance();

  void Swap(MsgHead* other);

  // implements Message ----------------------------------------------

  MsgHead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MsgHead& from);
  void MergeFrom(const MsgHead& from);
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

  // required int32 command = 1;
  inline bool has_command() const;
  inline void clear_command();
  static const int kCommandFieldNumber = 1;
  inline ::google::protobuf::int32 command() const;
  inline void set_command(::google::protobuf::int32 value);

  // required int32 nway_length = 2;
  inline bool has_nway_length() const;
  inline void clear_nway_length();
  static const int kNwayLengthFieldNumber = 2;
  inline ::google::protobuf::int32 nway_length() const;
  inline void set_nway_length(::google::protobuf::int32 value);

  // required int32 cmd_flag = 3;
  inline bool has_cmd_flag() const;
  inline void clear_cmd_flag();
  static const int kCmdFlagFieldNumber = 3;
  inline ::google::protobuf::int32 cmd_flag() const;
  inline void set_cmd_flag(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:nway_fs_opterator.MsgHead)
 private:
  inline void set_has_command();
  inline void clear_has_command();
  inline void set_has_nway_length();
  inline void clear_has_nway_length();
  inline void set_has_cmd_flag();
  inline void clear_has_cmd_flag();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 command_;
  ::google::protobuf::int32 nway_length_;
  ::google::protobuf::int32 cmd_flag_;
  friend void  protobuf_AddDesc_head_2eproto();
  friend void protobuf_AssignDesc_head_2eproto();
  friend void protobuf_ShutdownFile_head_2eproto();

  void InitAsDefaultInstance();
  static MsgHead* default_instance_;
};
// ===================================================================


// ===================================================================

// MsgHead

// required int32 command = 1;
inline bool MsgHead::has_command() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgHead::set_has_command() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgHead::clear_has_command() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgHead::clear_command() {
  command_ = 0;
  clear_has_command();
}
inline ::google::protobuf::int32 MsgHead::command() const {
  // @@protoc_insertion_point(field_get:nway_fs_opterator.MsgHead.command)
  return command_;
}
inline void MsgHead::set_command(::google::protobuf::int32 value) {
  set_has_command();
  command_ = value;
  // @@protoc_insertion_point(field_set:nway_fs_opterator.MsgHead.command)
}

// required int32 nway_length = 2;
inline bool MsgHead::has_nway_length() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MsgHead::set_has_nway_length() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MsgHead::clear_has_nway_length() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MsgHead::clear_nway_length() {
  nway_length_ = 0;
  clear_has_nway_length();
}
inline ::google::protobuf::int32 MsgHead::nway_length() const {
  // @@protoc_insertion_point(field_get:nway_fs_opterator.MsgHead.nway_length)
  return nway_length_;
}
inline void MsgHead::set_nway_length(::google::protobuf::int32 value) {
  set_has_nway_length();
  nway_length_ = value;
  // @@protoc_insertion_point(field_set:nway_fs_opterator.MsgHead.nway_length)
}

// required int32 cmd_flag = 3;
inline bool MsgHead::has_cmd_flag() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MsgHead::set_has_cmd_flag() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MsgHead::clear_has_cmd_flag() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MsgHead::clear_cmd_flag() {
  cmd_flag_ = 0;
  clear_has_cmd_flag();
}
inline ::google::protobuf::int32 MsgHead::cmd_flag() const {
  // @@protoc_insertion_point(field_get:nway_fs_opterator.MsgHead.cmd_flag)
  return cmd_flag_;
}
inline void MsgHead::set_cmd_flag(::google::protobuf::int32 value) {
  set_has_cmd_flag();
  cmd_flag_ = value;
  // @@protoc_insertion_point(field_set:nway_fs_opterator.MsgHead.cmd_flag)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace nway_fs_opterator

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_head_2eproto__INCLUDED
