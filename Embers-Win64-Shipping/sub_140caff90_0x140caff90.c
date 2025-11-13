// 函数: sub_140caff90
// 地址: 0x140caff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd].d = 0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[5].d = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405a5410(&arg1[4], 0)

arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
sub_14059a8e0(&arg1[6], 0)
int64_t rcx_3 = arg1[8]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[4]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140d16360(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
