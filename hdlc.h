/* SPDX-License-Identifier: BSD-3-Clause */
#ifndef __HDLC_H__
#define __HDLC_H__

#include <stdint.h>
#include <stddef.h>

#define HDLC_FLAG	0x7E
#define HDLC_ESCAPE	0x7D
#define HDLC_XOR_MASK	0x20

uint16_t hdlc_crc16(uint16_t iv, const uint8_t *data, size_t len);

int hdlc_encode(const uint8_t *cmd, size_t cmd_len,
		uint8_t *out, size_t out_size);

int hdlc_decode(const uint8_t *frame, size_t frame_len,
		uint8_t *out, size_t out_size);

#endif
