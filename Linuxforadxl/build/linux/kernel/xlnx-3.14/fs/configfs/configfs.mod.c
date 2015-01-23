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
	{ 0x7a2cbc2f, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x832fc5c, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x923c7bf3, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0x96e7296f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x553b6202, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x1559601b, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x99dab316, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xade81ac1, __VMLINUX_SYMBOL_STR(mutex_destroy) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x45684bf7, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x90b7070, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xb7dd2b09, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x501013bd, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x73212439, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa439ec35, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xc963e9ee, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x87a4a221, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xc621ce31, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeeecb604, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xf0fbc20d, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x767da02e, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe633c14b, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x12c4194b, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x7c85fb9f, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x4a72c2c3, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x64c63b0b, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xca077950, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x1a5f81d5, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa36ca189, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0xaa549422, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x225ba199, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb5f28723, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0xa1c96444, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{        0, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x8c2cd0f6, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x8004b400, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x80b8b59, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4e289138, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xac859183, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x3ebdc56d, __VMLINUX_SYMBOL_STR(mutex_lock_nested) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xd93c644, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x9373cde9, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbae1b3c9, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0xeb7a73cb, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0xf6e7b320, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x89c0ed7c, __VMLINUX_SYMBOL_STR(lockdep_init_map) },
	{ 0xe5d6e413, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xc1ebfc76, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xd5329afc, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x11069808, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x4413c73b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6d070f29, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xe742076d, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xb783b672, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2c7ea7b0, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x6f6f10d, __VMLINUX_SYMBOL_STR(__d_drop) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC343C23C059E620E9187E1");
