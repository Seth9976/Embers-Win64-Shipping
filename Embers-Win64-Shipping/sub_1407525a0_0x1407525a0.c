// 函数: sub_1407525a0
// 地址: 0x1407525a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x58)) ^ 1
bool cond:0 = *(arg1 + 0x60) == 0
*(arg1 + 0x58) = result.d

if (not(cond:0))
    int64_t rcx_1 = sx.q(result.d) ^ 1
    int32_t rsi_1 = 0
    result = (rcx_1 + 3) * 2
    int64_t i_1 = sx.q(*(arg1 + (result << 3)))
    
    if (i_1 s> 0)
        int64_t r14_1 = 0
        int64_t i
        
        do
            int64_t* rbx_2 = *(arg1 + rcx_1 * 0x10 + 0x28) + r14_1
            void arg_8
            result = SZNameFromTSRecord(*(arg1 + 0x60), &arg_8, 1, &rbx_2[0x10], rbx_2 + 0x8c, 
                rbx_2[0x13].d, &rbx_2[2], &data_143f3a660, nullptr, rsi_1)
            rsi_1 += 1
            r14_1 += 0xa0
            *rbx_2 = *result
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
