@echo off

rd /s /q cpp
rd /s /q java
mkdir cpp
mkdir java

cd msg
set proto_file=struct.proto

FOR %%e IN (%proto_file%) DO (
  echo gen java %%e
  call protoc --java_out=../java %%e

  echo gen cpp %%e
  call protoc  --cpp_out=../cpp %%e
)

pause