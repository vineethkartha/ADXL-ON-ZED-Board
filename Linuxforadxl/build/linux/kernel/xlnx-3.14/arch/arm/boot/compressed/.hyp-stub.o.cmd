cmd_arch/arm/boot/compressed/hyp-stub.o := arm-xilinx-linux-gnueabi-gcc -Wp,-MD,arch/arm/boot/compressed/.hyp-stub.o.d  -nostdinc -isystem /opt/PetaLinux/petalinux-v2014.2-final/tools/linux-i386/arm-xilinx-linux-gnueabi/bin/../lib/gcc/arm-xilinx-linux-gnueabi/4.8.1/include -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include -Iarch/arm/include/generated  -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include -Iinclude -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi -Iinclude/generated/uapi -include /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -DZIMAGE   -c -o arch/arm/boot/compressed/hyp-stub.o arch/arm/boot/compressed/hyp-stub.S

source_arch/arm/boot/compressed/hyp-stub.o := arch/arm/boot/compressed/hyp-stub.S

deps_arch/arm/boot/compressed/hyp-stub.o := \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/arm/arch/timer.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
    $(wildcard include/config/modules.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
    $(wildcard include/config/kprobes.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/int-ll64.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitsperlong.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/asm-generic/bitsperlong.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/stringify.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/ptrace.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/hwcap.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/hwcap.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/opcodes-virt.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be32.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/virt.h \
    $(wildcard include/config/arm/virt/ext.h) \

arch/arm/boot/compressed/hyp-stub.o: $(deps_arch/arm/boot/compressed/hyp-stub.o)

$(deps_arch/arm/boot/compressed/hyp-stub.o):
