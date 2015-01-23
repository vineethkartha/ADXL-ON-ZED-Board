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
	{ 0x52f6fd37, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe0dcf11b, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xea647280, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2f74d006, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x4553c46a, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x6a20e955, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xc82b715, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8532940f, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x5a780802, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0x9bfe5577, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x5715f0f9, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x985e9d78, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xa17d4aee, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7e31908e, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x3c2a6f36, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x1f4d1770, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xfa2dc05f, __VMLINUX_SYMBOL_STR(lockdep_rtnl_is_held) },
	{ 0x5a2b88a7, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x2f1ba2e5, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0xd9b16dc8, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xa7987c1c, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x7dd12636, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0x4a0e4bde, __VMLINUX_SYMBOL_STR(lock_release) },
	{ 0x1c328231, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfe096515, __VMLINUX_SYMBOL_STR(lock_acquire) },
	{ 0x8b9deb23, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3ef7e079, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xf15aa1cd, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xf2e71fa6, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9715d279, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x612ead71, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf31b54a7, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e957f26, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x87df7729, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x6c9397e0, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x86fcc4ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4e6e3b29, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x76bc088e, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6e835f67, __VMLINUX_SYMBOL_STR(arp_find) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xe47b29ad, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x8585e7f4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1ba44a86, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x603feaee, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xddbbfaaf, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x60c756cd, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x357e01c, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf2a51fe0, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6ed0cbab, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xd0d97a9e, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2373ce82, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xd395961, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9e8c79b0, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xac31d6be, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x8e06606e, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x1b6a52fb, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0x6acf2e99, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaf247e3, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x6a9f6ed9, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x8bb787a3, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xb15ec1d9, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xae0bd7af, __VMLINUX_SYMBOL_STR(lockdep_rcu_suspicious) },
	{ 0x9a10550b, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E1C57C491A0C9A47850139E");
