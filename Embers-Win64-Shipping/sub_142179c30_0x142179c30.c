// 函数: sub_142179c30
// 地址: 0x142179c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x5c].d += 1
int32_t i = 0
int64_t* rdi = arg4
int64_t* r12 = arg3
void* r14 = arg2
int64_t* r15 = arg1

if (*(arg2 + 0x88) s> 0)
    int64_t r9 = 0
    
    do
        r9 += 8
        i += 1
        *(*(r9 + *(arg2 + 0x80) - 8) + 0x104) = r15[0x5c].d
    while (i s< *(arg2 + 0x88))

int32_t var_184 = 0
int32_t r13 = 0
int64_t var_100
sub_140d3a3a0(&var_100, arg2)
void* rbx_2 = zx.q(r15[0x66].d - *(r15 + 0x35c) + rdi[1].d)

if (rbx_2.d s> 0)
    char var_188
    char* var_178 = &var_188
    var_188 = 0
    void*** (* var_180)() = j_sub_140597fc0
    int32_t rdi_1 = 0x20
    int32_t* rax_4 =
        sub_14081d830(0x20, sub_140a756e0(&var_180, &data_143958018) + 0x10, rbx_2.d, 0)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        *rax_4 = 0
        __builtin_memset(&rax_4[2], 0, 0x18)
    
    int32_t** rsi_1 = arg5
    var_188 = 0
    *rsi_1 = rax_4
    var_178 = &var_188
    var_180 = j_sub_140597fc0
    int64_t rax_6
    float zmm6_1[0x4]
    rax_6, zmm6_1 = sub_14081d830(8, sub_140a756e0(&var_180, &data_143958018) + 0x10, rbx_2.d, 0)
    *arg6 = rax_6
    int64_t* rcx_5 = *(r15[0x28] + 0x58)
    
    if (rcx_5 == 0)
        var_188 = 0
    else
        var_188 = (*(*rcx_5 + 0x638))(rcx_5)
    
    int64_t r11_1 = 0
    float var_58_1[0x4] = zmm6_1
    int128_t zmm7
    int128_t var_68_1 = zmm7
    int64_t* rcx_6 = *arg4
    int64_t* var_120_1 = rcx_6
    int64_t var_118_1 = 0
    uint64_t rdx_3 = sx.q(arg4[1].d) << 3 u>> 3
    
    if (rcx_6 u> &rcx_6[arg4[1]])
        rdx_3 = 0
    
    var_180 = rdx_3
    uint128_t zmm1_1
    
    if (rdx_3 != 0)
        void* var_128_1 = nullptr
        void* var_130_1 = nullptr
        
        while (true)
            int64_t* r13_2 = *rcx_6
            int64_t* rsi_2 = *r13_2
            int64_t r9_1 = r13_2[1]
            int64_t var_1a8
            int64_t* var_1a0
            float var_198
            char var_190
            int64_t* r14_1
            
            if (*(r14 + 0x1378) == *(r14 + 0x13a4))
            label_142179ec7:
                r14_1 = nullptr
            label_142179eda:
                r11_1 = 0
                
                if ((*(*r15 + 0x3c8))(r15, rsi_2, arg2) != 0)
                    rbx_2 = nullptr
                    
                    if (r12[1].d s> 0)
                        int64_t rdi_2 = 0
                        
                        do
                            int64_t rdx_7 = *r12
                            
                            if ((*(*rsi_2 + 0x460))(rsi_2, *(rdi_2 + rdx_7 + 8), 
                                    *(rdi_2 + rdx_7 + 0x10), sx.q(rbx_2.d) * 0x30 + 0x18 + rdx_7, 
                                    var_1a8, var_1a0, var_198, var_190) != 0)
                                goto label_142179f6d
                            
                            rbx_2 = zx.q(rbx_2.d + 1)
                            rdi_2 += 0x30
                        while (rbx_2.d s< r12[1].d)
                        
                        r11_1 = 0
                
                r13 = var_184
            else
                void* r8_2 = r14 + 0x13a8
                void* rdx_4 = *(r8_2 + 8)
                
                if (rdx_4 != 0)
                    r8_2 = rdx_4
                
                int32_t rax_19 = *(r8_2 +
                    (((sx.q((r9_1 u>> 0x20).d) ^ sx.q(r9_1.d)) & (sx.q(*(r14 + 0x13b8)) - 1)) << 2))
                
                if (rax_19 == 0xffffffff)
                    goto label_142179ec7
                
                int64_t r8_3 = *(r14 + 0x1370)
                int64_t rdx_5
                
                while (true)
                    rdx_5 = sx.q(rax_19) * 3
                    int64_t rcx_11 = *(r8_3 + (rdx_5 << 3))
                    
                    if (rcx_11.d == r9_1.d && (rcx_11 u>> 0x20).d == (r9_1 u>> 0x20).d)
                        break
                    
                    rax_19 = *(r8_3 + (rdx_5 << 3) + 0x10)
                    
                    if (rax_19 == 0xffffffff)
                        goto label_142179ec7
                
                if (rax_19 == 0xffffffff)
                    goto label_142179ec7
                
                void* r14_2 = r8_3 + (rdx_5 << 3)
                
                if (r14_2 == 0)
                    goto label_142179ec7
                
                r14_1 = *(r14_2 + 8)
                
                if (r14_1 == 0)
                    goto label_142179eda
                
            label_142179f6d:
                void* r15_1 = arg2
                
                if ((rsi_2[0xb].b & 4) != 0)
                    int64_t rax_25
                    int64_t rdx_9
                    rax_25, rdx_9 = (*(*rsi_2 + 0x490))(rsi_2)
                    r11_1 = 0
                    rbx_2.b = 0
                    int32_t rdi_3 = 0
                    
                    if (r12[1].d s<= 0)
                    label_14217a027:
                        r15 = arg1
                        
                        if (r14_1 != 0)
                            zmm1_1.q = r15[0x43] f- r14_1[0x10]
                            
                            if (not(zmm1_1.q f< _mm_cvtps_pd(r15[0xe].d[0])[0]))
                                rdx_9.b = 3
                                (*(*r14_1 + 0x278))(r14_1, rdx_9)
                                r11_1 = 0
                        
                        r13 = var_184
                    else
                        int64_t* rax_26 = arg3
                        void** r12_1 = nullptr
                        
                        while (true)
                            rbx_2 = zx.q(rbx_2.b)
                            r15_1 = *(r12_1 + *rax_26)
                            int64_t* rcx_17 = *(r15_1 + 0x90)
                            
                            if (rcx_17 == 0)
                                rbx_2 = 1
                            
                            void* rax_27 = *(r15_1 + 0x30)
                            
                            if (rax_25 != rax_27 && (rax_27 == 0 || rax_25 != *(rax_27 + 0x250)))
                                char rax_29
                                
                                if (rcx_17 != 0)
                                    rax_29, rdx_9 = (*(*rcx_17 + 0x470))(rcx_17, rsi_2, rax_25, 
                                        *(r15_1 + 0x98), var_1a8, var_1a0, var_198, var_190)
                                
                                if (rcx_17 == 0 || rax_29 == 0)
                                    rax_26 = arg3
                                    rdi_3 += 1
                                    r12_1 = &r12_1[6]
                                    
                                    if (rdi_3 s>= rax_26[1].d)
                                        break
                                    
                                    continue
                            
                            r12 = arg3
                            goto label_14217a161
                        
                        r11_1 = 0
                        
                        if (rbx_2.b == 0)
                            goto label_14217a027
                        
                        r15 = arg1
                        r13 = var_184
                else if (data_143a2ec4c == 0)
                label_14217a161:
                    r11_1 = 0
                    int32_t rax_40 = arg1[0x5c].d
                    
                    if (*(rsi_2 + 0x104) == rax_40)
                        r15 = arg1
                        r13 = var_184
                    else
                        *(rsi_2 + 0x104) = rax_40
                        void* rax_41 = *(r15_1 + 0x58)
                        int128_t var_150
                        var_150.q = r13_2
                        var_150:8.q = r14_1
                        int128_t var_140
                        var_140.q = 0
                        double zmm0_1[0x2]
                        
                        if (r14_1 == 0)
                            zmm0_1 = _mm_cvtps_pd((*(rax_41 + 0x6c))[0])
                        else
                            zmm0_1 = zx.o(*(rax_41 + 0x218))
                            zmm0_1[0] = zmm0_1[0] f- r14_1[0x11]
                        
                        rbx_2 = nullptr
                        int32_t i_1 = 0
                        int64_t var_158
                        var_158.d = 0
                        float temp0_4[0x4] = _mm_cvtpd_ps(zmm0_1)
                        
                        if (r12[1].d s> 0)
                            char rsi_3 = var_188
                            int64_t rdi_5 = 0
                            int32_t rax_45
                            
                            do
                                int64_t r9_9 = *r12
                                int64_t* rcx_24 = *r13_2
                                var_190 = rsi_3
                                var_198 = temp0_4[0]
                                var_1a0 = r14_1
                                int64_t rdx_15 = sx.q(i_1) * 0x30
                                var_1a8 = *(rdi_5 + r9_9 + 0x10)
                                (*(*rcx_24 + 0x3c0))(rcx_24, rdx_15 + 0x18 + r9_9, 
                                    r9_9 + 0x24 + rdx_15, *(rdi_5 + r9_9 + 8), var_1a8, var_1a0, 
                                    var_198, var_190)
                                zmm0_1[0].d = zmm0_1[0].d f* 65536f
                                zmm0_1[0].d = zmm0_1[0].d f+ zmm0_1[0].d
                                zmm0_1[0].d = zmm0_1[0].d f+ 0.5f
                                rax_45 = int.d(zmm0_1[0].d) s>> 1
                                
                                if (rbx_2.d s>= rax_45)
                                    rax_45 = rbx_2.d
                                
                                i_1 += 1
                                rdi_5 += 0x30
                                rbx_2 = zx.q(rax_45)
                            while (i_1 s< r12[1].d)
                            
                            r11_1 = 0
                            var_158.d = rax_45
                        
                        int128_t* rdx_18 = var_130_1
                        int64_t r13_3 = sx.q(var_184)
                        r15 = arg1
                        int32_t* rax_46 = *arg5
                        r13 = r13_3.d + 1
                        var_184 = r13
                        *(rdx_18 + rax_46) = var_158.o
                        *(rdx_18 + rax_46 + 0x10) = var_150
                        void** r8_13 = var_128_1
                        var_130_1 = &rdx_18[2]
                        *(r8_13 + *arg6) = &(*arg5)[r13_3 * 8]
                        var_128_1 = &r8_13[1]
                        
                        if (*(r15 + 0x2e4) != 0)
                            int64_t var_f0
                            sub_140d3a3a0(&var_f0, rsi_2)
                            int64_t rdi_6 = sx.q(r15[0x5e].d)
                            int32_t rax_49 = (rdi_6 + 1).d
                            r15[0x5e].d = rax_49
                            
                            if (rax_49 s> *(r15 + 0x2f4))
                                sub_1405a4d70(&r15[0x5d])
                            
                            r11_1 = 0
                            *(r15[0x5d] + (rdi_6 << 3)) = var_f0
                else
                    void var_110
                    
                    if (*sub_141fb3050(&r13_2[6], &var_110, var_100) == 0xffffffff)
                        char rax_33 = *(rsi_2 + 0xf1)
                        float temp0_2[0x4] = _mm_cvtpd_ps(zx.o(arg1[0x43]))
                        
                        if (rax_33 u> 1 && r14_1 != 0 && (r14_1[6].b & 0x84) == 0)
                            if (rax_33 == 3)
                                rbx_2 = nullptr
                                
                                if (r12[1].d s> 0)
                                    int64_t rdi_4 = 0
                                    
                                    do
                                        int64_t r9_7 = *r12
                                        var_190 = var_188
                                        int64_t rcx_21 = sx.q(rbx_2.d) * 0x30
                                        var_198 = temp0_2[0]
                                        var_1a0 = r14_1
                                        var_1a8 = *(rdi_4 + r9_7 + 0x10)
                                        
                                        if ((*(*rsi_2 + 0x3d0))(rsi_2, rcx_21 + 0x18 + r9_7, 
                                                r9_7 + 0x24 + rcx_21, *(rdi_4 + r9_7 + 8), var_1a8, 
                                                var_1a0, var_198, var_190) == 0)
                                            goto label_14217a161
                                        
                                        rbx_2 = zx.q(rbx_2.d + 1)
                                        rdi_4 += 0x30
                                    while (rbx_2.d s< r12[1].d)
                            
                            (*(*r14_1 + 0x2d8))(r14_1)
                        
                        goto label_14217a161
                    
                    r11_1 = 0
                    r15 = arg1
                    r13 = var_184
            rcx_6 = &var_120_1[1]
            r12 = arg3
            int64_t rdx_23 = var_118_1 + 1
            r14 = arg2
            var_120_1 = rcx_6
            var_118_1 = rdx_23
            
            if (rdx_23 == var_180)
                break
        
        rsi_1 = arg5
        rdi_1 = 0x20
    
    var_180:4.d = 1
    int32_t r10_5 = *(r14 + 0x13f0)
    void* r9_11 = r14 + 0x13d8
    var_178 = r9_11
    int32_t rcx_32 = 0
    var_180.d = 0
    int32_t r8_15 = 0
    int32_t var_170_1 = 0xffffffff
    int64_t var_16c_1 = 0
    
    if (r10_5 != 0)
        void* rax_51 = *(r9_11 + 0x10)
        
        if (rax_51 != 0)
            r9_11 = rax_51
        
        int32_t temp0_5
        int32_t temp1_1
        temp0_5:temp1_1 = sx.q(r10_5 - 1)
        int32_t rdx_26 = *r9_11
        
        if (rdx_26 != 0)
        label_14217a3cb:
            int32_t rax_58 = neg.d(rdx_26) & rdx_26
            uint64_t rflags_1
            int32_t temp0_6
            temp0_6, rflags_1 = _bit_scan_reverse(rax_58)
            var_180:4.d = rax_58
            
            if (rax_58 != 0)
                rdi_1 = 0x1f - temp0_6
            
            var_16c_1.d = r8_15 - rdi_1 + 0x1f
            
            if (r8_15 - rdi_1 + 0x1f s> r10_5)
                var_16c_1.d = r10_5
        else
            while (true)
                int64_t rdx_27 = sx.q(rcx_32)
                r8_15 += 0x20
                rcx_32 += 1
                var_16c_1:4.d = r8_15
                var_180.d = rcx_32
                
                if (rdx_27.d s>= (temp1_1 + (temp0_5 & 0x1f)) s>> 5)
                    break
                
                rdx_26 = *(r9_11 + (rdx_27 << 2) + 4)
                var_170_1 = 0xffffffff
                
                if (rdx_26 != 0)
                    goto label_14217a3cb
            
            var_16c_1.d = r10_5
        
        r11_1 = 0
    
    uint128_t zmm2 = var_170_1.o
    uint128_t var_140_1 = zmm2
    zmm1_1 = var_180.o
    var_180.o = (r14 + 0x13c8).o
    int64_t var_160_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
    var_170_1.o = zmm1_1
    
    if ((zmm2.q u>> 0x20).d s< r10_5)
        int32_t i_3
        int32_t i_2 = i_3
        double zmm9[0x2]
        double var_88_1[0x2] = zmm9
        float zmm10[0x4]
        float var_98_1[0x4] = zmm10
        uint128_t zmm11
        uint128_t var_a8_1 = zmm11
        int64_t rbx_4 = sx.q(r13)
        void** rdi_7 = rbx_4 << 3
        int64_t rbx_5 = rbx_4 << 5
        
        do
            void* const rcx_39
            
            if (r15[0x66].d == *(r15 + 0x35c))
            label_14217a540:
                rcx_39 = nullptr
            else
                void* r9_12 = &r15[0x6c]
                void* r8_17 = *(r9_12 + 8)
                int64_t r10_6 = sx.q(*(*var_180 + sx.q(i_2) * 0xc))
                
                if (r8_17 != 0)
                    r9_12 = r8_17
                
                int32_t rax_65 = *(r9_12 + (((sx.q(r15[0x6e].d) - 1) & r10_6) << 2))
                
                if (rax_65 == 0xffffffff)
                label_14217a540_1:
                    rcx_39 = nullptr
                else
                    int64_t r8_18 = r15[0x65]
                    
                    while (true)
                        int64_t rdx_29 = sx.q(rax_65) * 3
                        rcx_39 = r8_18 + (rdx_29 << 3)
                        
                        if (*(r8_18 + (rdx_29 << 3)) == r10_6.d)
                            break
                        
                        rax_65 = *(rcx_39 + 0x10)
                        
                        if (rax_65 == 0xffffffff)
                            goto label_14217a540_2
                    
                    if (rax_65 == 0xffffffff)
                    label_14217a540_2:
                        rcx_39 = nullptr
            
            int64_t r9_13 = sx.q(r12[1].d)
            void* r10_7 = *(rcx_39 + 8)
            int32_t rdx_30 = 0
            var_140_1.q = r10_7
            void* var_158_1
            var_158_1.d = 0
            double var_150_2[0x2] = zx.o(0)
            float zmm5_1
            int128_t zmm8
            
            if (r9_13 s>= 4)
                zmm9 = *(r10_7 + 0x10)
                zmm10 = *(r10_7 + 0x14)
                zmm11 = *(r10_7 + 0x18)
                zmm8 = *(*(r14 + 0x58) + 0x6c)
                void* rax_68 = *r12 + 0x20
                int64_t j_2 = ((r9_13 - 4) u>> 2) + 1
                r11_1 = j_2 << 2
                int64_t j
                
                do
                    zmm10[0] = zmm10[0] f- *(rax_68 - 4)
                    zmm9[0].d = zmm9[0].d f- *(rax_68 - 8)
                    zmm5_1 = zmm8.d
                    zmm2.d = zmm11.d f- *rax_68
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm10[0] = zmm10[0] f* *(rax_68 + 8)
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm9[0].d = zmm9[0].d f* *(rax_68 + 4)
                    zmm1_1.d = zmm2.d f* zmm2.d
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm2.d = zmm2.d f* *(rax_68 + 0xc)
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm10[0] = zmm10[0] f+ zmm1_1.d
                    zmm10[0] = zmm10[0] f+ zmm2.d
                    bool cond:5_1
                    
                    if (zmm10[0] >= 0f)
                        cond:5_1 = zmm10[0] <= 9998244f
                    label_14217a612:
                        
                        if (not(cond:5_1))
                            zmm5_1 = zmm5_1 * 0.400000006f
                    else
                        if (zmm10[0] <= 4000000f)
                            cond:5_1 = zmm10[0] <= 250000f
                            goto label_14217a612
                        
                        zmm5_1 = zmm5_1 * 0.200000003f
                    zmm9[0].d = zmm9[0].d f- *(rax_68 + 0x28)
                    zmm10[0] = zmm10[0] f- *(rax_68 + 0x2c)
                    zmm2.d = zmm11.d f- *(rax_68 + 0x30)
                    int32_t rcx_40 = int.d(zmm5_1 * 65536f)
                    zmm5_1 = zmm8.d
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm9[0].d = zmm9[0].d f* *(rax_68 + 0x34)
                    
                    if (rdx_30 s>= rcx_40)
                        rcx_40 = rdx_30
                    
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm10[0] = zmm10[0] f* *(rax_68 + 0x38)
                    zmm1_1.d = zmm2.d f* zmm2.d
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm2.d = zmm2.d f* *(rax_68 + 0x3c)
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm10[0] = zmm10[0] f+ zmm1_1.d
                    zmm10[0] = zmm10[0] f+ zmm2.d
                    bool cond:8_1
                    
                    if (zmm10[0] >= 0f)
                        cond:8_1 = zmm10[0] <= 9998244f
                    label_14217a69b:
                        
                        if (not(cond:8_1))
                            zmm5_1 = zmm5_1 * 0.400000006f
                    else
                        if (zmm10[0] <= 4000000f)
                            cond:8_1 = zmm10[0] <= 250000f
                            goto label_14217a69b
                        
                        zmm5_1 = zmm5_1 * 0.200000003f
                    zmm9[0].d = zmm9[0].d f- *(rax_68 + 0x58)
                    zmm10[0] = zmm10[0] f- *(rax_68 + 0x5c)
                    zmm2.d = zmm11.d f- *(rax_68 + 0x60)
                    int32_t rdx_31 = int.d(zmm5_1 * 65536f)
                    zmm5_1 = zmm8.d
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm9[0].d = zmm9[0].d f* *(rax_68 + 0x64)
                    
                    if (rcx_40 s>= rdx_31)
                        rdx_31 = rcx_40
                    
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm10[0] = zmm10[0] f* *(rax_68 + 0x68)
                    zmm1_1.d = zmm2.d f* zmm2.d
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm2.d = zmm2.d f* *(rax_68 + 0x6c)
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm10[0] = zmm10[0] f+ zmm1_1.d
                    zmm10[0] = zmm10[0] f+ zmm2.d
                    bool cond:11_1
                    
                    if (zmm10[0] >= 0f)
                        cond:11_1 = zmm10[0] <= 9998244f
                    label_14217a724:
                        
                        if (not(cond:11_1))
                            zmm5_1 = zmm5_1 * 0.400000006f
                    else
                        if (zmm10[0] <= 4000000f)
                            cond:11_1 = zmm10[0] <= 250000f
                            goto label_14217a724
                        
                        zmm5_1 = zmm5_1 * 0.200000003f
                    zmm9[0].d = zmm9[0].d f- *(rax_68 + 0x88)
                    zmm10[0] = zmm10[0] f- *(rax_68 + 0x8c)
                    zmm2.d = zmm11.d f- *(rax_68 + 0x90)
                    int32_t rcx_41 = int.d(zmm5_1 * 65536f)
                    zmm5_1 = zmm8.d
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm9[0].d = zmm9[0].d f* *(rax_68 + 0x94)
                    
                    if (rdx_31 s>= rcx_41)
                        rcx_41 = rdx_31
                    
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm10[0] = zmm10[0] f* *(rax_68 + 0x98)
                    zmm1_1.d = zmm2.d f* zmm2.d
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm2.d = zmm2.d f* *(rax_68 + 0x9c)
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm10[0] = zmm10[0] f+ zmm1_1.d
                    zmm10[0] = zmm10[0] f+ zmm2.d
                    bool cond:12_1
                    
                    if (zmm10[0] >= 0f)
                        cond:12_1 = zmm10[0] <= 9998244f
                    label_14217a7bf:
                        
                        if (not(cond:12_1))
                            zmm5_1 = zmm5_1 * 0.400000006f
                    else
                        if (zmm10[0] <= 4000000f)
                            cond:12_1 = zmm10[0] <= 250000f
                            goto label_14217a7bf
                        
                        zmm5_1 = zmm5_1 * 0.200000003f
                    rdx_30 = int.d(zmm5_1 * 65536f)
                    
                    if (rcx_41 s>= rdx_30)
                        rdx_30 = rcx_41
                    
                    rax_68 += 0xc0
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                var_158_1.d = rdx_30
            
            if (r11_1 s< r9_13)
                zmm9 = *(r10_7 + 0x10)
                zmm10 = *(r10_7 + 0x14)
                zmm8 = *(*(r14 + 0x58) + 0x6c)
                zmm11 = *(r10_7 + 0x18)
                void* r8_23 = *r12 + 0x20 + r11_1 * 0x30
                int64_t j_3 = r9_13 - r11_1
                int32_t rax_72
                int64_t j_1
                
                do
                    zmm10[0] = zmm10[0] f- *(r8_23 - 4)
                    zmm9[0].d = zmm9[0].d f- *(r8_23 - 8)
                    zmm5_1 = zmm8.d
                    zmm2.d = zmm11.d f- *r8_23
                    zmm10[0] = zmm10[0] * zmm10[0]
                    zmm10[0] = zmm10[0] f* *(r8_23 + 8)
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm9[0].d = zmm9[0].d f* *(r8_23 + 4)
                    zmm1_1.d = zmm2.d f* zmm2.d
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm2.d = zmm2.d f* *(r8_23 + 0xc)
                    zmm10[0] = zmm10[0] f+ zmm9[0].d
                    zmm10[0] = zmm10[0] f+ zmm1_1.d
                    zmm10[0] = zmm10[0] f+ zmm2.d
                    bool cond:6_1
                    
                    if (zmm10[0] >= 0f)
                        cond:6_1 = zmm10[0] <= 9998244f
                    label_14217a89c:
                        
                        if (not(cond:6_1))
                            zmm5_1 = zmm5_1 * 0.400000006f
                    else
                        if (zmm10[0] <= 4000000f)
                            cond:6_1 = zmm10[0] <= 250000f
                            goto label_14217a89c
                        
                        zmm5_1 = zmm5_1 * 0.200000003f
                    rax_72 = int.d(zmm5_1 * 65536f)
                    
                    if (rdx_30 s>= rax_72)
                        rax_72 = rdx_30
                    
                    r8_23 += 0x30
                    rdx_30 = rax_72
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                var_158_1.d = rax_72
            
            int32_t* rax_73 = *rsi_1
            int64_t rcx_42 = sx.q(r13)
            r13 += 1
            *(rbx_5 + rax_73) = 0
            *(rbx_5 + rax_73 + 0x10) = var_150_2
            rbx_5 += 0x20
            *(rdi_7 + *arg6) = &(*rsi_1)[rcx_42 * 8]
            rdi_7 = &rdi_7[1]
            var_16c_1:4.d &= not.d(var_178:4.d)
            sub_14059bdd0(&var_178)
            r11_1 = 0
            i_2 = i_3
        while (i_2 s< *(var_170_1.q + 0x18))
    
    sub_14215b840(*arg6, r13)
    rdi = arg4

int64_t rcx_47 = *rdi

if (rcx_47 != 0)
    sub_140a74f90(rcx_47)

return zx.q(r13)
