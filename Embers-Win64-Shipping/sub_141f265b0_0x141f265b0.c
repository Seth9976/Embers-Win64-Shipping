// 函数: sub_141f265b0
// 地址: 0x141f265b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdx = *(arg1 + 0x20e)
uint8_t result = rdx u>> 4 & 1

if (result != arg2)
    rdx = (rdx & 0xef) | arg2 << 4
    *(arg1 + 0x20e) = rdx
    void* rcx = *(arg1 + 0x3e8)
    
    if (rcx != 0)
        return sub_1422ac5c0(rcx, rdx u>> 4 & 1) __tailcall

return result
