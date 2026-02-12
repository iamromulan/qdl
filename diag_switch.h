/* SPDX-License-Identifier: BSD-3-Clause */
#ifndef __DIAG_SWITCH_H__
#define __DIAG_SWITCH_H__

#include <stdbool.h>
#include "usb_ids.h"

/**
 * diag_switch_to_edl() - Attempt to switch a DIAG device to EDL mode
 * @serial: Optional serial number filter (NULL for any device)
 *
 * Scans for Qualcomm devices in DIAG mode, finds the DIAG serial port,
 * sends the EDL switch command, and waits for the device to acknowledge.
 *
 * Returns: 0 on success (EDL command sent and acknowledged)
 *          -1 on failure (no device found or switch failed)
 */
int diag_switch_to_edl(const char *serial);

/**
 * diag_is_device_in_diag_mode() - Check if any supported device is in DIAG mode
 * @serial: Optional serial number filter (NULL for any device)
 *
 * Returns: true if a DIAG-mode device is detected
 */
bool diag_is_device_in_diag_mode(const char *serial);

#endif /* __DIAG_SWITCH_H__ */
