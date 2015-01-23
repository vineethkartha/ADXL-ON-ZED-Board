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
	{ 0x7d085c04, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7d4c7a0, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0x3499b24f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x9aac2bb9, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xb1ea0d00, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xe72c65e6, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xb25cc97c, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xc963e9ee, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xcdd4748c, __VMLINUX_SYMBOL_STR(rpmsg_send_offchannel_raw) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x9ffb2091, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc4e06af4, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xa2a3db24, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x99b575a8, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xac6c22ce, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x1c34a7f7, __VMLINUX_SYMBOL_STR(unregister_rpmsg_driver) },
	{ 0xdc613e0, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x264f9ae2, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xe53ecfcd, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5d5b5a16, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x995a15db, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x3d01fe27, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x862f831f, __VMLINUX_SYMBOL_STR(register_rpmsg_driver) },
	{        0, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xaddceef6, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x573fd7dc, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xfface61c, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x6b582ce1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x5872dbf7, __VMLINUX_SYMBOL_STR(get_virtproc_id) },
	{ 0x3ebdc56d, __VMLINUX_SYMBOL_STR(mutex_lock_nested) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x9fb3dd30, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x864b861, __VMLINUX_SYMBOL_STR(rpmsg_create_channel) },
	{ 0x870bf928, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xa5d2de83, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4af2ab5d, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7da3e67b, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf202c5cb, __VMLINUX_SYMBOL_STR(radix_tree_insert) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0x2feac944, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio_rpmsg_bus";

