// 函数: sub_141f24d60
// 地址: 0x141f24d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx

if (arg2 s>= 0)
    rdx = 0xff
    
    if (arg2 s< 0xff)
        rdx = arg2
else
    rdx = 0

if (*(arg1 + 0x214) != rdx)
    *(arg1 + 0x214) = rdx
    void* rcx = *(arg1 + 0x3e8)
    
    if (rcx != 0)
        return sub_1422ac6a0(rcx, rdx) __tailcall

return arg2
