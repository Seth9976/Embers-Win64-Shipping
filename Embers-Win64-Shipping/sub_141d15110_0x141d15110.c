// 函数: sub_141d15110
// 地址: 0x141d15110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321e100
arg1[1] = &data_14321e158
arg1[0xb].d = 0
int64_t rcx = arg1[0xa]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a5410(&arg1[2], 0)

arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
sub_14059a8e0(&arg1[4], 0)
int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[2]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140b0be90(&arg1[1])
*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
