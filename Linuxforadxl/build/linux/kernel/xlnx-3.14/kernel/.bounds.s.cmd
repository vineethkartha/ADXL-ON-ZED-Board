cmd_kernel/bounds.s := arm-xilinx-linux-gnueabi-gcc -Wp,-MD,kernel/.bounds.s.d  -nostdinc -isystem /opt/PetaLinux/petalinux-v2014.2-final/tools/linux-i386/arm-xilinx-linux-gnueabi/bin/../lib/gcc/arm-xilinx-linux-gnueabi/4.8.1/include -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include -Iarch/arm/include/generated  -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include -Iinclude -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi -Iinclude/generated/uapi -include /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kconfig.h  -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/. -I. -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -fno-dwarf2-cfi-asm -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bounds)"  -D"KBUILD_MODNAME=KBUILD_STR(bounds)" -fverbose-asm -S -o kernel/bounds.s /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/kernel/bounds.c

source_kernel/bounds.s := /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/kernel/bounds.c

deps_kernel/bounds.s := \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/nr/cpus.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/page-flags.h \
    $(wildcard include/config/pageflags/extended.h) \
    $(wildcard include/config/mmu.h) \
    $(wildcard include/config/arch/uses/pg/uncached.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/transparent/hugepage.h) \
    $(wildcard include/config/highmem.h) \
    $(wildcard include/config/swap.h) \
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
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/posix_types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/stddef.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/stddef.h \
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
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/posix_types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/asm-generic/posix_types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/bug.h \
    $(wildcard include/config/generic/bug.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/bug.h \
    $(wildcard include/config/bug.h) \
    $(wildcard include/config/thumb2/kernel.h) \
    $(wildcard include/config/debug/bugverbose.h) \
    $(wildcard include/config/arm/lpae.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/stringify.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/export.h \
    $(wildcard include/config/have/underscore/symbol/prefix.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/unused/symbols.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/linkage.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/cpu/endian/be32.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/swab.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/swab.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/swab.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/swab.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bug.h \
    $(wildcard include/config/generic/bug/relative/pointers.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kernel.h \
    $(wildcard include/config/preempt/voluntary.h) \
    $(wildcard include/config/debug/atomic/sleep.h) \
    $(wildcard include/config/prove/locking.h) \
    $(wildcard include/config/panic/timeout.h) \
    $(wildcard include/config/ring/buffer.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/ftrace/mcount/record.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/tools/linux-i386/arm-xilinx-linux-gnueabi/lib/gcc/arm-xilinx-linux-gnueabi/4.8.1/include/stdarg.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/bitops.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/bitops.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/typecheck.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/irqflags.h \
    $(wildcard include/config/cpu/v7m.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/arm/thumb.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/ptrace.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/hwcap.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/hwcap.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/non-atomic.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/fls64.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/sched.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/hweight.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/arch_hweight.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/const_hweight.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/lock.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/le.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/uapi/asm/byteorder.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/byteorder/little_endian.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/byteorder/little_endian.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/byteorder/generic.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/bitops/ext2-atomic-setbit.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/log2.h \
    $(wildcard include/config/arch/has/ilog2/u32.h) \
    $(wildcard include/config/arch/has/ilog2/u64.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/printk.h \
    $(wildcard include/config/early/printk.h) \
    $(wildcard include/config/printk.h) \
    $(wildcard include/config/dynamic/debug.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/init.h \
    $(wildcard include/config/broken/rodata.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kern_levels.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/cache.h \
    $(wildcard include/config/arch/has/cache/line/size.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/kernel.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/sysinfo.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/cache.h \
    $(wildcard include/config/arm/l1/cache/shift.h) \
    $(wildcard include/config/aeabi.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/dynamic_debug.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/div64.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/compiler.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/mmdebug.h \
    $(wildcard include/config/debug/vm.h) \
    $(wildcard include/config/debug/virtual.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/mmzone.h \
    $(wildcard include/config/force/max/zoneorder.h) \
    $(wildcard include/config/cma.h) \
    $(wildcard include/config/memory/isolation.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/memcg.h) \
    $(wildcard include/config/zone/dma.h) \
    $(wildcard include/config/zone/dma32.h) \
    $(wildcard include/config/compaction.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/sparsemem.h) \
    $(wildcard include/config/have/memblock/node/map.h) \
    $(wildcard include/config/discontigmem.h) \
    $(wildcard include/config/flat/node/mem/map.h) \
    $(wildcard include/config/no/bootmem.h) \
    $(wildcard include/config/numa/balancing.h) \
    $(wildcard include/config/have/memory/present.h) \
    $(wildcard include/config/have/memoryless/nodes.h) \
    $(wildcard include/config/need/node/memmap/size.h) \
    $(wildcard include/config/need/multiple/nodes.h) \
    $(wildcard include/config/have/arch/early/pfn/to/nid.h) \
    $(wildcard include/config/flatmem.h) \
    $(wildcard include/config/sparsemem/extreme.h) \
    $(wildcard include/config/have/arch/pfn/valid.h) \
    $(wildcard include/config/nodes/span/other/nodes.h) \
    $(wildcard include/config/holes/in/zone.h) \
    $(wildcard include/config/arch/has/holes/memorymodel.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/kbuild.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/page_cgroup.h \
    $(wildcard include/config/memcg/swap.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/spinlock_types.h \
    $(wildcard include/config/generic/lockbreak.h) \
    $(wildcard include/config/debug/spinlock.h) \
    $(wildcard include/config/debug/lock/alloc.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/spinlock_types.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/lockdep.h \
    $(wildcard include/config/lockdep.h) \
    $(wildcard include/config/lock/stat.h) \
    $(wildcard include/config/prove/rcu.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/list.h \
    $(wildcard include/config/debug/list.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/poison.h \
    $(wildcard include/config/illegal/pointer/value.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/uapi/linux/const.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/debug_locks.h \
    $(wildcard include/config/debug/locking/api/selftests.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/atomic.h \
    $(wildcard include/config/arch/has/atomic/or.h) \
    $(wildcard include/config/generic/atomic64.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/atomic.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/prefetch.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/processor.h \
    $(wildcard include/config/have/hw/breakpoint.h) \
    $(wildcard include/config/arm/errata/754327.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/hw_breakpoint.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/barrier.h \
    $(wildcard include/config/cpu/32v6k.h) \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/arch/has/barriers.h) \
    $(wildcard include/config/arm/dma/mem/bufferable.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/outercache.h \
    $(wildcard include/config/outer/cache/sync.h) \
    $(wildcard include/config/outer/cache.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/v6.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/cmpxchg-local.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/asm-generic/atomic-long.h \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/stacktrace.h \
    $(wildcard include/config/stacktrace.h) \
    $(wildcard include/config/user/stacktrace/support.h) \
  /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/include/linux/rwlock_types.h \

kernel/bounds.s: $(deps_kernel/bounds.s)

$(deps_kernel/bounds.s):
