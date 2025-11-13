// 函数: sub_141be4cb0
// 地址: 0x141be4cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x108) = arg2
void* rcx = *(arg1 + 0x1b0)

if (rcx == 0)
    return arg2

if (arg2 s< 1)
    return sub_140f16480(rcx, 1) __tailcall

int32_t rdx = 0x19

if (arg2 s< 0x19)
    rdx = arg2

return sub_140f16480(rcx, rdx) __tailcall
