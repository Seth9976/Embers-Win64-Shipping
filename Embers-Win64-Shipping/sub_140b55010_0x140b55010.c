// 函数: sub_140b55010
// 地址: 0x140b55010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x29) &= 0xfe
*(arg1 + 0xa0) = arg3
*(arg1 + 0xa8) = 0

if (arg1 + 0x90 != arg2)
    int64_t rcx = *(arg1 + 0x90)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(arg1 + 0x90) = *arg2
    *arg2 = 0
    *(arg1 + 0x98) = arg2[1].d
    *(arg1 + 0x9c) = *(arg2 + 0xc)
    arg2[1] = 0

uint64_t result = *(arg1 + 0xa0)
uint64_t r8_1 = zx.q(result.d) & 7

if (r8_1.d != 0)
    char* rdx_1 = sx.q((result s>> 3).d) + *(arg1 + 0x90)
    result = zx.q(*(r8_1 + &data_142e78980))
    *rdx_1 &= result.b

return result
