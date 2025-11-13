// 函数: sub_14260f100
// 地址: 0x14260f100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg3 + 8)
void* rbp = arg1
float zmm8[0x4] = *(arg3 + 4)
float zmm9[0x4] = *arg3
float temp0[0x4] = __minss_xmmss_memss(zmm9[0], *arg2)
zmm9 = __maxss_xmmss_memss(zmm9[0], *arg2)
uint64_t result = *(arg1 + 8)
float zmm11[0x4] = __minss_xmmss_memss(zmm8[0], (*arg2)[1])
float zmm10[0x4] = __minss_xmmss_memss(zmm5[0], (*arg2)[2])
zmm8 = __maxss_xmmss_memss(zmm8[0], (*arg2)[1])
zmm5 = __maxss_xmmss_memss(zmm5[0], (*arg2)[2])
temp0[0] = temp0[0] - arg4
arg1.b = 1
zmm11[0] = zmm11[0] f- *(result + 0x50)
zmm10[0] = zmm10[0] - arg4
zmm8[0] = zmm8[0] f+ *(result + 0x50)
zmm9[0] = zmm9[0] + arg4
bool cond:0 = temp0[0] f> *(result + 0x60)
zmm5[0] = zmm5[0] + arg4
float var_10c = temp0[0]
float var_110 = zmm11[0]
float var_114 = zmm10[0]
float var_118 = zmm9[0]
float arg_18 = zmm8[0]
float arg_10 = zmm5[0]

if (cond:0 || not(zmm9[0] f>= *(result + 0x54)))
    arg1.b = 0

if (zmm11[0] f> *(result + 0x64) || not(zmm8[0] f>= *(result + 0x58)))
    arg1.b = 0

if (not(zmm10[0] f> *(result + 0x68)) && not(zmm5[0] f< *(result + 0x5c)) && arg1.b != 0)
    int32_t i = 0
    
    if (*(result + 0x3c) s> 0)
        int64_t r15_1 = 0
        float zmm12[0x4]
        float var_b8_1[0x4] = zmm12
        float zmm13[0x4]
        float var_c8_1[0x4] = zmm13
        float zmm14[0x4]
        float var_d8_1[0x4] = zmm14
        float zmm15[0x4]
        float var_e8_1[0x4] = zmm15
        
        do
            int64_t rdx = *(rbp + 0x18)
            int32_t r11_1 = 1
            void* r14_1 = 1
            void* r8_1 = *(rbp + 0x10) + r15_1
            uint32_t r9_1 = zx.d(*(r8_1 + 0x1e))
            uint64_t rcx = zx.q(*(r8_1 + 4)) * 3
            zmm13 = *(rdx + (rcx << 2) + 4)
            zmm14 = *(rdx + (rcx << 2) + 8)
            arg4 = zmm13[0]
            zmm12 = *(rdx + (rcx << 2))
            float zmm1[0x4] = zmm14
            float arg_8 = arg4
            zmm15 = zmm12
            float arg_20 = zmm1[0]
            uint64_t rax
            int32_t zmm2
            float zmm6[0x4]
            
            if (r9_1 u> 1)
                if (r9_1 u>= 5)
                    void* rsi_1 = r8_1 + 8
                    uint64_t rax_3 = zx.q(((r9_1 - 5) u>> 2) + 1)
                    uint64_t j_5 = zx.q(rax_3.d)
                    r11_1 = ((rax_3 << 2) + 1).d
                    r14_1 = (rax_3 << 2) + 1
                    uint64_t j
                    
                    do
                        uint64_t rax_4 = zx.q(*(rsi_1 - 2))
                        rsi_1 += 8
                        uint64_t rcx_1 = rax_4 * 3
                        uint64_t rax_5 = zx.q(*(rsi_1 - 8))
                        int32_t zmm4 = *(rdx + (rcx_1 << 2) + 8)
                        zmm8 = *(rdx + (rcx_1 << 2))
                        float temp0_6[0x4] = _mm_max_ss(zmm1[0], zmm4)
                        zmm11 = *(rdx + (rcx_1 << 2) + 4)
                        float temp0_7[0x4] = _mm_min_ss(zmm14[0], zmm4)
                        uint64_t rcx_2 = rax_5 * 3
                        uint64_t rax_6 = zx.q(*(rsi_1 - 6))
                        arg4 = *(rdx + (rcx_2 << 2) + 8)
                        float temp0_8[0x4] = _mm_min_ss(zmm12[0], zmm8[0])
                        zmm10 = *(rdx + (rcx_2 << 2) + 4)
                        float temp0_9[0x4] = _mm_min_ss(zmm13[0], zmm11[0])
                        zmm6 = *(rdx + (rcx_2 << 2))
                        float temp0_10[0x4] = _mm_max_ss(temp0_6[0], arg4)
                        float temp0_11[0x4] = _mm_min_ss(temp0_7[0], arg4)
                        uint64_t rcx_3 = rax_6 * 3
                        rax = zx.q(*(rsi_1 - 4))
                        zmm9 = *(rdx + (rcx_3 << 2) + 4)
                        float temp0_12 = _mm_max_ss(arg_8, zmm11[0])
                        zmm2 = *(rdx + (rcx_3 << 2) + 8)
                        float temp0_13[0x4] = _mm_max_ss(zmm15[0], zmm8[0])
                        zmm5 = *(rdx + (rcx_3 << 2))
                        float temp0_14[0x4] = _mm_max_ss(temp0_10[0], zmm2)
                        uint64_t rcx_4 = rax * 3
                        float temp0_15[0x4] = _mm_min_ss(temp0_8[0], zmm6[0])
                        float temp0_16 = _mm_max_ss(temp0_12, zmm10[0])
                        float temp0_17[0x4] = _mm_min_ss(temp0_9[0], zmm10[0])
                        float temp0_18[0x4] = _mm_max_ss(temp0_13[0], zmm6[0])
                        zmm1 = *(rdx + (rcx_4 << 2) + 8)
                        float temp0_19[0x4] = _mm_min_ss(temp0_11[0], zmm2)
                        float temp0_20[0x4] = _mm_min_ss(temp0_15[0], zmm5[0])
                        float temp0_21 = _mm_max_ss(temp0_16, zmm9[0])
                        float temp0_22[0x4] = _mm_min_ss(temp0_17[0], zmm9[0])
                        float temp0_23[0x4] = _mm_max_ss(temp0_18[0], zmm5[0])
                        zmm1 = _mm_max_ss(zmm1[0], temp0_14[0])
                        zmm12 = __minss_xmmss_memss(temp0_20[0], *(rdx + (rcx_4 << 2)))
                        arg4 = __maxss_xmmss_memss(temp0_21, *(rdx + (rcx_4 << 2) + 4))
                        zmm13 = __minss_xmmss_memss(temp0_22[0], *(rdx + (rcx_4 << 2) + 4))
                        zmm14 = __minss_xmmss_memss(temp0_19[0], *(rdx + (rcx_4 << 2) + 8))
                        zmm15 = __maxss_xmmss_memss(temp0_23[0], *(rdx + (rcx_4 << 2)))
                        arg_8 = arg4
                        j = j_5
                        j_5 -= 1
                    while (j != 1)
                    zmm5 = arg_10
                    zmm8 = arg_18
                    zmm9 = var_118
                    zmm10 = var_114
                    zmm11 = var_110
                    arg_20 = zmm1[0]
                
                if (r11_1 s< r9_1)
                    void* r8_3 = r8_1 + (r14_1 << 1) + 4
                    uint64_t j_4 = zx.q(r9_1 - r11_1)
                    uint64_t j_1
                    
                    do
                        rax = zx.q(*r8_3)
                        r8_3 += 2
                        uint64_t rcx_5 = rax * 3
                        zmm1 = __maxss_xmmss_memss(arg_20[0], *(rdx + (rcx_5 << 2) + 8))
                        zmm12 = __minss_xmmss_memss(zmm12[0], *(rdx + (rcx_5 << 2)))
                        zmm13 = __minss_xmmss_memss(zmm13[0], *(rdx + (rcx_5 << 2) + 4))
                        zmm14 = __minss_xmmss_memss(zmm14[0], *(rdx + (rcx_5 << 2) + 8))
                        zmm15 = __maxss_xmmss_memss(zmm15[0], *(rdx + (rcx_5 << 2)))
                        arg_20 = zmm1[0]
                        arg4 = __maxss_xmmss_memss(arg4, *(rdx + (rcx_5 << 2) + 4))
                        j_1 = j_4
                        j_4 -= 1
                    while (j_1 != 1)
            
            rax.b = 1
            
            if (var_10c[0] f> zmm15[0] || not(zmm9[0] >= zmm12[0]))
                rax.b = 0
            
            if (zmm11[0] > arg4 || not(zmm8[0] >= zmm13[0]))
                rax.b = 0
            
            if (not(zmm10[0] > zmm1[0]) && not(zmm5[0] < zmm14[0]) && rax.b != 0)
                float var_fc
                int32_t var_ec
                char rax_7
                float zmm7[0x4]
                rax_7, zmm6, zmm7, zmm8, zmm9 = sub_1426123c0(rbp, i, arg2, arg3, &var_fc, &var_ec)
                
                if (rax_7 != 0)
                    int64_t r11_2 = sx.q(*(arg5 + 0x200))
                    int32_t j_2 = 0
                    int64_t r9_3 = 0
                    int32_t i_1 = i
                    int32_t i_2 = i
                    int64_t rcx_7 = -1
                    int32_t j_6 = -1
                    
                    if (r11_2.d s> 0)
                        zmm2 = var_ec
                        void* r8_5 = arg5 + 0xc
                        arg4 = var_fc
                        
                        do
                            zmm1 = *r8_5
                            int32_t j_3 = j_2
                            uint32_t zmm0[0x4] = zmm1
                            zmm1[0] = zmm1[0] f- zmm2
                            zmm0[0] = zmm0[0] f- arg4
                            zmm1 = _mm_and_ps(zmm1, zmm6)
                            
                            if (_mm_and_ps(zmm0, zmm6)[0] f< zmm7[0])
                                rcx_7 = r9_3
                            
                            if (zmm1[0] >= zmm7[0])
                                j_3 = j_6
                            
                            j_2 += 1
                            r9_3 += 1
                            r8_5 += 0x10
                            j_6 = j_3
                        while (j_2 s< r11_2.d)
                    
                    if (r11_2.d s<= 0 || rcx_7 s< 0)
                        *(arg5 + r11_2 * 0x10) = rbp.o
                        *(arg5 + 0x200) += 1
                    else
                        *(arg5 + rcx_7 * 0x10) = rbp.o
                    
                    result = zx.q(*(arg5 + 0x200))
                    
                    if (j_6 s< 0)
                        if (result.d s>= 0x20)
                            break
                        
                        *(arg5 + sx.q(result.d) * 0x10) = rbp.o
                        *(arg5 + 0x200) += 1
                        result = zx.q(*(arg5 + 0x200))
                    
                    if (result.d s>= 0x20)
                        break
            
            result = *(rbp + 8)
            i += 1
            zmm5 = arg_10
            r15_1 += 0x20
        while (i s< *(result + 0x3c))

return result
