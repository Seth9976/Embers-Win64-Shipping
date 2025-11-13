// 函数: sub_140b55170
// 地址: 0x140b55170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xa0) = arg3
int32_t rcx = 0
*(arg1 + 0x29) &= 0xfe
*(arg1 + 0xa8) = 0
*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405c5510(arg1 + 0x90, 0)
    rcx = *(arg1 + 0x98)

uint64_t result = zx.q(((*(arg1 + 0xa0) + 7) s>> 3).d + rcx)
*(arg1 + 0x98) = result.d

if (result.d s> *(arg1 + 0x9c))
    result = sub_1405daba0(arg1 + 0x90)

if (arg2 != 0)
    memcpy(*(arg1 + 0x90), arg2, ((*(arg1 + 0xa0) + 7) s>> 3).d)
    result = *(arg1 + 0xa0)
    uint64_t r8_4 = zx.q(result.d) & 7
    
    if (r8_4.d != 0)
        char* rdx_3 = sx.q((result s>> 3).d) + *(arg1 + 0x90)
        result = zx.q(*(r8_4 + &data_142e78980))
        *rdx_3 &= result.b

return result
