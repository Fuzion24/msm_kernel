/*

SiI8620 Linux Driver

Copyright (C) 2013 Silicon Image, Inc.

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as
published by the Free Software Foundation version 2.
This program is distributed AS-IS WITHOUT ANY WARRANTY of any
kind, whether express or implied; INCLUDING without the implied warranty
of MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE or NON-INFRINGEMENT. See
the GNU General Public License for more details at http://www.gnu.org/licenses/gpl-2.0.html.

*/

#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xa5795c7e, "module_layout" },
	{ 0xa6f9402b, "cdev_del" },
	{ 0x5f9c11b1, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x2c131670, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x8a2d399a, "dev_set_drvdata" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x61edc46e, "i2c_del_driver" },
	{ 0x71a2fa6e, "hid_parse_report" },
	{ 0xf64478a, "hrtimer_cancel" },
	{ 0x14ede605, "i2c_transfer" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0x69fbff20, "down_interruptible" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x909bb86c, "device_destroy" },
	{ 0x33543801, "queue_work" },
	{ 0x432fd7f6, "__gpio_set_value" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xaa468c0c, "mutex_unlock" },
	{ 0x7485e15e, "unregister_chrdev_region" },
	{ 0x253b47eb, "sysfs_remove_group" },
	{ 0x343a1a8, "__list_add" },
	{ 0x5495392, "hid_debug" },
	{ 0x3bcbd4ec, "hid_input_report" },
	{ 0x27cc27f2, "hid_report_raw_event" },
	{ 0x8ae2f58b, "input_set_abs_params" },
	{ 0x26671324, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf9688cd7, "i2c_new_dummy" },
	{ 0xbc7b7a4f, "hidinput_connect" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x5f754e5a, "memset" },
	{ 0x4c5ab5f, "spi_busnum_to_master" },
	{ 0xa0bb8920, "dev_err" },
	{ 0x1ff3bf96, "down_trylock" },
	{ 0x27e1a049, "printk" },
	{ 0x94de5987, "sysfs_create_group" },
	{ 0xbe1a3a5d, "driver_unregister" },
	{ 0x328a05f1, "strncpy" },
	{ 0xe9ad904e, "spi_new_device" },
	{ 0xe0f6254a, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x521445b, "list_del" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x1e5df605, "device_create" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xbb6d3634, "i2c_unregister_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x73f22b1e, "kobject_uevent_env" },
	{ 0xd66846e5, "spi_sync" },
	{ 0xaa437058, "i2c_register_driver" },
	{ 0xf669dc95, "cdev_add" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x281c6f67, "put_device" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdb12abdf, "input_register_device" },
	{ 0x86a4889a, "kmalloc_order_trace" },
	{ 0x168fa128, "hrtimer_start" },
	{ 0x995205a3, "input_free_device" },
	{ 0x1366bccb, "sysfs_notify" },
	{ 0x882c5a9f, "hid_destroy_device" },
	{ 0x77ad701c, "kmem_cache_alloc_trace" },
	{ 0x6219cb9d, "hid_allocate_device" },
	{ 0x4f68e5c9, "do_gettimeofday" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x5a4f4563, "input_unregister_device" },
	{ 0xe9186739, "hrtimer_init" },
	{ 0x6c8d5ae8, "__gpio_get_value" },
	{ 0x35ab2035, "hidinput_disconnect" },
	{ 0xe1766a60, "up" },
	{ 0xf9e73082, "scnprintf" },
	{ 0xaec14426, "class_destroy" },
	{ 0x951fdb35, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb81960ca, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x86bce515, "spi_register_driver" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x55a9834b, "i2c_get_adapter" },
	{ 0x795c6759, "__class_create" },
	{ 0x221308b8, "i2c_new_device" },
	{ 0x8bd8b437, "dev_get_drvdata" },
	{ 0x49d9fb1e, "down_timeout" },
	{ 0x29537c9e, "alloc_chrdev_region" },
	{ 0xa43b1297, "vscnprintf" },
	{ 0x4dec6038, "memscan" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x66a5c1d, "input_allocate_device" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sii-8620");
