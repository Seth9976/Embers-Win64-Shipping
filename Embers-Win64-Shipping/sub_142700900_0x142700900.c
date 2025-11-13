// 函数: sub_142700900
// 地址: 0x142700900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg2 + 0x98) u>> 2).b & 1) == 0)
    return *(arg1 + 0x114)

int32_t rax_2
int64_t zmm0

if (arg4 == 0)
    int64_t* rcx_2
    
    if (*(arg2 + 0x30) s<= 0)
        rcx_2 = &data_143b58088
    else
        rcx_2 = (sx.q(*(arg2 + 0x30) - 1) << 5) + *(arg2 + 0x28)
    
    zmm0 = *rcx_2
    rax_2 = rcx_2[1].d
else
    zmm0 = *arg4
    rax_2 = arg4[1].d

int64_t var_18 = zmm0
zmm0.d = arg3[2].d f- rax_2
float zmm1 = *arg3 f- var_18.d
float zmm2 = arg3[1] f- var_18:4.d
zmm0.d = zmm0.d f* zmm0.d
zmm0.d = (*(arg1 + 0x114)).d f- _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 f+ zmm0.d)
return __maxss_xmmss_memss(zmm0.d, *(arg1 + 0x110))
