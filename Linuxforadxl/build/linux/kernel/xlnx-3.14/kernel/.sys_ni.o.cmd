cmd_kernel/sys_ni.o := arm-xilinx-linux-gnueabi-gcc -Wp,-MD,kernel/.sys_ni.o.d  -nostdinc -isystem /opt/PetaLinux/petalinux-v2014.2-final/tools/linux-i386/arm-xilinx-linux-gnueabi/bin/../lib/gcc/arm-xilinx-linux-gnueabi/4.8.1/include -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include -Iarch/arm/include/generated  -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include -Iinclude -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi -Iinclude/generated/uapi -include /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kconfig.h  -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/kernel -Ikernel -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(sys_ni)"  -D"KBUILD_MODNAME=KBUILD_STR(sys_ni)" -c -o kernel/.tmp_sys_ni.o /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/kernel/sys_ni.c

source_kernel/sys_ni.o := /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/kernel/sys_ni.c

deps_kernel/sys_ni.o := \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/compiler-gcc4.h \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/stringify.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/errno.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/asm-generic/errno.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/asm-generic/errno-base.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/unistd.h \
    $(wildcard include/config/aeabi.h) \
    $(wildcard include/config/oabi/compat.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/unistd.h \

kernel/sys_ni.o: $(deps_kernel/sys_ni.o)

$(deps_kernel/sys_ni.o):
