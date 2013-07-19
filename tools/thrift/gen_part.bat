@echo off

rd /s /q gen-cpp
rd /s /q gen-java

set thrift_file=struct.thrift;item.sc.thrift;item.cs.thrift

FOR %%e IN (%thrift_file%) DO (
  echo gen java %%e
  call thrift-0.9.0.exe --gen java %%e

  echo gen cpp %%e
  call thrift-0.9.0.exe --gen cpp %%e
)

pause