// 函数: sub_142c042b0
// 地址: 0x142c042b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 4))

if (rcx.d u>= *(arg1 + 8))
    *arg1 = 1
else
    *(arg1 + 4) = (rcx + 1).d
    
    if (rcx.d u< *(arg1 + 8))
        uint64_t* result = *(arg1 + 0x10) + (rcx << 3)
        *result = _mm_cvtepi32_pd(zx.q(arg2))
        return result

data_144017550.q = 0
data_144017550.q = _mm_cvtepi32_pd(zx.q(arg2))
return &data_144017550
