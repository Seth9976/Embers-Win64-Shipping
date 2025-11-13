// 函数: sub_140aa3740
// 地址: 0x140aa3740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1 + 0x40
int32_t rdx = *(arg1 + 0x10)

if (*(arg1 + 0x58) == 0)
    r10 = arg3 + 0x8c

uint128_t var_28
uint8_t rcx
uint64_t rdx_6
int64_t zmm1

if (rdx == 0)
    rdx_6 = *(arg1 + 0x18) * sx.q(arg4)
    *arg2 = 0
    arg2[1] = 0
    uint8_t rax_7 = (rdx_6 u>> 0x3f).b
    
    if (rax_7 != 0)
        rdx_6 = neg.q(rdx_6)
    
    rcx = rax_7
else
    if (rdx != 1)
        uint128_t zmm0
        int64_t zmm2
        
        if (rdx == 2)
            zmm2 = *(arg1 + 0x18)
            *arg2 = 0
            arg2[1] = 0
            zmm1 = *(r10 + 0x10)
            var_28 = *r10
            int64_t var_18_1 = zmm1
            zmm0.d = _mm_cvtepi32_ps(zx.o(arg4)).d f* zmm2.d
            sub_140a745d0(_mm_cvtps_pd(zmm0.q), arg3, &var_28, arg2)
            return arg2
        
        if (rdx != 3)
            *arg2 = 0
            arg2[1] = 0
            return arg2
        
        zmm2 = *(arg1 + 0x18)
        *arg2 = 0
        arg2[1] = 0
        zmm1 = *(r10 + 0x10)
        var_28 = *r10
        int64_t var_18 = zmm1
        zmm0.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* zmm2
        sub_140a745d0(zmm0, arg3, &var_28, arg2)
        return arg2
    
    int64_t rax_4 = *(arg1 + 0x18)
    rcx = 0
    *arg2 = 0
    arg2[1] = 0
    rdx_6 = sx.q(arg4) * rax_4

zmm1 = *(r10 + 0x10)
var_28 = *r10
int64_t var_18_2 = zmm1
sub_140a80970(rcx, rdx_6, arg3, &var_28, arg2)
return arg2
