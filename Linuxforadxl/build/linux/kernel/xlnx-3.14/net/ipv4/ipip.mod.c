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
	{ 0x48f0153d, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x554fd13c, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xb7c4b6c4, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x1814adb5, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4e6e3b29, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xc3901ba0, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x93d850fc, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x8e06606e, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xd3331f46, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x53a9ba05, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a238240, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xe35ae70c, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xf661ac16, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x2c67170, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2313eea, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x317c06a1, __VMLINUX_SYMBOL_STR(rcu_read_lock_bh_held) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x86fcc4ce, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0x77150d29, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x6652d6ef, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x26424efc, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x4a0e4bde, __VMLINUX_SYMBOL_STR(lock_release) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0xae0bd7af, __VMLINUX_SYMBOL_STR(lockdep_rcu_suspicious) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0xfe096515, __VMLINUX_SYMBOL_STR(lock_acquire) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xe050ea36, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xaddceef6, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x624ae3a1, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xc9968bcf, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xd68793c2, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x7ff1fddd, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0x730186db, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x7fb82cfa, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9715d279, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";

