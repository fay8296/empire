@echo off

rd /s /q cpp
rd /s /q java
mkdir cpp
mkdir java

cd msg
FOR %%e IN (*.proto) DO (
  echo gen java %%e
  call protoc --java_out=../java %%e

  echo gen cpp %%e
  call protoc  --cpp_out=../cpp %%e
)
pause