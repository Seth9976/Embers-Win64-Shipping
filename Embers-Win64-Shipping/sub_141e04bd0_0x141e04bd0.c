// 函数: sub_141e04bd0
// 地址: 0x141e04bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa8)
int32_t rdx_1

if (rcx == 0)
    rdx_1 = -1
else
    rdx_1 = (*(*rcx + 0xa0))(rcx, arg3)

int64_t rcx_2 = sx.q(1 - *(arg1 + 0x208)) * 2

if (rdx_1 s< 0 || rdx_1 s>= *(arg1 + (rcx_2 << 3) + 0x160))
    __builtin_memset(arg2, 0, 0x14)
else
    void* rdi_2 = sx.q(rdx_1) * 0x70 + *(arg1 + (rcx_2 << 3) + 0x158)
    
    if (*(rdi_2 + 0x28) == 0)
        __builtin_memset(arg2, 0, 0x14)
    else if (sub_141e06280(rdi_2 + 0x30) == 0)
        __builtin_memset(arg2, 0, 0x14)
    else
        *arg2 = *(rdi_2 + 0x54)

return arg2
