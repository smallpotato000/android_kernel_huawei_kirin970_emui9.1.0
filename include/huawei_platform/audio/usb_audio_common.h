/*
 * usb_audio_common.h -- usb audio common driver
 *
 * Copyright (c) 2015 Huawei Technologies CO., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __USB_AUDIO_COMMON_H__
#define __USB_AUDIO_COMMON_H__

#define ENVP_LENTH           (10)

#define IOCTL_USB_AUDIO_COMMON_GET_TYPEC_STATE               _IOR('N', 0x01, __u32)

#endif //__USB_AUDIO_COMMON_H__