##############################################################################
## Filename:          /media/D/BITS_Study/Semester_3/HW-SW_codesign/Project/ADXL/project_1/project_1.srcs/sources_1/edk/system/drivers/adxl_v1_00_a/data/adxl_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Mon Nov  3 10:21:57 2014 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "adxl" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
