// 函数: sub_142628f50
// 地址: 0x142628f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_18 = arg3
int128_t* r9 = arg5
int64_t r11 = sx.q(arg6)
float zmm5 = arg4
uint128_t zmm1 = *(r9 + 4)
float zmm13[0x4] = *r9
float zmm6[0x4] = zmm13
float zmm14[0x4] = *(r9 + 8)
float zmm15[0x4] = zmm14
float arg_8 = zmm6[0]
float arg_10 = zmm1.d

if (r11 s> 1)
    void* r8_1 = 1
    
    if (r11 s>= 5)
        float zmm9[0x4]
        float var_88_1[0x4] = zmm9
        void* rcx = &r9[2]
        int64_t i_2 = ((r11 - 5) u>> 2) + 1
        float zmm12[0x4]
        float var_b8_1[0x4] = zmm12
        r8_1 = (i_2 << 2) + 1
        int64_t i
        
        do
            zmm9 = *(rcx - 0x10)
            zmm6 = *(rcx - 0x14)
            zmm12 = *(rcx - 0xc)
            float temp0_1[0x4] = _mm_min_ss(zmm6[0], zmm13[0])
            rcx += 0x30
            float temp0_2[0x4] = __maxss_xmmss_memss(zmm6[0], arg_8)
            float temp0_3[0x4] = _mm_min_ss(zmm9[0], zmm1.d)
            float temp0_4[0x4] = __maxss_xmmss_memss(temp0_2[0], *(rcx - 0x38))
            float temp0_5[0x4] = __minss_xmmss_memss(temp0_1[0], *(rcx - 0x38))
            float temp0_6[0x4] = __maxss_xmmss_memss(zmm9[0], arg_10)
            float temp0_7[0x4] = __minss_xmmss_memss(temp0_3[0], *(rcx - 0x34))
            float temp0_8[0x4] = __maxss_xmmss_memss(temp0_4[0], *(rcx - 0x2c))
            float temp0_9[0x4] = __minss_xmmss_memss(temp0_5[0], *(rcx - 0x2c))
            float temp0_10[0x4] = __minss_xmmss_memss(temp0_7[0], *(rcx - 0x28))
            zmm6 = __maxss_xmmss_memss(temp0_8[0], *(rcx - 0x20))
            zmm13 = __minss_xmmss_memss(temp0_9[0], *(rcx - 0x20))
            float temp0_13[0x4] = __minss_xmmss_memss(temp0_10[0], *(rcx - 0x1c))
            arg_8 = zmm6[0]
            zmm1 = temp0_13[0]
            float temp0_14[0x4] = _mm_min_ss(zmm12[0], zmm14[0])
            float temp0_15[0x4] = _mm_max_ss(zmm12[0], zmm15[0])
            float temp0_16[0x4] = __maxss_xmmss_memss(temp0_6[0], *(rcx - 0x34))
            float temp0_17[0x4] = __minss_xmmss_memss(temp0_14[0], *(rcx - 0x30))
            float temp0_18[0x4] = __maxss_xmmss_memss(temp0_15[0], *(rcx - 0x30))
            float temp0_19[0x4] = __maxss_xmmss_memss(temp0_16[0], *(rcx - 0x28))
            float temp0_20[0x4] = __minss_xmmss_memss(temp0_17[0], *(rcx - 0x24))
            float temp0_21[0x4] = __maxss_xmmss_memss(temp0_18[0], *(rcx - 0x24))
            float temp0_22[0x4] = __maxss_xmmss_memss(temp0_19[0], *(rcx - 0x1c))
            zmm14 = __minss_xmmss_memss(temp0_20[0], *(rcx - 0x18))
            zmm15 = __maxss_xmmss_memss(temp0_21[0], *(rcx - 0x18))
            arg_10 = temp0_22[0]
            i = i_2
            i_2 -= 1
        while (i != 1)
        arg3 = arg_18
        zmm5 = arg4
    
    if (r8_1 s< r11)
        void* i_3 = r11 - r8_1
        void* rcx_1 = r9 + r8_1 * 0xc
        void* i_1
        
        do
            zmm13 = __minss_xmmss_memss(zmm13[0], *rcx_1)
            zmm14 = __minss_xmmss_memss(zmm14[0], *(rcx_1 + 8))
            zmm6 = __maxss_xmmss_memss(zmm6[0], *rcx_1)
            zmm15 = __maxss_xmmss_memss(zmm15[0], *(rcx_1 + 8))
            rcx_1 += 0xc
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

void* rax_4 = *arg1
int128_t zmm7 = *arg2
arg4 = 1f / arg3
uint64_t r10 = zx.q(*(rax_4 + 0x30))
uint32_t rbp = zx.d(*(rax_4 + 0x32))
zmm13[0] = zmm13[0] f- zmm7.d
float zmm4 = 1f / zmm5
zmm13[0] = zmm13[0] * arg4
int32_t rcx_2 = int.d(zmm13[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2))[0] == zmm13[0]))
    zmm13 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm13, zmm13[0].q)) & 1)))

zmm5 = arg2[1]
zmm1.d = arg7.d f- zmm5
int32_t rbx = int.d(zmm13[0])
zmm1.d = zmm1.d f* zmm4
int32_t rcx_4 = int.d(zmm1.d)

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4))[0] f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

int128_t zmm8 = arg2[2]
zmm14[0] = zmm14[0] f- zmm8.d
float r8_2 = int.d(zmm1.d)
zmm14[0] = zmm14[0] * arg4
arg_8 = r8_2
int32_t rcx_6 = int.d(zmm14[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6))[0] == zmm14[0]))
    zmm14 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm14, zmm14[0].q)) & 1)))

zmm6[0] = zmm6[0] f- zmm7.d
int32_t rsi = int.d(zmm14[0])
zmm6[0] = zmm6[0] * arg4
int32_t rcx_8 = int.d(zmm6[0])

if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8))[0] == zmm6[0]))
    zmm6 = _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))

zmm1.d = arg8.d f- zmm5
int32_t rdi = int.d(zmm6[0])
zmm1.d = zmm1.d f* zmm4
int32_t rcx_10 = int.d(zmm1.d)

if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10))[0] f== zmm1.d))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))

zmm15[0] = zmm15[0] f- zmm8.d
int32_t rdx_1 = int.d(zmm1.d)
zmm15[0] = zmm15[0] * arg4
arg7 = rdx_1
int32_t rcx_12 = int.d(zmm15[0])

if (rcx_12 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_12))[0] == zmm15[0]))
    zmm15 =
        _mm_cvtepi32_ps(zx.o(rcx_12 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm15, zmm15[0].q)) & 1)))

float rax_17 = int.d(zmm15[0])

if (rdi s>= 0 && rbx s< r10.d && rax_17 s>= 0 && rsi s< rbp)
    int32_t r15_1 = 0
    int32_t rcx_14 = 0
    
    if (rbx s>= 0)
        rcx_14 = rbx
    
    int32_t rbx_1 = (r10 - 1).d
    
    if (rdi s< r10.d)
        rbx_1 = rdi
    
    float rcx_15 = rbp - 1
    
    if (rax_17 s< rbp)
        rcx_15 = rax_17
    
    arg_10 = rcx_15
    
    if (rsi s>= 0)
        r15_1 = rsi
    
    if (r15_1 s<= rcx_15)
        int64_t rdi_1 = sx.q(rbx_1)
        float var_108
        var_108.q = r10
        int64_t r12_1 = sx.q(r15_1 * r10.d)
        int32_t rax_20 = rcx_14
        
        do
            int64_t rbp_1 = sx.q(rax_20)
            int64_t rbx_2 = rbp_1
            
            if (rbp_1 s<= rdi_1)
                char rax_21 = arg10
                int32_t rcx_16 = rbx_1
                int64_t rsi_2 = (r12_1 + rbp_1) * 2
                
                do
                    char* rdi_3 = arg1[3] + r12_1
                    
                    if (rdi_3[rbx_2] == rax_21)
                        uint32_t rcx_17 = zx.d(*(arg1[2] + rsi_2))
                        
                        if (rcx_17 s< r8_2 || rcx_17 s> rdx_1)
                            rcx_16 = rbx_1
                        else
                            float temp0_53[0x4] = _mm_cvtepi32_ps(zx.o(rbp_1.d))
                            int32_t var_fc_1 = 0
                            zmm1 = _mm_cvtepi32_ps(zx.o(r15_1))
                            temp0_53[0] = temp0_53[0] + 0.5f
                            zmm1.d = zmm1.d f+ 0.5f
                            temp0_53[0] = temp0_53[0] * arg3
                            zmm1.d = zmm1.d f* arg3
                            temp0_53[0] = temp0_53[0] f+ *arg2
                            zmm1.d = zmm1.d f+ arg2[2]
                            float var_100 = temp0_53[0]
                            int32_t var_f8_1 = zmm1.d
                            int32_t rax_23 = sub_14262dce0(r11.d, r9, &var_100)
                            arg3 = arg_18
                            rdx_1 = arg7
                            r9 = arg5
                            r8_2 = arg_8
                            r11 = zx.q(arg6)
                            rcx_16 = rbx_1
                            
                            if (rax_23 != 0)
                                rdi_3[rbx_2] = arg9
                        
                        rax_21 = arg10
                    
                    rbp_1 = zx.q(rbp_1.d + 1)
                    rdi_1 = sx.q(rcx_16)
                    rbx_2 += 1
                    rsi_2 += 2
                while (rbx_2 s<= rdi_1)
                
                rcx_15 = arg_10
                rax_20 = rcx_14
                r10 = var_108.q
            
            r15_1 += 1
            r12_1 += r10
        while (r15_1 s<= rcx_15)

return 0x40000000
