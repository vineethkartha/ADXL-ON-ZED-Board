cmd_arch/arm/boot/dts/zynq-cc108.dtb := arm-xilinx-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.zynq-cc108.dtb.d.pre.tmp -nostdinc -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/include -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.zynq-cc108.dtb.dts.tmp /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/zynq-cc108.dts ; /home/kartha/Avnet-Digilent-ZedBoard-2014.2/build/linux/kernel/xlnx-3.14/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/zynq-cc108.dtb -b 0 -i /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/  -d arch/arm/boot/dts/.zynq-cc108.dtb.d.dtc.tmp arch/arm/boot/dts/.zynq-cc108.dtb.dts.tmp ; cat arch/arm/boot/dts/.zynq-cc108.dtb.d.pre.tmp arch/arm/boot/dts/.zynq-cc108.dtb.d.dtc.tmp > arch/arm/boot/dts/.zynq-cc108.dtb.d

source_arch/arm/boot/dts/zynq-cc108.dtb := /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/zynq-cc108.dts

deps_arch/arm/boot/dts/zynq-cc108.dtb := \

arch/arm/boot/dts/zynq-cc108.dtb: $(deps_arch/arm/boot/dts/zynq-cc108.dtb)

$(deps_arch/arm/boot/dts/zynq-cc108.dtb):
