package com;

import java.io.InputStream;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

import org.net.MessageFactory;

import com.google.protobuf.InvalidProtocolBufferException;

public class Test {

	/**
	 * @param args
	 * @throws InvalidProtocolBufferException 
	 */
	public static void main(String[] args) throws InvalidProtocolBufferException {
		// TODO Auto-generated method stub
//		LoginRequest.Builder a=LoginRequest.newBuilder();
		try{
			ServerSocket so=new ServerSocket(21212);
			Socket sock=so.accept();
			
			InputStream in=sock.getInputStream();
			OutputStream out=sock.getOutputStream();
			byte[] buf=new byte[1024];
			in.read(buf);
			MessageFactory.shareMessageFactory().parseMsg(buf);
			
		}
		catch(Exception e)
		{
			e.printStackTrace();
		}
	}

}
