// 函数: sub_141b8d040
// 地址: 0x141b8d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x61) != 0)
    *(arg1 + 0x61) = 0

int64_t rcx = arg1[6]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
