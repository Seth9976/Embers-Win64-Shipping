// 函数: sub_142214580
// 地址: 0x142214580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = 0x322bcc77
int32_t rdx = 0
int32_t r11 = 0
uint32_t zmm6[0x4] = zx.o(0)
*(arg1 + 0x1d0) = 0
*(arg1 + 0x370) = 0
float zmm10[0x4] = zx.o(0)
uint64_t rax = *(arg1 + 0x238)
int32_t arg_10 = 0
int32_t arg_8 = 0
uint32_t zmm0[0x4] = *(rax + 0x54)
char r14 = *(rax + 0x58)
uint32_t arg_18 = zmm0[0]
int64_t r15
r15.b = __andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> 9.99999994e-09f
r14 &= 1
int64_t r12

if (__andps_xmmxud_memxud(*(rax + 0x5c), data_142d3f770)[0] f> 9.99999994e-09f || r14 != 0)
    r12.b = 1
else
    r12.b = 0

int32_t i = 0

if (*(arg1 + 0x118) s> 0)
    void* rcx = nullptr
    uint32_t zmm7[0x4]
    uint32_t var_68_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_78_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    uint32_t zmm11[0x4]
    uint32_t var_a8_1[0x4] = zmm11
    uint32_t zmm13[0x4]
    uint32_t var_c8_1[0x4] = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    void* var_118_1 = nullptr
    
    do
        rax = *(arg1 + 0xf8)
        int32_t rbp_1 = 0
        int32_t r10_1 = *(arg1 + 0x114)
        int64_t rdi_1 = *(arg1 + 0xf0)
        int32_t* rsi_1 = sx.q(*(arg1 + 0x30))
        void* rdx_2 = sx.q(zx.d(*(rcx + rax)) * r10_1) + rdi_1
        int32_t rcx_3 = *(rsi_1 + rdx_2)
        void* rbx_1 = rsi_1 + rdx_2
        int32_t r8_2 = rcx_3 & 0xf0000000
        
        if (r8_2 == 0x40000000 || r8_2 == 0x10000000)
            rax = zx.q(rcx_3) & 0x3fff
        
        if ((r8_2 == 0x40000000 || r8_2 == 0x10000000) && rax.d == 0x3fff)
            *(rbx_1 + 0x1c) = 0
            *(rbx_1 + 8) = 0
            *(arg1 + 0x370) += 1
            rdx = arg_8
        else if (r8_2 != 0x80000000)
            rdx = arg_8
        else
            int32_t rcx_6 = rcx_3 s>> 0xe & 0x3fff
            
            if (rcx_6 == 0x3fff)
                rdx = arg_8
            else
                void* r11_2 = sx.q(rcx_6 * r10_1) + rdi_1
                void* r10_2 = rsi_1 + r11_2
                
                while (true)
                    float zmm1 = *(rdx_2 + 0x10) f- *(r11_2 + 0x10)
                    uint32_t zmm2[0x4] = *(rdx_2 + 0x14)
                    zmm2[0] = zmm2[0] f- *(r11_2 + 0x14)
                    zmm0 = *(rdx_2 + 0x18)
                    zmm0[0] = zmm0[0] f- *(r11_2 + 0x18)
                    zmm14 = *(rbx_1 + 0x30)
                    zmm2[0] = zmm2[0] f* zmm2[0]
                    zmm0[0] = zmm0[0] f* zmm0[0]
                    zmm2[0] = zmm2[0] f+ zmm1 * zmm1
                    zmm2[0] = zmm2[0] f+ zmm0[0]
                    zmm0 = zx.o(*(rbx_1 + 0x28))
                    zmm13 = zmm0.d
                    zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm13[0] = zmm13[0] f* zmm13[0]
                    float temp0_3[0x4] = _mm_sqrt_ss(zx.o(0)[0], zmm2[0])
                    zmm11[0] = zmm11[0] f* zmm11[0]
                    zmm11[0] = zmm11[0] f+ zmm13[0]
                    zmm11[0] = zmm11[0] f+ zmm14.d f* zmm14.d
                    uint32_t zmm5[0x4]
                    
                    if (not(zmm11[0] f<= zmm3[0]))
                        zmm3 = zx.o(0)
                        zmm5 = zx.o(0)
                        zmm5[0] = 0x3f000000
                        zmm3[0] = zmm11[0]
                        float temp0_4[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                        zmm3[0] = zmm3[0] * 0.5f
                        zmm0 = temp0_4
                        zmm0[0] = zmm0[0] f* temp0_4[0]
                        zmm1 = zmm3[0] f* zmm0[0]
                        zmm0 = temp0_4
                        zmm5[0] = zmm5[0] f- zmm1
                        zmm0[0] = zmm0[0] f* zmm5[0]
                        temp0_4[0] = temp0_4[0] f+ zmm0[0]
                        zmm0 = temp0_4
                        zmm3[0] = zmm3[0] * temp0_4[0] * temp0_4[0]
                        zmm5[0] = 0.5f - zmm3[0]
                        zmm3 = 0x322bcc77
                        zmm0[0] = zmm0[0] f* zmm5[0]
                        temp0_4[0] = temp0_4[0] f+ zmm0[0]
                        zmm13[0] = zmm13[0] f* temp0_4[0]
                        zmm11[0] = zmm11[0] f* temp0_4[0]
                        zmm14.d = zmm14.d f* temp0_4[0]
                    
                    zmm0 = zx.o(*(r10_2 + 0x28))
                    int32_t rax_5 = *(r10_2 + 0x30)
                    zmm8 = zmm0.d
                    zmm7 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm8[0] = zmm8[0] f* zmm8[0]
                    zmm9 = rax_5
                    zmm7[0] = zmm7[0] f* zmm7[0]
                    zmm7[0] = zmm7[0] f+ zmm8[0]
                    zmm7[0] = zmm7[0] f+ zmm9.d f* zmm9.d
                    
                    if (not(zmm7[0] f<= zmm3[0]))
                        zmm3 = zx.o(0)
                        zmm5 = zx.o(0)
                        zmm5[0] = 0x3f000000
                        zmm3[0] = zmm7[0]
                        float temp0_6[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                        zmm3[0] = zmm3[0] * 0.5f
                        zmm0 = temp0_6
                        zmm0[0] = zmm0[0] f* temp0_6[0]
                        zmm1 = zmm3[0] f* zmm0[0]
                        zmm0 = temp0_6
                        zmm5[0] = zmm5[0] f- zmm1
                        zmm0[0] = zmm0[0] f* zmm5[0]
                        temp0_6[0] = temp0_6[0] f+ zmm0[0]
                        zmm0 = temp0_6
                        zmm3[0] = zmm3[0] * temp0_6[0] * temp0_6[0]
                        zmm5[0] = 0.5f - zmm3[0]
                        zmm0[0] = zmm0[0] f* zmm5[0]
                        temp0_6[0] = temp0_6[0] f+ zmm0[0]
                        zmm8[0] = zmm8[0] f* temp0_6[0]
                        zmm7[0] = zmm7[0] f* temp0_6[0]
                        zmm9.d = zmm9.d f* temp0_6[0]
                    
                    if (r12.b == 1)
                        zmm6 = zmm7
                        zmm8[0] = zmm8[0] f* zmm13[0]
                        zmm6[0] = zmm6[0] f* zmm11[0]
                        zmm9.d = zmm9.d f* zmm14.d
                        zmm6[0] = zmm6[0] f+ zmm8[0]
                        zmm6[0] = zmm6[0] f+ zmm9.d
                        zmm6[0] = zmm6[0] f- 1f
                        zmm6[0] = zmm6[0] f* -0.5f
                    
                    if (r15.b == 1)
                        zmm10 = temp0_3
                        zmm10[0] = zmm10[0] f/ arg_18
                        
                        if (r14 != 0 && not(zmm6[0] f>= 0.5f))
                            if (zmm6[0] f>= 0f)
                                zmm0 = _mm_min_ss(zmm6[0], 0x3f000000)
                            else
                                zmm0 = zx.o(0)
                            
                            zmm0[0] = zmm0[0] f* 2f
                            zmm10[0] = zmm10[0] f* zmm0[0]
                    
                    int32_t r8_3 = data_143a2f094
                    zmm1 = 1f
                    int32_t rdx_3 = int.d(zmm10[0])
                    zmm6[0] = zmm6[0] f* *(*(arg1 + 0x238) + 0x5c)
                    int32_t rax_7 = data_143a2f098
                    
                    if (rdx_3 s<= r8_3)
                        r8_3 = rdx_3
                    
                    int32_t rcx_8 = int.d(zmm6[0])
                    
                    if (rcx_8 s<= rax_7)
                        rax_7 = rcx_8
                    
                    int32_t r8_4 = r8_3 + rax_7
                    int32_t rax_8 = 1
                    
                    if (r8_4 s> 0)
                        rax_8 = r8_4
                    
                    bool cond:1_1 = zmm6[0] f<= 0.5f
                    *(rbx_1 + 0x1c) = rax_8
                    
                    if (not(cond:1_1))
                        zmm6[0] = zmm6[0] f* 0.5f
                        zmm1 = 1f f- zmm6[0]
                    
                    int32_t rax_9 = rax_8 * 2
                    *(rbx_1 + 0x20) = zmm1
                    *(arg1 + 0x1d0) += rax_9
                    rbp_1 += rax_9
                    rdx_2 = r11_2
                    rbx_1 = r10_2
                    zmm3 = 0x322bcc77
                    int32_t rax_12 = *r10_2 s>> 0xe & 0x3fff
                    
                    if (rax_12 == 0x3fff)
                        break
                    
                    r11_2 = sx.q(rax_12 * *(arg1 + 0x114)) + *(arg1 + 0xf0)
                    r10_2 = sx.q(*(arg1 + 0x30)) + r11_2
                
                *(arg1 + 0x1d0) += 2
                rdx = arg_8 + rbp_1 + 2
                r11 = arg_10 + 1
                *(r10_2 + 0x1c) = 1
                arg_8 = rdx
                rax = zx.q(rbp_1)
                arg_10 = r11
                *(r10_2 + 8) = rax.d
        
        i += 1
        rcx = var_118_1 + 2
        var_118_1 = rcx
    while (i s< *(arg1 + 0x118))

*(arg1 + 0x1d8) = r11

if (r11 s<= 0)
    *(arg1 + 0x1d4) = 0
    return rax

int32_t rax_3 = rdx + ((r11 - 2) << 1)
*(arg1 + 0x1d4) = rax_3
return rax_3
