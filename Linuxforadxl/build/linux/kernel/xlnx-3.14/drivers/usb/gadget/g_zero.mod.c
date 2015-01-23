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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x38bb6baa, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x159de811, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x337ebb7b, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xab70ad05, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x920fb5f9, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xa5882aae, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8572118, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xe827c5a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa21bb9a9, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x438618cb, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7b02b94e, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xa70f1a9a, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x71059181, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7f185e7f, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x689ff4b8, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xb8389400, __VMLINUX_SYMBOL_STR(usb_add_config_only) },
	{ 0xeefb6ab0, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

