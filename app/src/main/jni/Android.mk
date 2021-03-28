LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_FILES = ./com_example_mp3encoder_Mp3EncoderTest.cpp ./mp3_encoder.cpp
LOCAL_C_INCLUDES := \
		$(LOCAL_PATH)/include
LOCAL_LDLIBS := -L$(SYSROOT)/usr/lib -L$(LOCAL_PATH)/3rdparty/lame/lib/x86 -llog -llame
LOCAL_MODULE := libaudioencoder
include $(BUILD_SHARED_LIBRARY)