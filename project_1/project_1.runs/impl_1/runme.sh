#!/bin/sh

# 
# PlanAhead(TM)
# runme.sh: a PlanAhead-generated Runs Script for UNIX
# Copyright 1986-1999, 2001-2012 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/opt/Xilinx/14.2/ISE_DS/EDK/bin/lin:/opt/Xilinx/14.2/ISE_DS/ISE/bin/lin:/opt/Xilinx/14.2/ISE_DS/common/bin/lin:/opt/Xilinx/14.2/ISE_DS/PlanAhead/bin
else
  PATH=/opt/Xilinx/14.2/ISE_DS/EDK/bin/lin:/opt/Xilinx/14.2/ISE_DS/ISE/bin/lin:/opt/Xilinx/14.2/ISE_DS/common/bin/lin:/opt/Xilinx/14.2/ISE_DS/PlanAhead/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/opt/Xilinx/14.2/ISE_DS/EDK/lib/lin:/opt/Xilinx/14.2/ISE_DS/ISE/lib/lin:/opt/Xilinx/14.2/ISE_DS/common/lib/lin
else
  LD_LIBRARY_PATH=/opt/Xilinx/14.2/ISE_DS/EDK/lib/lin:/opt/Xilinx/14.2/ISE_DS/ISE/lib/lin:/opt/Xilinx/14.2/ISE_DS/common/lib/lin:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD=`dirname "$0"`
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep bitgen "system_stub_routed.ncd" "system_stub.bit" "system_stub.pcf" -w -intstyle pa
