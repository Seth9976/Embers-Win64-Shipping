// 函数: sub_142092f50
// 地址: 0x142092f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_1 = sx.q(*(arg1 + 0x78))

if (rdx_1.d s> 0)
    int32_t* rcx = *(arg1 + 0x70)
    int32_t result = 0
    int64_t rdx = 0
    int32_t zmm0 = *rcx
    
    while (not(zmm0 f> arg2))
        zmm0 = *rcx
        
        if (arg2 f== zmm0)
            return result
        
        result += 1
        rdx += 1
        rcx = &rcx[3]
        
        if (rdx s>= rdx_1)
            break

return -1
