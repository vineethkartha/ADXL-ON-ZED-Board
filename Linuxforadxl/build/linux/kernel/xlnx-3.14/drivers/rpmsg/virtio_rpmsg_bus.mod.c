#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xaf25c634, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0xb3f5b0f5, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0x42bada45, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd9c53f1f, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x6995ac43, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x5516c624, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xa968c559, __VMLINUX_SYMBOL_STR(__idr_pre_get) },
	{ 0xc963e9ee, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb1abc154, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcd42959e, __VMLINUX_SYMBOL_STR(virtqueue_add_outbuf) },
	{ 0x13678492, __VMLINUX_SYMBOL_STR(debug_dma_free_coherent) },
	{ 0x93b68fae, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xaf8e8fef, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa818e07a, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xa7576099, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x99b575a8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x4a72c2c3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x84821abd, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaaedecf1, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc545ce21, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5be9efce, __VMLINUX_SYMBOL_STR(debug_dma_alloc_coherent) },
	{ 0x602972e5, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xb11abda3, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x6ef4c01, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xe827c5a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1978b125, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xfda0f736, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xc093e75, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x9e5fcb7a, __VMLINUX_SYMBOL_STR(__idr_get_new_above) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x71059181, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x21659a1a, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x62a2d802, __VMLINUX_SYMBOL_STR(__idr_remove_all) },
	{ 0xefe1a13f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x5ed24ca1, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x3ebdc56d, __VMLINUX_SYMBOL_STR(mutex_lock_nested) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xadcb92c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xa5d2de83, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4af2ab5d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf7090f1d, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xb64acdd1, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x595bf247, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0xa7f92105, __VMLINUX_SYMBOL_STR(add_uevent_var) },
	{ 0x74271568, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000007v*");
