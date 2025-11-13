// 函数: sub_141e3f230
// 地址: 0x141e3f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
int128_t zmm8
int128_t var_68 = zmm8
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* result

if (arg4[2].d s<= 0)
    result.b = 0
else
    void* rax_2 = arg2[2]
    int32_t rdi_1 = *(arg1 + 0xc8)
    void* rax_3 = *(arg1 + 0x38)
    int32_t rbx_1 = 0
    int32_t var_254_1 = 0
    int64_t* var_230_1 = nullptr
    int32_t r8 = 0
    int64_t* var_260 = nullptr
    int32_t i_10 = *(arg1 + 0xa8) - *(arg1 + 0xd4)
    int32_t rcx = 0
    int32_t var_208 = 0
    void* var_290 = arg1 + 0xa0
    int32_t var_204_1 = 1
    void* var_200 = arg1 + 0xb0
    int32_t var_1f8_1 = 0xffffffff
    int64_t var_1f4_1 = 0
    
    if (rdi_1 != 0)
        void* rax_5 = *(arg1 + 0xc0)
        void* r9 = arg1 + 0xb0
        
        if (rax_5 != 0)
            r9 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_2 = *r9
        
        if (rdx_2 != 0)
        label_141e3f345:
            int32_t rax_12 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_204_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_1f4_1.d = r8 - rax_13 + 0x1f
            
            if (r8 - rax_13 + 0x1f s> rdi_1)
                var_1f4_1.d = rdi_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_1f4_1:4.d = r8
                var_208 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r9 + (rdx_3 << 2) + 4)
                var_1f8_1 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_141e3f345
            
            var_1f4_1.d = rdi_1
    
    int32_t rdx_4 = *(arg1 + 0xc8)
    double zmm2[0x2] = var_1f8_1.o
    int32_t var_274_1 = rdx_4
    int32_t rdi_2 = 0xffffffff << (rdx_4.b & 0x1f)
    int32_t rcx_4 = *(arg1 + 0xc8)
    float var_1d8[0x4] = var_208.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r9_2 = rdx_4 & 0xffffffe0
    int32_t var_278_1 = rdi_2
    double var_1c8_1 = zmm2[0]
    int64_t var_1e8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int256_t zmm1
    zmm1.o = var_1d8
    var_208.o = (arg1 + 0xa0).o
    var_1f8_1.o = zmm1.o
    
    if (rdx_4 != rcx_4)
        void* rax_15 = *(arg1 + 0xc0)
        void* r10_2 = arg1 + 0xb0
        
        if (rax_15 != 0)
            r10_2 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rcx_4 - 1)
        int32_t rdx_8 = *(r10_2 + (sx.q(r8_3) << 2)) & rdi_2
        
        if (rdx_8 != 0)
        label_141e3f410:
            int32_t rax_22 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rax_23
            
            if (rax_22 == 0)
                rax_23 = 0x20
            else
                rax_23 = 0x1f - temp0_4
            
            int32_t rcx_8 = *(arg1 + 0xc8)
            var_274_1 = r9_2 - rax_23 + 0x1f
            
            if (r9_2 - rax_23 + 0x1f s> rcx_8)
                var_274_1 = rcx_8
        else
            while (true)
                int64_t rcx_6 = sx.q(r8_3)
                r9_2 += 0x20
                r8_3 += 1
                
                if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_2 + (rcx_6 << 2) + 4)
                var_278_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_141e3f410
            
            var_274_1 = *(arg1 + 0xc8)
    
    int32_t r14_1 = var_254_1
    void* r13_1 = var_290
    int32_t var_258
    int32_t var_220
    
    while (true)
        int32_t var_1ec
        int64_t rax_25 = sx.q(var_1ec)
        int64_t* rdx_9 = var_208.q
        
        if (rax_25.d == (var_278_1.q u>> 0x20).d && var_1f8_1.q == arg1 + 0xb0 && rdx_9 == r13_1)
            break
        
        int64_t rdi_3 = sx.q(rbx_1)
        rbx_1 = (rdi_3 + 1).d
        int64_t rdx_10 = sx.q(*(*rdx_9 + rax_25 * 0x14 + 8))
        var_220 = rdx_10.d
        var_258 = rbx_1
        int32_t var_21c_1 = *(*(rax_2 + 0x80) + (rdx_10 << 2))
        
        if (rbx_1 s> r14_1)
            sub_1405a4d70(&var_260)
            rbx_1 = var_258
            r14_1 = var_254_1
            var_230_1 = var_260
        
        var_230_1[rdi_3] = var_220.q
        var_1f4_1:4.d &= not.d(var_200:4.d)
        sub_14059bdd0(&var_200)
    
    void* r13_2 = arg1
    
    if (*(r13_2 + 0x110) == 0)
        sub_141e0ba30(arg2)
    else
        sub_140324950(*arg2, arg2[1].d, zmm1)
    
    int32_t rsi_3 = 0
    char r12_2 = *(r13_2 + 0x110)
    int32_t rdx_14 = 0
    int32_t rax_34 = 0
    int64_t* r14_2 = arg3
    int32_t r9_4 = 0
    zmm6 = zx.o(0)
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t i = 0
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    float var_2a8
    int32_t var_298
    int32_t var_110
    float zmm0_1[0x4]
    
    if (arg4[2].d s> 0)
        int64_t rbx_2 = 0
        
        do
            int64_t r8_4 = arg4[1]
            int64_t rcx_16 = sx.q(*(rbx_2 + r8_4 + 4))
            
            if (rcx_16.d != 0xffffffff)
                zmm0_1 = *(rbx_2 + r8_4 + 8)
                var_2a8 = zmm0_1[0]
                
                if ((*(r13_2 + 0x110) == 0 || rcx_16.d != *(r13_2 + 0x114))
                        && not(zmm0_1[0] <= 9.99999975e-06f))
                    var_290 = rcx_16 * 0x70 + *(r13_2 + 0xf0)
                    var_208.q = &var_290
                    var_200 = &var_2a8
                    sub_141d2bcc0(&var_138, &var_298, &var_208, nullptr)
                    zmm6[0] = zmm6[0] + var_2a8
            
            i += 1
            rbx_2 += 0xc
        while (i s< arg4[2].d)
        
        rax_34 = var_104_1
        r9_4 = var_110
        int32_t var_130
        rdx_14 = var_130
        r14_2 = arg3
    
    int32_t rdx_18 = rdx_14 - rax_34
    var_298 = rdx_18
    
    if (rdx_18 s<= 0)
        sub_1405ae080(&var_138)
        
        if (var_230_1 != 0)
            sub_140a74f90(var_230_1)
        
        result.b = 0
    else
        void* rax_35 = nullptr
        void* var_1b0_1 = nullptr
        void* var_218
        __builtin_memset(&var_218, 0, 0x20)
        double (* var_180)[0x2] = nullptr
        int64_t var_178_1 = 0
        void* var_1e0_1
        int64_t var_12c
        void* var_118
        float zmm1_1[0x4]
        
        if (r12_2 == 0 && not(zmm6[0] <= 1f))
            var_260:4.d = 1
            int32_t rcx_18 = 0
            var_260.d = 0
            var_258.q = &var_12c:4
            int32_t r8_6 = 0
            int32_t var_250_1 = 0xffffffff
            int64_t var_24c_1 = 0
            
            if (r9_4 != 0)
                void* r10_3 = &var_12c:4
                
                if (var_118 != 0)
                    r10_3 = var_118
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r9_4 - 1)
                int32_t rdx_21 = *r10_3
                
                if (rdx_21 != 0)
                label_141e3f6f5:
                    int32_t rax_43 = neg.d(rdx_21) & rdx_21
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rax_43)
                    var_260:4.d = rax_43
                    int32_t rax_44
                    
                    if (rax_43 == 0)
                        rax_44 = 0x20
                    else
                        rax_44 = 0x1f - temp0_5
                    
                    int32_t rax_45 = r8_6 - rax_44 + 0x1f
                    
                    if (rax_45 s> r9_4)
                        rax_45 = r9_4
                    
                    var_24c_1.d = rax_45
                else
                    while (true)
                        int64_t rdx_22 = sx.q(rcx_18)
                        r8_6 += 0x20
                        rcx_18 += 1
                        var_24c_1:4.d = r8_6
                        var_260.d = rcx_18
                        
                        if (rdx_22.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            var_24c_1.d = r9_4
                            break
                        
                        rdx_21 = *(r10_3 + (rdx_22 << 2) + 4)
                        var_250_1 = 0xffffffff
                        
                        if (rdx_21 != 0)
                            goto label_141e3f6f5
            
            zmm2 = var_250_1.o
            var_1e0_1 = &var_138
            var_1d8 = var_260.o
            var_274_1 = r9_4
            var_1c8_1 = zmm2[0]
            zmm1_1 = var_1d8
            double temp0_6[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
            var_260.o = var_1e0_1.o
            var_250_1.o = zmm1_1
            int64_t var_240_1 = temp0_6.q
            
            while (true)
                int32_t var_244
                int64_t rax_46 = sx.q(var_244)
                int64_t* rdx_24 = var_260
                
                if (rax_46.d == ((0xffffffff << (r9_4.b & 0x1f)).q u>> 0x20).d
                        && var_250_1.q == &var_12c:4 && rdx_24 == &var_138)
                    break
                
                int64_t rcx_22 = rax_46 * 3
                int64_t rax_47 = *rdx_24
                zmm0_1 = *(rax_47 + (rcx_22 << 3) + 8)
                zmm0_1[0] = zmm0_1[0] / zmm6[0]
                *(rax_47 + (rcx_22 << 3) + 8) = zmm0_1[0]
                var_24c_1:4.d &= not.d(var_254_1)
                sub_14059bdd0(&var_258)
            
            r9_4 = var_110
            rax_35 = var_1b0_1
        
        int64_t i_9 = sx.q(i_10)
        int64_t var_210
        var_210.d = i_9.d
        
        if (i_9.d s> 0)
            sub_140638970(&var_218)
            rax_35 = var_218
            r9_4 = var_110
            var_1b0_1 = rax_35
        
        var_2a8 = 0f
        float rdi_4 = 0f
        int64_t i_5 = i_9
        int32_t var_288
        
        if (i_9.d s> 0)
            void* r14_4 = rax_35
            uint32_t zmm7[0x4]
            uint32_t var_58_1[0x4] = zmm7
            void* rbx_6 = var_230_1 + 4
            float zmm9[0x4]
            float var_78_1[0x4] = zmm9
            float zmm11[0x4]
            float var_98_1[0x4] = zmm11
            float zmm12[0x4]
            float var_a8_1[0x4] = zmm12
            float zmm13[0x4]
            float var_b8_1[0x4] = zmm13
            var_290 = rax_35
            void* var_1a0_1 = rbx_6
            var_220.q = i_5
            int64_t i_1
            
            do
                int64_t rbx_7 = sx.q(*rbx_6)
                float var_2a0 = rbx_7.d
                
                if (rbx_7.d != 0xffffffff && (rbx_7.d s>= arg4[4].d || *(rbx_7 + arg4[3]) != 0))
                    var_218 = nullptr
                    int32_t rcx_25 = 0
                    var_288 = 0
                    void* var_280_1 = &var_12c:4
                    void* r12_3 = nullptr
                    var_210:4.d = 0
                    int32_t r15_1 = 0
                    var_260 = nullptr
                    int32_t r13_3 = 0
                    int32_t var_254_2 = 0
                    zmm7 = zx.o(0)
                    int32_t var_284_1 = 1
                    int32_t r8_8 = 0
                    int32_t var_278_3 = 0xffffffff
                    var_274_1.q = 0
                    
                    if (r9_4 != 0)
                        void* r10_4 = &var_12c:4
                        
                        if (var_118 != 0)
                            r10_4 = var_118
                        
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(r9_4 - 1)
                        int32_t rdx_28 = *r10_4
                        
                        if (rdx_28 != 0)
                        label_141e3f94b:
                            int32_t rax_59 = neg.d(rdx_28) & rdx_28
                            uint64_t rflags_4
                            int32_t temp0_7
                            temp0_7, rflags_4 = _bit_scan_reverse(rax_59)
                            int32_t var_284_2 = rax_59
                            int32_t rax_60
                            
                            if (rax_59 == 0)
                                rax_60 = 0x20
                            else
                                rax_60 = 0x1f - temp0_7
                            
                            int32_t rax_61 = r8_8 - rax_60 + 0x1f
                            
                            if (rax_61 s> r9_4)
                                rax_61 = r9_4
                            
                            int32_t var_274_3 = rax_61
                        else
                            while (true)
                                int64_t rdx_29 = sx.q(rcx_25)
                                r8_8 += 0x20
                                rcx_25 += 1
                                int32_t var_270_1 = r8_8
                                var_288 = rcx_25
                                
                                if (rdx_29.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                    int32_t var_274_2 = r9_4
                                    break
                                
                                rdx_28 = *(r10_4 + (rdx_29 << 2) + 4)
                                var_278_3 = 0xffffffff
                                
                                if (rdx_28 != 0)
                                    goto label_141e3f94b
                    
                    zmm2 = var_278_3.o
                    int64_t* rbx_8 = var_260
                    int32_t r14_5 = var_210:4.d
                    float var_168_1[0x4] = var_288.o
                    var_274_1 = r9_4
                    double var_158_1[0x2] = zmm2
                    uint64_t rcx_30 = (0xffffffff << (r9_4.b & 0x1f)).q u>> 0x20
                    double temp0_8[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                    uint64_t var_190_1 = rcx_30
                    var_1e0_1.o = (&var_138).o
                    var_1d8 = var_168_1
                    var_1c8_1 = temp0_8.q
                    
                    while (true)
                        int64_t rax_62 = sx.q(var_1c8_1:4.d)
                        
                        if (rax_62.d == rcx_30.d && var_1d8[2].q == &var_12c:4
                                && var_1e0_1 == &var_138)
                            break
                        
                        int64_t rcx_31 = rax_62 * 3
                        int64_t rax_63 = *var_1e0_1
                        void* r9_5 = *(rax_63 + (rcx_31 << 3))
                        zmm6 = *(rax_63 + (rcx_31 << 3) + 8)
                        int32_t* rdx_37
                        
                        if (*(r9_5 + 0x18) == *(r9_5 + 0x44))
                        label_141e3fa7d:
                            rdx_37 = nullptr
                        else
                            void* rcx_32 = *(r9_5 + 0x50)
                            void* r8_10 = r9_5 + 0x48
                            
                            if (rcx_32 != 0)
                                r8_10 = rcx_32
                            
                            int32_t rax_66 =
                                *(r8_10 + (((sx.q(*(r9_5 + 0x58)) - 1) & sx.q(rdi_4)) << 2))
                            
                            if (rax_66 == 0xffffffff)
                            label_141e3fa7d_1:
                                rdx_37 = nullptr
                            else
                                while (true)
                                    rdx_37 = (sx.q(rax_66) << 4) + *(r9_5 + 0x10)
                                    
                                    if (*rdx_37 == rdi_4)
                                        break
                                    
                                    rax_66 = rdx_37[2]
                                    
                                    if (rax_66 == 0xffffffff)
                                        goto label_141e3fa7d_2
                                
                                if (rax_66 == 0xffffffff)
                                label_141e3fa7d_2:
                                    rdx_37 = nullptr
                        
                        void* rax_67 = &rdx_37[1]
                        
                        if (rdx_37 == 0)
                            rax_67 = nullptr
                        
                        if (rax_67 != 0)
                            int32_t rax_69 = r15_1
                            r15_1 += 1
                            float (* rdi_7)[0x4] = sx.q(*rax_67) * 0x30 + *r9_5
                            var_210.d = r15_1
                            
                            if (r15_1 s> r14_5)
                                sub_140638970(&var_218)
                                r15_1 = var_210.d
                                r12_3 = var_218
                                r14_5 = var_210:4.d
                            
                            int64_t rcx_35 = sx.q(rax_69) * 6
                            *(r12_3 + (rcx_35 << 3)) = *rdi_7
                            *(r12_3 + (rcx_35 << 3) + 0x10) = rdi_7[1]
                            int64_t rdi_8 = sx.q(r13_3)
                            *(r12_3 + (rcx_35 << 3) + 0x20) = rdi_7[2]
                            r13_3 = (rdi_8 + 1).d
                            var_258 = r13_3
                            
                            if (r13_3 s> var_254_2)
                                sub_1406105e0(&var_260)
                                r13_3 = var_258
                                rbx_8 = var_260
                            
                            *(rbx_8 + (rdi_8 << 2)) = zmm6[0]
                            zmm7[0] = zmm7[0] f+ zmm6[0]
                            rdi_4 = var_2a8
                        
                        var_1c8_1.d &= not.d(var_1d8[1])
                        sub_14059bdd0(&var_1d8)
                        rcx_30 = var_190_1
                    
                    r13_2 = arg1
                    int64_t rbx_9 = sx.q(var_2a0)
                    r14_4 = var_290
                    char rax_73 = *(r13_2 + 0x110)
                    void* const rdx_40
                    void* const r8_12
                    int32_t r9_6
                    
                    if (rax_73 != 0 || zmm7[0] f< 1f)
                        r9_6 = 0
                        rdx_40 = nullptr
                        r8_12 = nullptr
                    else
                        rdx_40 = 4
                        r9_6 = 1
                        r8_12 = 0x30
                    
                    int64_t* r10_5
                    float zmm3[0x4]
                    
                    if (r15_1 != 0 && rax_73 == 0)
                        r10_5 = var_260
                        
                        if (r9_6 != 0)
                            zmm2 = *r10_5
                            zmm3 = *r12_3
                            zmm1_1 = *(r12_3 + 0x10)
                            zmm0_1 = *(r12_3 + 0x20)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)
                            float temp0_14[0x4] = _mm_mul_ps(zmm3, zmm2)
                            zmm1_1 = _mm_mul_ps(zmm1_1, zmm2)
                            zmm0_1 = _mm_mul_ps(zmm0_1, zmm2)
                            *r14_4 = temp0_14
                        else
                            zmm0_1 = 0x3f800000
                            zmm0_1[0] = 1f f- zmm7[0]
                            double (* rcx_43)[0x2] = rbx_9 * 0x30 + *arg2
                            var_2a0 = zmm0_1[0]
                            zmm2 = *rcx_43
                            zmm1_1 = rcx_43[1]
                            zmm0_1 = rcx_43[2]
                            zmm3 = var_2a0
                            float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm2 = _mm_mul_ps(zmm2, temp0_9)
                            zmm1_1 = _mm_mul_ps(zmm1_1, temp0_9)
                            zmm0_1 = _mm_mul_ps(zmm0_1, temp0_9)
                            *r14_4 = zmm2
                        
                        *(r14_4 + 0x10) = zmm1_1
                    else
                        r10_5 = var_260
                        float (* rcx_40)[0x4] = rbx_9 * 0x30 + *arg2
                        *r14_4 = *rcx_40
                        *(r14_4 + 0x10) = rcx_40[1]
                        zmm0_1 = rcx_40[2]
                    
                    *(r14_4 + 0x20) = zmm0_1
                    
                    if (r9_6 s< r15_1)
                        zmm9 = data_143f39800
                        zmm11 = data_143f39860
                        void* rcx_45 = r8_12 + 0x20 + r12_3
                        zmm12 = data_143f39850
                        void* rdx_41 = rdx_40 + r10_5
                        zmm13 = data_143f39840
                        void* r8_13 = r10_5 + (zx.q(r9_6) << 2)
                        uint64_t j_2 = zx.q(r15_1 - r9_6)
                        uint64_t j
                        
                        do
                            if (*(r13_2 + 0x110) == 0)
                                zmm6 = *r8_13
                                zmm3 = *(rcx_45 - 0x20)
                                float temp0_112[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                                float temp0_113[0x4] = _mm_mul_ps(zmm3, temp0_112)
                                zmm2 = _mm_sub_ps(zx.o(0), temp0_113)
                                float temp0_115[0x4] = __mulps_xmmps_memps(temp0_113, *r14_4)
                                float temp0_117[0x4] = _mm_add_ps(temp0_115, 
                                    _mm_shuffle_ps(temp0_115, temp0_115, 0x4e))
                                *r14_4 = __addps_xmmps_memps(
                                    _mm_and_ps(
                                        _mm_cmpeq_ps(zx.o(0), 
                                            _mm_add_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0x39), 
                                                temp0_117), 
                                            2), 
                                        zmm2 ^ temp0_113) ^ zmm2, 
                                    *r14_4)
                                *(r14_4 + 0x10) = __addps_xmmps_memps(
                                    _mm_mul_ps(*(rcx_45 - 0x10), temp0_112), *(r14_4 + 0x10))
                                *(r14_4 + 0x20) = __addps_xmmps_memps(
                                    _mm_mul_ps(*rcx_45, temp0_112), *(r14_4 + 0x20))
                            else
                                zmm3 = *rdx_41
                                bool cond:8_1 = zmm3[0] >= 0.999989986f
                                zmm7 = data_14399f720
                                float temp0_19[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(data_143dbb1f8, data_143dbb200[0].q), 
                                    _mm_unpacklo_ps(data_143dbb1fc, zx.o(0)[0].q)[0])
                                float zmm4[0x4]
                                float zmm5[0x4]
                                
                                if (not(cond:8_1))
                                    var_2a0 = zmm3[0]
                                    
                                    if (_mm_and_ps(zmm3, 0x7fffffff)[0] > 9.99999975e-06f)
                                        zmm0_1 = *(rcx_45 - 0x10)
                                        zmm3[0] = zmm3[0] - 1f
                                        zmm1_1 = *rcx_45
                                        
                                        if (not(_mm_and_ps(zmm3, 0x7fffffff)[0] <= 9.99999975e-06f))
                                            zmm4 = var_2a0
                                            float temp0_22[0x4] = _mm_sub_ps(zmm0_1, temp0_19)
                                            float temp0_23[0x4] = _mm_sub_ps(zmm1_1, temp0_19)
                                            float temp0_24[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                                            zmm2 = _mm_sub_ps(zx.o(0), zmm7)
                                            float temp0_26[0x4] = _mm_mul_ps(temp0_22, temp0_24)
                                            float temp0_27[0x4] = _mm_mul_ps(temp0_23, temp0_24)
                                            float temp0_28[0x4] = _mm_add_ps(temp0_26, temp0_19)
                                            float temp0_29[0x4] = _mm_add_ps(temp0_27, temp0_19)
                                            *(rcx_45 - 0x10) = temp0_28
                                            *rcx_45 = temp0_29
                                            float temp0_30[0x4] =
                                                __mulps_xmmps_memps(zmm7, *(rcx_45 - 0x20))
                                            zmm5 = data_143f397e0
                                            float temp0_32[0x4] = _mm_add_ps(temp0_30, 
                                                _mm_shuffle_ps(temp0_30, temp0_30, 0x4e))
                                            float temp0_35[0x4] = _mm_cmpeq_ps(zx.o(0), 
                                                _mm_add_ps(
                                                    _mm_shuffle_ps(temp0_32, temp0_32, 0x39), 
                                                    temp0_32), 
                                                2)
                                            zmm0_1 = data_143f397b0
                                            zmm6 = _mm_and_ps(temp0_35, zmm7 ^ zmm2)
                                            float temp0_37[0x4] = _mm_sub_ps(zmm0_1, temp0_24)
                                            float temp0_38[0x4] =
                                                __mulps_xmmps_memps(temp0_24, *(rcx_45 - 0x20))
                                            float temp0_40[0x4] = _mm_add_ps(
                                                _mm_mul_ps(zmm6 ^ zmm2, temp0_37), temp0_38)
                                            float temp0_41[0x4] = _mm_mul_ps(temp0_40, temp0_40)
                                            float temp0_43[0x4] = _mm_add_ps(temp0_41, 
                                                _mm_shuffle_ps(temp0_41, temp0_41, 0x4e))
                                            float temp0_45[0x4] = _mm_add_ps(
                                                _mm_shuffle_ps(temp0_43, temp0_43, 0x39), temp0_43)
                                            float temp0_46[0x4] = _mm_rsqrt_ps(temp0_45)
                                            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm5)
                                            zmm2 = _mm_add_ps(
                                                _mm_mul_ps(
                                                    _mm_sub_ps(zmm5, 
                                                        _mm_mul_ps(_mm_mul_ps(temp0_46, temp0_46), 
                                                            temp0_47)), 
                                                    temp0_46), 
                                                temp0_46)
                                            float temp0_55[0x4] = _mm_sub_ps(zmm5, 
                                                _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_47))
                                            float temp0_56[0x4] = _mm_cmpeq_ps(zmm9, temp0_45, 2)
                                            *(rcx_45 - 0x20) = _mm_and_ps(
                                                _mm_mul_ps(
                                                    _mm_add_ps(_mm_mul_ps(temp0_55, zmm2), zmm2), 
                                                    temp0_40) ^ data_143f397d0, 
                                                temp0_56) ^ data_143f397d0
                                    else
                                        *(rcx_45 - 0x20) = zmm7
                                        *(rcx_45 - 0x10) = temp0_19
                                        *rcx_45 = temp0_19
                                
                                zmm2 = *(rcx_45 - 0x20)
                                zmm3 = *r14_4
                                zmm4 = *(r14_4 + 0x10)
                                float temp0_61[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                float temp0_62[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                                float temp0_64[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_61)
                                float temp0_66[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm3)
                                float temp0_67[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                                float temp0_69[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_64, zmm11), temp0_66)
                                float temp0_71[0x4] =
                                    _mm_mul_ps(temp0_62, _mm_shuffle_ps(zmm2, zmm2, 0x55))
                                float temp0_73[0x4] =
                                    _mm_mul_ps(temp0_67, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
                                zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                                float temp0_75[0x4] = _mm_mul_ps(temp0_71, zmm12)
                                float temp0_76[0x4] = _mm_mul_ps(temp0_73, zmm13)
                                float temp0_78[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_69, temp0_75), temp0_76)
                                float temp0_79[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                                *r14_4 = temp0_78
                                zmm1_1 = *(rcx_45 - 0x10)
                                zmm4[0] = zmm4[0] + zmm1_1[0]
                                float temp0_80[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                zmm2[0].d = zmm2[0].d f+ temp0_80[0]
                                float temp0_81[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                                temp0_79[0] = temp0_79[0] + temp0_81[0]
                                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                                float temp0_83[0x4] = _mm_unpacklo_ps(zmm4, temp0_79[0].q)
                                zmm4 = *(r14_4 + 0x20)
                                float temp0_84[0x4] = _mm_unpacklo_ps(temp0_83, zmm2[0])
                                zmm2 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                                *(r14_4 + 0x10) = temp0_84
                                zmm1_1 = *rcx_45
                                zmm4[0] = zmm4[0] + zmm1_1[0]
                                float temp0_86[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                                float temp0_87[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                zmm2[0].d = zmm2[0].d f+ temp0_87[0]
                                float temp0_88[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                                temp0_86[0] = temp0_86[0] + temp0_88[0]
                                zmm2 = _mm_unpacklo_ps(zmm2, 0)
                                float temp0_91[0x4] =
                                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, temp0_86[0].q), zmm2[0])
                                float temp0_92[0x4] = _mm_mul_ps(temp0_78, temp0_78)
                                *(r14_4 + 0x20) = temp0_91
                                zmm5 = data_143f397e0
                                float temp0_94[0x4] =
                                    _mm_add_ps(temp0_92, _mm_shuffle_ps(temp0_92, temp0_92, 0x4e))
                                float temp0_96[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0x39), temp0_94)
                                float temp0_97[0x4] = _mm_rsqrt_ps(temp0_96)
                                float temp0_98[0x4] = _mm_mul_ps(temp0_96, zmm5)
                                zmm2 = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm5, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_97, temp0_97), temp0_98)), 
                                        temp0_97), 
                                    temp0_97)
                                float temp0_106[0x4] =
                                    _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), temp0_98))
                                float temp0_107[0x4] = _mm_cmpeq_ps(zmm9, temp0_96, 2)
                                *r14_4 = _mm_and_ps(
                                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_106, zmm2), zmm2), 
                                        temp0_78) ^ data_143f397d0, 
                                    temp0_107) ^ data_143f397d0
                            
                            r8_13 += 4
                            rcx_45 += 0x30
                            rdx_41 += 4
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    
                    if (r10_5 != 0)
                        sub_140a74f90(r10_5)
                    
                    if (r12_3 != 0)
                        sub_140a74f90(r12_3)
                    
                    i_5 = var_220.q
                    r9_4 = var_110
                
                rdi_4 += 1
                rbx_6 = var_1a0_1 + 8
                var_2a8 = rdi_4
                r14_4 += 0x30
                var_1a0_1 = rbx_6
                i_1 = i_5
                i_5 -= 1
                var_290 = r14_4
                var_220.q = i_5
            while (i_1 != 1)
            r14_2 = arg3
        
        int32_t rbx_11 = var_298
        sub_141e3ae80(&var_208, rbx_11)
        var_178_1.d = rbx_11
        sub_1406105e0(&var_180)
        int32_t rdx_44 = var_110
        void* var_280_2 = &var_12c:4
        int32_t rdi_9 = 0
        var_288 = 0
        int32_t var_284_3 = 1
        int32_t var_278_5 = 0xffffffff
        var_274_1.q = 0
        
        if (rdx_44 != 0)
            sub_14059bdd0(&var_288)
            rdx_44 = var_110
        
        double (* r8_14)[0x2] = var_180
        zmm2 = var_278_5.o
        char rcx_52 = rdx_44.b & 0x1f
        int32_t* r12_4 = nullptr
        double var_158_2[0x2] = zmm2
        zmm1_1 = var_288.o
        var_288 = rdx_44 s>> 5
        int32_t var_274_4 = rdx_44
        void* var_280_3 = &var_12c:4
        int32_t var_284_4 = 1 << rcx_52
        void* rbx_13 = var_208.q
        int64_t r15_4 = 0
        double temp0_127[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        var_1e0_1.o = (&var_138).o
        int32_t var_270_2 = rdx_44 & 0xffffffe0
        int128_t zmm0_2 = var_288.o
        int64_t* var_170_3 = &var_138
        var_1c8_1 = temp0_127.q
        var_290 = rbx_13
        double (* var_2a0_1)[0x2] = r8_14
        var_1d8 = zmm1_1
        double var_158_3[0x2] = (0xffffffff << rcx_52).o
        var_288.o = var_170_3.o
        int64_t r10_6 = var_288.q
        int32_t var_278_6
        var_278_6.o = zmm0_2
        int64_t r9_7 = var_278_6.q
        int32_t var_26c
        int32_t rcx_53 = var_26c
        int64_t var_1a0_2 = r9_7
        int64_t var_1a8_1 = r10_6
        var_298 = rcx_53
        
        while (true)
            int64_t rax_79 = sx.q(var_1c8_1:4.d)
            
            if (rax_79.d == rcx_53 && var_1d8[2].q == r9_7 && var_1e0_1 == r10_6)
                break
            
            int64_t rcx_54 = rax_79 * 3
            void* rbx_14 = rbx_13 + r15_4
            int64_t rax_80 = *var_1e0_1
            void* rdx_47 = *(rax_80 + (rcx_54 << 3))
            *(r12_4 + r8_14) = *(rax_80 + (rcx_54 << 3) + 8)
            
            if (r14_2 != rbx_14)
                int64_t* rdx_48 = r14_2[2]
                int32_t rcx_55 = 0
                *(rbx_14 + 0x10) = rdx_48
                
                if (rdx_48 != 0)
                    int64_t i_7 = sx.q(rdx_48[1].d)
                    
                    if (i_7 s> 0)
                        void* rdx_49 = *rdx_48
                        int64_t i_2
                        
                        do
                            int32_t rax_82 = rcx_55
                            rdx_49 += 2
                            rcx_55 += 1
                            
                            if (*(rdx_49 - 2) == 0xffff)
                                rcx_55 = rax_82
                            
                            i_2 = i_7
                            i_7 -= 1
                        while (i_2 != 1)
                
                *(rbx_14 + 0x18) = rcx_55.w
                int32_t rax_83 = *(rbx_14 + 0xc)
                *(rbx_14 + 8) = 0
                
                if (rax_83 s< 0 && rax_83 != 0)
                    sub_14083ad10(rbx_14, 0)
                
                sub_141e3b000(rbx_14, zx.d(*(rbx_14 + 0x18)))
                *(rbx_14 + 0x1a) = 1
            
            rbx_13 = var_290
            sub_141e42520(r13_2 + 0x80, rdx_47, (sx.q(rdi_9) << 5) + rbx_13)
            rdi_9 += 1
            var_1c8_1.d &= not.d(var_1d8[1])
            r12_4 = &r12_4[1]
            r15_4 += 0x20
            sub_14059bdd0(&var_1d8)
            r8_14 = var_2a0_1
            rcx_53 = var_298
            r9_7 = var_1a0_2
            r10_6 = var_1a8_1
        
        int32_t rdi_10 = var_200.d
        double (* r15_5)[0x2]
        
        if (rdi_10 s<= 0)
            r15_5 = var_2a0_1
        else
            *r8_14
            sub_141deeaf0(r14_2, rbx_13)
            r15_5 = var_2a0_1
            
            if (rdi_10 s> 1)
                uint64_t i_6 = zx.q(rdi_10 - 1)
                void* r10_7 = rbx_13 + 0x20
                int32_t* r11_1 = r15_5 + 4
                uint64_t i_3
                
                do
                    float zmm1_2 = *r11_1
                    
                    if (not(zmm1_2 <= 9.99999975e-06f))
                        int32_t j_1 = 0
                        
                        if (r14_2[1].d s> 0)
                            float* rdx_52 = *r10_7
                            int64_t rcx_61 = 0
                            
                            do
                                int64_t r9_8 = *r14_2
                                uint64_t rax_86
                                
                                if (*(rcx_61 + r9_8 + 4) != 0 || *(rcx_61 + rdx_52 + 4) != 0)
                                    rax_86.b = 1
                                else
                                    rax_86.b = 0
                                
                                *(rcx_61 + r9_8 + 4) = rax_86.b
                                rax_86 = *r14_2
                                j_1 += 1
                                rdx_52 = *r10_7
                                *(rcx_61 + rax_86) =
                                    zmm1_2 f* *(rdx_52 + rcx_61) f+ *(rcx_61 + rax_86)
                                rcx_61 += 8
                            while (j_1 s< r14_2[1].d)
                    
                    r11_1 = &r11_1[1]
                    r10_7 += 0x20
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
        
        int64_t i_8 = i_9
        
        if (i_8 s> 0)
            int32_t* rbx_16 = var_230_1 + 4
            void* rdi_11 = var_1b0_1 + 0x20
            int64_t i_4
            
            do
                int64_t rax_87 = sx.q(*rbx_16)
                
                if (rax_87.d != 0xffffffff && (rax_87.d s>= arg4[4].d || *(rax_87 + arg4[3]) != 0))
                    sub_141def0e0(rax_3, r13_2 + 0x118, sx.q(rsi_3) * 0x30 + var_1b0_1, rbx_16[-1], 
                        rbx_16, rax_2, *(r13_2 + 0x110))
                    uint32_t (* rcx_66)[0x4] = sx.q(*rbx_16) * 0x30 + *arg2
                    *rcx_66 = *(rdi_11 - 0x20)
                    rcx_66[1] = *(rdi_11 - 0x10)
                    rcx_66[2] = *rdi_11
                    float zmm5_1[0x4] = data_143f397e0
                    float (* rdx_56)[0x4] = sx.q(*rbx_16) * 0x30 + *arg2
                    zmm6 = *rdx_56
                    float temp0_128[0x4] = _mm_mul_ps(zmm6, zmm6)
                    float temp0_130[0x4] =
                        _mm_add_ps(temp0_128, _mm_shuffle_ps(temp0_128, temp0_128, 0x4e))
                    float temp0_132[0x4] =
                        _mm_add_ps(_mm_shuffle_ps(temp0_130, temp0_130, 0x39), temp0_130)
                    float temp0_133[0x4] = _mm_rsqrt_ps(temp0_132)
                    float temp0_134[0x4] = _mm_mul_ps(temp0_132, zmm5_1)
                    float temp0_139[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm5_1, 
                                _mm_mul_ps(_mm_mul_ps(temp0_133, temp0_133), temp0_134)), 
                            temp0_133), 
                        temp0_133)
                    float temp0_142[0x4] =
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_139, temp0_139), temp0_134))
                    uint32_t zmm0_4[0x4] = _mm_cmpeq_ps(data_143f39800, temp0_132, 2)
                    *rdx_56 = _mm_and_ps(
                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_142, temp0_139), temp0_139), zmm6)
                            ^ data_143f397d0, 
                        zmm0_4) ^ data_143f397d0
                
                rsi_3 += 1
                rbx_16 = &rbx_16[2]
                rdi_11 += 0x30
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
            rbx_13 = var_290
            r15_5 = var_2a0_1
        
        if (r15_5 != 0)
            sub_140a74f90(r15_5)
        
        if (rbx_13 != 0)
            sub_140a74f90(rbx_13)
        
        if (var_1b0_1 != 0)
            sub_140a74f90(var_1b0_1)
        
        sub_1405ae080(&var_138)
        
        if (var_230_1 != 0)
            sub_140a74f90(var_230_1)
        
        result.b = 1

__security_check_cookie(rax_1 ^ &var_2e8)
return result
