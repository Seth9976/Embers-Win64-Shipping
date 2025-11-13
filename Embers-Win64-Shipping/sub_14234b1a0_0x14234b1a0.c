// 函数: sub_14234b1a0
// 地址: 0x14234b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
uint64_t rbp = 0
int64_t* rbx = arg3
uint64_t* r8 = arg5
void* r12 = *(*arg7 + (sx.q(arg8) << 3))
uint64_t result = zx.q(r8[1].d)
int64_t* var_130 = rbx

if (arg1[1].d != result.d)
    result = zx.q(*(arg1 + 0xc))
    int32_t rdx = 0
    arg1[1].d = 0
    
    if (result.d s< 0 && result.d != 0)
        result = sub_1405a52a0(arg1, 0)
        rdx = arg1[1].d
        r8 = arg5
    
    int32_t rcx_3 = r8[1].d + rdx
    arg1[1].d = rcx_3
    
    if (rcx_3 s> *(arg1 + 0xc))
        result = sub_1405c4fe0(arg1)
        r8 = arg5

int32_t r9 = rbx[1].d
int64_t* i = r12 + 0x3c0
int32_t r10_1 = *(arg2 + 8)
float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
int64_t* i_1 = i
int64_t var_d0 = arg9
int64_t var_c8 = 0
int32_t var_138 = r9
int32_t var_134 = r10_1
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (r12 != -0x3c0)
    result = 0
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    uint32_t zmm13[0x4] = data_143f58a90
    uint64_t result_1 = 0
    
    do
        int32_t j = 0
        
        if (i[1].d s> 0)
            do
                uint64_t rcx_5 = zx.q(*(*i + rbp))
                
                if (rcx_5.d s< r8[1].d)
                    int64_t rax_4 = *arg1
                    uint64_t rdx_1 = zx.q(rcx_5.d)
                    uint64_t rdi_2 = zx.q(rcx_5.d) << 6
                    *(rax_4 + rdi_2) = data_14399f6e0
                    *(rax_4 + rdi_2 + 0x10) = data_14399f6f0
                    *(rax_4 + rdi_2 + 0x20) = data_14399f700
                    *(rax_4 + rdi_2 + 0x30) = data_14399f710
                    uint64_t rax_10
                    int64_t rcx_7
                    
                    if (arg4 != 0)
                        int64_t r8_1 = sx.q(*(*arg4 + (rcx_5 << 2)))
                        
                        if (r8_1.d s< 0 || r8_1.d s>= *(arg2 + 8))
                            r10_1.b = 0
                        else
                            r10_1.b = 1
                        
                        int64_t r9_1 = sx.q(*(*(arg6 + 0x20) + rcx_5 * 0xc + 8))
                        
                        if (r10_1.b != 0)
                            if (*(r8_1 + *rbx) != 1 && r9_1.d != 0xffffffff)
                                rcx_7 = r9_1
                                goto label_14234b3ad
                            
                            r9 = var_138
                            rax_10 = r8_1 * 3
                            r8 = arg5
                            r10_1 = var_134
                            goto label_14234b676
                        
                        int64_t rcx_10 = *arg1
                        float (* rax_13)[0x4] = rdx_1 * 0x30 + *(arg6 + 0x30)
                        zmm3 = *rax_13
                        zmm12 = rax_13[1]
                        zmm1 = _mm_add_ps(zmm3, zmm3)
                        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                        zmm4 = _mm_mul_ps(zmm1, zmm3)
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
                        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 1)
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                        zmm0 = _mm_add_ps(zmm0, zmm4)
                        zmm3 = _mm_mul_ps(zmm3, zmm1)
                        zmm1 = rax_13[2]
                        zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                        zmm10 = _mm_add_ps(zmm3, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm3 = data_143f58a80
                        zmm10 = _mm_mul_ps(zmm10, zmm1)
                        zmm5 = _mm_mul_ps(zmm5, zmm2)
                        zmm3[0].q = zmm12 u>> 0x40
                        zmm2 = _mm_sub_ps(zmm3, zmm0)
                        zmm12 = _mm_shuffle_ps(zmm12, zmm3, 0xc4)
                        zmm2 = _mm_and_ps(_mm_mul_ps(zmm2, zmm1), zmm13)
                        zmm0 = _mm_shuffle_ps(zmm5, zmm2, 0x32)
                        zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm2, 0), zmm0, 0x82)
                        zmm0 = _mm_shuffle_ps(zmm10, zmm2, 0x31)
                        zmm11 = _mm_shuffle_ps(zmm5, zmm2, 0x10)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm5, 0x12)
                        zmm11 = _mm_shuffle_ps(zmm11, zmm0, 0x88)
                        zmm10 = _mm_shuffle_ps(zmm10, zmm2, 0xe8)
                        
                        if (r9_1.d == 0xffffffff)
                            r8 = arg5
                            r9 = var_138
                            r10_1 = var_134
                            *(rcx_10 + rdi_2) = zmm4
                            *(rcx_10 + rdi_2 + 0x10) = zmm11
                            *(rcx_10 + rdi_2 + 0x20) = zmm10
                            *(rcx_10 + rdi_2 + 0x30) = zmm12
                        else
                            r8 = arg5
                            r10_1 = var_134
                            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                            r9 = var_138
                            zmm9 = _mm_shuffle_ps(zmm4, zmm4, 0)
                            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                            zmm3 = _mm_shuffle_ps(zmm10, zmm10, 0)
                            zmm2 = _mm_shuffle_ps(zmm12, zmm12, 0)
                            float (* rax_16)[0x4] = (r9_1 << 6) + rcx_10
                            zmm6 = rax_16[1]
                            zmm5 = *rax_16
                            zmm7 = rax_16[2]
                            zmm8 = rax_16[3]
                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                            zmm1 = _mm_mul_ps(zmm1, zmm7)
                            zmm4 = _mm_mul_ps(zmm4, zmm8)
                            zmm9 = _mm_mul_ps(zmm9, zmm5)
                            zmm3 = _mm_mul_ps(zmm3, zmm5)
                            zmm2 = _mm_mul_ps(zmm2, zmm5)
                            zmm9 = _mm_add_ps(zmm9, zmm0)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x55), zmm6)
                            zmm9 = _mm_add_ps(zmm9, zmm1)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), zmm7)
                            zmm9 = _mm_add_ps(zmm9, zmm4)
                            zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
                            zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                            *(rcx_10 + rdi_2) = zmm9
                            zmm11 = _mm_mul_ps(zmm11, zmm8)
                            zmm4 = _mm_add_ps(zmm4, zmm0)
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0x55), zmm6)
                            zmm4 = _mm_add_ps(zmm4, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm7)
                            zmm10 = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                            zmm0 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                            zmm4 = _mm_add_ps(zmm4, zmm11)
                            zmm0 = _mm_mul_ps(zmm0, zmm6)
                            zmm3 = _mm_add_ps(zmm3, zmm1)
                            zmm10 = _mm_mul_ps(zmm10, zmm8)
                            *(rcx_10 + rdi_2 + 0x10) = zmm4
                            zmm1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, zmm7)
                            zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
                            zmm3 = _mm_add_ps(zmm3, zmm10)
                            zmm12 = _mm_mul_ps(zmm12, zmm8)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            *(rcx_10 + rdi_2 + 0x20) = zmm3
                            *(rcx_10 + rdi_2 + 0x30) = _mm_add_ps(zmm2, zmm12)
                    else if (rcx_5.d s< *(arg2 + 8))
                        if (r9 != r10_1)
                            rax_10 = rcx_5 * 3
                        label_14234b676:
                            float (* rax_20)[0x4] = (rax_10 << 4) + *arg2
                            zmm1 = *rax_20
                            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                            zmm3 = _mm_add_ps(zmm1, zmm1)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                            zmm4 = _mm_mul_ps(zmm3, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
                            zmm1 = rax_20[2]
                            zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
                            zmm5 = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
                            zmm4 = data_143f58a80
                            zmm6 = _mm_add_ps(zmm3, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm3)
                            zmm6 = _mm_mul_ps(zmm6, zmm1)
                            zmm5 = _mm_mul_ps(zmm5, zmm2)
                            zmm2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm4, zmm0), zmm1), zmm13)
                            zmm0 = _mm_shuffle_ps(zmm5, zmm2, 0x32)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm6, zmm2, 0x31)
                            zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm2, 0x10), zmm0, 0x88)
                            zmm0 = rax_20[1]
                            int64_t rax_21 = *arg1
                            zmm6 = _mm_shuffle_ps(zmm6, zmm5, 0x12)
                            zmm4[0].q = zmm0 u>> 0x40
                            zmm6 = _mm_shuffle_ps(zmm6, zmm2, 0xe8)
                            *(rax_21 + rdi_2) = zmm3
                            *(rax_21 + rdi_2 + 0x10) = zmm1
                            zmm0 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
                            *(rax_21 + rdi_2 + 0x20) = zmm6
                            *(rax_21 + rdi_2 + 0x30) = zmm0
                        else
                            int64_t r8_2 = sx.q(*(*(arg6 + 0x20) + rcx_5 * 0xc + 8))
                            
                            if (*(rdx_1 + *rbx) == 1 || r8_2.d == 0xffffffff)
                                r8 = arg5
                                rax_10 = rdx_1 * 3
                                goto label_14234b676
                            
                            rcx_7 = r8_2
                        label_14234b3ad:
                            int64_t rbx_1 = *arg1
                            float var_118[0x4][0x4]
                            float (* rax_9)[0x4] =
                                sub_14232fa70((rcx_7 << 6) + rbx_1, &var_118, zx.o(0))
                            r8 = arg5
                            r9 = var_138
                            r10_1 = var_134
                            *(rdi_2 + rbx_1) = *rax_9
                            *(rdi_2 + rbx_1 + 0x10) = rax_9[1]
                            *(rdi_2 + rbx_1 + 0x20) = rax_9[2]
                            *(rdi_2 + rbx_1 + 0x30) = rax_9[3]
                            rbx = var_130
                
                j += 1
                rbp += 2
            while (j s< i[1].d)
            
            result = result_1
            rbp = 0
        
        i = (&var_d0)[result]
        result += 1
        result_1 = result
    while (i != 0)

if (arg1[1].d s> 0)
    int64_t rdx_3 = 0
    
    do
        result = *r8
        rbp = zx.q(rbp.d + 1)
        float (* rcx_12)[0x4] = *arg1
        zmm2 = *(rdx_3 + result)
        zmm7 = *(rcx_12 + rdx_3 + 0x10)
        zmm6 = *(rcx_12 + rdx_3)
        zmm8 = *(rcx_12 + rdx_3 + 0x20)
        zmm9 = *(rcx_12 + rdx_3 + 0x30)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_mul_ps(zmm0, zmm7)
        zmm1 = _mm_mul_ps(zmm1, zmm8)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm6), zmm0), zmm1), zmm2)
        zmm2 = *(rdx_3 + result + 0x10)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm5 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_mul_ps(zmm0, zmm7)
        zmm1 = _mm_mul_ps(zmm1, zmm8)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        zmm5 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5, zmm6), zmm0), zmm1), zmm2)
        zmm2 = *(rdx_3 + result + 0x20)
        zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm0 = _mm_mul_ps(zmm0, zmm7)
        zmm1 = _mm_mul_ps(zmm1, zmm8)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm9)
        zmm4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm4, zmm6), zmm0), zmm1), zmm2)
        zmm2 = *(rdx_3 + result + 0x30)
        *(rcx_12 + rdx_3) = zmm10
        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0)
        *(rcx_12 + rdx_3 + 0x10) = zmm5
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm3 = _mm_mul_ps(zmm3, zmm6)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        *(rcx_12 + rdx_3 + 0x20) = zmm4
        zmm0 = _mm_mul_ps(zmm0, zmm7)
        zmm1 = _mm_mul_ps(zmm1, zmm8)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        zmm3 = _mm_add_ps(zmm3, zmm0)
        zmm2 = _mm_mul_ps(zmm2, zmm9)
        *(rcx_12 + rdx_3 + 0x30) = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm2)
        rdx_3 += 0x40
    while (rbp.d s< arg1[1].d)

__security_check_cookie(rax_1 ^ &var_158)
return result
