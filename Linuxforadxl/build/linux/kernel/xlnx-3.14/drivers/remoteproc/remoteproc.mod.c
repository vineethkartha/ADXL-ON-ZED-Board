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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0x1472c520, __VMLINUX_SYMBOL_STR(vring_del_virtqueue) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x99dab316, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x88c9bc52, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd9c53f1f, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x431d9591, __VMLINUX_SYMBOL_STR(register_virtio_device) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc963e9ee, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc903d815, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x3ed2aa21, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x6a96ac82, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x13678492, __VMLINUX_SYMBOL_STR(debug_dma_free_coherent) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbaaea192, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xaf8e8fef, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9e34fa8c, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa818e07a, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x618a0095, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x99b575a8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x4a72c2c3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6127058d, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x9283def, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x5be9efce, __VMLINUX_SYMBOL_STR(debug_dma_alloc_coherent) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x602972e5, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x60b898b9, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x80d35356, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x707fb391, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe609f470, __VMLINUX_SYMBOL_STR(unregister_virtio_device) },
	{ 0x6ef4c01, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xaa549422, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7fe62bc3, __VMLINUX_SYMBOL_STR(vring_new_virtqueue) },
	{ 0xe827c5a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x1978b125, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xc093e75, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xff05fa13, __VMLINUX_SYMBOL_STR(vring_interrupt) },
	{ 0x716265c7, __VMLINUX_SYMBOL_STR(debugfs_initialized) },
	{ 0x71059181, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x42f96389, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x3ebdc56d, __VMLINUX_SYMBOL_STR(mutex_lock_nested) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xeee34c32, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0xe93c2b3b, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa5d2de83, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x940981ab, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible_nested) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xc0fa0d21, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf7090f1d, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xb64acdd1, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x2a3c76e0, __VMLINUX_SYMBOL_STR(vring_transport_features) },
	{ 0x1a4a684d, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0xb783b672, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio_ring,virtio";

