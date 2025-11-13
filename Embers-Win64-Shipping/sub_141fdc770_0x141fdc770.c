// 函数: sub_141fdc770
// 地址: 0x141fdc770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x10)

if ((*(result + 0x28) & 0x40000) != 0)
    int64_t rsi_1 = data_143f3ded8
    void* rdi_1 = *(arg1 + 8)
    int32_t i
    int64_t rdx
    
    if (data_143de5480 == 0)
        i = 0
        rdx = 0
    else
        result = GetCurrentThreadId()
        i = 0
        rdx.b = result.d != data_143de5470
    
    bool cond:2_1 = arg2[1].d s<= 0
    float temp0_1 = __minss_xmmss_memss(*(rsi_1 + (rdx << 2)) * 0.00999999978f, *(rdi_1 + 0x20))
    
    if (not(cond:2_1))
        int64_t rdx_1 = 0
        
        do
            result = *arg2
            rdx_1 += 4
            i += 1
            *(rdx_1 + result - 4) = temp0_1
        while (i s< arg2[1].d)

return result
