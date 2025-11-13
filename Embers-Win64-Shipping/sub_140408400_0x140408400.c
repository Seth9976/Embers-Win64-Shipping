// 函数: sub_140408400
// 地址: 0x140408400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint64_t rax
float zmm1[0x4]
float zmm2[0x4]

if (arg3 s> 0 && arg3 u>= 8)
    int64_t r9_1 = sx.q(arg3 - 1)
    
    if (arg2 u> arg1 + (r9_1 << 2) || arg2 + (r9_1 << 2) u< arg1)
        int32_t rax_3 = arg3 & 0x80000007
        
        if (rax_3 s< 0)
            rax_3 = ((rax_3 - 1) | 0xfffffff8) + 1
        
        float zmm3[0x4] = data_143205560
        
        do
            int64_t i_3 = sx.q(i)
            zmm2 = *(arg1 + (i_3 << 2))
            zmm1 = _mm_mul_ps(*(arg2 + (i_3 << 2)), zmm3)
            zmm2 = _mm_mul_ps(zmm2, zmm3)
            float zmm0[0x4] = zmm1
            zmm1 = _mm_sub_ps(zmm1, zmm2)
            *(arg1 + (i_3 << 2)) = _mm_add_ps(zmm0, zmm2)
            *(arg2 + (i_3 << 2)) = zmm1
            rax = zx.q(i + 4)
            i += 8
            int64_t rcx_1 = sx.q(rax.d)
            zmm2 = *(arg1 + (rcx_1 << 2))
            zmm1 = _mm_mul_ps(*(arg2 + (rcx_1 << 2)), zmm3)
            zmm2 = _mm_mul_ps(zmm2, zmm3)
            zmm0 = zmm1
            zmm1 = _mm_sub_ps(zmm1, zmm2)
            *(arg1 + (rcx_1 << 2)) = _mm_add_ps(zmm0, zmm2)
            *(arg2 + (rcx_1 << 2)) = zmm1
        while (i s< arg3 - rax_3)

int64_t i_6 = sx.q(i)
int64_t rcx_2 = sx.q(arg3)

if (i_6 s>= rcx_2)
    return 

if (rcx_2 - i_6 s>= 4)
    int64_t r8_1 = arg1 - arg2
    rax = arg2 + 4 + (i_6 << 2)
    int64_t i_5 = ((rcx_2 - i_6 - 4) u>> 2) + 1
    i_6 += i_5 << 2
    int64_t i_1
    
    do
        zmm1 = *(rax - 4)
        zmm2 = *(rax + r8_1 - 4)
        rax += 0x10
        zmm1[0] = zmm1[0] * 0.707106769f
        zmm2[0] = zmm2[0] * 0.707106769f
        zmm1[0] = zmm1[0] - zmm2[0]
        zmm1[0] = zmm1[0] + zmm2[0]
        *(rax + r8_1 - 0x14) = zmm1[0]
        *(rax - 0x14) = zmm1[0]
        zmm1 = *(rax - 0x10)
        zmm1[0] = zmm1[0] * 0.707106769f
        zmm2 = *(rax + r8_1 - 0x10)
        zmm2[0] = zmm2[0] * 0.707106769f
        zmm1[0] = zmm1[0] - zmm2[0]
        zmm1[0] = zmm1[0] + zmm2[0]
        *(rax + r8_1 - 0x10) = zmm1[0]
        *(rax - 0x10) = zmm1[0]
        zmm1 = *(rax - 0xc)
        zmm1[0] = zmm1[0] * 0.707106769f
        zmm2 = *(rax + r8_1 - 0xc)
        zmm2[0] = zmm2[0] * 0.707106769f
        zmm1[0] = zmm1[0] - zmm2[0]
        zmm1[0] = zmm1[0] + zmm2[0]
        *(rax + r8_1 - 0xc) = zmm1[0]
        *(rax - 0xc) = zmm1[0]
        zmm1 = *(rax - 8)
        zmm1[0] = zmm1[0] * 0.707106769f
        zmm2 = *(rax + r8_1 - 8)
        zmm2[0] = zmm2[0] * 0.707106769f
        zmm1[0] = zmm1[0] + zmm2[0]
        zmm1[0] = zmm1[0] - zmm2[0]
        *(rax + r8_1 - 8) = zmm1[0]
        *(rax - 8) = zmm1[0]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (i_6 s>= rcx_2)
    return 

int64_t r10_1 = arg1 - arg2
rax = arg2 + (i_6 << 2)
int64_t i_4 = rcx_2 - i_6
int64_t i_2

do
    zmm1 = *rax
    zmm2 = *(rax + r10_1)
    rax += 4
    zmm1[0] = zmm1[0] * 0.707106769f
    zmm2[0] = zmm2[0] * 0.707106769f
    zmm1[0] = zmm1[0] - zmm2[0]
    zmm1[0] = zmm1[0] + zmm2[0]
    *(rax + r10_1 - 4) = zmm1[0]
    *(rax - 4) = zmm1[0]
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
