// 函数: sub_141423ef0
// 地址: 0x141423ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
float (* rdi)[0x4] = nullptr
int32_t r8 = 0
char* rsi = nullptr
float var_218 = (*(arg1 + 0x38))[0]
int64_t result = sx.q(*(arg1 + 0x68))
int32_t r14 = 0
int32_t r15 = 0
float (* var_1f0)[0x4] = nullptr
void* r12 = arg2
int32_t var_1e4 = 0
int64_t rdx = arg1[6].q
int32_t rcx = 0
int64_t var_190 = rdx
int32_t var_20c = 0
char* var_200 = nullptr
int32_t var_210 = 0
int32_t var_1f4 = 0
int64_t result_2 = result

if (result s> 0)
    result = 0
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4] = 0x3f800000
    float zmm12[0x4] = 0x43c04000
    float zmm13[0x4] = 0x43804000
    float zmm14[0x4] = 0x43400000
    float zmm15[0x4] = 0x43000000
    int64_t result_1 = 0
    
    do
        int128_t* r13_2 = result * 0x70 + rdx
        int128_t* var_1e0_1 = r13_2
        uint64_t i_3 = zx.q(*(r13_2[4].q + 8))
        
        if (i_3.d s> rcx)
            var_20c = i_3.d
            int32_t var_1e8_1 = i_3.d
            
            if (i_3.d s> r8)
                sub_1405a4f90(&var_1f0)
                rdi = var_1f0
                var_20c = var_1e8_1
        else if (i_3.d s< rcx)
            int32_t rax_6 = rcx - i_3.d
            
            if (rcx != i_3.d)
                int32_t rcx_2 = rcx - rax_6
                var_20c = rcx_2
                
                if (rcx_2 != i_3.d)
                    memmove(&rdi[sx.q(i_3.d)], &rdi[sx.q(rax_6 + i_3.d)], (rcx_2 - i_3.d) << 4)
        
        if (i_3.d s> r14)
            var_210 = i_3.d
            int32_t var_1f8_1 = i_3.d
            
            if (i_3.d s> r15)
                sub_1405daba0(&var_200)
                rsi = var_200
                var_210 = var_1f8_1
        else if (i_3.d s< r14)
            int32_t rax_10 = r14 - i_3.d
            
            if (r14 != i_3.d)
                int32_t r14_1 = r14 - rax_10
                var_210 = r14_1
                
                if (r14_1 != i_3.d)
                    memmove(&rsi[sx.q(i_3.d)], &rsi[sx.q(rax_10 + i_3.d)], r14_1 - i_3.d)
        
        float zmm2[0x4] = *r13_2
        int64_t* rax_12 = r13_2[4].q
        zmm7 = _mm_shuffle_ps(zmm2, zmm2, 0)
        float zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        float zmm1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        void* r9_1 = *rax_12
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        float zmm4[0x4] = arg1[1]
        float zmm3[0x4] = *arg1
        float zmm5[0x4] = arg1[2]
        zmm6 = arg1[3]
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm2 = _mm_mul_ps(zmm2, zmm6)
        zmm7 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm7, zmm3), zmm0), zmm1), zmm2)
        zmm2 = r13_2[1]
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm8 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        zmm8 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm8, zmm3), zmm0), zmm1), zmm2)
        zmm2 = r13_2[2]
        zmm9 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm6)
        zmm9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm3), zmm0), zmm1), zmm2)
        zmm2 = r13_2[3]
        zmm10 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm10 = _mm_mul_ps(zmm10, zmm3)
        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm0 = _mm_mul_ps(zmm0, zmm4)
        zmm4 = var_218
        zmm1 = _mm_mul_ps(zmm1, zmm5)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
        zmm10 = _mm_add_ps(zmm10, zmm0)
        zmm2 = _mm_mul_ps(zmm2, zmm6)
        zmm10 = _mm_add_ps(_mm_add_ps(zmm10, zmm1), zmm2)
        
        if (i_3.d s> 0)
            char* r10_1 = rsi
            void* r8_4 = &(*rdi)[1]
            float (* r11_1)[0x4] = rdi
            void* r9_2 = r9_1 + 8
            uint64_t i
            
            do
                zmm2 = *(r9_2 - 4)
                zmm0 = *(r9_2 - 8)
                zmm1 = *r9_2
                char rdx_8 = 0
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm7)
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm1 = _mm_mul_ps(zmm1, zmm9)
                *r11_1 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm2, zmm8), zmm0), 
                    _mm_add_ps(zmm1, _mm_mul_ps(data_143ecec90, zmm10)))
                zmm3 = *(r8_4 + 8)
                zmm0 = *(r8_4 - 4)
                zmm1 = zmm3 ^ data_142d3f780
                
                if (zmm4[0] > zmm3[0])
                    rdx_8 = 0x10
                
                char rcx_12 = rdx_8 | 1
                
                if (zmm1[0] <= zmm0[0])
                    rcx_12 = rdx_8
                
                bool cond:3_1 = zmm0[0] <= zmm3[0]
                char rcx_13 = rcx_12 | 2
                zmm0 = *r8_4
                
                if (cond:3_1)
                    rcx_13 = rcx_12
                
                char rcx_14 = rcx_13 | 4
                
                if (zmm1[0] <= zmm0[0])
                    rcx_14 = rcx_13
                
                int128_t* rax_13
                rax_13.b = rcx_14 | 8
                char rcx_15 = rax_13.b
                
                if (zmm0[0] <= zmm3[0])
                    rcx_15 = rcx_14
                
                r11_1 = &r11_1[1]
                *r10_1 = rcx_15
                r9_2 += 0xc
                r10_1 = &r10_1[1]
                r8_4 += 0x10
                i = i_3
                i_3 -= 1
            while (i != 1)
            r12 = arg2
        
        int64_t* rcx_16 = r13_2[5].q
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = muls.dp.d(0x55555556, rcx_16[1].d)
        int32_t i_4 = temp3_1 + (temp3_1 u>> 0x1f)
        int64_t i_2 = sx.q(i_4)
        
        if (i_4 s> 0)
            int16_t* rax_21 = *rcx_16 + 4
            int16_t* var_1b8_1 = rax_21
            int64_t i_1
            
            do
                uint64_t r9_3 = zx.q(*rax_21)
                uint64_t r8_6 = zx.q(rax_21[-1])
                uint64_t rdx_13 = zx.q(rax_21[-2])
                char rcx_17 = rsi[r9_3]
                bool r11_2 = rsi[r8_6]
                bool r10_2 = rsi[rdx_13]
                
                if ((r10_2 & rcx_17 & r11_2) == 0)
                    float (* rdx_14)[0x4] = rdx_13 << 4
                    uint64_t r8_7 = r8_6 * 2
                    uint64_t r9_4 = r9_3 * 2
                    float var_168[0x4] = *(rdx_14 + rdi)
                    float var_158_1[0x4] = *(rdi + (r8_7 << 3))
                    float var_148_1[0x4] = *(rdi + (r9_4 << 3))
                    int32_t var_188[0x2]
                    
                    if (((rcx_17 | r11_2 | r10_2) & 0x10) == 0)
                        int64_t j = 0
                        float* rdx_29 = &var_168[1]
                        int32_t var_138
                        
                        do
                            zmm11[0] = zmm11[0] / rdx_29[2]
                            zmm11[0] = zmm11[0] * rdx_29[-1]
                            zmm11[0] = zmm11[0] * zmm14[0]
                            zmm11[0] = zmm11[0] + zmm11[0]
                            zmm11[0] = zmm11[0] + zmm12[0]
                            int32_t rax_54 = int.d(zmm11[0])
                            zmm11[0] = zmm11[0] * rdx_29[1]
                            zmm11[0] = zmm11[0] * *rdx_29
                            rdx_29 = &rdx_29[4]
                            (&var_188)[j][0] = rax_54 s>> 1
                            (&var_138)[j] = zmm11[0]
                            zmm11[0] = zmm11[0] * zmm15[0]
                            zmm11[0] = zmm11[0] + zmm11[0]
                            zmm11[0] = zmm11[0] + zmm13[0]
                            var_184
                            *(&var_184 + (j << 3)) = int.d(zmm11[0]) s>> 1
                            j += 1
                        while (j s< 3)
                        
                        int32_t rsi_4 = var_188[0]
                        int32_t r8_12 = var_188[1]
                        int32_t var_180
                        int32_t rdi_5 = var_180
                        int32_t var_174
                        int32_t r10_4 = var_174
                        int32_t var_178
                        int32_t r14_6 = var_178
                        int32_t var_17c
                        int32_t r9_7 = var_17c
                        
                        if ((r14_6 - rsi_4) * (r9_7 - r8_12) s< (rdi_5 - rsi_4) * (r10_4 - r8_12))
                            int32_t rbx_5 = r13_2[6].d
                            int32_t var_134
                            int32_t var_130
                            zmm6 = __minss_xmmss_memss(__minss_xmmss_memss(var_138[0], var_134)[0], 
                                var_130)
                            
                            if (r8_12 s<= r9_7)
                                zmm2 = zx.o(var_180.q)
                                zmm3 = zx.o(var_188)
                            else
                                zmm0 = zx.o(var_188)
                                zmm3 = zx.o(var_180.q)
                                zmm2 = zmm0
                                var_188 = zmm3.q
                                r8_12 = var_188[1]
                                rsi_4 = var_188[0]
                                var_180.q = zmm0.q
                                r9_7 = var_17c
                                rdi_5 = var_180
                            
                            if (r9_7 s<= r10_4)
                                zmm7 = zx.o(var_178.q)
                            else
                                zmm0 = zmm2
                                zmm2 = zx.o(var_178.q)
                                var_180.q = zmm2.q
                                zmm7 = zmm0
                                r9_7 = var_17c
                                rdi_5 = var_180
                                var_178.q = zmm0.q
                                r10_4 = var_174
                                r14_6 = var_178
                            
                            if (r8_12 s> r9_7)
                                var_188 = zmm2.q
                                r8_12 = var_188[1]
                                rsi_4 = var_188[0]
                                var_180.q = zmm3.q
                                rdi_5 = var_180
                            
                            if (r8_12 s< 0x100 && r10_4 s>= 0)
                                int64_t r13_4 = sx.q(*(r12 + 0x68))
                                int32_t rax_62 = (r13_4 + 1).d
                                *(r12 + 0x68) = rax_62
                                
                                if (rax_62 s> *(r12 + 0x6c))
                                    sub_1405a4df0(r12 + 0x60)
                                
                                int64_t rax_63 = *(r12 + 0x60)
                                int64_t rcx_39 = r13_4 * 3
                                *(rax_63 + (rcx_39 << 3)) = var_188.o
                                *(rax_63 + (rcx_39 << 3) + 0x10) = zmm7.q
                                int32_t rcx_40 = *(r12 + 0x78)
                                *(r12 + 0x78) = rcx_40 + 1
                                
                                if (rcx_40 + 1 s> *(r12 + 0x7c))
                                    sub_1405a4cf0(r12 + 0x70)
                                
                                *(*(r12 + 0x70) + (sx.q(rcx_40) << 2)) = rbx_5
                                int64_t r15_2 = sx.q(*(r12 + 0x88))
                                int32_t rax_66 = (r15_2 + 1).d
                                *(r12 + 0x88) = rax_66
                                
                                if (rax_66 s> *(r12 + 0x8c))
                                    sub_1405daba0(r12 + 0x80)
                                
                                int32_t rcx_44 = rdi_5
                                float var_1bc_1 = zmm6[0]
                                
                                if (rsi_4 s<= rdi_5)
                                    rcx_44 = rsi_4
                                
                                int32_t var_1c0_1 = r13_4.d
                                *(r15_2 + *(r12 + 0x80)) = 1
                                int32_t rax_68 = r14_6
                                
                                if (rcx_44 s<= r14_6)
                                    rax_68 = rcx_44
                                
                                int32_t temp9_1
                                int32_t temp10_1
                                temp9_1:temp10_1 = sx.q(rax_68)
                                int32_t r8_14 = ((temp9_1 & 0x3f) + temp10_1) s>> 6
                                
                                if (rsi_4 s>= rdi_5)
                                    rdi_5 = rsi_4
                                
                                if (rdi_5 s>= r14_6)
                                    r14_6 = rdi_5
                                
                                int32_t rcx_45 = 0
                                int32_t temp11_1
                                int32_t temp12_1
                                temp11_1:temp12_1 = sx.q(r14_6)
                                int32_t rax_73 = (temp12_1 + (temp11_1 & 0x3f)) s>> 6
                                
                                if (r8_14 s>= 0)
                                    rcx_45 = r8_14
                                
                                int64_t rdx_40 = sx.q(rcx_45)
                                int32_t rcx_46 = 5
                                
                                if (rax_73 s<= 5)
                                    rcx_46 = rax_73
                                
                                int64_t r14_7 = sx.q(rcx_46)
                                
                                if (rdx_40 s<= r14_7)
                                    void* rdi_9 = (rdx_40 << 4) + 8 + r12
                                    int64_t j_4 = r14_7 - rdx_40 + 1
                                    int64_t j_1
                                    
                                    do
                                        int64_t rsi_5 = sx.q(*rdi_9)
                                        int32_t rax_74 = (rsi_5 + 1).d
                                        *rdi_9 = rax_74
                                        
                                        if (rax_74 s> *(rdi_9 + 4))
                                            sub_1405a4d70(rdi_9 - 8)
                                        
                                        int64_t rax_75 = *(rdi_9 - 8)
                                        rdi_9 += 0x10
                                        *(rax_75 + (rsi_5 << 3)) = var_1c0_1.q
                                        j_1 = j_4
                                        j_4 -= 1
                                    while (j_1 != 1)
                        
                        rsi = var_200
                    else
                        data_142d3f660
                        zmm7 = var_168[3]
                        zmm6 = var_158_1[3]
                        bool cond:7_1 = zmm4[0] > zmm7[0]
                        float var_128[0x4]
                        __builtin_memcpy(&var_128, 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x40)
                        bool cond:8_1 = zmm4[0] > zmm6[0]
                        
                        if (cond:7_1 == 0)
                            var_128 = *(rdx_14 + rdi)
                        
                        zmm11 = var_158_1[2]
                        zmm12 = var_158_1[1]
                        zmm13 = var_158_1[0]
                        zmm14 = var_168[2]
                        zmm15 = var_168[1]
                        zmm0 = var_168[0]
                        int32_t rcx_19 = zx.d(cond:7_1) ^ 1
                        
                        if (cond:7_1 != cond:8_1)
                            int64_t rax_23 = sx.q(rcx_19)
                            zmm0[0] = zmm0[0] - zmm13[0]
                            zmm4[0] = zmm4[0] - zmm7[0]
                            zmm7[0] = zmm7[0] - zmm6[0]
                            zmm15[0] = zmm15[0] - zmm12[0]
                            rcx_19 += 1
                            zmm4[0] = zmm4[0] / zmm7[0]
                            zmm0[0] = zmm0[0] * zmm4[0]
                            zmm15[0] = zmm15[0] * zmm4[0]
                            zmm0[0] = zmm0[0] + zmm0[0]
                            zmm14[0] = zmm14[0] - zmm11[0]
                            zmm15[0] = zmm15[0] + zmm15[0]
                            zmm3 = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
                            zmm14[0] = zmm14[0] * zmm4[0]
                            zmm3[0] = zmm15[0]
                            zmm4[0] = zmm4[0] * zmm7[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                            zmm14[0] = zmm14[0] + zmm14[0]
                            zmm4[0] = zmm4[0] + zmm7[0]
                            zmm3[0] = zmm14[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                            zmm3[0] = zmm4[0]
                            zmm4 = var_218
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                            var_188.o = zmm3
                            (&var_128)[rax_23] = zmm3
                        
                        zmm5 = var_148_1[3]
                        rdx_14.b = zmm4[0] > zmm5[0]
                        
                        if (cond:8_1 == 0)
                            uint64_t rax_25 = zx.q(rcx_19)
                            rcx_19 += 1
                            (&var_128)[rax_25] = *(rdi + (r8_7 << 3))
                        
                        zmm8 = var_148_1[2]
                        zmm9 = var_148_1[1]
                        zmm10 = var_148_1[0]
                        
                        if (cond:8_1 != rdx_14.b)
                            zmm4[0] = zmm4[0] - zmm6[0]
                            uint64_t rax_27 = zx.q(rcx_19)
                            zmm13[0] = zmm13[0] - zmm10[0]
                            zmm6[0] = zmm6[0] - zmm5[0]
                            zmm12[0] = zmm12[0] - zmm9[0]
                            zmm11[0] = zmm11[0] - zmm8[0]
                            rcx_19 += 1
                            zmm4[0] = zmm4[0] / zmm6[0]
                            zmm13[0] = zmm13[0] * zmm4[0]
                            zmm12[0] = zmm12[0] * zmm4[0]
                            zmm13[0] = zmm13[0] + zmm13[0]
                            zmm11[0] = zmm11[0] * zmm4[0]
                            zmm4[0] = zmm4[0] * zmm6[0]
                            zmm12[0] = zmm12[0] + zmm12[0]
                            zmm11[0] = zmm11[0] + zmm11[0]
                            zmm3 = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
                            zmm4[0] = zmm4[0] + zmm6[0]
                            zmm3[0] = zmm12[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                            zmm3[0] = zmm11[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                            zmm3[0] = zmm4[0]
                            zmm4 = var_218
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                            var_188.o = zmm3
                            (&var_128)[rax_27] = zmm3
                        
                        if (rdx_14.b == 0)
                            uint64_t rax_29 = zx.q(rcx_19)
                            rcx_19 += 1
                            (&var_128)[rax_29] = *(rdi + (r9_4 << 3))
                        
                        if (rdx_14.b != cond:7_1)
                            zmm4[0] = zmm4[0] - zmm5[0]
                            uint64_t rax_31 = zx.q(rcx_19)
                            zmm10[0] = zmm10[0] - var_168[0]
                            zmm5[0] = zmm5[0] - zmm7[0]
                            zmm9[0] = zmm9[0] - zmm15[0]
                            rcx_19 += 1
                            zmm8[0] = zmm8[0] - zmm14[0]
                            zmm4[0] = zmm4[0] / zmm5[0]
                            zmm10[0] = zmm10[0] * zmm4[0]
                            zmm9[0] = zmm9[0] * zmm4[0]
                            zmm10[0] = zmm10[0] + zmm10[0]
                            zmm8[0] = zmm8[0] * zmm4[0]
                            zmm9[0] = zmm9[0] + zmm9[0]
                            zmm4[0] = zmm4[0] * zmm5[0]
                            zmm8[0] = zmm8[0] + zmm8[0]
                            zmm3 = _mm_shuffle_ps(zmm10, zmm10, 0xe1)
                            zmm4[0] = zmm4[0] + zmm5[0]
                            zmm3[0] = zmm9[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                            zmm3[0] = zmm8[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                            zmm3[0] = zmm4[0]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                            var_188.o = zmm3
                            (&var_128)[rax_31] = zmm3
                        
                        zmm11 = 0x3f800000
                        zmm12 = 0x43c04000
                        zmm13 = 0x43804000
                        zmm14 = 0x43400000
                        zmm15 = 0x43000000
                        uint64_t rdx_15 = zx.q(rcx_19)
                        
                        if (rdx_15 u> 2)
                            zmm2 = 0x3f800000
                            int128_t var_118
                            void* rax_33 = &var_118:4
                            zmm2[0] = 1f / var_128[3]
                            zmm8 = zmm2
                            zmm2[0] = zmm2[0] * var_128[0]
                            zmm2[0] = zmm2[0] * var_128[1]
                            zmm2[0] = zmm2[0] * 384f
                            zmm2[0] = zmm2[0] * 256f
                            zmm8[0] = zmm8[0] * var_128[2]
                            zmm2[0] = zmm2[0] + 384.5f
                            zmm2[0] = zmm2[0] + 256.5f
                            int32_t rbx_2 = int.d(zmm2[0]) s>> 1
                            int32_t var_214_1 = rbx_2
                            int32_t r11_4 = int.d(zmm2[0]) s>> 1
                            int32_t var_208_1 = r11_4
                            int64_t j_3 = rdx_15 - 2
                            int64_t j_2
                            
                            do
                                zmm2 = 0x3f800000
                                var_168[0] = rbx_2
                                zmm2[0] = 1f f/ *(rax_33 + 8)
                                var_168[1] = r11_4
                                var_188 = rax_33 + 0x10
                                int32_t r15_1 = rbx_2
                                int32_t r10_3 = r11_4
                                zmm6 = zmm2
                                zmm2[0] = zmm2[0] f* *rax_33
                                zmm2[0] = zmm2[0] f* *(rax_33 - 4)
                                zmm6[0] = zmm6[0] f* *(rax_33 + 4)
                                zmm2[0] = zmm2[0] * 128f
                                zmm2[0] = zmm2[0] * 192f
                                zmm2[0] = zmm2[0] + zmm2[0]
                                zmm2[0] = zmm2[0] + zmm2[0]
                                zmm2[0] = zmm2[0] + 256.5f
                                zmm2[0] = zmm2[0] + 384.5f
                                int32_t rdi_1 = int.d(zmm2[0])
                                int32_t r8_9 = int.d(zmm2[0]) s>> 1
                                var_168[3] = r8_9
                                zmm2 = 0x3f800000
                                zmm2[0] = 1f f/ *(rax_33 + 0x18)
                                float rdi_2 = rdi_1 s>> 1
                                var_168[2] = rdi_2
                                zmm2[0] = zmm2[0] f* *(rax_33 + 0xc)
                                zmm2[0] = zmm2[0] f* *(rax_33 + 0x10)
                                zmm2[0] = zmm2[0] f* *(rax_33 + 0x14)
                                zmm2[0] = zmm2[0] * 192f
                                zmm2[0] = zmm2[0] * 128f
                                zmm2[0] = zmm2[0] + zmm2[0]
                                zmm2[0] = zmm2[0] + zmm2[0]
                                zmm2[0] = zmm2[0] + 384.5f
                                zmm2[0] = zmm2[0] + 256.5f
                                int32_t r9_5 = int.d(zmm2[0])
                                int32_t rsi_2 = int.d(zmm2[0]) s>> 1
                                var_158_1[0] = rsi_2
                                int32_t r9_6 = r9_5 s>> 1
                                var_158_1[1] = r9_6
                                
                                if ((rsi_2 - rbx_2) * (r8_9 - r11_4)
                                        s< (r9_6 - r11_4) * (rdi_2 i- rbx_2))
                                    int32_t rbx_3 = r13_2[6].d
                                    zmm6 = _mm_min_ss(_mm_min_ss(zmm6[0], zmm8[0])[0], zmm2[0])
                                    
                                    if (r11_4 s<= r8_9)
                                        zmm2 = zx.o(var_168[2].q)
                                        zmm3 = zx.o(var_168[0].q)
                                    else
                                        zmm0 = zx.o(var_168[0].q)
                                        zmm3 = zx.o(var_168[2].q)
                                        zmm2 = zmm0
                                        var_168[0].q = zmm3.q
                                        r10_3 = var_168[1]
                                        r15_1 = var_168[0]
                                        var_168[2].q = zmm0.q
                                        r8_9 = var_168[3]
                                        rdi_2 = var_168[2]
                                    
                                    if (r8_9 s<= r9_6)
                                        zmm7 = zx.o(var_158_1[0].q)
                                    else
                                        zmm0 = zmm2
                                        zmm2 = zx.o(var_158_1[0].q)
                                        var_168[2].q = zmm2.q
                                        zmm7 = zmm0
                                        r8_9 = var_168[3]
                                        rdi_2 = var_168[2]
                                        var_158_1[0].q = zmm0.q
                                        r9_6 = var_158_1[1]
                                        rsi_2 = var_158_1[0]
                                    
                                    if (r10_3 s> r8_9)
                                        var_168[0].q = zmm2.q
                                        r10_3 = var_168[1]
                                        r15_1 = var_168[0]
                                        var_168[2].q = zmm3.q
                                        rdi_2 = var_168[2]
                                    
                                    if (r10_3 s< 0x100 && r9_6 s>= 0)
                                        int64_t r13_3 = sx.q(*(r12 + 0x68))
                                        int32_t rax_38 = (r13_3 + 1).d
                                        *(r12 + 0x68) = rax_38
                                        
                                        if (rax_38 s> *(r12 + 0x6c))
                                            sub_1405a4df0(r12 + 0x60)
                                        
                                        int64_t rax_39 = *(r12 + 0x60)
                                        int64_t rcx_26 = r13_3 * 3
                                        *(rax_39 + (rcx_26 << 3)) = var_168
                                        *(rax_39 + (rcx_26 << 3) + 0x10) = zmm7.q
                                        int64_t r12_1 = sx.q(*(r12 + 0x78))
                                        int32_t rax_40 = (r12_1 + 1).d
                                        *(r12 + 0x78) = rax_40
                                        
                                        if (rax_40 s> *(r12 + 0x7c))
                                            sub_1405a4cf0(r12 + 0x70)
                                        
                                        *(*(r12 + 0x70) + (r12_1 << 2)) = rbx_3
                                        r12 = arg2
                                        int64_t r14_3 = sx.q(*(r12 + 0x88))
                                        int32_t rax_42 = (r14_3 + 1).d
                                        *(r12 + 0x88) = rax_42
                                        
                                        if (rax_42 s> *(r12 + 0x8c))
                                            sub_1405daba0(r12 + 0x80)
                                        
                                        int32_t rcx_29 = rdi_2
                                        float var_1cc_1 = zmm6[0]
                                        
                                        if (r15_1 s<= rdi_2)
                                            rcx_29 = r15_1
                                        
                                        int32_t var_1d0_1 = r13_3.d
                                        *(r14_3 + *(r12 + 0x80)) = 1
                                        int32_t rax_44 = rsi_2
                                        
                                        if (rcx_29 s<= rsi_2)
                                            rax_44 = rcx_29
                                        
                                        int32_t temp13_1
                                        int32_t temp14_1
                                        temp13_1:temp14_1 = sx.q(rax_44)
                                        int32_t r8_11 = ((temp13_1 & 0x3f) + temp14_1) s>> 6
                                        
                                        if (r15_1 s>= rdi_2)
                                            rdi_2 = r15_1
                                        
                                        if (rdi_2 s>= rsi_2)
                                            rsi_2 = rdi_2
                                        
                                        int32_t rcx_30 = 0
                                        int32_t temp16_1
                                        int32_t temp17_1
                                        temp16_1:temp17_1 = sx.q(rsi_2)
                                        int32_t rax_49 = (temp17_1 + (temp16_1 & 0x3f)) s>> 6
                                        
                                        if (r8_11 s>= 0)
                                            rcx_30 = r8_11
                                        
                                        int64_t rdx_27 = sx.q(rcx_30)
                                        int32_t rcx_31 = 5
                                        
                                        if (rax_49 s<= 5)
                                            rcx_31 = rax_49
                                        
                                        int64_t r14_4 = sx.q(rcx_31)
                                        
                                        if (rdx_27 s<= r14_4)
                                            void* rdi_4 = r12 + 8 + (rdx_27 << 4)
                                            int64_t k_1 = r14_4 - rdx_27 + 1
                                            int64_t k
                                            
                                            do
                                                int64_t rsi_3 = sx.q(*rdi_4)
                                                int32_t rax_52 = (rsi_3 + 1).d
                                                *rdi_4 = rax_52
                                                
                                                if (rax_52 s> *(rdi_4 + 4))
                                                    sub_1405a4d70(rdi_4 - 8)
                                                
                                                int64_t rax_53 = *(rdi_4 - 8)
                                                rdi_4 += 0x10
                                                *(rax_53 + (rsi_3 << 3)) = var_1d0_1.q
                                                k = k_1
                                                k_1 -= 1
                                            while (k != 1)
                                        
                                        r13_2 = var_1e0_1
                                        r11_4 = var_208_1
                                    
                                    rbx_2 = var_214_1
                                
                                j_2 = j_3
                                j_3 -= 1
                                rax_33 = var_188
                            while (j_2 != 1)
                            rsi = var_200
                
                zmm4 = var_218
                rax_21 = &var_1b8_1[3]
                i_1 = i_2
                i_2 -= 1
                rdi = var_1f0
                r13_2 = var_1e0_1
                var_1b8_1 = rax_21
            while (i_1 != 1)
        
        rdi = var_1f0
        result = result_1 + 1
        r14 = var_210
        rcx = var_20c
        r8 = var_1e4
        r15 = var_1f4
        rdx = var_190
        result_1 = result
    while (result s< result_2)
    
    if (rsi != 0)
        result = sub_140a74f90(rsi)
    
    float (* rcx_50)[0x4] = var_1f0
    
    if (rcx_50 != 0)
        result = sub_140a74f90(rcx_50)

__security_check_cookie(rax_1 ^ &var_238)
return result
