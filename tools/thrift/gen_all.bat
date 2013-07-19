@echo off

rd /s /q gen-cpp
rd /s /q gen-java

FOR %%e IN (*.thrift) DO (
  echo gen java %%e
  call thrift-0.9.0.exe --gen java %%e

  echo gen cpp %%e
  call thrift-0.9.0.exe --gen cpp %%e
)
pause