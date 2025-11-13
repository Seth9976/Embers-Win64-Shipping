// 函数: sub_142ad5f00
// 地址: 0x142ad5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3
int64_t temp0 = _mm_cvtepi32_pd(zx.q(arg4))
arg3.b = 1
int32_t arg_10 = 0
int64_t* rcx = arg1
int32_t rdi = (*(*arg1 + 0x190))(arg1, 
    _mm_cvtepi32_pd(zx.q(arg2 + int.d((temp0 f- 0.5) f* 29.530588853000001))), arg3) + rsi

if (rsi s> 0x1d)
    sub_142a6c030(rcx, 0x14, rdi + 0x253d8a)
    int32_t result = sub_142a67c60(arg1, &arg_10)
    
    if (arg_10 s> 0)
        return result
    
    result = (*(*arg1 + 0xa8))(arg1, 5, &arg_10)
    
    if (result s< rsi || arg_10 s> 0)
        return result
    
    rcx = arg1

return sub_142a6c030(rcx, 0x14, rdi + 0x253d8b)
