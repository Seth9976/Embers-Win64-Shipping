// 函数: sub_14267ae70
// 地址: 0x14267ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int64_t r13_1 = sx.q(arg4)
void* rbp_1 = arg3
int64_t i_4 = sx.q(arg2)

if (arg4 s<= 0)
    return 

int32_t r10_1 = arg6[1].d
int32_t r14_3 = r10_1 s/ 3
int32_t rdx_2 = r10_1 + (i_4 << 1).d + i_4.d

if (rdx_2 s> *(arg6 + 0xc))
    sub_1405dadb0(arg6, rdx_2)

uint64_t* rbx_1 = arg7
int32_t rdx_4 = rbx_1[1].d + r13_1.d

if (rdx_4 s> *(rbx_1 + 0xc))
    sub_1405dadb0(rbx_1, rdx_4)

int64_t var_88_1 = 0
int64_t i_3 = i_4
int32_t var_80_1 = 0
float zmm0[0x4] = *(arg5 + 0x20)
float zmm9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm9[0] = zmm9[0] * zmm0[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
zmm9[0] = zmm9[0] * zmm0[0]

if (i_4.d s> 0)
    float (* r15_2)[0x4] = arg1 + 8
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    float zmm8[0x4]
    float var_58_1[0x4] = zmm8
    int64_t i
    
    do
        bool cond:2_1 = arg8[3].b == 0
        float zmm4[0x4] = *arg5
        float zmm5[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps((*r15_2)[-2], (*r15_2)[0].q), 
                _mm_unpacklo_ps((*r15_2)[-1], 0)[0].q), 
            *(arg5 + 0x20))
        float zmm3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
        float zmm1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), zmm1)
        float zmm2[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), zmm3), zmm0)
        zmm2 = _mm_add_ps(zmm2, zmm2)
        zmm4 = _mm_mul_ps(zmm4, zmm2)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
        zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), zmm3)
        zmm0 = _mm_mul_ps(zmm0, zmm1)
        zmm4 = _mm_add_ps(zmm4, zmm5)
        zmm6 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm6, zmm0), zmm4), *(arg5 + 0x10))
        var_88_1.d = zmm6[0]
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        var_88_1:4.d = zmm7[0]
        float var_80_2 = zmm8[0]
        
        if (cond:2_1)
            zmm1 = zx.o(var_88_1)
            *(arg8 + 0xc) = zmm1.q
            *arg8 = zmm1.q
            *(arg8 + 0x14) = var_80_2
            arg8[1].d = var_80_2
            arg8[3].b = 1
        else
            zmm0 = *arg8
            zmm1 = __minss_xmmss_memss(zmm7[0], *(arg8 + 4))
            zmm0 = _mm_min_ss(zmm0[0], zmm6[0])
            *(arg8 + 4) = zmm1[0]
            zmm1 = *(arg8 + 0xc)
            *arg8 = zmm0[0]
            zmm1 = _mm_max_ss(zmm1[0], zmm6[0])
            zmm0 = __minss_xmmss_memss(zmm8[0], arg8[1].d)
            *(arg8 + 0xc) = zmm1[0]
            zmm1 = __maxss_xmmss_memss(zmm8[0], *(arg8 + 0x14))
            arg8[1].d = zmm0[0]
            zmm0 = _mm_max_ss(arg8[2].d[0], zmm7[0])
            *(arg8 + 0x14) = zmm1[0]
            arg8[2].d = zmm0[0]
        
        int64_t rbp_2 = sx.q(arg6[1].d)
        int32_t rax_3 = (rbp_2 + 1).d
        arg6[1].d = rax_3
        
        if (rax_3 s> *(arg6 + 0xc))
            sub_1406105e0(arg6)
        
        *(*arg6 + (rbp_2 << 2)) = zmm6[0]
        int64_t rbp_3 = sx.q(arg6[1].d)
        int32_t rax_5 = (rbp_3 + 1).d
        arg6[1].d = rax_5
        
        if (rax_5 s> *(arg6 + 0xc))
            sub_1406105e0(arg6)
        
        *(*arg6 + (rbp_3 << 2)) = zmm7[0]
        int64_t rbp_4 = sx.q(arg6[1].d)
        int32_t rax_7 = (rbp_4 + 1).d
        arg6[1].d = rax_7
        
        if (rax_7 s> *(arg6 + 0xc))
            sub_1406105e0(arg6)
        
        r15_2 = &(*r15_2)[3]
        *(*arg6 + (rbp_4 << 2)) = zmm8[0]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx_1 = arg7
    rbp_1 = arg3

if (r13_1.d s<= 0)
    return 

zmm9[0] - 0f
int32_t* rdi_2 = rbp_1 + 4
int64_t r13_2 = -4
int32_t* r12_1 = 4

if (zmm9[0] < 0f)
    r13_2 = 4

if (zmm9[0] < 0f)
    r12_1 = -fffffffffffffffc

int64_t i_2 = (r13_1 - 1) u/ 3 + 1
int64_t i_1

do
    int64_t rsi_2 = sx.q(rbx_1[1].d)
    int32_t r15_4 = *(rdi_2 + r13_2) + r14_3
    int32_t rax_9 = (rsi_2 + 1).d
    rbx_1[1].d = rax_9
    
    if (rax_9 s> *(rbx_1 + 0xc))
        sub_1405a4cf0(rbx_1)
    
    *(*rbx_1 + (rsi_2 << 2)) = r15_4
    int64_t rsi_3 = sx.q(rbx_1[1].d)
    int32_t r15_6 = *rdi_2 + r14_3
    int32_t rax_11 = (rsi_3 + 1).d
    rbx_1[1].d = rax_11
    
    if (rax_11 s> *(rbx_1 + 0xc))
        sub_1405a4cf0(rbx_1)
    
    *(*rbx_1 + (rsi_3 << 2)) = r15_6
    int64_t rsi_4 = sx.q(rbx_1[1].d)
    int32_t r15_8 = *(r12_1 + rdi_2) + r14_3
    int32_t rax_13 = (rsi_4 + 1).d
    rbx_1[1].d = rax_13
    
    if (rax_13 s> *(rbx_1 + 0xc))
        sub_1405a4cf0(rbx_1)
    
    rdi_2 = &rdi_2[3]
    *(*rbx_1 + (rsi_4 << 2)) = r15_8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
