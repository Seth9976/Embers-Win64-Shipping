// 函数: sub_140903330
// 地址: 0x140903330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)

if (((rax & 0xfffffffa) == 0 && rax != 5) || arg2 != 0 || arg3 != 0)
    rax.b = 0
    return rax

void* rcx = *(arg1 + 0x50)
char var_10 = 1
*arg4 = *(rcx + 0x110)
arg4[1] = *(rcx + 0x114)
int64_t rcx_1 = *(*(arg1 + 0x50) + 0x120)
uint128_t zmm1
zmm1.q = _mm_cvtepi32_pd(zx.q(rcx_1.d)).q f/ _mm_cvtepi32_pd(zx.q((rcx_1 u>> 0x20).d)).q
uint128_t zmm0 = 1.o
int32_t temp0_2 = _mm_cvtpd_ps(zmm1)
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm0.d = temp0_2
arg4[2] = temp0_2
_mm_shuffle_ps(zmm0, zmm0, 0x87)
zmm0.d = temp0_2
*(arg4 + 0xc) = _mm_shuffle_ps(zmm0, zmm0, 0x39)

if (*(arg4 + 0x20) != u"Image")
    bool cond:0_1 = arg4[0xb] == 6
    arg4[0xa] = arg2
    
    if (not(cond:0_1))
        sub_1405947f0(&arg4[8], arg3 + 6)
        arg2 = arg4[0xa]
    
    arg4[0xa] = arg2 + 6
    
    if (arg2 + 6 s> arg4[0xb])
        sub_140594770(&arg4[8])
    
    uint64_t* rcx_5 = *(arg4 + 0x20)
    *rcx_5 = 0x670061006d0049
    rcx_5[1].d = 0x65

wchar16 const* const rax_4
rax_4.b = 1
return rax_4
