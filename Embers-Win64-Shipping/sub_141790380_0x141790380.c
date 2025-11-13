// 函数: sub_141790380
// 地址: 0x141790380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t r15 = arg5
uint64_t* var_1a8 = arg1 + 0x10
*(arg1 + 0x18) = 0
void* r13 = arg1

if (*(arg1 + 0x1c) s<= 0xffffffff)
    result = sub_1405a52a0(arg1 + 0x10, 0)

*(r13 + 0x88) = 0

if (*(r13 + 0x8c) s<= 0xffffffff)
    result = sub_140991380(r13 + 0x80, 0)

*(r13 + 0x94) = 1
int64_t rdi = sx.q(*(arg2 + 0x10))
int32_t temp0 = rdi.d

if (temp0 != 0)
    int32_t rax = 0
    int32_t rbx_1 = 0
    int32_t* var_1c0 = nullptr
    int32_t var_1b8_1 = 0
    int32_t var_1b4_1 = 0
    char* var_230 = nullptr
    int32_t var_228_1 = 0
    int32_t var_224_1 = 0
    
    if (temp0 s> 0)
        int32_t var_1b8_2 = rdi.d
        sub_1405a4df0(&var_1c0)
        int32_t* rcx_3 = var_1c0
        
        if (rdi.d != 0)
            void* rax_1 = &rcx_3[5]
            int32_t i
            
            do
                *rcx_3 = 0x7f7fffff
                rcx_3 = &rcx_3[6]
                *(rax_1 - 0x10) = 0x7f7fffff
                *(rax_1 - 0xc) = 0x7f7fffff
                *(rax_1 - 8) = 0xff7fffff
                *(rax_1 - 4) = 0xff7fffff
                *rax_1 = 0xff7fffff
                rax_1 += 0x18
                i = rdi.d
                rdi = zx.q(rdi.d - 1)
            while (i != 1)
        
        rbx_1 = var_228_1
    else if (temp0 s< 0)
        int32_t rsi_2 = neg.d(rdi.d)
        
        if (rsi_2 != 0)
            int32_t rcx_5 = neg.d(rsi_2 + rdi.d)
            
            if (rcx_5 != 0)
                memmove(rdi * 0x18, nullptr, rcx_5 * 0x18)
                rax = var_1b8_1
            
            int32_t var_1b8_3 = rax - rsi_2
            sub_1405fde90(&var_1c0)
            rbx_1 = var_228_1
    
    int64_t rdi_1 = sx.q(*(arg2 + 0x10))
    
    if (rdi_1.d s> rbx_1)
        int32_t rdi_2 = rdi_1.d - rbx_1
        int32_t rax_5 = rbx_1 + rdi_2
        int32_t var_228_2 = rax_5
        
        if (rax_5 s> var_224_1)
            sub_140679a80(&var_230)
        
        memset(&var_230[sx.q(rbx_1)], 0, sx.q(rdi_2))
    else if (rdi_1.d s< rbx_1)
        int32_t rsi_4 = rbx_1 - rdi_1.d
        
        if (rbx_1 != rdi_1.d)
            int32_t rax_7 = rbx_1 - rsi_4
            
            if (rax_7 != rdi_1.d)
                memmove(&var_230[rdi_1], &var_230[sx.q(rsi_4 + rdi_1.d)], rax_7 - rdi_1.d)
                rbx_1 = var_228_1
            
            int32_t var_228_3 = rbx_1 - rsi_4
            sub_1405dac10(&var_230)
    
    int32_t rax_10 = int.d(fconvert.t(*(r13 + 0x90)))
    char var_174_1 = arg3
    void* r12_1 = arg2
    void* var_118_1 = r13 + 0x80
    int32_t var_220 = 0
    void* var_138 = r12_1
    uint64_t* var_120_1 = arg1 + 0x10
    int32_t var_178 = rax_10
    int32_t** var_130_1 = &var_1c0
    int64_t* var_128_1 = &var_230
    int32_t* var_110_1 = &var_178
    int32_t* var_108_1 = &var_220
    int32_t var_170_1 = arg4.d
    uint128_t var_210
    __builtin_memcpy(&var_210, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    int64_t zmm13_1 = sub_1417a53b0(&var_138, &var_210, 1).q
    void* var_1f0
    int32_t var_1cc
    int32_t var_1c8
    uint128_t zmm0_1
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint128_t zmm8_1
    int64_t zmm10_1
    uint128_t zmm11_1
    uint128_t zmm12_1
    
    if (data_143ef727c != 0)
        var_1f0 = r12_1
        char var_248_1 = 0
        int64_t* var_1e8_1 = nullptr
        void* i_1 = nullptr
        int32_t var_1d8_1 = 0xffffffff
        int32_t var_1d0_1 = 0
        sub_1417b4db0(&var_1f0)
        
        if (i_1 != 0)
            int64_t rdi_3 = 0
            int64_t r14_1 = 0
            int64_t* r15_1 = var_1e8_1
            uint64_t* r13_1 = var_1a8
            int32_t var_240
            var_240.q = 0
            
            do
                char* rcx_18 = var_230
                
                if (rcx_18[rdi_3] != 0)
                    int32_t* r8_4 = var_1c0
                    zmm2_1.d = 1f f/ zmm13_1.d
                    int64_t j = 0
                    zmm0_1.d = zmm2_1.d f* *(r8_4 + r14_1)
                    zmm1_1.d = zmm2_1.d f* *(r8_4 + r14_1 + 4)
                    zmm2_1.d = zmm2_1.d f* *(r8_4 + r14_1 + 8)
                    var_1a8.d = zmm0_1.d
                    var_1a8:4.d = zmm1_1.d
                    int32_t var_1a0_1 = zmm2_1.d
                    
                    do
                        if (_mm_and_ps(*(&var_1a8 + (j << 2)), 0x7fffffff).d f> 10000000f)
                            rcx_18[rdi_3] = 0
                            int64_t r12_2 = sx.q(r13_1[1].d)
                            zmm11_1 = zx.o(*(r8_4 + r14_1))
                            int32_t rbx_3 = *(r8_4 + r14_1 + 8)
                            int64_t rdx_5 = sx.q(var_1d8_1) * 5
                            zmm12_1 = zx.o(*(r8_4 + r14_1 + 0xc))
                            int32_t rsi_5 = *(r8_4 + r14_1 + 0x14)
                            var_248_1 = 1
                            int64_t rcx_19 = *(i_1 + 0x58)
                            int32_t rax_13 = (r12_2 + 1).d
                            zmm1_1 = *(rcx_19 + (rdx_5 << 3) + 0x10)
                            zmm8_1 = *(rcx_19 + (rdx_5 << 3))
                            zmm10_1 = *(rcx_19 + (rdx_5 << 3) + 0x20)
                            int32_t var_f0_1 = zmm1_1.d
                            r13_1[1].d = rax_13
                            
                            if (rax_13 s> *(r13_1 + 0xc))
                                sub_1405c4fe0(r13_1)
                            
                            int64_t* r8_5 = r13 + 0x80
                            int128_t* rax_16 = (r12_2 << 6) + *r13_1
                            *rax_16 = zmm8_1
                            rax_16[1] = zmm1_1
                            rax_16[2].q = zmm10_1
                            *(rax_16 + 0x28) = zmm11_1.q
                            *(rax_16 + 0x34) = zmm12_1.q
                            rax_16[3].d = rbx_3
                            int64_t rbx_4 = sx.q(var_f0_1)
                            *(rax_16 + 0x3c) = rsi_5
                            int64_t rsi_6 = sx.q(r8_5[1].d)
                            
                            if (rbx_4.d s>= rsi_6.d)
                                int32_t k_1 = rbx_4.d - rsi_6.d + 1
                                int32_t rax_17 = k_1 + rsi_6.d
                                r8_5[1].d = rax_17
                                
                                if (rax_17 s> *(r8_5 + 0xc))
                                    sub_140adefe0(r8_5)
                                    r8_5 = r13 + 0x80
                                
                                if (k_1 != 0)
                                    char* rax_20 = *r8_5 + rsi_6 * 0x24 + 0x20
                                    int32_t k
                                    
                                    do
                                        *rax_20 = 0
                                        rax_20 = &rax_20[0x24]
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                                
                                rdi_3 = var_240.q
                            
                            int64_t rdx_8 = rbx_4 * 9
                            *(*r8_5 + (rdx_8 << 2) + 0x20) = 1
                            int64_t rcx_23 = *r8_5
                            *(rcx_23 + (rdx_8 << 2)) = r12_2.d
                            *(rcx_23 + (rdx_8 << 2) + 4) = 0xffffffff
                            int32_t var_150
                            *(rcx_23 + (rdx_8 << 2) + 8) = var_150
                            int32_t var_14c
                            *(rcx_23 + (rdx_8 << 2) + 0xc) = var_14c
                            int32_t var_148
                            *(rcx_23 + (rdx_8 << 2) + 0x10) = var_148
                            int32_t var_144
                            *(rcx_23 + (rdx_8 << 2) + 0x14) = var_144
                            int32_t var_140
                            *(rcx_23 + (rdx_8 << 2) + 0x18) = var_140
                            int32_t var_13c
                            *(rcx_23 + (rdx_8 << 2) + 0x1c) = var_13c
                            break
                        
                        j += 1
                    while (j s< 3)
                
                rdi_3 += 1
                r14_1 += 0x18
                var_240.q = rdi_3
                
                if (r15_1 != 0)
                    int32_t rax_34 = var_1c8 + 1
                    var_1c8 = rax_34
                    
                    if (rax_34 s>= r15_1[1].d)
                    label_14179084b:
                        var_1d0_1 += 1
                        sub_1417b4db0(&var_1f0)
                        r15_1 = var_1e8_1
                    else
                        int64_t* rdx_10 = *(*r15_1 + (sx.q(rax_34) << 3))
                        int32_t var_180_1 = rdx_10[1].d
                        i_1.o = (*rdx_10).o
                else
                    int32_t rax_29 = var_1d8_1 + 1
                    var_1d8_1 = rax_29
                    
                    if (rax_29 s>= var_1cc)
                        goto label_14179084b
            while (i_1 != 0)
            
            r13 = arg1
            
            if (var_248_1 != 0)
                zmm13_1 = sub_1417a53b0(&var_138, &var_210, 0).q
            
            r12_1 = arg2
            r15 = arg5
    
    int32_t var_1fc
    uint128_t zmm4_1 = var_1fc
    int32_t var_200
    uint128_t zmm5_1 = var_200
    uint128_t zmm6_1 = var_210:0xc.d
    uint128_t zmm9_1 = var_210:8.d
    int64_t zmm7_1 = var_210:4.d
    zmm8_1 = var_210.d
    int32_t var_240_1
    int32_t var_238_1
    
    if (zmm13_1.d f<= 0f)
        var_240_1 = r15
        int32_t var_23c_2 = r15
        var_238_1 = r15
    else
        zmm0_1.d = zmm6_1.d f- zmm8_1.d
        zmm2_1.d = 1f f/ zmm13_1.d
        zmm1_1.d = zmm5_1.d f- zmm7_1.d
        zmm0_1.d = zmm0_1.d f* zmm2_1.d
        zmm1_1.d = zmm1_1.d f* zmm2_1.d
        var_240_1 = int.d(zmm0_1.d)
        zmm0_1.d = zmm4_1.d f- zmm9_1.d
        zmm0_1.d = zmm0_1.d f* zmm2_1.d
        int32_t var_23c_1 = int.d(zmm1_1.d)
        var_238_1 = int.d(zmm0_1.d)
    
    uint64_t var_198_1 = var_240_1.q
    int32_t r8_7 = var_238_1 + 1
    int32_t rcx_28 = var_198_1.d + 1
    int32_t rdx_12 = var_198_1:4.d + 1
    int32_t rax_38 = rcx_28
    
    if (rcx_28 s> r15)
        rax_38 = r15
        rcx_28 = r15
    
    int32_t rax_39 = rdx_12
    
    if (rax_38 s< 0)
        rcx_28 = r15
    
    if (rdx_12 s> r15)
        rax_39 = r15
        rdx_12 = r15
    
    int32_t rax_40 = r8_7
    
    if (rax_39 s< 0)
        rdx_12 = r15
    
    if (r8_7 s> r15)
        rax_40 = r15
        r8_7 = r15
    
    int32_t rax_41 = var_210:8.d
    zmm4_1.d = zmm4_1.d f- zmm9_1.d
    zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_28))
    
    if (rax_40 s< 0)
        r8_7 = r15
    
    arg4.d = zmm6_1.d f- zmm8_1.d
    zmm2_1.d = zmm5_1.d f- zmm7_1.d
    arg4.d = arg4.d f/ zmm0_1.d
    zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(rdx_12)).d
    zmm4_1.d = zmm4_1.d f/ _mm_cvtepi32_ps(zx.o(r8_7)).d
    *(r13 + 0x20) = (_mm_unpacklo_ps(zmm8_1, zmm7_1)).q
    *(r13 + 0x28) = rax_41
    *(r13 + 0x2c) = (_mm_unpacklo_ps(zmm6_1, zmm5_1.q)).q
    *(r13 + 0x34) = var_1fc
    *(r13 + 0x38) = rcx_28
    *(r13 + 0x3c) = rdx_12
    *(r13 + 0x40) = r8_7
    *(r13 + 0x44) = (_mm_unpacklo_ps(arg4, zmm2_1.q)).q
    *(r13 + 0x4c) = zmm4_1.d
    int32_t rbx_5 = *(r13 + 0x40)
    int32_t rcx_29 = *(r13 + 0x38)
    var_210:8.d = rbx_5
    var_200.q = 0
    int32_t i_5 = 0
    int32_t rax_44 = *(r13 + 0x3c)
    var_210.d = rcx_29
    var_210:4.d = rax_44
    int32_t i_6 = rbx_5 * rax_44 * rcx_29
    
    if (i_6 s> 0)
        i_5 = i_6
        sub_1405a4f90(&var_200)
        memset(var_200.q, 0, sx.q(i_6) << 4)
    else if (i_6 s< 0)
        sub_140838580(&var_200, i_6, neg.d(i_6), 1)
    
    *(r13 + 0x50) = var_210.d
    *(r13 + 0x54) = var_210:4.d
    *(r13 + 0x58) = var_210:8.d
    sub_141707010(r13 + 0x60, &var_200)
    int64_t* rsi_7 = var_200.q
    int32_t i_4 = i_5
    int64_t* rbx_7 = rsi_7
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            int64_t rcx_34 = *rbx_7
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            rbx_7 = &rbx_7[2]
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
    
    if (rsi_7 != 0)
        sub_140a74f90(rsi_7)
    
    var_1f0 = r12_1
    zmm10_1 = (zx.o(0)).q
    int64_t* var_1e8_2 = nullptr
    void* i_3 = nullptr
    int32_t result_1 = 0xffffffff
    int32_t var_1d0_2 = 0
    sub_1417b4db0(&var_1f0)
    
    if (i_3 == 0)
        result.b = 1
    else
        char* rsi_8 = nullptr
        var_240_1.q = 0
        int64_t r14_2 = 0
        
        do
            if (*(rsi_8 + var_230) != 0)
                int32_t* r15_2 = var_1c0
                uint128_t zmm0_2
                zmm0_2.d = var_220.d f+ 1f
                int32_t zmm4_2 = *(r13 + 0x20)
                zmm7_1 = *(r13 + 0x44)
                int32_t zmm5_2 = *(r13 + 0x24)
                zmm8_1 = *(r13 + 0x48)
                zmm6_1 = *(r13 + 0x28)
                zmm9_1 = *(r13 + 0x4c)
                var_220 = zmm0_2.d
                uint128_t zmm1_2
                zmm1_2.d = (*(r15_2 + r14_2)).d f- zmm4_2
                zmm2_1.d = (*(r15_2 + r14_2 + 4)).d f- zmm5_2
                arg4.d = (*(r15_2 + r14_2 + 8)).d f- zmm6_1.d
                zmm0_2.d = zmm1_2.d f/ zmm7_1.d
                int32_t rax_49 = int.d(zmm0_2.d)
                zmm0_2.d = zmm2_1.d f/ zmm8_1.d
                int32_t rcx_37 = int.d(zmm0_2.d)
                zmm0_2.d = arg4.d f/ zmm9_1.d
                int32_t rdx_16 = int.d(zmm0_2.d)
                
                if (not(zmm1_2.d f>= 0f))
                    rax_49 -= 1
                
                if (not(zmm2_1.d f>= 0f))
                    rcx_37 -= 1
                
                if (not(arg4.d f>= 0f))
                    rdx_16 -= 1
                
                int32_t r10_1 = *(r13 + 0x38)
                int32_t r8_12
                
                if (rax_49 s< r10_1)
                    r8_12 = 0
                    
                    if (rax_49 s>= 0)
                        r8_12 = rax_49
                else
                    r8_12 = r10_1 - 1
                
                int32_t r9_2 = *(r13 + 0x3c)
                void* arg_10
                arg_10.d = r8_12
                int32_t var_168_1 = r8_12
                int32_t r11_1
                
                if (rcx_37 s< r9_2)
                    r11_1 = 0
                    
                    if (rcx_37 s>= 0)
                        r11_1 = rcx_37
                else
                    r11_1 = r9_2 - 1
                
                int32_t rdi_6 = *(r13 + 0x40)
                int32_t var_214_1 = r11_1
                int32_t var_164_1 = r11_1
                int32_t rax_50
                
                if (rdx_16 s< rdi_6)
                    rax_50 = 0
                    
                    if (rdx_16 s>= 0)
                        rax_50 = rdx_16
                else
                    rax_50 = rdi_6 - 1
                
                zmm1_2.d = (*(r15_2 + r14_2 + 0xc)).d f- zmm4_2
                zmm2_1.d = (*(r15_2 + r14_2 + 0x10)).d f- zmm5_2
                void* arg_8
                arg_8.d = rax_50
                arg4.d = (*(r15_2 + r14_2 + 0x14)).d f- zmm6_1.d
                zmm0_2.d = zmm1_2.d f/ zmm7_1.d
                int32_t rax_51 = int.d(zmm0_2.d)
                zmm0_2.d = zmm2_1.d f/ zmm8_1.d
                int32_t rcx_38 = int.d(zmm0_2.d)
                zmm0_2.d = arg4.d f/ zmm9_1.d
                int32_t rdx_17 = int.d(zmm0_2.d)
                
                if (not(zmm1_2.d f>= 0f))
                    rax_51 -= 1
                
                if (not(zmm2_1.d f>= 0f))
                    rcx_38 -= 1
                
                if (not(arg4.d f>= 0f))
                    rdx_17 -= 1
                
                int32_t r10_2
                
                if (rax_51 s< r10_1)
                    r10_2 = 0
                    
                    if (rax_51 s>= 0)
                        r10_2 = rax_51
                else
                    r10_2 = r10_1 - 1
                
                int32_t var_218_1 = r10_2
                int64_t var_188
                var_188.d = r10_2
                int32_t r9_3
                
                if (rcx_38 s< r9_2)
                    r9_3 = 0
                    
                    if (rcx_38 s>= 0)
                        r9_3 = rcx_38
                else
                    r9_3 = r9_2 - 1
                
                int32_t var_21c_1 = r9_3
                var_188:4.d = r9_3
                int32_t rdi_7
                
                if (rdx_17 s< rdi_6)
                    rdi_7 = 0
                    
                    if (rdx_17 s>= 0)
                        rdi_7 = rdx_17
                else
                    rdi_7 = rdi_6 - 1
                
                int32_t var_1b0_1 = rdi_7
                int64_t rdx_18 = sx.q(result_1) * 5
                int64_t rcx_39 = *(i_3 + 0x58)
                zmm11_1 = *(rcx_39 + (rdx_18 << 3) + 0x10)
                zmm12_1 = *(rcx_39 + (rdx_18 << 3))
                zmm13_1 = *(rcx_39 + (rdx_18 << 3) + 0x20)
                void* rdx_19 = r13 + 0x80
                int64_t r12_3 = sx.q(*(rdx_19 + 8))
                int64_t rbx_8 = sx.q(zmm11_1.d)
                
                if (rbx_8.d s>= r12_3.d)
                    int32_t j_2 = rbx_8.d - r12_3.d + 1
                    int32_t rax_54 = r12_3.d + j_2
                    *(rdx_19 + 8) = rax_54
                    
                    if (rax_54 s> *(rdx_19 + 0xc))
                        sub_140adefe0(r13 + 0x80)
                        r8_12 = arg_10.d
                        rdx_19 = r13 + 0x80
                        r9_3 = var_21c_1
                        r10_2 = var_218_1
                        r11_1 = var_214_1
                    
                    if (j_2 != 0)
                        char* rax_57 = *rdx_19 + r12_3 * 0x24 + 0x20
                        int32_t j_1
                        
                        do
                            *rax_57 = 0
                            rax_57 = &rax_57[0x24]
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                    
                    rsi_8 = var_240_1.q
                
                int64_t rcx_42 = rbx_8 * 9
                *(*rdx_19 + (rcx_42 << 2) + 0x20) = 1
                int64_t rax_59 = *rdx_19
                int32_t rdx_21 = arg_8.d
                *(rax_59 + (rcx_42 << 2)) = -1
                *(rax_59 + (rcx_42 << 2) + 8) = r8_12
                *(rax_59 + (rcx_42 << 2) + 0xc) = r11_1
                *(rax_59 + (rcx_42 << 2) + 0x10) = rdx_21
                *(rax_59 + (rcx_42 << 2) + 0x14) = r10_2
                *(rax_59 + (rcx_42 << 2) + 0x18) = r9_3
                *(rax_59 + (rcx_42 << 2) + 0x1c) = rdi_7
                
                if (r8_12 s<= r10_2)
                    do
                        int32_t r12_4 = r11_1
                        
                        if (r11_1 s<= r9_3)
                            do
                                int32_t rsi_11 = rdx_21
                                
                                if (rdx_21 s<= rdi_7)
                                    do
                                        zmm6_1 = zx.o(*(r15_2 + r14_2))
                                        zmm7_1 = *(r15_2 + r14_2 + 0xc)
                                        var_1a8.d = *(r15_2 + r14_2 + 8)
                                        var_198_1.d = *(r15_2 + r14_2 + 0x14)
                                        int64_t* rbx_11 = (sx.q(
                                            (r8_12 * *(r13 + 0x54) + r12_4) * *(r13 + 0x58)
                                            + rsi_11) << 4) + *(r13 + 0x60)
                                        int64_t rdi_8 = sx.q(rbx_11[1].d)
                                        int32_t rax_67 = (rdi_8 + 1).d
                                        rbx_11[1].d = rax_67
                                        
                                        if (rax_67 s> *(rbx_11 + 0xc))
                                            sub_1407755b0(rbx_11)
                                            r8_12 = arg_10.d
                                            rdx_21 = arg_8.d
                                        
                                        int32_t rax_68 = var_1a8.d
                                        zmm10_1.d = zmm10_1.d f+ 1f
                                        rdi_7 = var_1b0_1
                                        rsi_11 += 1
                                        uint64_t* rcx_45 = rdi_8 * 0x58 + *rbx_11
                                        *rcx_45 = zmm6_1.q
                                        rcx_45[1].d = rax_68
                                        *(rcx_45 + 0xc) = zmm7_1
                                        *(rcx_45 + 0x14) = var_198_1.d
                                        rcx_45[8] = var_168_1.q
                                        *(rcx_45 + 0x4c) = var_188
                                        rcx_45[9].d = rdx_21
                                        *(rcx_45 + 0x54) = rdi_7
                                        *(rcx_45 + 0x18) = zmm12_1
                                        *(rcx_45 + 0x28) = zmm11_1
                                        rcx_45[7] = zmm13_1
                                    while (rsi_11 s<= rdi_7)
                                    
                                    r9_3 = var_21c_1
                                
                                r12_4 += 1
                            while (r12_4 s<= r9_3)
                            
                            r10_2 = var_218_1
                            r11_1 = var_214_1
                        
                        r8_12 += 1
                        arg_10.d = r8_12
                    while (r8_12 s<= r10_2)
                    
                    rsi_8 = var_240_1.q
            
            rsi_8 = &rsi_8[1]
            r14_2 += 0x18
            var_240_1.q = rsi_8
            
            if (var_1e8_2 != 0)
                int32_t rax_72 = var_1c8 + 1
                var_1c8 = rax_72
                
                if (rax_72 s>= var_1e8_2[1].d)
                    var_1d0_2 += 1
                    sub_1417b4db0(&var_1f0)
                else
                    int64_t* rdx_24 = *(*var_1e8_2 + (sx.q(rax_72) << 3))
                    var_210.q = *rdx_24
                    var_210:8.d = rdx_24[1].d
                    i_3.o = var_210
            else
                result = result_1 + 1
                result_1 = result
                
                if (result s>= var_1cc)
                    var_1d0_2 += 1
                    sub_1417b4db0(&var_1f0)
        while (i_3 != 0)
        
        if (zmm10_1.d f== 0f)
            result.b = 1
        else
            result.b = 0
    
    char* rcx_48 = var_230
    *(r13 + 0x94) = result.b
    
    if (rcx_48 != 0)
        result = sub_140a74f90(rcx_48)
    
    int32_t* rcx_49 = var_1c0
    
    if (rcx_49 != 0)
        return sub_140a74f90(rcx_49)

return result
