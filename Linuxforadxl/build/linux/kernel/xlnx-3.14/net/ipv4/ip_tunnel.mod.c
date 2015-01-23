#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xaf25c634, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x52f6fd37, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3a52ee93, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0x9ffa3a75, __VMLINUX_SYMBOL_STR(netdev_max_backlog) },
	{ 0x1559601b, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x13e6379c, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x98a7a7b3, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x9d784a0d, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x4c8b4b4a, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0xbcbd3e60, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x6e1f527c, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x49272c2a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4a0e4bde, __VMLINUX_SYMBOL_STR(lock_release) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5a9d8c35, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfe096515, __VMLINUX_SYMBOL_STR(lock_acquire) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xf2e71fa6, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x950a895e, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xb837191a, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x86fcc4ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x76bc088e, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x7f7a6e01, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xa0786e6b, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xaddceef6, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x8585e7f4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x1e06d7c2, __VMLINUX_SYMBOL_STR(__raw_spin_lock_init) },
	{ 0xa8c1a883, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x2a9f31f8, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x1073afae, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x80b8b59, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf2a51fe0, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2d9d22a5, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x317c06a1, __VMLINUX_SYMBOL_STR(rcu_read_lock_bh_held) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xae0bd7af, __VMLINUX_SYMBOL_STR(lockdep_rcu_suspicious) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

