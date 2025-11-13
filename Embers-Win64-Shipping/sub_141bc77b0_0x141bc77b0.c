// 函数: sub_141bc77b0
// 地址: 0x141bc77b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg7 != 0)
    bool cond:0_1 = *(arg1 + 0x304) != 0
    *(arg1 + 0x305) = 1
    
    if (not(cond:0_1))
        *(arg1 + 0x304) = 1

uint32_t zmm6_1[0x4]
int64_t zmm8_1
zmm6_1, zmm8_1 = sub_141a54260(arg1 + 0x418, *(arg1 + 0x408), arg1 + 0x28)
int64_t rax = *(arg1 + 0x738)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(arg6, data_142d3f770)
int32_t r8_2 = *(arg1 + 0x74c) - 1
*(arg1 + 0x780) = temp0[0]
*(arg1 + 0x784) = arg7
*(arg1 + 0x788) = arg5
uint32_t zmm0[0x4] = __minss_xmmss_memss(0x3f7fffff, 0x3f7fffff)
uint128_t zmm2_1 = _mm_cvtepi32_pd(zx.q(rax.d))
uint32_t arg_c = zmm0[0]
int64_t r9 = r8_2.q
zmm6_1[0].q = zmm6_1[0].q f* zmm2_1.q
uint64_t temp0_3 = _mm_cvtepi32_pd(zx.q((rax u>> 0x20).d))
zmm6_1[0].q = zmm6_1[0].q f/ temp0_3
zmm0 = zmm6_1
int64_t rcx_1 = int.q(zmm6_1[0].q)
int32_t arg_8
uint128_t zmm1_1
int64_t zmm5

if (arg5 != 1)
    if (rcx_1 != -0x8000000000000000)
        zmm1_1.q = float.d(rcx_1)
        
        if (not(zmm1_1.q f== zmm0[0].q))
            uint32_t temp0_12 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0].q))
            zmm0 = zx.o(0)
            zmm0[0].q = float.d(rcx_1 - (zx.q(temp0_12) & 1))
    
    zmm6_1[0].q = zmm6_1[0].q f- zmm0[0].q
    zmm5 = (zx.o(0)).q
    int32_t rax_7 = int.d(zmm0[0].q)
    
    if (not(zmm6_1[0].q f<= 0.0))
        zmm6_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0].q, zmm6_1[0].q)
    
    zmm0 = zx.o(0)
    arg_8 = rax_7
    zmm0[0] = fconvert.s(zmm6_1[0].q)
    zmm6_1 = zx.o(0)
    
    if (zmm0[0] f>= 0f)
        arg_c = _mm_min_ss(zmm0[0], 0x3f7fffff)[0]
    else
        arg_c = 0
else
    if (rcx_1 != -0x8000000000000000)
        zmm1_1.q = float.d(rcx_1)
        
        if (not(zmm1_1.q f== zmm6_1[0].q))
            uint32_t temp0_5 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0].q))
            zmm0 = zx.o(0)
            zmm0[0].q = float.d(rcx_1 - (zx.q(temp0_5) & zx.q(arg5)))
    
    zmm6_1[0].q = zmm6_1[0].q f- zmm0[0].q
    zmm5 = (zx.o(0)).q
    int32_t rax_4 = int.d(zmm0[0].q)
    
    if (not(zmm6_1[0].q f<= 0.0))
        zmm6_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0].q, zmm6_1[0].q)
    
    zmm0 = zx.o(0)
    zmm0[0] = fconvert.s(zmm6_1[0].q)
    zmm6_1 = zx.o(0)
    
    if (zmm0[0] f>= 0f)
        arg_c = _mm_min_ss(zmm0[0], 0x3f7fffff)[0]
    else
        arg_c = 0
    
    arg_8.q = r9
    uint128_t zmm3_1
    zmm3_1.d = arg_c.d f- rax_4.q:4.d
    zmm1_1.d = zmm3_1.d f+ zmm3_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rdx_2 = int.d(zmm1_1.d) s>> 1
    arg_8 = r8_2 - rax_4 + rdx_2
    zmm3_1.d = zmm3_1.d f- _mm_cvtepi32_ps(zx.o(rdx_2))[0]
    
    if (zmm3_1.d f>= 0f)
        arg_c = _mm_min_ss(zmm3_1.d, 0x3f7fffff).d
    else
        arg_c = 0

*(arg1 + 0x744) = arg_8.q
int64_t rcx_8 = *(arg1 + 0x744)
arg_8.q = 0
int64_t var_158 = r9
int64_t var_168 = 0
int64_t var_160 = rcx_8
arg_8.q = rcx_8
int32_t temp0_16 = rcx_8.d
int64_t* rax_9

if (temp0_16 s< 0 || (temp0_16 == 0 && arg_c[0] f< 0f))
    rax_9 = &var_168
else
    arg_8.q = rcx_8
    
    if (rcx_8.d s< r8_2 || (rcx_8.d == r8_2 && arg_c[0] f< r9:4.d))
        rax_9 = &var_160
    else
        rax_9 = &var_158

zmm2_1.q = zmm2_1.q f* zmm8_1
*(arg1 + 0x744) = *rax_9
zmm2_1.q = zmm2_1.q f/ temp0_3
int64_t rcx_9 = int.q(zmm2_1.q)
zmm0 = zmm2_1

if (rcx_9 != -0x8000000000000000)
    zmm1_1.q = float.d(rcx_9)
    
    if (not(zmm1_1.q f== zmm2_1.q))
        uint32_t temp0_18 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0].q))
        zmm0 = zx.o(0)
        zmm0[0].q = float.d(rcx_9 - (zx.q(temp0_18) & 1))

zmm2_1.q = zmm2_1.q f- zmm0[0].q
int32_t rcx_11 = int.d(zmm0[0].q)

if (not(zmm2_1.q f<= zmm5))
    zmm2_1 = _mm_min_sd(_mm_cvtps_pd(0x3f7fffff)[0].q, zmm2_1.q)

zmm0 = _mm_cvtpd_ps(zmm2_1)

if (zmm0[0] f>= zmm6_1[0])
    arg_c = _mm_min_ss(zmm0[0], 0x3f7fffff)[0]
else
    arg_c = 0

int64_t rdx_3 = rcx_11.q
var_160 = 0
var_168 = rdx_3
arg_8.q = rdx_3
var_158 = r9
int64_t* rax_13

if (rcx_11 s< 0 || (rcx_11 == 0 && arg_c[0] f< 0f))
    rax_13 = &var_160
else
    arg_8.q = rdx_3
    
    if (rcx_11 s< r8_2 || (rcx_11 == r8_2 && arg_c[0] f< r9:4.d))
        rax_13 = &var_168
    else
        rax_13 = &var_158

*(arg1 + 0x750) = *rax_13
int32_t rax_15 = arg4 * 2

if (arg5 != 2)
    rax_15 = arg4

*(arg1 + 0x778) = rax_15
rax_15.b = arg5 != 1
*(arg1 + 0x77c) = 0
*(arg1 + 0x794) = rax_15.b
*(arg1 + 0x758) = 1
int64_t result = sub_140d3c6e0(arg1 + 0x418)

if (result != 0 && *(arg1 + 0x420) != 0)
    int32_t r8_3 = *(arg1 + 0x740)
    int64_t rdx_4 = *(arg1 + 0x744)
    arg_8.q = r8_3.q
    zmm2_1.d = rdx_4:4.d.d f+ 0f
    zmm1_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rax_17 = int.d(zmm1_1.d)
    zmm1_1 = zmm2_1
    int32_t rcx_13 = int.d(zmm1_1.d)
    
    if (rcx_13 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_13))[0] f== zmm1_1.d))
        zmm1_1 =
            _mm_cvtepi32_ps(zx.o(rcx_13 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
    
    zmm2_1.d = zmm2_1.d f- zmm1_1.d
    
    if (zmm2_1.d f>= zmm6_1[0])
        arg_c = _mm_min_ss(zmm2_1.d, 0x3f7fffff).d
    else
        arg_c = 0
    
    int64_t arg_18
    arg_18.d = r8_3
    arg_18:4.d = 0
    var_168 = rdx_4
    zmm2_1.d = var_168:4.d.d f+ arg_18:4.d
    zmm1_1.d = zmm2_1.d f+ zmm2_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    int32_t rax_24 = int.d(zmm1_1.d)
    zmm1_1 = zmm2_1
    int32_t rcx_15 = int.d(zmm1_1.d)
    arg_18.d = (rax_24 s>> 1) + rdx_4.d + r8_3
    
    if (rcx_15 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_15))[0] f== zmm1_1.d))
        zmm1_1 =
            _mm_cvtepi32_ps(zx.o(rcx_15 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_1, zmm1_1.q)) & 1)))
    
    zmm2_1.d = zmm2_1.d f- zmm1_1.d
    
    if (zmm2_1.d f>= zmm6_1[0])
        arg_18:4.d = _mm_min_ss(zmm2_1.d, 0x3f7fffff).d
    else
        arg_18:4.d = 0
    
    void var_e8
    char* rax_30 =
        sub_141a2f570(&var_e8, arg_18, ((rax_17 s>> 1) + rdx_4.d + r8_3).q, *(arg1 + 0x738), 0)
    char var_f4
    char var_f4_1 = var_f4 & 0xc0
    int64_t var_11c_1 = 0
    int64_t var_110_1 = 0
    int64_t var_108_1 = 0
    int128_t zmm1_2 = *(rax_30 + 0x10)
    int32_t var_fc_1 = 0x80000000
    uint128_t var_148 = *rax_30
    int128_t var_138_1 = zmm1_2
    int32_t var_120_1 = 0x3f800000
    uint64_t var_128_1 = *(rax_30 + 0x20)
    int32_t var_100_1 = *(arg1 + 0x758)
    int32_t var_f8_1 = 0
    void var_c0
    result =
        sub_141a474c0(arg1 + 0x418, sub_141a2f010(&var_c0, &var_148), arg1 + 0x28, data_143f312e0)
    
    if (var_110_1 != 0)
        return sub_140a74f90(var_110_1)

return result
