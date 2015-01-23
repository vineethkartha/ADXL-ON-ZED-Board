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
	{ 0xd7863173, __VMLINUX_SYMBOL_STR(xfrm6_prepare_output) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x53c4fe30, __VMLINUX_SYMBOL_STR(rcu_lock_map) },
	{ 0x13176be8, __VMLINUX_SYMBOL_STR(rcu_lockdep_current_cpu_online) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc963e9ee, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xce6db656, __VMLINUX_SYMBOL_STR(rcu_is_watching) },
	{ 0xaf6f24e2, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xec12d395, __VMLINUX_SYMBOL_STR(xfrm_register_mode) },
	{ 0x892da873, __VMLINUX_SYMBOL_STR(debug_lockdep_rcu_enabled) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x488da3fe, __VMLINUX_SYMBOL_STR(xfrm_prepare_input) },
	{ 0xfe16b48b, __VMLINUX_SYMBOL_STR(xfrm_unregister_mode) },
	{ 0x2a9f31f8, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x317c06a1, __VMLINUX_SYMBOL_STR(rcu_read_lock_bh_held) },
	{ 0x3ebdc56d, __VMLINUX_SYMBOL_STR(mutex_lock_nested) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x3e2825fa, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0xf7decac9, __VMLINUX_SYMBOL_STR(lock_is_held) },
	{ 0xae0bd7af, __VMLINUX_SYMBOL_STR(lockdep_rcu_suspicious) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";

