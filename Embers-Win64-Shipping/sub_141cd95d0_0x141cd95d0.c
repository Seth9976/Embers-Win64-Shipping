// 函数: sub_141cd95d0
// 地址: 0x141cd95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t result = __security_cookie ^ &var_1d8
int64_t result_1 = result
int64_t r13 = arg1[0x1c]
int64_t* r12 = arg1
int64_t r15 = sx.q(arg2)
int32_t var_1a4 = r15.d
int64_t var_180 = r13
int64_t r14 = r15 * 5
int32_t i_8 = *(r13 + (r14 << 3) + 8)
int32_t i_4 = i_8
int64_t var_188 = r14

if (*(r13 + (r14 << 3) + 0x18) != 1 || i_8 != 3)
    int32_t* rcx = *(r13 + 0x10 + (r14 << 3))
    uint64_t* rsi_2 = r13 + 0x10 + (r14 << 3)
    int64_t rax_1 = sx.q(rsi_2[1].d)
    int32_t rdi_1 = 0
    uint64_t* var_130_1 = rsi_2
    int32_t* var_140 = rcx
    void* rax_2 = &rcx[rax_1]
    void* var_1a0 = rax_2
    uint64_t j_2
    int32_t* var_118
    int32_t var_108
    int32_t var_104
    int32_t* var_f8
    int32_t var_f0
    
    if (rcx != rax_2)
        void* rax_3 = &r12[0x15]
        
        do
            int64_t rdi_2 = sx.q(*rcx)
            int64_t r13_1 = 3
            int32_t var_198_1 = rdi_2.d
            int64_t r12_1 = 0
            int32_t* r14_3 = (rdi_2 << 4) + *rax_3
            
            if (r14_3 u> &r14_3[3])
                r13_1 = 0
            
            if (r14_3 u<= &r14_3[3])
                do
                    int64_t rsi_3 = r12[7]
                    int64_t rbx = sx.q(*r14_3) * 3
                    int32_t* r9_1 = *(rsi_3 + (rbx << 3) + 8)
                    int64_t r8_1 = sx.q(*(rsi_3 + (rbx << 3) + 0x10))
                    int32_t* rdx = r9_1
                    void* rcx_1 = &r9_1[r8_1]
                    
                    if (r9_1 != rcx_1)
                        do
                            if (*rdx == rdi_2.d)
                                int32_t rdx_2 = ((rdx - r9_1) s>> 2).d
                                
                                if (rdx_2 != 0xffffffff)
                                    void* rcx_2 = &r9_1[sx.q(rdx_2)]
                                    memmove(rcx_2, rcx_2 + 4, (r8_1.d - rdx_2 - 1) << 2)
                                    *(rsi_3 + (rbx << 3) + 0x10) -= 1
                                
                                break
                            
                            rdx = &rdx[1]
                        while (rdx != rcx_1)
                    
                    r14_3 = &r14_3[1]
                    r12_1 += 1
                while (r12_1 != r13_1)
            
            int32_t rax_8 = data_143a1c6b0
            var_108 = rax_8
            var_104 = rax_8
            int32_t var_100_1 = rax_8
            var_f8 = &var_108
            var_f0 = 3
            var_118.o = var_f8.o
            sub_141cde780(r12, rdi_2.d, &var_118)
            int32_t* i = &var_108
            void var_fc
            
            do
                int64_t rbx_1 = sx.q(*i)
                
                if (rbx_1.d != data_143a1c6bc)
                    void* r13_2 = r12[0xe] + rbx_1 * 0x18
                    int64_t r9_2 = sx.q(*(r13_2 + 0x10))
                    int64_t rcx_5
                    int64_t rdx_5
                    int64_t r8_7
                    
                    if (r9_2.d == 2)
                        int32_t* rax_10 = *(r13_2 + 8)
                        r8_7 = r12[0x15]
                        rdx_5 = sx.q(rax_10[1])
                        rcx_5 = sx.q(*rax_10)
                    
                    if (r9_2.d != 2 || *(r8_7 + rcx_5 * 0x10 + 0xc) != *(r8_7 + rdx_5 * 0x10 + 0xc))
                        int32_t* r8_13 = *(r13_2 + 8)
                        int32_t* rdx_13 = r8_13
                        void* rcx_11 = &r8_13[r9_2]
                        
                        if (r8_13 != rcx_11)
                            do
                                if (*rdx_13 == rdi_2.d)
                                    int32_t rdx_15 = ((rdx_13 - r8_13) s>> 2).d
                                    
                                    if (rdx_15 != 0xffffffff)
                                        void* rcx_12 = &r8_13[sx.q(rdx_15)]
                                        memmove(rcx_12, rcx_12 + 4, (r9_2.d - rdx_15 - 1) << 2)
                                        *(r13_2 + 0x10) -= 1
                                    
                                    break
                                
                                rdx_13 = &rdx_13[1]
                            while (rdx_13 != rcx_11)
                    else
                        int32_t rax_12 = 2
                        j_2 = 0
                        uint64_t j = 0
                        
                        if (r13_2 u> r13_2 + 8)
                            rax_12 = 0
                        
                        if (r13_2 u<= r13_2 + 8)
                            do
                                int64_t r12_2 = *r12
                                int64_t r14_6 = sx.q(*r13_2) << 5
                                int32_t* r9_3 = *(r14_6 + r12_2 + 0x10)
                                int64_t r8_8 = sx.q(*(r14_6 + r12_2 + 0x18))
                                int32_t* rdx_7 = r9_3
                                void* rcx_7 = &r9_3[r8_8]
                                
                                if (r9_3 != rcx_7)
                                    do
                                        if (*rdx_7 == rbx_1.d)
                                            int32_t rdx_9 = ((rdx_7 - r9_3) s>> 2).d
                                            
                                            if (rdx_9 != 0xffffffff)
                                                void* rcx_8 = &r9_3[sx.q(rdx_9)]
                                                memmove(rcx_8, rcx_8 + 4, (r8_8.d - rdx_9 - 1) << 2)
                                                *(r14_6 + r12_2 + 0x18) -= 1
                                                j = j_2
                                            
                                            break
                                        
                                        rdx_7 = &rdx_7[1]
                                    while (rdx_7 != rcx_7)
                                
                                j += 1
                                r13_2 += 4
                                j_2 = j
                            while (j != zx.q(rax_12))
                            
                            rdi_2 = zx.q(var_198_1)
                        
                        sub_1409d8340(&r12[0xe], rbx_1.d, 1)
                        sub_1409d8140(&r12[0x40], rbx_1.d)
                
                i = &i[1]
            while (i != &var_fc)
            
            sub_140906230(&r12[0x15], rdi_2.d, 1)
            sub_1409d8140(&r12[0x4b], rdi_2.d)
            rax_3 = &r12[0x15]
            rcx = &var_140[1]
            var_140 = rcx
        while (rcx != var_1a0)
        
        r15 = zx.q(var_1a4)
        rdi_1 = 0
        r12 = arg1
        i_8 = i_4
        rsi_2 = var_130_1
        r14 = var_188
        r13 = var_180
    
    int32_t rax_15 = *(rsi_2 + 0xc)
    rsi_2[1].d = 0
    
    if (rax_15 s< 0 && rax_15 != 0)
        sub_1405dadb0(rsi_2, 0)
    
    if (i_8 != 3)
        uint128_t zmm6_1
        uint128_t zmm7_1
        uint128_t zmm8_1
        uint128_t zmm9_1
        int128_t zmm10_1
        int128_t zmm11_1
        int128_t zmm12_1
        uint128_t zmm13_1
        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
            sub_141cd92f0(r12, &var_f8, r15.d)
        int64_t r8_18 = data_143f35cc8
        int32_t* var_170
        __builtin_memset(&var_170, 0, 0x20)
        int32_t* r13_3 = nullptr
        var_118 = nullptr
        void* r14_8 = nullptr
        int64_t var_110_1 = 0
        sub_14090aa40(&r12[0x2a], &var_1a0, r8_18)
        int32_t i_2 = i_4
        void* var_160
        
        if (i_2 s> 0)
            int64_t var_168
            var_168.d = i_2
            sub_1405a4cf0(&var_170)
            i_2 = i_4
            
            if (i_2 s> 0)
                var_110_1.d = i_2
                sub_1405a4cf0(&var_118)
                i_2 = i_4
                r13_3 = var_118
                
                if (i_2 s> 0)
                    int64_t var_158
                    var_158.d = i_2
                    sub_140638a00(&var_160)
                    i_2 = i_4
                    r14_8 = var_160
        
        int64_t i_5 = sx.q(i_2)
        
        if (i_2 s> 0)
            void* r9_7 = r14_8
            void* rbx_3 = var_1a0
            int32_t* r11_3 = var_170 - r13_3
            int32_t* r8_19 = r13_3
            int64_t i_6 = i_5
            int32_t r15_2 = 1
            int64_t i_1
            
            do
                *(r11_3 + r8_19) = r15_2 - 2
                r9_7 += 0xc
                *r8_19 = r15_2
                r8_19 = &r8_19[1]
                r15_2 += 1
                int64_t rdx_31 = sx.q(
                    *(r12[7] + sx.q(*(*(var_180 + (var_188 << 3)) - r13_3 + r8_19 - 4)) * 0x18)) * 3
                int64_t rcx_36 = **(rbx_3 + 0x18)
                *(r9_7 - 0xc) = *(rcx_36 + (rdx_31 << 2))
                *(r9_7 - 4) = *(rcx_36 + (rdx_31 << 2) + 8)
                i_1 = i_6
                i_6 -= 1
            while (i_1 != 1)
            r15 = zx.q(var_1a4)
            rdi_1 = 0
            r13_3 = var_118
            r14_8 = var_160
            i_2 = i_4
        
        int32_t* rbx_4 = var_170
        *rbx_4 = i_2 - 1
        r13_3[i_5 - 1] = 0
        int32_t rsi_7 = 0
        bool cond:6_1 = i_2 s<= 3
        
        if (i_2 s>= 3)
            int128_t var_78_1 = zmm10_1
            zmm10_1 = 0x322bcc77
            int128_t var_88_1 = zmm11_1
            zmm11_1 = zx.o(0)
            int128_t var_98_1 = zmm12_1
            zmm12_1 = var_f0
            uint128_t var_a8_1 = zmm13_1
            zmm13_1 = var_f8:4.d
            uint128_t zmm14 = var_f8.d
            uint128_t zmm15 = 0x3f000000
            uint128_t var_38_1 = zmm6_1
            uint128_t var_48_1 = zmm7_1
            uint128_t var_58_1 = zmm8_1
            uint128_t var_68_1 = zmm9_1
            
            do
                if (cond:6_1 || rdi_1 s>= i_2)
                label_141cd9eea:
                    int32_t var_ec_1 = data_143a1c6b0
                    int32_t rax_55 = data_143a1c6b8
                    var_f8.d = rax_55
                    var_f8:4.d = rax_55
                    int32_t var_f0_1 = rax_55
                    int64_t r14_11 = sx.q(sub_141cd7c90(&r12[0x15], &var_f8))
                    sub_14090bdf0(&r12[0x4b], r14_11.d)
                    int64_t rdx_36 = sx.q(rsi_7)
                    int32_t* r13_7 = (r14_11 << 4) + r12[0x15]
                    *r13_7 = *(*(var_180 + (var_188 << 3)) + (sx.q(var_170[rdx_36]) << 2))
                    int32_t* rax_60 = var_118
                    r13_7[1] = *(*(var_180 + (var_188 << 3)) + (rdx_36 << 2))
                    r13_7[2] = *(*(var_180 + (var_188 << 3)) + (sx.q(rax_60[rdx_36]) << 2))
                    r13_7[3] = r15.d
                    int64_t rbx_6 = sx.q(var_130_1[1].d)
                    int32_t rax_62 = (rbx_6 + 1).d
                    var_130_1[1].d = rax_62
                    
                    if (rax_62 s> *(var_130_1 + 0xc))
                        sub_1405a4cf0(var_130_1)
                    
                    int64_t j_1 = 0
                    *(*var_130_1 + (rbx_6 << 2)) = r14_11.d
                    
                    do
                        int64_t rdx_38 = r12[7]
                        void* rax_65 = sx.q(r13_7[j_1]) * 3
                        int64_t rdi_10 = sx.q(*(rdx_38 + (rax_65 << 3)))
                        var_1a0 = rax_65
                        int64_t rax_66 = 0
                        
                        if (j_1 != 2)
                            rax_66 = j_1 + 1
                        
                        int64_t rax_68 = *r12
                        int32_t rsi_8 = *(rdx_38 + sx.q(r13_7[rax_66]) * 0x18)
                        int64_t rcx_49 = rdi_10 << 5
                        int32_t* r8_24 = *(rcx_49 + rax_68 + 0x10)
                        void* r10_3 = &r8_24[sx.q(*(rcx_49 + rax_68 + 0x18))]
                        int64_t rbx_7
                        
                        if (r8_24 == r10_3)
                        label_141cda047:
                            int32_t rax_71 = data_143a1c6b4
                            int32_t var_e8 = rax_71
                            int32_t var_e4_1 = rax_71
                            int64_t var_e0_1 = 0
                            int64_t var_d8_1 = 0
                            rbx_7 = zx.q(sub_1409af2d0(&r12[0xe], &var_e8))
                            
                            if (var_e0_1 != 0)
                                sub_140a74f90(var_e0_1)
                            
                            sub_141cda530(r12, rbx_7.d, rdi_10.d, rsi_8)
                        else
                            int64_t r9_10 = r12[0xe]
                            
                            while (true)
                                rbx_7 = sx.q(*r8_24)
                                int64_t rdx_39 = rbx_7 * 3
                                int32_t rcx_50 = *(r9_10 + (rdx_39 << 3))
                                int32_t rax_70 = *(r9_10 + (rdx_39 << 3) + 4)
                                
                                if (rcx_50 == rdi_10.d && rax_70 == rsi_8)
                                    break
                                
                                if (rcx_50 == rsi_8 && rax_70 == rdi_10.d)
                                    break
                                
                                r8_24 = &r8_24[1]
                                
                                if (r8_24 == r10_3)
                                    goto label_141cda047
                            
                            if (rbx_7.d == data_143a1c6bc)
                                goto label_141cda047
                        
                        int64_t rax_73 = r12[7]
                        void* rcx_54 = var_1a0
                        int64_t rsi_9 = sx.q(*(rax_73 + (rcx_54 << 3) + 0x10))
                        void* rdi_11 = rax_73 + (rcx_54 << 3)
                        int32_t rax_74 = (rsi_9 + 1).d
                        *(rdi_11 + 0x10) = rax_74
                        
                        if (rax_74 s> *(rdi_11 + 0x14))
                            sub_1405a4cf0(rdi_11 + 8)
                        
                        *(*(rdi_11 + 8) + (rsi_9 << 2)) = r14_11.d
                        int64_t rcx_56 = sx.q(rbx_7.d) * 3
                        int64_t rax_77 = r12[0xe]
                        int64_t rdi_12 = sx.q(*(rax_77 + (rcx_56 << 3) + 0x10))
                        void* rbx_8 = rax_77 + (rcx_56 << 3)
                        int32_t rax_78 = (rdi_12 + 1).d
                        *(rbx_8 + 0x10) = rax_78
                        
                        if (rax_78 s> *(rbx_8 + 0x14))
                            sub_1405a4cf0(rbx_8 + 8)
                        
                        j_1 += 1
                        *(*(rbx_8 + 8) + (rdi_12 << 2)) = r14_11.d
                    while (j_1 s< 3)
                    
                    rbx_4 = var_170
                    r13_3 = var_118
                    r15 = zx.q(var_1a4)
                    i_2 = i_4 - 1
                    i_4 = i_2
                    r13_3[sx.q(rbx_4[rdx_36])] = r13_3[rdx_36]
                    rdi_1 = 0
                    rbx_4[sx.q(r13_3[rdx_36])] = rbx_4[rdx_36]
                    rsi_7 = rbx_4[rdx_36]
                else
                    void* r8_20 = var_160
                    int64_t rdx_32 = sx.q(rsi_7)
                    int64_t rbx_5 = sx.q(rbx_4[rdx_32])
                    int64_t r14_10 = sx.q(r13_3[rdx_32])
                    int64_t rcx_37 = rbx_5 * 3
                    uint128_t zmm4_1 = zx.o(*(r8_20 + (rcx_37 << 2)))
                    float rax_45 = *(r8_20 + (rcx_37 << 2) + 8)
                    int64_t rax_46 = rdx_32 * 3
                    uint128_t j_3 = zx.o(*(r8_20 + (rax_46 << 2)))
                    float rax_47 = *(r8_20 + (rax_46 << 2) + 8)
                    j_2 = j_3.q
                    var_108.q = zmm4_1.q
                    zmm6_1.d = j_3.d f- zmm4_1.d
                    int64_t rax_48 = r14_10 * 3
                    uint128_t zmm2_1 = zx.o(*(r8_20 + (rax_48 << 2)))
                    int32_t rax_49 = *(r8_20 + (rax_48 << 2) + 8)
                    zmm8_1.d = zmm2_1.d f- zmm4_1.d
                    float zmm3_1 = rax_47 - rax_45
                    var_140 = zmm2_1.q
                    zmm4_1.d = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55).d f- var_104
                    zmm7_1.d = rax_49.d f- rax_45
                    uint128_t zmm5_1
                    zmm5_1.d = _mm_shuffle_ps(j_3, j_3, 0x55).d f- var_104
                    zmm9_1 = zmm4_1
                    zmm4_1.d = zmm4_1.d f* zmm6_1.d
                    zmm9_1.d = zmm9_1.d f* zmm3_1
                    j_3.d = zmm7_1.d f* zmm5_1.d
                    zmm7_1.d = zmm7_1.d f* zmm6_1.d
                    zmm9_1.d = zmm9_1.d f- j_3.d
                    j_3.d = zmm8_1.d f* zmm3_1
                    zmm8_1.d = zmm8_1.d f* zmm5_1.d
                    zmm7_1.d = zmm7_1.d f- j_3.d
                    j_3.d = zmm9_1.d f* zmm9_1.d
                    zmm8_1.d = zmm8_1.d f- zmm4_1.d
                    zmm2_1.d = zmm7_1.d f* zmm7_1.d
                    zmm2_1.d = zmm2_1.d f+ j_3.d
                    zmm2_1.d = zmm2_1.d f+ zmm8_1.d f* zmm8_1.d
                    
                    if (not(zmm2_1.d f== 1f))
                        if (zmm2_1.d f>= zmm10_1.d)
                            zmm4_1.d = zmm15.d
                            zmm3_1 = zmm2_1.d
                            zmm5_1 = _mm_rsqrt_ss(zmm2_1.d, zmm3_1)
                            zmm3_1 = zmm3_1 f* zmm4_1.d
                            j_3.d = zmm5_1.d f* zmm5_1.d
                            zmm2_1.d = zmm4_1.d f- zmm3_1 f* j_3.d
                            j_3.d = zmm5_1.d f* zmm2_1.d
                            zmm5_1.d = zmm5_1.d f+ j_3.d
                            zmm4_1.d = zmm4_1.d f- zmm3_1 * zmm5_1.d f* zmm5_1.d
                            j_3.d = zmm5_1.d f* zmm4_1.d
                            zmm5_1.d = zmm5_1.d f+ j_3.d
                            zmm9_1.d = zmm9_1.d f* zmm5_1.d
                            zmm7_1.d = zmm7_1.d f* zmm5_1.d
                            zmm8_1.d = zmm8_1.d f* zmm5_1.d
                        else
                            zmm9_1 = data_143dbb1f8
                            zmm7_1 = data_143dbb1fc
                            zmm8_1 = data_143dbb200
                    
                    zmm2_1.d = zmm14.d f* zmm9_1.d
                    j_3.d = zmm13_1.d f* zmm7_1.d
                    zmm2_1.d = zmm2_1.d f+ j_3.d
                    zmm2_1.d = zmm2_1.d f+ zmm12_1.d f* zmm8_1.d
                    
                    if (not(zmm2_1.d f<= zmm11_1.d))
                        int32_t rax_50 = r13_3[r14_10]
                        
                        while (true)
                            int64_t r10_2 = sx.q(rax_50)
                            int32_t var_1b8_1 = zmm10_1.d
                            int64_t rax_51 = r10_2 * 3
                            int32_t rax_52 = *(r8_20 + (rax_51 << 2) + 8)
                            uint64_t var_128 = *(r8_20 + (rax_51 << 2))
                            int32_t var_120_1 = rax_52
                            char rax_53
                            rax_53, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14, zmm15 =
                                sub_141ce0060(&var_108, &j_2, &var_140, &var_128, var_1b8_1)
                            
                            if (rax_53 != 0)
                                i_2 = i_4
                                break
                            
                            rax_50 = r13_3[r10_2]
                            r8_20 = var_160
                            
                            if (rax_50 == rbx_5.d)
                                goto label_141cd9eea
                    
                    rbx_4 = var_170
                    rsi_7 = r14_10.d
                    rdi_1 += 1
                
                cond:6_1 = i_2 s<= 3
            while (i_2 s>= 3)
            
            r14_8 = var_160
        
        if (r14_8 != 0)
            sub_140a74f90(r14_8)
        
        if (r13_3 != 0)
            sub_140a74f90(r13_3)
        
        result = sub_140a74f90(rbx_4)
    else
        int64_t var_110
        var_110:4.d = data_143a1c6b0
        int32_t rax_17 = data_143a1c6b8
        var_118.d = rax_17
        var_118:4.d = rax_17
        var_110.d = rax_17
        int64_t rbx_2 = sx.q(sub_141cd7c90(&r12[0x15], &var_118))
        sub_14090bdf0(&r12[0x4b], rbx_2.d)
        void* rax_21 = (rbx_2 << 4) + r12[0x15]
        var_1a0 = rax_21
        *(rax_21 + 0xc) = r15.d
        int64_t rdi_4 = sx.q(rsi_2[1].d)
        int32_t rax_22 = (rdi_4 + 1).d
        rsi_2[1].d = rax_22
        
        if (rax_22 s> *(rsi_2 + 0xc))
            sub_1405a4cf0(rsi_2)
        
        *(*rsi_2 + (rdi_4 << 2)) = rbx_2.d
        result = 0
        int64_t i_7 = 0
        int64_t i_3
        
        do
            int64_t rcx_20 = *(r13 + (r14 << 3))
            int64_t rdx_22 = r12[7]
            i_3 = i_7 + 1
            
            if (i_7 != 2)
                result = i_3
            
            int64_t r10_1 = sx.q(*(rcx_20 + (i_7 << 2)))
            int32_t r9_6 = *(rdx_22 + sx.q(*(rcx_20 + (result << 2))) * 0x18)
            int64_t rax_25 = r10_1 * 3
            int64_t r8_16 = sx.q(*(rdx_22 + (rax_25 << 3)))
            int64_t rax_26 = *r12
            int64_t rcx_23 = r8_16 << 5
            int32_t* rdi_5 = *(rcx_23 + rax_26 + 0x10)
            void* r14_7 = &rdi_5[sx.q(*(rcx_23 + rax_26 + 0x18))]
            int64_t rdx_23
            
            if (rdi_5 == r14_7)
            label_141cd9a4d:
                rdx_23 = zx.q(data_143a1c6bc)
            else
                int64_t rsi_4 = r12[0xe]
                
                while (true)
                    rdx_23 = sx.q(*rdi_5)
                    int64_t r11_1 = rdx_23 * 3
                    int32_t rcx_24 = *(rsi_4 + (r11_1 << 3))
                    int32_t rax_28 = *(rsi_4 + (r11_1 << 3) + 4)
                    
                    if (rcx_24 == r8_16.d && rax_28 == r9_6)
                        break
                    
                    if (rcx_24 == r9_6 && rax_28 == r8_16.d)
                        break
                    
                    rdi_5 = &rdi_5[1]
                    
                    if (rdi_5 == r14_7)
                        goto label_141cd9a4d
            
            *(var_1a0 + (i_7 << 2)) = r10_1.d
            int64_t rcx_25 = sx.q(rdx_23.d) * 3
            int64_t rax_31 = r12[0xe]
            int64_t rsi_5 = sx.q(*(rax_31 + (rcx_25 << 3) + 0x10))
            void* rdi_6 = rax_31 + (rcx_25 << 3)
            int32_t rax_32 = (rsi_5 + 1).d
            *(rdi_6 + 0x10) = rax_32
            
            if (rax_32 s> *(rdi_6 + 0x14))
                sub_1405a4cf0(rdi_6 + 8)
            
            *(*(rdi_6 + 8) + (rsi_5 << 2)) = rbx_2.d
            int64_t rax_34 = r12[7]
            int64_t rsi_6 = sx.q(*(rax_34 + (rax_25 << 3) + 0x10))
            void* rdi_7 = rax_34 + (rax_25 << 3)
            int32_t rax_35 = (rsi_6 + 1).d
            *(rdi_7 + 0x10) = rax_35
            
            if (rax_35 s> *(rdi_7 + 0x14))
                sub_1405a4cf0(rdi_7 + 8)
            
            i_7 = i_3
            r14 = var_188
            r13 = var_180
            *(*(rdi_7 + 8) + (rsi_6 << 2)) = rbx_2.d
            result = 0
        while (i_3 s< 3)

__security_check_cookie(result_1 ^ &var_1d8)
return result
