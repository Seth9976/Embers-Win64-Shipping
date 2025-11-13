// 函数: sub_141ed1a20
// 地址: 0x141ed1a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
zmm7.d = arg1[1].d f* 10f
int128_t zmm8
zmm8.d = (*arg1).d f* 10f
int128_t zmm6
zmm6.d = arg1[2].d f* 10f
float zmm0[0x4] = _mm_cvtps_pd(zmm8.q)
*arg1 = zmm8.d
arg1[1] = zmm7.d

if (_finite(zmm0[0].q) != 0 && _finite(_mm_cvtps_pd(zmm7.q)[0].q) != 0
        && _finite(_mm_cvtps_pd(zmm6.q)[0].q) != 0)
    float zmm2 = -1.07374182e+09f
    float zmm3
    
    if (zmm6.d f>= -1.07374182e+09f)
        zmm3 = _mm_min_ss(zmm6.d, 0x4e7fffff)
    else
        zmm3 = -1.07374182e+09f
    
    float zmm4_1
    
    if (zmm7.d f>= -1.07374182e+09f)
        zmm4_1 = _mm_min_ss(zmm7.d, 0x4e7fffff)
    else
        zmm4_1 = -1.07374182e+09f
    
    if (not(zmm8.d f< -1.07374182e+09f))
        zmm2 = _mm_min_ss(zmm8.d, 0x4e7fffff)
    
    int64_t rsi
    
    if (zmm2 f!= zmm8.d || zmm4_1 f!= zmm7.d || zmm3 f!= zmm6.d)
        rsi.b = 0
    else
        rsi.b = 1
    
    int32_t r15_2 = int.d(zmm3 + zmm3 + 0.5f) s>> 1
    int32_t temp0_6
    int32_t temp1_1
    temp0_6:temp1_1 = sx.q(r15_2)
    int32_t r8_3 = (temp1_1 ^ temp0_6) - temp0_6
    int32_t r14_2 = int.d(zmm4_1 + zmm4_1 + 0.5f) s>> 1
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14_2)
    int32_t rcx_2 = (temp3_1 ^ temp2_1) - temp2_1
    int32_t rbp_2 = int.d(zmm2 + zmm2 + 0.5f) s>> 1
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rbp_2)
    int32_t rax_10 = (temp5_1 ^ temp4_1) - temp4_1
    
    if (rax_10 s>= rcx_2)
        rcx_2 = rax_10
    
    bool cond:2_1 = rcx_2 == r8_3
    
    if (rcx_2 s>= r8_3)
        r8_3 = rcx_2
    
    uint64_t rflags_1
    int32_t temp0_7
    temp0_7, rflags_1 = _bit_scan_reverse(r8_3 + 1)
    int32_t rax_12
    
    rax_12 = cond:2_1 ? 0x20 : 0x1f - temp0_7
    
    int32_t rax_14 = rax_12 << 0x1a s>> 0x1f
    uint64_t rflags_2
    int32_t temp0_8
    temp0_8, rflags_2 = _bit_scan_reverse(r8_3)
    int32_t rdx_3
    
    if (rax_14 == 0)
        rdx_3 = 0x20
    else
        rdx_3 = 0x1f - temp0_8
    
    int32_t rcx_4 = (0x20 - rdx_3) & not.d(rax_14)
    int32_t rax_16
    
    if (rcx_4 u>= 1)
        rax_16 = 0x18
        
        if (rcx_4 u< 0x18)
            rax_16 = rcx_4
    else
        rax_16 = 1
    
    int32_t arg_8 = rax_16 - 1
    (*(*arg2 + 0x160))(arg2, &arg_8, 0x18)
    char rax_19 = arg_8.b
    int32_t rdx_5 = 1 << (rax_19 + 1)
    int32_t rbx_1 = 1 << (rax_19 + 2)
    int32_t r9_2 = rdx_5 + rbp_2
    int32_t r8_5 = rdx_5 + r14_2
    int32_t arg_18 = r9_2
    int32_t rcx_8 = rdx_5 + r15_2
    int32_t arg_20 = r8_5
    int32_t var_88 = rcx_8
    
    if (r9_2 u>= rbx_1)
        int32_t rax_20 = rbx_1 - 1
        
        if (r9_2 s<= 0)
            rax_20 = 0
        
        rsi.b = 0
        arg_18 = rax_20
    
    if (r8_5 u>= rbx_1)
        int32_t rax_21 = rbx_1 - 1
        
        if (r8_5 s<= 0)
            rax_21 = 0
        
        rsi.b = 0
        arg_20 = rax_21
    
    if (rcx_8 u>= rbx_1)
        int32_t rax_22 = rbx_1 - 1
        
        if (rcx_8 s<= 0)
            rax_22 = 0
        
        rsi.b = 0
        var_88 = rax_22
    
    int64_t r9_3 = *arg2
    (*(r9_3 + 0x160))(arg2, &arg_18, zx.q(rbx_1), r9_3)
    int64_t r9_4 = *arg2
    (*(r9_4 + 0x160))(arg2, &arg_20, zx.q(rbx_1), r9_4)
    int64_t r9_5 = *arg2
    (*(r9_5 + 0x160))(arg2, &var_88, zx.q(rbx_1), r9_5)
    return zx.q(rsi.b)

int32_t var_60_1 = 0
int32_t var_70_1 = 0
int64_t var_78 = (_mm_unpacklo_ps(zx.o(0), 0)).q
sub_141ed1a20(&var_78, arg2)
uint64_t result
result.b = 0
return result
