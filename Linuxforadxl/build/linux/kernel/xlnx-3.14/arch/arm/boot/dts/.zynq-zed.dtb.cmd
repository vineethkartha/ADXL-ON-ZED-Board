cmd_arch/arm/boot/dts/zynq-zed.dtb := arm-xilinx-linux-gnueabi-gcc -E -Wp,-MD,arch/arm/boot/dts/.zynq-zed.dtb.d.pre.tmp -nostdinc -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/include -I/opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.zynq-zed.dtb.dts.tmp /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/zynq-zed.dts ; /home/kartha/Avnet-Digilent-ZedBoard-2014.2/build/linux/kernel/xlnx-3.14/scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/zynq-zed.dtb -b 0 -i /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/  -d arch/arm/boot/dts/.zynq-zed.dtb.d.dtc.tmp arch/arm/boot/dts/.zynq-zed.dtb.dts.tmp ; cat arch/arm/boot/dts/.zynq-zed.dtb.d.pre.tmp arch/arm/boot/dts/.zynq-zed.dtb.d.dtc.tmp > arch/arm/boot/dts/.zynq-zed.dtb.d

source_arch/arm/boot/dts/zynq-zed.dtb := /opt/PetaLinux/petalinux-v2014.2-final/components/linux-kernel/xlnx-3.14/arch/arm/boot/dts/zynq-zed.dts

deps_arch/arm/boot/dts/zynq-zed.dtb := \

arch/arm/boot/dts/zynq-zed.dtb: $(deps_arch/arm/boot/dts/zynq-zed.dtb)

$(deps_arch/arm/boot/dts/zynq-zed.dtb):
