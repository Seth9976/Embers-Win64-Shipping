// 函数: sub_1426bf190
// 地址: 0x1426bf190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx_2 = *(arg1 + 0x2d8)

if (rcx_2 == 0)
    return 

*(rcx_2 + 0x1b9) &= 0xf7
*(rcx_2 + 0x1b9) |= arg2 << 3
*(rcx_2 + 0x1c8) = 0
*(rcx_2 + 0x1d8) = 0

if (*(rcx_2 + 0x1dc) s<= 0xffffffff)
    return sub_1408cf3a0(rcx_2 + 0x1d0, 0) __tailcall
