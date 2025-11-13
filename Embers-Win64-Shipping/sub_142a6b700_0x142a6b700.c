// 函数: sub_142a6b700
// 地址: 0x142a6b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xdc) = 1
int32_t result

for (int32_t i = 0; i s< 0x17; )
    int32_t rbx_1 = *(arg1 + 0xdc)
    void* rdx_1 = arg1 + 0x80
    int64_t r10_1 = -1
    int32_t result_1 = 0x2710
    int64_t rcx = 0
    int64_t j_1 = 0x17
    int64_t j
    
    do
        result = *rdx_1
        
        if (result s> rbx_1 && result s< result_1)
            result_1 = result
            r10_1 = rcx
        
        rcx += 1
        rdx_1 += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    
    if (r10_1 s< 0)
        break
    
    result = rbx_1 + 1
    i += 1
    *(arg1 + 0xdc) = result
    *(arg1 + (r10_1 << 2) + 0x80) = result

*(arg1 + 0xdc) += 1
return result
