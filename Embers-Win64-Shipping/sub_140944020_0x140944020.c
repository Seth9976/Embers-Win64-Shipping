// 函数: sub_140944020
// 地址: 0x140944020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1

if (rax == 6 || rax == 8 || rax == 0xa)
    j_sub_140a74f90(*(arg1 + 8))

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*arg1 = 9
arg1[2].b = arg2
return 0
