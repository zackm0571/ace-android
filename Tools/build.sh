#!/bin/bash
export ANDROID_MOST_RECENT_TARGET=android-22
export ANDROID_SDKS=android-22,sysimg-22 ANDROID_TARGET=android-22 ANDROID_ABI=armeabi-v7a ENABLE_GPL_THIRD_PARTIES=0 BUILD_VIDEO=1 BUILD_OPENH264=1 ENABLE_OPENH264_DECODER=1 BUILD_X264=0 BUILD_AMRNB=full BUILD_AMRWB=1 BUILD_ZRTP=1 BUILD_SILK=1 BUILD_G729=1 BUILD_TUNNEL=0 BUILD_WEBRTC_AECM=1 USE_JAVAH=1 BUILD_FOR_X86=1 BUILD_SQLITE=1 BUILD_TLS=1 BUILD_WEBRTC_ISAC=1 BUILD_OPUS=1 BUILD_UPNP=1 BUILD_MATROSKA=0 BUILD_ILBC=1 BUILD_VCARD=0
bundle install
./Tools/git_version.sh
make clean
make