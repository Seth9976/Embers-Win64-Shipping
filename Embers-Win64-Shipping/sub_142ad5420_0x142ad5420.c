// 函数: sub_142ad5420
// 地址: 0x142ad5420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x270)
int128_t __saved_zmm6 = arg3
arg3.q = arg2.q f* 86400000.0

if (rcx != 0)
    int32_t arg_8 = 0
    int32_t arg_10
    int32_t arg_18
    (*(*rcx + 0x18))(rcx, arg3, 0, &arg_18, &arg_10, &arg_8, __saved_zmm6)
    
    if (arg_8 s<= 0)
        arg3.q = arg3.q f- _mm_cvtepi32_pd(zx.q(arg_10 + arg_18))
        return arg3.q

arg3.q = arg3.q f- 28800000.0
return arg3.q
