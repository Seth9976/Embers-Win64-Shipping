// 函数: sub_14099ef30
// 地址: 0x14099ef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg2 + 0x18))
int32_t* rax = *arg3
int32_t i_1 = 1
arg3[3].d = 1
int32_t i_3 = 0
*(arg3 + 0x1c) = r10.d
arg3[4].d = 0
*(arg3 + 0x24) = 0
*rax = 0

if (r10.d s> 0 && r10.d u>= 4)
    int64_t rdi_1 = arg3[1]
    
    if (rdi_1 u> &arg3[1] || rdi_1 + (sx.q((r10 - 1).d) << 2) u< &arg3[1])
        int32_t rax_4 = r10.d & 0x80000003
        
        if (rax_4 s< 0)
            rax_4 = ((rax_4 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_2 = r10.d - rax_4
        
        do
            i_3 += 4
        while (i_3 s< rcx_2)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2 + 3)
        __builtin_memset(rdi_1, 0, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2 << 2)

int64_t i = sx.q(i_3)

if (i s< r10)
    if (r10 - i s>= 4)
        do
            *(arg3[1] + (i << 2)) = 0
            *(arg3[1] + (i << 2) + 4) = 0
            *(arg3[1] + (i << 2) + 8) = 0
            *(arg3[1] + (i << 2) + 0xc) = 0
            i += 4
        while (i s< r10 - 3)
    
    for (; i s< r10; i += 1)
        *(arg3[1] + (i << 2)) = 0

int32_t rdx_4 = 0
*(arg3[1] + (sx.q(*arg5) << 2)) = 0x3fc00000
*(arg3[1] + (sx.q(arg5[1]) << 2)) = 0xbfc00000
arg4[3].d = 1
*(arg4 + 0x1c) = r10.d
arg4[4].d = 0
*(arg4 + 0x24) = 0
int32_t rax_20 = *arg5

if (rax_20 s> 0)
    int64_t rcx_8 = 0
    
    do
        rcx_8 += 4
        rdx_4 += 1
        *(rcx_8 + arg4[1] - 4) = 0
        rax_20 = *arg5
    while (rdx_4 s< rax_20)

int32_t rcx_10 = arg5[1] - rax_20
int128_t zmm6
int128_t var_28 = zmm6
double zmm7[0x2]
double var_38[0x2] = zmm7
void* rdi_2

if (rcx_10 == 3)
    rdi_2 = &arg4[1]
    **arg4 = 0xbfddb3d7
    *(*rdi_2 + (sx.q(*arg5) << 2)) = 0xbf5db3d7
    *(*rdi_2 + (sx.q(arg5[1]) << 2)) = 0xbf5db3d7
    *(*rdi_2 + (sx.q(*arg5) << 2) + 4) = 0x3fddb3d7
    *(*rdi_2 + (sx.q(*arg5) << 2) + 8) = 0x3fddb3d7
else if (rcx_10 - 1 s<= 2)
    int32_t* rax_33 = *arg4
    rdi_2 = &arg4[1]
    
    if (rcx_10 != 2)
        *rax_33 = 0xc0c00000
        *(*rdi_2 + (sx.q(*arg5) << 2)) = 0x40400000
        *(*rdi_2 + (sx.q(arg5[1]) << 2)) = 0x40400000
    else
        *rax_33 = 0xc0400000
        *(*rdi_2 + (sx.q(*arg5) << 2)) = 0
        *(*rdi_2 + (sx.q(arg5[1]) << 2)) = 0
        *(*rdi_2 + (sx.q(*arg5) << 2) + 4) = 0x40400000
else
    float zmm1[0x2] = 0x40490fdb
    zmm1[0] = 3.14159274f f/ _mm_cvtepi32_ps(zx.o(rcx_10)).d
    double zmm0_1[0x2]
    zmm0_1, zmm7 = __libm_sse2_sincos_(_mm_cvtps_pd(zmm1))
    rdi_2 = &arg4[1]
    int32_t zmm1_1 = fconvert.s(zmm0_1[0])
    **arg4 = 0
    int64_t rcx_15 = sx.q(*arg5)
    int64_t rax_28 = *rdi_2
    zmm1_1 = zmm1_1 f* -3f
    zmm6.d = fconvert.s(_mm_shuffle_pd(zmm0_1, zmm0_1, 1)[0])
    *(rax_28 + (rcx_15 << 2)) = zmm1_1
    zmm6.d = zmm6.d f* -6f
    *(*rdi_2 + (sx.q(arg5[1]) << 2)) = zmm1_1
    zmm6.d = zmm6.d f- -6f
    
    if (rcx_10 - 1 s>= 1)
        do
            double temp0_5[0x2] = _mm_cvtepi32_pd(zx.o(i_1)[0])
            temp0_5[0] = temp0_5[0] * zmm7[0]
            zmm0_1 = sin(temp0_5[0])
            int32_t rax_31 = *arg5 + i_1
            i_1 += 1
            *(*rdi_2 + (sx.q(rax_31) << 2)) = fconvert.s(zmm0_1[0]) f* zmm6.d
        while (i_1 s<= rcx_10 - 1)

uint64_t result = zx.q(arg5[1] + 1)
int64_t i_2 = sx.q(result.d)

if (i_2 s< r10)
    result = r10 - i_2
    
    if (result s>= 4)
        do
            *(*rdi_2 + (i_2 << 2)) = 0
            *(*rdi_2 + (i_2 << 2) + 4) = 0
            *(*rdi_2 + (i_2 << 2) + 8) = 0
            result = *rdi_2
            *(result + (i_2 << 2) + 0xc) = 0
            i_2 += 4
        while (i_2 s< r10 - 3)
    
    for (; i_2 s< r10; i_2 += 1)
        result = *rdi_2
        *(result + (i_2 << 2)) = 0

return result
