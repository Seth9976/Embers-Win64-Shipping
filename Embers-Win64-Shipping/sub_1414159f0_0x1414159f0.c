// 函数: sub_1414159f0
// 地址: 0x1414159f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596eb0(&arg1[0xf])
sub_140745b20(&arg1[0xd])
sub_140745b20(&arg1[0xb])
arg1[0xa].d = 0
int64_t rcx_3 = arg1[9]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[2].d = 0

if (*(arg1 + 0x14) != 0)
    sub_1405a5410(&arg1[1], 0)

arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
sub_14059a8e0(&arg1[3], 0)
int64_t rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[1]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
