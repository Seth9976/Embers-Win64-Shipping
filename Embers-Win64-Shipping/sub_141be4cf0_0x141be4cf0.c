// 函数: sub_141be4cf0
// 地址: 0x141be4cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x108) = arg2
void* rcx = *(arg1 + 0x1a0)

if (rcx == 0)
    return arg2

if (arg2 s< 1)
    return sub_140f16490(rcx, 1) __tailcall

int32_t rdx_1 = 0x19

if (arg2 s< 0x19)
    rdx_1 = arg2

return sub_140f16490(rcx, rdx_1) __tailcall
