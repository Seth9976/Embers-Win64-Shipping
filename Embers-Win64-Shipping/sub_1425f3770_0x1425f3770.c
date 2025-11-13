// 函数: sub_1425f3770
// 地址: 0x1425f3770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0
int64_t rbx = sx.q(arg3)
int64_t result_2 = 0
int64_t result_1 = 0
int32_t var_7c = 0
int32_t var_80 = rbx.d
int32_t rsi = rbx.d

if (arg3 s> 0)
    sub_140775270(&result_1)
    result_2 = result_1
    rsi = var_80

memcpy(result_2, arg2, (rbx << 2).d)
uint64_t var_d8 = 0
int32_t temp0 = divs.dp.d(sx.q(rsi), arg4)
int32_t var_cc = 0
int64_t rbx_1 = 0
uint64_t r12 = 0
int64_t var_b0 = 0
int32_t r13 = 0
int32_t var_a4 = 0
int32_t r8_2 = 0
int32_t rdx_3 = 0
int32_t var_a0 = rsi
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(temp0)).d f/ _mm_cvtepi32_ps(zx.o(arg5)).d
int32_t var_90 = zmm1.d

if (rsi s> 0)
    int32_t var_a8_1 = 0
    sub_1405dadb0(&var_b0, rsi)
    r8_2 = var_a4
    rdx_3 = var_a8_1
    rsi = var_a0
    rbx_1 = var_b0

int32_t rax_3 = rsi + rdx_3
int32_t var_a8_2 = rax_3

if (rax_3 s> r8_2)
    sub_1406105e0(&var_b0)
    rsi = var_a0
    rbx_1 = var_b0

memcpy(rbx_1, result_1, rsi << 2)
int32_t rdx_6 = 0
uint32_t zmm6[0x4] = var_90
int32_t rax_4 = arg5
int32_t r14_1 = arg4
uint32_t var_b8 = zmm6[0]
arg5 = temp0
int32_t var_c8 = rsi
int32_t var_c0 = r14_1

if (rsi s> 0)
    int32_t var_d0_1 = 0
    sub_1405dadb0(&var_d8, rsi)
    zmm6 = var_b8
    r14_1 = var_c0
    rsi = var_c8
    r13 = var_cc
    rdx_6 = var_d0_1
    r12 = var_d8
    arg5 = temp0

int32_t rdi_1 = rsi + rdx_6

if (rdi_1 s> r13)
    sub_1406105e0(&var_d8)
    zmm6 = var_b8
    r14_1 = var_c0
    rsi = var_c8
    r13 = var_cc
    r12 = var_d8
    arg5 = temp0

memcpy(r12, rbx_1, rsi << 2)

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (r14_1 != 2 && rdi_1 != 0)
    rsi = arg5 * 2
    int64_t rdi_2 = sx.q(rsi)
    int64_t rax_8 = 4 * rdi_2
    
    if (mulu.dp.q(4, rdi_2) u>> 0x40 != zx.o(0))
        rax_8 = -1
    
    int64_t rax_9 = j_sub_140a82f30(rax_8)
    j_sub_140a74f90(0)
    memset(rax_9, 0, rdi_2 << 2)
    
    if (arg5 s> 0)
        int32_t r8_8 = 0
        uint64_t r9 = r12
        uint64_t i_4 = zx.q(arg5)
        uint64_t i
        
        do
            int32_t rcx_13 = 0
            
            if (r14_1 s> 0)
                uint64_t rdx_9 = r9
                
                do
                    int32_t rax_12 = rcx_13 & 0x80000001
                    
                    if (rax_12 s< 0)
                        rax_12 = ((rax_12 - 1) | 0xfffffffe) + 1
                    
                    rcx_13 += 1
                    int64_t rax_16 = sx.q(rax_12 + r8_8)
                    float zmm0_2 = *(rax_9 + (rax_16 << 2)) f+ *rdx_9
                    rdx_9 += 4
                    *(rax_9 + (rax_16 << 2)) = zmm0_2
                while (rcx_13 s< r14_1)
            
            r8_8 += 2
            r9 += sx.q(r14_1) << 2
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    int32_t var_c8_1 = rsi
    r14_1 = 2
    int32_t var_c0_1 = 2
    int32_t rdx_10 = 0
    
    if (rsi s> r13)
        int32_t var_d0_3 = 0
        
        if (rsi != r13)
            sub_1405dadb0(&var_d8, rsi)
            zmm6 = var_b8
            r14_1 = var_c0_1
            rsi = var_c8_1
            r13 = var_cc
            rdx_10 = var_d0_3
            r12 = var_d8
            arg5 = temp0
    
    rdi_1 = rsi + rdx_10
    
    if (rdi_1 s> r13)
        sub_1406105e0(&var_d8)
        zmm6 = var_b8
        r14_1 = var_c0_1
        rsi = var_c8_1
        r12 = var_d8
        arg5 = temp0
    
    memcpy(r12, rax_9, rsi << 2)
    j_sub_140a74f90(rax_9)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
float zmm4[0x4] = 0x416312d000000000
uint32_t zmm0_1[0x4] = zx.o(0)
zmm0_1[0].q = float.d(performanceCount)
zmm0_1[0].q = zmm0_1[0].q f* data_143d796f8
zmm1 = zx.o(*(arg1 + 0xc0))
zmm0_1[0].q = zmm0_1[0].q f* zmm4[0].q
zmm0_1[0].q = zmm0_1[0].q f+ 167772160000000.5
int64_t rcx_19 = int.q(zmm0_1[0].q)
uint32_t zmm2[0x4]

if (rcx_19 != -0x8000000000000000)
    zmm2 = zx.o(0)
    zmm2[0].q = float.d(rcx_19)
    
    if (not(zmm2[0].q f== zmm0_1[0].q))
        uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0].q))
        zmm0_1 = zx.o(0)
        zmm0_1[0].q = float.d(rcx_19 - (zx.q(temp0_4) & 1))

zmm2 = zx.o(0)
zmm2[0].q = float.d(int.q(zmm0_1[0].q) - *(arg1 + 0xb8))
zmm2[0].q = zmm2[0].q f* 9.9999999999999995e-08

if (not(zmm1.q f>= zmm2[0].q))
    zmm6[0] = zmm6[0] f* 0.5f
    zmm1.q = fconvert.d(zmm6[0])
    zmm1.q = zmm1.q f+ zmm2[0].q
    *(arg1 + 0xc0) = zmm1.q

zmm1.q = zmm1.q f* zmm4[0].q
uint64_t var_68
__builtin_memset(&var_68, 0, 0x14)
int32_t var_48 = 0
int64_t var_50 = 0
zmm1.q = zmm1.q f+ 0.5
int64_t rcx_21 = int.q(zmm1.q)

if (rcx_21 != -0x8000000000000000)
    zmm0_1 = zx.o(0)
    zmm0_1[0].q = float.d(rcx_21)
    
    if (not(zmm0_1[0].q f== zmm1.q))
        zmm1.q = float.d(rcx_21 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm6[0] = zmm6[0] f* 10000000f
int64_t var_78 = int.q(zmm1.q)
zmm6[0] = zmm6[0] f+ 0.5f
zmm1.q = fconvert.d(zmm6[0])
int64_t rcx_23 = int.q(zmm1.q)

if (rcx_23 != -0x8000000000000000)
    zmm2 = zx.o(0)
    zmm2[0].q = float.d(rcx_23)
    
    if (not(zmm2[0].q f== zmm1.q))
        zmm1.q = float.d(rcx_23 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1))

zmm4 = data_142d3f670
int32_t rdx_13 = 0
uint32_t zmm3[0x4] = data_142d3f7e0
int64_t var_70 = int.q(zmm1.q)

if (rdi_1 s> 0)
    if (rdi_1 u>= 8)
        int32_t rcx_26 = rdi_1 & 0x80000007
        
        if (rcx_26 s< 0)
            rcx_26 = ((rcx_26 - 1) | 0xfffffff8) + 1
        
        do
            zmm0_1 = *(r12 + (i_1 << 2))
            rdx_13 += 8
            zmm2 = zmm0_1
            zmm0_1 = _mm_min_ps(zmm0_1, zmm4)
            zmm2 = _mm_cmpeq_ps(zmm2, zmm3, 1)
            *(r12 + (i_1 << 2)) = _mm_or_ps(_mm_andnot_ps(zmm2, zmm0_1), _mm_and_ps(zmm3, zmm2))
            zmm0_1 = *(r12 + (i_1 << 2) + 0x10)
            zmm2 = _mm_cmpeq_ps(zmm0_1, zmm3, 1)
            zmm1 = zmm2
            zmm2 = _mm_and_ps(zmm2, zmm3)
            *(r12 + (i_1 << 2) + 0x10) =
                _mm_or_ps(_mm_andnot_ps(zmm1, _mm_min_ps(zmm0_1, zmm4)), zmm2)
            i_1 += 8
        while (i_1 s< sx.q(rdi_1 - rcx_26))
    
    if (rdx_13 s< rdi_1)
        uint32_t* rcx_30 = r12 + (sx.q(rdx_13) << 2)
        uint64_t i_3 = zx.q(rdi_1 - rdx_13)
        uint64_t i_2
        
        do
            zmm0_1 = *rcx_30
            
            if (zmm0_1[0] f>= -1f)
                zmm0_1 = _mm_min_ss(zmm0_1[0], 0x3f800000)
            else
                zmm0_1 = 0xbf800000
            
            *rcx_30 = zmm0_1[0]
            rcx_30 = &rcx_30[1]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)

int96_t var_60
int32_t rcx_31 = var_60:4.d
int32_t var_54 = arg5
var_50:4.d = rax_4
uint32_t var_48_1 = zmm6[0]
var_60:8.d = rsi
var_50.d = r14_1

if (rsi s> rcx_31)
    sub_1405dadb0(&var_68, rsi)
    rcx_31 = var_60:4.d
    rsi = var_60:8.d

int32_t rax_34 = rsi + var_60.d
var_60.d = rax_34

if (rax_34 s> rcx_31)
    sub_1406105e0(&var_68)
    rsi = var_60:8.d

memcpy(var_68, r12, rsi << 2)
int64_t* rcx_35 = *(arg1 + 0xa0)
(*(*rcx_35 + 0x28))(rcx_35, &var_78)
uint64_t rcx_36 = var_68
*(arg1 + 0xc0) = fconvert.d(zmm6[0]) f+ *(arg1 + 0xc0)

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

if (r12 != 0)
    sub_140a74f90(r12)

int64_t result = result_1

if (result == 0)
    return result

return sub_140a74f90(result)
