// 函数: sub_141a92050
// 地址: 0x141a92050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rsi = arg6
int64_t r11 = rsi
int64_t rdi = arg12
int64_t rbx = rsi

if (arg9 != -1)
    r11 = arg9

int64_t r10 = arg4
float zmm6[0x4]
float var_48[0x4] = zmm6

if (arg10 != -1)
    rbx = arg10

int64_t r9_1 = rsi & 0xfffffffffffffff8
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9[0x4]
float var_78[0x4] = zmm9
float zmm12[0x4] = arg8
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
int64_t rax_1
int32_t rdx
rdx:rax_1 = sx.o(arg7)
int64_t var_170 = r11
int64_t var_178 = rbx
int64_t var_f8 = 0
int64_t var_e8 = 1
int64_t rax_3
int32_t rdx_2
rdx_2:rax_3 = sx.o(arg5)
int64_t i = ((zx.q(rdx) & 3) + rax_1) & 0xfffffffffffffffc
arg10 = i
int64_t rax_5
int32_t rdx_4
rdx_4:rax_5 = sx.o(arg5)
uint64_t result_10 = ((zx.q(rdx_2) & 7) + rax_3) & 0xfffffffffffffff8
uint64_t result_12 = result_10
int64_t rax_7 = (rax_5 + (zx.q(rdx_4) & 3)) & 0xfffffffffffffffc
uint64_t result = divu.dp.q(0:(0x7f80 - rsi * 0x10), rsi << 5)
int64_t rdx_7 = arg11
uint64_t result_6 = 1
uint64_t result_4 = result

if (result s> 1)
    result_6 = result

int64_t r12 = result_6 << 3
uint64_t result_9 = 0
int64_t var_148 = r12
uint64_t result_11 = 0
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (result_10 s> 0)
    int64_t r10_1 = 0
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    int64_t rax_11 = r11 * r12
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    int64_t var_150_1 = 0
    
    do
        result = result_9 + r12
        uint64_t result_3 = result
        uint64_t result_8 = result
        uint64_t result_5 = result
        
        if (result_10 s< result)
            result_8 = result_10
        
        if (i s> 0)
            result = 0
            int64_t rdx_8 = rbx << 2
            int64_t result_1 = 0
            int64_t var_128_1 = rdx_8
            int64_t r13_1 = 2
            
            do
                uint64_t result_14 = result_9
                
                if (result_9 s< result_8)
                    int64_t r8 = r13_1 - 1
                    int64_t rdi_1 = r13_1 + 1
                    zmm4 = _mm_shuffle_ps(zmm12, zmm12, 0)
                    zmm15 = zx.o(0)
                    float var_108_1[0x4] = zmm4
                    int128_t* r15_1 = arg_18 + ((r10_1 + (arg11 << 3)) << 2)
                    
                    do
                        int128_t* rdx_9 = r15_1
                        int64_t rax_18 = arg2[1]
                        int64_t rcx_5 = *arg2
                        zmm7 = zmm15
                        zmm9 = zmm15
                        zmm8 = zmm15
                        zmm10 = zmm15
                        zmm11 = zmm15
                        zmm12 = zmm15
                        zmm13 = zmm15
                        zmm14 = zmm15
                        int64_t rbx_3 = rax_18 * r13_1 + result_14
                        int64_t r10_4 = (r13_1 - 2) * rax_18 + result_14
                        int64_t r11_3 = r8 * rax_18 + result_14
                        int64_t rdi_3 = rdi_1 * rax_18 + result_14
                        float (* rax_19)[0x4] = arg4 + ((result + (arg12 << 2)) << 2)
                        
                        if (r9_1 s> 0)
                            int64_t j_4 = ((r9_1 - 1) u>> 3) + 1
                            int64_t j
                            
                            do
                                zmm0 = *rax_19
                                zmm5 = *rdx_9
                                zmm6 = rdx_9[1]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm5 = rdx_9[2]
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm6 = rdx_9[3]
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm0 = rax_19[1]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm5 = rdx_9[4]
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm6 = rdx_9[5]
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm0 = rax_19[2]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm0 = rax_19[3]
                                zmm5 = rdx_9[6]
                                zmm6 = rdx_9[7]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm0 = rax_19[4]
                                zmm5 = rdx_9[8]
                                zmm6 = rdx_9[9]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm5 = rdx_9[0xa]
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm6 = rdx_9[0xb]
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm0 = rax_19[5]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm5 = rdx_9[0xc]
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm6 = rdx_9[0xd]
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm0 = rax_19[6]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                zmm0 = rax_19[7]
                                rax_19 -= -0x80
                                zmm5 = rdx_9[0xe]
                                zmm6 = rdx_9[0xf]
                                rdx_9 = &rdx_9[0x10]
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm0 = _mm_mul_ps(zmm1, zmm5)
                                zmm1 = _mm_mul_ps(zmm1, zmm6)
                                zmm7 = _mm_add_ps(zmm7, zmm0)
                                zmm0 = _mm_mul_ps(zmm2, zmm5)
                                zmm2 = _mm_mul_ps(zmm2, zmm6)
                                zmm11 = _mm_add_ps(zmm11, zmm1)
                                zmm9 = _mm_add_ps(zmm9, zmm0)
                                zmm0 = _mm_mul_ps(zmm3, zmm5)
                                zmm3 = _mm_mul_ps(zmm3, zmm6)
                                zmm12 = _mm_add_ps(zmm12, zmm2)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm4, zmm5)
                                zmm4 = _mm_mul_ps(zmm4, zmm6)
                                zmm13 = _mm_add_ps(zmm13, zmm3)
                                zmm10 = _mm_add_ps(zmm10, zmm0)
                                zmm14 = _mm_add_ps(zmm14, zmm4)
                                j = j_4
                                j_4 -= 1
                            while (j != 1)
                            zmm4 = var_108_1
                        
                        if (r9_1 s< rsi)
                            int64_t j_5 = rsi - r9_1
                            int64_t j_1
                            
                            do
                                zmm0 = *rax_19
                                rax_19 = &rax_19[1]
                                zmm5 = *rdx_9
                                zmm6 = rdx_9[1]
                                rdx_9 = &rdx_9[2]
                                zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                                zmm1 = _mm_shuffle_epi32(zmm0, 0)
                                zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                                zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                                zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm1))
                                zmm11 = _mm_add_ps(zmm11, _mm_mul_ps(zmm6, zmm1))
                                zmm9 = _mm_add_ps(zmm9, _mm_mul_ps(zmm5, zmm2))
                                zmm12 = _mm_add_ps(zmm12, _mm_mul_ps(zmm6, zmm2))
                                zmm0 = _mm_mul_ps(zmm5, zmm3)
                                zmm5 = _mm_mul_ps(zmm5, zmm4)
                                zmm8 = _mm_add_ps(zmm8, zmm0)
                                zmm0 = _mm_mul_ps(zmm6, zmm3)
                                zmm6 = _mm_mul_ps(zmm6, zmm4)
                                zmm10 = _mm_add_ps(zmm10, zmm5)
                                zmm13 = _mm_add_ps(zmm13, zmm0)
                                zmm14 = _mm_add_ps(zmm14, zmm6)
                                j_1 = j_5
                                j_5 -= 1
                            while (j_1 != 1)
                            zmm4 = var_108_1
                        
                        zmm2 = *(rcx_5 + (r10_4 << 2))
                        r15_1 = &r15_1[r11 * 2]
                        result_14 += 8
                        zmm7 = _mm_mul_ps(zmm7, zmm4)
                        r8 = r13_1 - 1
                        zmm11 = _mm_mul_ps(zmm11, zmm4)
                        zmm9 = _mm_mul_ps(zmm9, zmm4)
                        zmm12 = _mm_mul_ps(zmm12, zmm4)
                        zmm7 = _mm_add_ps(zmm7, zmm2)
                        zmm8 = _mm_mul_ps(zmm8, zmm4)
                        zmm13 = _mm_mul_ps(zmm13, zmm4)
                        zmm10 = _mm_mul_ps(zmm10, zmm4)
                        zmm14 = _mm_mul_ps(zmm14, zmm4)
                        zmm1 = *(rcx_5 + (r11_3 << 2))
                        zmm3 = _mm_add_ps(*(rcx_5 + (r10_4 << 2) + 0x10), zmm11)
                        zmm1 = _mm_add_ps(zmm1, zmm9)
                        zmm0 = *(rcx_5 + (r11_3 << 2) + 0x10)
                        *(rcx_5 + (r10_4 << 2)) = zmm7
                        zmm0 = _mm_add_ps(zmm0, zmm12)
                        *(rcx_5 + (r10_4 << 2) + 0x10) = zmm3
                        *(rcx_5 + (r11_3 << 2)) = zmm1
                        *(rcx_5 + (r11_3 << 2) + 0x10) = zmm0
                        zmm0 = *(rcx_5 + (rdi_3 << 2) + 0x10)
                        zmm1 = _mm_add_ps(*(rcx_5 + (rdi_3 << 2)), zmm10)
                        zmm0 = _mm_add_ps(zmm0, zmm14)
                        zmm3 = *(rcx_5 + (rbx_3 << 2) + 0x10)
                        zmm8 = _mm_add_ps(zmm8, *(rcx_5 + (rbx_3 << 2)))
                        zmm3 = _mm_add_ps(zmm3, zmm13)
                        *(rcx_5 + (rbx_3 << 2)) = zmm8
                        *(rcx_5 + (rbx_3 << 2) + 0x10) = zmm3
                        *(rcx_5 + (rdi_3 << 2)) = zmm1
                        *(rcx_5 + (rdi_3 << 2) + 0x10) = zmm0
                        rdi_1 = r13_1 + 1
                    while (result_14 s< result_8)
                    
                    zmm12 = arg8
                    i = arg10
                    result_9 = result_11
                    result = result_1
                    rdx_8 = var_128_1
                    r10_1 = var_150_1
                    r11 = var_170
                
                r13_1 += 4
                result_1 = result + rdx_8
                result = result_1
            while (r13_1 - 2 s< i)
            
            result_10 = result_12
            arg3 = arg_18
            rdx_7 = arg11
            rbx = var_178
        
        int64_t i_17 = i
        
        if (i s< arg7)
            float (* r15_2)[0x4] = arg4 + ((rbx * i + arg12) << 2)
            result = arg7
            
            do
                uint64_t result_13 = result_9
                
                if (result_9 s< result_8)
                    zmm6 = _mm_shuffle_ps(zmm12, zmm12, 0)
                    void* r11_4 = arg3 + ((r10_1 + (rdx_7 << 3)) << 2)
                    zmm7 = zx.o(0)
                    
                    do
                        void* rax_26 = r11_4
                        zmm4 = zmm7
                        int64_t r10_5 = *arg2
                        zmm5 = zmm7
                        int64_t r8_6 = arg2[1] * i_17 + result_13
                        float (* rcx_6)[0x4] = r15_2
                        
                        if (r9_1 s> 0)
                            int64_t i_10 = ((r9_1 - 1) u>> 3) + 1
                            int64_t i_1
                            
                            do
                                zmm3 = *rcx_6
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x10))
                                zmm0 = __mulps_xmmps_memps(zmm0, *rax_26)
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[1]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x30))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0x20))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[2]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x50))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0x40))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[3]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x70))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0x60))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = rcx_6[1][0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x90))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0x80))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[5]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0xb0))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0xa0))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[6]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0xd0))
                                zmm0 = __mulps_xmmps_memps(zmm0, *(rax_26 + 0xc0))
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm3 = (*rcx_6)[7]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                rcx_6 = &rcx_6[2]
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm0 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0xe0))
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0xf0))
                                rax_26 += 0x100
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                i_1 = i_10
                                i_10 -= 1
                            while (i_1 != 1)
                        
                        if (r9_1 s< rsi)
                            int64_t i_11 = rsi - r9_1
                            int64_t i_2
                            
                            do
                                zmm3 = *rcx_6
                                rcx_6 = &(*rcx_6)[1]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm0 = zmm3
                                zmm3 = __mulps_xmmps_memps(zmm3, *(rax_26 + 0x10))
                                zmm0 = __mulps_xmmps_memps(zmm0, *rax_26)
                                rax_26 += 0x20
                                zmm5 = _mm_add_ps(zmm5, zmm3)
                                zmm4 = _mm_add_ps(zmm4, zmm0)
                                i_2 = i_11
                                i_11 -= 1
                            while (i_2 != 1)
                        
                        zmm0 = *(r10_5 + (r8_6 << 2) + 0x10)
                        result_13 += 8
                        r11_4 += r11 << 5
                        zmm2 = _mm_mul_ps(zmm6, zmm5)
                        zmm1 = *(r10_5 + (r8_6 << 2))
                        zmm2 = _mm_add_ps(zmm2, zmm0)
                        *(r10_5 + (r8_6 << 2)) = _mm_add_ps(_mm_mul_ps(zmm6, zmm4), zmm1)
                        *(r10_5 + (r8_6 << 2) + 0x10) = zmm2
                    while (result_13 s< result_8)
                    
                    result_9 = result_11
                    result = arg7
                
                r10_1 = var_150_1
                i_17 += 1
                r11 = var_170
                r15_2 = &(*r15_2)[rbx]
                arg3 = arg_18
                rdx_7 = arg11
            while (i_17 s< result)
            
            result_10 = result_12
            i = arg10
        
        result_9 = result_3
        r10_1 += rax_11
        r11 = var_170
        arg3 = arg_18
        rdx_7 = arg11
        rbx = var_178
        r12 = var_148
        result_11 = result_9
        var_150_1 = r10_1
    while (result_9 s< result_10)
    
    r10 = arg4
    rdi = arg12

int64_t r8_13

if (result_10 s>= rax_7)
    r8_13 = rax_7
else
    int64_t r13_3 = r11 << 2
    int64_t r12_2 = result_10 * r11
    int64_t var_158 = r13_3
    int64_t var_160_1 = r12_2
    
    while (true)
        if (i s> 0)
            result = arg3 + ((r12_2 + (rdx_7 << 2)) << 2)
            uint64_t result_2 = result
            float (* r12_5)[0x4] = (rdi << 4) + r10
            zmm10 = _mm_shuffle_ps(zmm12, zmm12, 0)
            zmm11 = zx.o(0)
            int64_t r15_3 = 2
            
            do
                float (* result_7)[0x4] = result
                int64_t rax_28 = arg2[1]
                int64_t rdx_13 = *arg2
                zmm6 = zmm11
                zmm7 = zmm11
                zmm8 = zmm11
                zmm9 = zmm11
                int64_t r10_8 = (r15_3 - 2) * rax_28 + result_10
                int64_t r11_7 = (r15_3 - 1) * rax_28 + result_10
                int64_t rbx_7 = r15_3 * rax_28 + result_10
                int64_t rdi_6 = (r15_3 + 1) * rax_28 + result_10
                float (* rax_29)[0x4] = r12_5
                
                if (r9_1 s> 0)
                    int64_t j_6 = ((r9_1 - 1) u>> 3) + 1
                    int64_t j_2
                    
                    do
                        zmm0 = *rax_29
                        zmm5 = *result_7
                        zmm1 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), zmm5)
                        zmm2 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), zmm5)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm3 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), zmm5)
                        zmm7 = _mm_add_ps(zmm7, zmm2)
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm0 = rax_29[1]
                        zmm4 = _mm_mul_ps(zmm4, zmm5)
                        zmm5 = result_7[1]
                        zmm8 = _mm_add_ps(zmm8, zmm3)
                        zmm1 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), zmm5)
                        zmm9 = _mm_add_ps(zmm9, zmm4)
                        zmm2 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), zmm5)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm3 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), zmm5)
                        zmm7 = _mm_add_ps(zmm7, zmm2)
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm0 = rax_29[2]
                        zmm4 = _mm_mul_ps(zmm4, zmm5)
                        zmm5 = result_7[2]
                        zmm8 = _mm_add_ps(zmm8, zmm3)
                        zmm1 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), zmm5)
                        zmm9 = _mm_add_ps(zmm9, zmm4)
                        zmm2 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), zmm5)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm3 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), zmm5)
                        zmm7 = _mm_add_ps(zmm7, zmm2)
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm0 = rax_29[3]
                        zmm4 = _mm_mul_ps(zmm4, zmm5)
                        zmm5 = result_7[3]
                        zmm8 = _mm_add_ps(zmm8, zmm3)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm9 = _mm_add_ps(zmm9, zmm4)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm1 = _mm_mul_ps(zmm1, zmm5)
                        zmm2 = _mm_mul_ps(zmm2, zmm5)
                        zmm3 = _mm_mul_ps(zmm3, zmm5)
                        zmm4 = _mm_mul_ps(zmm4, zmm5)
                        zmm6 = _mm_add_ps(zmm6, zmm1)
                        zmm7 = _mm_add_ps(zmm7, zmm2)
                        zmm8 = _mm_add_ps(zmm8, zmm3)
                        zmm9 = _mm_add_ps(zmm9, zmm4)
                        zmm0 = rax_29[4]
                        zmm5 = result_7[4]
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5, zmm1))
                        zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm2))
                        zmm0 = _mm_mul_ps(zmm5, zmm3)
                        zmm5 = _mm_mul_ps(zmm5, zmm4)
                        zmm8 = _mm_add_ps(zmm8, zmm0)
                        zmm0 = rax_29[5]
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm9 = _mm_add_ps(zmm9, zmm5)
                        zmm5 = result_7[5]
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5, zmm1))
                        zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm2))
                        zmm0 = _mm_mul_ps(zmm5, zmm3)
                        zmm5 = _mm_mul_ps(zmm5, zmm4)
                        zmm8 = _mm_add_ps(zmm8, zmm0)
                        zmm0 = rax_29[6]
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm9 = _mm_add_ps(zmm9, zmm5)
                        zmm5 = result_7[6]
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5, zmm1))
                        zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm2))
                        zmm0 = _mm_mul_ps(zmm5, zmm3)
                        zmm5 = _mm_mul_ps(zmm5, zmm4)
                        zmm8 = _mm_add_ps(zmm8, zmm0)
                        zmm0 = rax_29[7]
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        rax_29 -= -0x80
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm9 = _mm_add_ps(zmm9, zmm5)
                        zmm5 = result_7[7]
                        result_7 -= -0x80
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5, zmm1))
                        zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm2))
                        zmm0 = _mm_mul_ps(zmm5, zmm3)
                        zmm5 = _mm_mul_ps(zmm5, zmm4)
                        zmm8 = _mm_add_ps(zmm8, zmm0)
                        zmm9 = _mm_add_ps(zmm9, zmm5)
                        j_2 = j_6
                        j_6 -= 1
                    while (j_2 != 1)
                
                if (r9_1 s< rsi)
                    float (* rax_30)[0x4] = rax_29 - result_7
                    int64_t j_7 = rsi - r9_1
                    int64_t j_3
                    
                    do
                        zmm0 = *(rax_30 + result_7)
                        zmm5 = *result_7
                        result_7 = &result_7[1]
                        zmm4 = _mm_shuffle_epi32(zmm0, 0xff)
                        zmm1 = _mm_shuffle_epi32(zmm0, 0)
                        zmm2 = _mm_shuffle_epi32(zmm0, 0x55)
                        zmm3 = _mm_shuffle_epi32(zmm0, 0xaa)
                        zmm6 = _mm_add_ps(zmm6, _mm_mul_ps(zmm5, zmm1))
                        zmm7 = _mm_add_ps(zmm7, _mm_mul_ps(zmm5, zmm2))
                        zmm0 = _mm_mul_ps(zmm5, zmm3)
                        zmm5 = _mm_mul_ps(zmm5, zmm4)
                        zmm8 = _mm_add_ps(zmm8, zmm0)
                        zmm9 = _mm_add_ps(zmm9, zmm5)
                        j_3 = j_7
                        j_7 -= 1
                    while (j_3 != 1)
                
                r15_3 += 4
                r12_5 = &r12_5[rbx]
                zmm1 = *(rdx_13 + (r10_8 << 2))
                result = result_2
                zmm2 = _mm_add_ps(_mm_mul_ps(zmm10, zmm7), *(rdx_13 + (r11_7 << 2)))
                *(rdx_13 + (r10_8 << 2)) = _mm_add_ps(_mm_mul_ps(zmm10, zmm6), zmm1)
                *(rdx_13 + (r11_7 << 2)) = zmm2
                zmm1 = *(rdx_13 + (rbx_7 << 2))
                zmm2 = _mm_add_ps(_mm_mul_ps(zmm10, zmm9), *(rdx_13 + (rdi_6 << 2)))
                *(rdx_13 + (rbx_7 << 2)) = _mm_add_ps(_mm_mul_ps(zmm10, zmm8), zmm1)
                *(rdx_13 + (rdi_6 << 2)) = zmm2
            while (r15_3 - 2 s< arg10)
            
            i = arg10
            r12_2 = var_160_1
            r13_3 = var_158
        
        int64_t i_19 = i
        
        if (i s< arg7)
            zmm3 = _mm_shuffle_ps(zmm12, zmm12, 0)
            float (* r11_8)[0x4] = arg4 + ((var_178 * arg10 + arg12) << 2)
            
            do
                result = arg_18 + ((r12_2 + (arg11 << 2)) << 2)
                int64_t rbx_8 = *arg2
                zmm2 = zx.o(0)
                float (* rcx_9)[0x4] = r11_8
                int64_t r8_12 = i_19 * arg2[1] + result_10
                
                if (r9_1 s> 0)
                    int64_t i_12 = ((r9_1 - 1) u>> 3) + 1
                    int64_t i_3
                    
                    do
                        zmm1 = *rcx_9
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *result))
                        zmm1 = (*rcx_9)[1]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x10)))
                        zmm1 = (*rcx_9)[2]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x20)))
                        zmm1 = (*rcx_9)[3]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x30)))
                        zmm1 = rcx_9[1][0]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x40)))
                        zmm1 = (*rcx_9)[5]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x50)))
                        zmm1 = (*rcx_9)[6]
                        zmm2 = _mm_add_ps(zmm2, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x60)))
                        zmm1 = (*rcx_9)[7]
                        rcx_9 = &rcx_9[2]
                        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *(result + 0x70))
                        result -= -0x80
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        i_3 = i_12
                        i_12 -= 1
                    while (i_3 != 1)
                
                if (r9_1 s< rsi)
                    int64_t i_13 = rsi - r9_1
                    int64_t i_4
                    
                    do
                        zmm1 = *rcx_9
                        rcx_9 = &(*rcx_9)[1]
                        zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0), *result)
                        result += 0x10
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        i_4 = i_13
                        i_13 -= 1
                    while (i_4 != 1)
                
                i_19 += 1
                r11_8 = &(*r11_8)[var_178]
                *(rbx_8 + (r8_12 << 2)) =
                    _mm_add_ps(_mm_mul_ps(zmm3, zmm2), *(rbx_8 + (r8_12 << 2)))
            while (i_19 s< arg7)
            
            i = arg10
            r13_3 = var_158
        
        r8_13 = rax_7
        r12_2 += r13_3
        result_10 += 4
        var_160_1 = r12_2
        
        if (result_10 s>= r8_13)
            break
        
        arg3 = arg_18
        rdx_7 = arg11
        rbx = var_178
        r10 = arg4
        rdi = arg12

int64_t r13_8 = arg5

if (r8_13 s< r13_8)
    int64_t rdi_8 = 0
    
    if (i s> 0)
        int64_t rax_38
        int32_t rdx_17
        rdx_17:rax_38 = sx.o(rsi)
        zmm9 = _mm_shuffle_ps(zmm12, zmm12, 0)
        int64_t r11_10 = ((zx.q(rdx_17) & 3) + rax_38) & 0xfffffffffffffffc
        float (* rbx_11)[0x4] = (arg12 << 4) + arg4
        void* r13_7 = arg_18 + ((var_170 * r8_13 + arg11) << 2)
        
        do
            int64_t r10_9 = r8_13
            void* r9_2 = r13_7
            
            do
                void* rax_40 = r9_2
                int64_t r8_14 = 0
                arg6.d = 1
                arg9.d = 1
                float (* rcx_13)[0x4] = rbx_11
                zmm6 = zx.o(0)
                zmm5 = zx.o(0)
                zmm7 = zx.o(0)
                zmm4 = zx.o(0)
                
                if (r11_10 s> 0)
                    int64_t i_14 = ((r11_10 - 1) u>> 2) + 1
                    r8_14 = i_14 << 2
                    int64_t i_5
                    
                    do
                        zmm3 = rcx_13[1]
                        zmm0 = *rax_40
                        zmm2 = *(rax_40 + 4)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), *rcx_13)
                        zmm1 = rcx_13[2]
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm3)
                        zmm6 = _mm_add_ps(zmm6, zmm0)
                        zmm0 = *(rax_40 + 8)
                        zmm3 = rcx_13[3]
                        rcx_13 = &rcx_13[4]
                        zmm5 = _mm_add_ps(zmm5, zmm2)
                        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
                        zmm2 = *(rax_40 + 0xc)
                        rax_40 += 0x10
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                        zmm0 = _mm_mul_ps(zmm0, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, zmm3)
                        zmm7 = _mm_add_ps(zmm7, zmm0)
                        zmm4 = _mm_add_ps(zmm4, zmm2)
                        i_5 = i_14
                        i_14 -= 1
                    while (i_5 != 1)
                
                zmm4 = _mm_add_ps(_mm_add_ps(zmm4, zmm7), _mm_add_ps(zmm5, zmm6))
                
                if (r8_14 s< rsi)
                    int64_t i_15 = rsi - r8_14
                    int64_t i_6
                    
                    do
                        zmm0 = *rcx_13
                        rcx_13 = &rcx_13[1]
                        zmm1 = *rax_40
                        rax_40 += 4
                        zmm4 = _mm_add_ps(zmm4, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm0))
                        i_6 = i_15
                        i_15 -= 1
                    while (i_6 != 1)
                
                int64_t r8_15 = arg2[1]
                int64_t rax_41 = *arg2
                r9_2 += var_170 << 2
                zmm4 = _mm_mul_ps(zmm4, zmm9)
                int64_t rcx_16 = rdi_8 * r8_15 + r10_9
                r10_9 += 1
                float* rdx_22 = rax_41 + (rcx_16 << 2)
                result = r8_15 * 3
                zmm3 = _mm_add_ps(
                    _mm_unpacklo_ps(
                        _mm_unpacklo_ps(*(rax_41 + (rcx_16 << 2)), rdx_22[r8_15 * 2][0].q), 
                        _mm_unpacklo_ps(rdx_22[r8_15], rdx_22[r8_15 * 3][0].q)[0].q), 
                    zmm4)
                *rdx_22 = zmm3[0]
                zmm0 = _mm_shuffle_ps(zmm3, zmm3, 1)
                zmm1 = _mm_shuffle_ps(zmm3, zmm3, 2)
                rdx_22[r8_15] = zmm0[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 3)
                rdx_22[r8_15 * 2] = zmm1[0]
                rdx_22[result] = zmm3[0]
            while (r10_9 s< arg5)
            
            i = arg10
            rdi_8 += 4
            r8_13 = rax_7
            rbx_11 = &rbx_11[var_178]
        while (rdi_8 s< i)
        
        r13_8 = arg5
    
    if (i s< arg7)
        int64_t rbp_4 = arg_18 + ((var_170 * r8_13 + arg11) << 2)
        void* r9_3 = arg4 + ((var_178 * i + arg12) << 2)
        
        do
            int64_t r11_11 = r8_13
            int64_t r10_10 = rbp_4
            
            do
                int64_t i_7 = 0
                zmm3 = zx.o(0)
                
                if (rsi s> 0)
                    if (rsi u>= 8)
                        int32_t rax_50
                        int32_t rdx_23
                        rdx_23:rax_50 = sx.o(rsi)
                        zmm2 = zx.o(0)
                        uint64_t rdx_24 = zx.q(rdx_23) & 7
                        zmm3 = zx.o(0)
                        void* rax_54 = r9_3 + 0x10
                        void* rdx_26 = r10_10 - r9_3
                        
                        do
                            i_7 += 8
                            zmm1 = _mm_mul_ps(*(rax_54 - 0x10), *(rax_54 + rdx_26 - 0x10))
                            zmm0 = *(rax_54 + rdx_26)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = *rax_54
                            rax_54 += 0x20
                            zmm3 = _mm_add_ps(zmm3, _mm_mul_ps(zmm1, zmm0))
                        while (i_7 s< rsi - ((zx.q(rax_50 + rdx_24.d) & 7) - rdx_24))
                        
                        zmm2 = _mm_add_ps(zmm2, zmm3)
                        zmm2[0].q = zmm2 u>> 0x40
                        zmm3 = _mm_add_ps(zmm2, zmm2)
                        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xf5)
                        zmm3[0] = zmm3[0] + zmm0[0]
                    
                    if (i_7 s< rsi)
                        if (rsi - i_7 s>= 4)
                            int32_t* rax_58 = r9_3 + ((i_7 + 1) << 2)
                            void* rdx_28 = r10_10 - r9_3
                            int64_t i_18 = ((rsi - i_7 - 4) u>> 2) + 1
                            i_7 += i_18 << 2
                            int64_t i_8
                            
                            do
                                zmm1 = rax_58[-1]
                                zmm1[0] = zmm1[0] f* *(rax_58 + rdx_28 - 4)
                                zmm2 = *(rax_58 + rdx_28)
                                zmm2[0] = zmm2[0] f* *rax_58
                                zmm0 = rax_58[2]
                                zmm3[0] = zmm3[0] + zmm1[0]
                                zmm1 = rax_58[1]
                                zmm1[0] = zmm1[0] f* *(rax_58 + rdx_28 + 4)
                                zmm0[0] = zmm0[0] f* *(rax_58 + rdx_28 + 8)
                                rax_58 = &rax_58[4]
                                zmm3[0] = zmm3[0] + zmm2[0]
                                zmm3[0] = zmm3[0] + zmm1[0]
                                zmm3[0] = zmm3[0] + zmm0[0]
                                i_8 = i_18
                                i_18 -= 1
                            while (i_8 != 1)
                        
                        if (i_7 s< rsi)
                            int32_t* rax_59 = r9_3 + (i_7 << 2)
                            int64_t i_16 = rsi - i_7
                            int64_t i_9
                            
                            do
                                zmm0 = *(rax_59 + r10_10 - r9_3)
                                zmm0[0] = zmm0[0] f* *rax_59
                                rax_59 = &rax_59[1]
                                zmm3[0] = zmm3[0] + zmm0[0]
                                i_9 = i_16
                                i_16 -= 1
                            while (i_9 != 1)
                
                result = *arg2
                int64_t rcx_20 = i * arg2[1]
                zmm3[0] = zmm3[0] * zmm12[0]
                r10_10 += var_170 << 2
                int64_t rcx_21 = rcx_20 + r11_11
                r11_11 += 1
                zmm3[0] = zmm3[0] f+ *(result + (rcx_21 << 2))
                *(result + (rcx_21 << 2)) = zmm3[0]
            while (r11_11 s< r13_8)
            
            r8_13 = rax_7
            i += 1
            r9_3 += var_178 << 2
        while (i s< arg7)

return result
