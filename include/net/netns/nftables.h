/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _NETNS_NFTABLES_H_
#define _NETNS_NFTABLES_H_

#include <linux/list.h>
#include <linux/android_kabi.h>

struct netns_nftables {
	u8			gencursor;
<<<<<<< HEAD
	u8			validate_state;

	ANDROID_KABI_RESERVE(1);
=======
>>>>>>> v5.10.209
};

#endif
