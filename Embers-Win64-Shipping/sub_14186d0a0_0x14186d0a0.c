// 函数: sub_14186d0a0
// 地址: 0x14186d0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141835020(arg3, arg2, arg1 + 0x1d0)
arg3[9].d = 0
int64_t rcx_1 = arg3[8]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405a5130(arg3, 0)

arg3[6].d = 0xffffffff
*(arg3 + 0x34) = 0
sub_14059a8e0(&arg3[2], 0)
int64_t rcx_4 = arg3[4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg3

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
