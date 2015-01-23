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
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xf20915d, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa71c6401, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x68618cd5, __VMLINUX_SYMBOL_STR(rproc_vq_interrupt) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5d524d3e, __VMLINUX_SYMBOL_STR(rproc_add) },
	{ 0x8cf46428, __VMLINUX_SYMBOL_STR(rproc_alloc) },
	{ 0x260cf8f8, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x2215d4f9, __VMLINUX_SYMBOL_STR(set_ipi_handler) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfec898f4, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xe3c9983e, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xcbaaa59b, __VMLINUX_SYMBOL_STR(dma_declare_coherent_memory) },
	{ 0x7ce90833, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8ca457d8, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1f29fd31, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cb1ae69, __VMLINUX_SYMBOL_STR(cpu_down) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc0fa0d21, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0x2f4ac89e, __VMLINUX_SYMBOL_STR(zynq_cpun_start) },
	{ 0x4298b775, __VMLINUX_SYMBOL_STR(v7_flush_kern_cache_all) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0xe07ca631, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x84bbaba8, __VMLINUX_SYMBOL_STR(gic_raise_softirq) },
	{ 0x71059181, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x56d697ce, __VMLINUX_SYMBOL_STR(cpu_up) },
	{ 0xe76f390c, __VMLINUX_SYMBOL_STR(rproc_put) },
	{ 0xdabbd1e, __VMLINUX_SYMBOL_STR(rproc_del) },
	{ 0x99bd722b, __VMLINUX_SYMBOL_STR(clear_ipi_handler) },
	{ 0xa940251, __VMLINUX_SYMBOL_STR(dma_release_declared_memory) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe827c5a6, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x181606d4, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xdafd2cd3, __VMLINUX_SYMBOL_STR(gic_set_cpu) },
	{ 0x99b575a8, __VMLINUX_SYMBOL_STR(dev_err) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=remoteproc";

MODULE_ALIAS("of:N*T*Cxlnx,zynq_remoteproc*");
