// 函数: sub_1422c9070
// 地址: 0x1422c9070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x30))
int64_t rsi = sx.q(*(arg2 + 0x10))

if (result.d s> rsi.d)
    *(arg2 + 0x10) = result.d
    int32_t i_2 = result.d - rsi.d
    
    if (result.d s> *(arg2 + 0x14))
        sub_1405a4cf0(arg2 + 8)
    
    result = *(arg2 + 8)
    int64_t rdx_1 = result + (rsi << 2)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int32_t rax = *rdx_1
            rdx_1 += 4
            result = (zx.q(rax) & 0xfffffffb) | 3
            *(rdx_1 - 4) = result.d
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (result.d s< rsi.d && result.d != rsi.d)
    *(arg2 + 0x10) = result.d
    result = sub_1405dac90(arg2 + 8)

int32_t i_1 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t r9_1 = 0
    int64_t r10_1 = 0
    
    do
        result = *(arg1 + 0x28)
        r10_1 += 4
        int64_t rdx_2 = *(arg2 + 8)
        r9_1 += 0x30
        i_1 += 1
        *(rdx_2 + r10_1 - 4) ^= ((*(r9_1 + result - 4) * 2) ^ *(rdx_2 + r10_1 - 4)) & 4
    while (i_1 s< *(arg1 + 0x30))

return result
