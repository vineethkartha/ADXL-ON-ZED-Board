cmd_kernel/config_data.gz := (cat /home/kartha/Avnet-Digilent-ZedBoard-2014.2/build/linux/kernel/xlnx-3.14/.config | gzip -n -f -9 > kernel/config_data.gz) || (rm -f kernel/config_data.gz ; false)
