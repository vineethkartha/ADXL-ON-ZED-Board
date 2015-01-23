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
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x554fd13c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x8e06606e, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xd3331f46, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x53a9ba05, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc3901ba0, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x93d850fc, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x4e6e3b29, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x7e841e28, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0x49272c2a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xbcbd3e60, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x265a6d3f, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x865237ae, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x9fc77d1b, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaf6f24e2, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4e4d651d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x77150d29, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x6652d6ef, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xf661ac16, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x2c67170, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0xa2313eea, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x534dcf41, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaddceef6, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x950a895e, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xc8257f56, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x64ebb558, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x3a52ee93, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4c8b4b4a, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x317c06a1, __VMLINUX_SYMBOL_STR(rcu_read_lock_bh_held) },
	{ 0x624ae3a1, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xc9968bcf, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xfac7cdd2, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2beb418e, __VMLINUX_SYMBOL_STR(might_fault) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{        0, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1073afae, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x78f284c1, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x8585e7f4, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf2e71fa6, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x52f6fd37, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x76bc088e, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x98a7a7b3, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2d9d22a5, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfa2dc05f, __VMLINUX_SYMBOL_STR(lockdep_rtnl_is_held) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x86fcc4ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0xf2a51fe0, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x4a0e4bde, __VMLINUX_SYMBOL_STR(lock_release) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0xae0bd7af, __VMLINUX_SYMBOL_STR(lockdep_rcu_suspicious) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0xfe096515, __VMLINUX_SYMBOL_STR(lock_acquire) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x9715d279, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel4,ipv6,ip_tunnel";

