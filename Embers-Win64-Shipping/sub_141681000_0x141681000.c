// 函数: sub_141681000
// 地址: 0x141681000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
uint32_t r12 = arg5
*(arg1 + 0x18) = 0
void* rdi = arg1
char* var_178 = nullptr

if (*(arg1 + 0x1c) s<= 0xffffffff)
    result = sub_1405a52a0(arg1 + 0x10, 0)

*(rdi + 0x88) = 0

if (*(rdi + 0x8c) s<= 0xffffffff)
    result = sub_140991380(rdi + 0x80, 0)

*(rdi + 0x94) = 1
int64_t rsi = sx.q(arg2[1].d)
int32_t temp0 = rsi.d

if (temp0 != 0)
    int32_t rax = 0
    int32_t rbx_1 = 0
    int32_t* var_198 = nullptr
    int32_t var_190_1 = 0
    int32_t var_18c_1 = 0
    void** var_1d0 = nullptr
    int32_t var_1c8_1 = 0
    int32_t var_1c4_1 = 0
    
    if (temp0 s> 0)
        int32_t var_190_2 = rsi.d
        sub_1405a4df0(&var_198)
        int32_t* rcx_3 = var_198
        
        if (rsi.d != 0)
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
                i = rsi.d
                rsi = zx.q(rsi.d - 1)
            while (i != 1)
        
        rbx_1 = var_1c8_1
    else if (temp0 s< 0)
        int32_t r14_2 = neg.d(rsi.d)
        
        if (r14_2 != 0)
            int32_t rcx_5 = neg.d(r14_2 + rsi.d)
            
            if (rcx_5 != 0)
                memmove(rsi * 0x18, nullptr, rcx_5 * 0x18)
                rax = var_190_1
            
            int32_t var_190_3 = rax - r14_2
            sub_1405fde90(&var_198)
            rbx_1 = var_1c8_1
    
    int64_t rsi_1 = sx.q(arg2[1].d)
    
    if (rsi_1.d s> rbx_1)
        int32_t rsi_2 = rsi_1.d - rbx_1
        int32_t rax_5 = rbx_1 + rsi_2
        int32_t var_1c8_2 = rax_5
        
        if (rax_5 s> var_1c4_1)
            sub_140679a80(&var_1d0)
        
        memset(sx.q(rbx_1) + var_1d0, 0, sx.q(rsi_2))
    else if (rsi_1.d s< rbx_1)
        int32_t r14_4 = rbx_1 - rsi_1.d
        
        if (rbx_1 != rsi_1.d)
            int32_t rax_7 = rbx_1 - r14_4
            
            if (rax_7 != rsi_1.d)
                memmove(rsi_1 + var_1d0, sx.q(r14_4 + rsi_1.d) + var_1d0, rax_7 - rsi_1.d)
                rbx_1 = var_1c8_1
            
            int32_t var_1c8_3 = rbx_1 - r14_4
            sub_1405dac10(&var_1d0)
    
    int32_t rax_10 = int.d(fconvert.t(*(rdi + 0x90)))
    char var_14c_1 = arg3
    int64_t* r13_1 = arg2
    int32_t var_1c0 = 0
    int64_t* var_138 = r13_1
    uint64_t* var_120_1 = arg1 + 0x10
    int32_t var_150 = rax_10
    int32_t** var_130_1 = &var_198
    int64_t* var_128_1 = &var_1d0
    void* var_118_1 = rdi + 0x80
    int32_t* var_110_1 = &var_150
    int32_t* var_108_1 = &var_1c0
    int32_t var_148_1 = arg4.d
    int128_t var_1f8
    __builtin_memcpy(&var_1f8, 
        "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x7f\xff", 
        0x18)
    int64_t* r9_1
    uint32_t zmm0_1[0x4]
    zmm0_1, r9_1 = sub_1417253d0(&var_138, &var_1f8, 1)
    int64_t zmm13_1 = zmm0_1[0].q
    uint32_t var_210
    int32_t var_168
    int32_t var_164
    int32_t var_15c
    int32_t var_158
    uint128_t zmm1_1
    uint128_t zmm2_1
    uint32_t zmm8_1[0x4]
    int64_t zmm10_1
    uint128_t zmm11_1
    uint128_t zmm12_1
    
    if (data_143ef727c != 0)
        uint32_t (* r15_1)[0x4] = *r13_1
        void* rdx_7 = &r15_1[sx.q(r13_1[1].d) * 4]
        char var_218_1 = 0
        
        if (r15_1 != rdx_7)
            int64_t r13_2 = 0
            int32_t* r14_5 = nullptr
            void* rax_12 = rdx_7
            
            do
                char* rdx_8 = var_1d0
                
                if (rdx_8[r13_2] != 0)
                    int32_t* rcx_16 = var_198
                    zmm2_1.d = 1f f/ zmm13_1.d
                    int64_t i_1 = 0
                    zmm0_1 = zmm2_1
                    zmm0_1[0] = zmm0_1[0] f* *(r14_5 + rcx_16)
                    zmm1_1.d = zmm2_1.d f* *(r14_5 + rcx_16 + 4)
                    zmm2_1.d = zmm2_1.d f* *(r14_5 + rcx_16 + 8)
                    var_210 = zmm0_1[0]
                    int32_t var_20c_1 = zmm1_1.d
                    int32_t var_208_1 = zmm2_1.d
                    
                    do
                        if (_mm_and_ps((&var_210)[i_1], 0x7fffffff)[0] f> 10000000f)
                            rdx_8[r13_2] = 0
                            int32_t r8_4 = *(arg1 + 0x18)
                            zmm1_1 = r15_1[1]
                            uint32_t rbx_3 = *(r14_5 + rcx_16 + 8)
                            zmm8_1 = *r15_1
                            uint32_t rsi_3 = *(r14_5 + rcx_16 + 0x14)
                            zmm10_1 = r15_1[2][0].q
                            zmm11_1 = zx.o(*(r14_5 + rcx_16))
                            zmm12_1 = zx.o(*(r14_5 + rcx_16 + 0xc))
                            var_218_1 = 1
                            int32_t var_f0_1 = zmm1_1.d
                            int32_t var_200_1 = r8_4
                            *(arg1 + 0x18) = r8_4 + 1
                            
                            if (r8_4 + 1 s> *(arg1 + 0x1c))
                                sub_1405c4fe0(arg1 + 0x10)
                                r8_4 = var_200_1
                            
                            r9_1 = rdi + 0x80
                            uint32_t (* rax_16)[0x4] = (sx.q(r8_4) << 6) + *(arg1 + 0x10)
                            *rax_16 = zmm8_1
                            rax_16[1] = zmm1_1
                            rax_16[2][0].q = zmm10_1
                            *(rax_16 + 0x28) = zmm11_1.q
                            *(rax_16 + 0x34) = zmm12_1.q
                            rax_16[3][0] = rbx_3
                            int64_t rbx_4 = sx.q(var_f0_1)
                            (*rax_16)[0xf] = rsi_3
                            int64_t r12_1 = sx.q(r9_1[1].d)
                            
                            if (rbx_4.d s>= r12_1.d)
                                int32_t j_1 = rbx_4.d - r12_1.d + 1
                                int32_t rax_17 = r12_1.d + j_1
                                r9_1[1].d = rax_17
                                
                                if (rax_17 s> *(r9_1 + 0xc))
                                    sub_140adefe0(r9_1)
                                    r8_4 = var_200_1
                                    r9_1 = rdi + 0x80
                                
                                if (j_1 != 0)
                                    char* rax_20 = *r9_1 + r12_1 * 0x24 + 0x20
                                    int32_t j
                                    
                                    do
                                        *rax_20 = 0
                                        rax_20 = &rax_20[0x24]
                                        j = j_1
                                        j_1 -= 1
                                    while (j != 1)
                            
                            int64_t rdx_11 = rbx_4 * 9
                            *(*r9_1 + (rdx_11 << 2) + 0x20) = 1
                            int64_t rcx_20 = *r9_1
                            *(rcx_20 + (rdx_11 << 2)) = r8_4
                            *(rcx_20 + (rdx_11 << 2) + 4) = 0xffffffff
                            *(rcx_20 + (rdx_11 << 2) + 8) = var_168
                            *(rcx_20 + (rdx_11 << 2) + 0xc) = var_164
                            int32_t var_160
                            *(rcx_20 + (rdx_11 << 2) + 0x10) = var_160
                            *(rcx_20 + (rdx_11 << 2) + 0x14) = var_15c
                            *(rcx_20 + (rdx_11 << 2) + 0x18) = var_158
                            int32_t var_154
                            *(rcx_20 + (rdx_11 << 2) + 0x1c) = var_154
                            break
                        
                        i_1 += 1
                    while (i_1 s< 3)
                    
                    rax_12 = rdx_7
                
                r13_2 += 1
                r14_5 = &r14_5[6]
                r15_1 = &r15_1[4]
            while (r15_1 != rax_12)
            
            rdi = arg1
            
            if (var_218_1 != 0)
                zmm0_1, r9_1 = sub_1417253d0(&var_138, &var_1f8, 0)
                zmm13_1 = zmm0_1[0].q
            
            r13_1 = arg2
            r12 = arg5
    
    int32_t var_1e4
    uint32_t zmm4_1[0x4] = var_1e4
    int32_t var_1e8
    uint128_t zmm5_1 = var_1e8
    uint128_t zmm6_1 = var_1f8:0xc.d
    uint128_t zmm9_1 = var_1f8:8.d
    int64_t zmm7_1 = var_1f8:4.d
    zmm8_1 = var_1f8.d
    int32_t var_208_2
    
    if (zmm13_1.d f<= 0f)
        var_210 = r12
        uint32_t var_20c_3 = r12
        var_208_2 = r12
    else
        zmm0_1 = zmm6_1
        zmm0_1[0] = zmm0_1[0] f- zmm8_1[0]
        zmm2_1.d = 1f f/ zmm13_1.d
        zmm1_1.d = zmm5_1.d f- zmm7_1.d
        zmm0_1[0] = zmm0_1[0] f* zmm2_1.d
        zmm1_1.d = zmm1_1.d f* zmm2_1.d
        var_210 = int.d(zmm0_1[0])
        zmm4_1[0] = zmm4_1[0] f- zmm9_1.d
        zmm4_1[0] = zmm4_1[0] f* zmm2_1.d
        int32_t var_20c_2 = int.d(zmm1_1.d)
        var_208_2 = int.d(zmm4_1[0])
    
    int64_t var_1a8 = var_210.q
    uint32_t r8_6 = var_208_2 + 1
    uint32_t rcx_23 = var_1a8.d + 1
    uint32_t rdx_14 = var_1a8:4.d + 1
    uint32_t rax_31 = rcx_23
    
    if (rcx_23 s> r12)
        rax_31 = r12
        rcx_23 = r12
    
    uint32_t rax_32 = rdx_14
    
    if (rax_31 s< 0)
        rcx_23 = r12
    
    if (rdx_14 s> r12)
        rax_32 = r12
        rdx_14 = r12
    
    uint32_t rax_33 = r8_6
    
    if (rax_32 s< 0)
        rdx_14 = r12
    
    if (r8_6 s> r12)
        rax_33 = r12
        r8_6 = r12
    
    int32_t rax_34 = var_1f8:8.d
    zmm4_1[0] = zmm4_1[0] f- zmm9_1.d
    zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_23))
    
    if (rax_33 s< 0)
        r8_6 = r12
    
    char* r12_2 = nullptr
    int32_t i_7 = 0
    arg4.d = zmm6_1.d f- zmm8_1[0]
    zmm2_1.d = zmm5_1.d f- zmm7_1.d
    arg4.d = arg4.d f/ zmm0_1[0]
    zmm2_1.d = zmm2_1.d f/ _mm_cvtepi32_ps(zx.o(rdx_14))[0]
    zmm0_1 = _mm_cvtepi32_ps(zx.o(r8_6))
    zmm4_1[0] = zmm4_1[0] f/ zmm0_1[0]
    *(rdi + 0x20) = (_mm_unpacklo_ps(zmm8_1, zmm7_1)).q
    *(rdi + 0x28) = rax_34
    *(rdi + 0x2c) = (_mm_unpacklo_ps(zmm6_1, zmm5_1.q)).q
    *(rdi + 0x34) = var_1e4
    *(rdi + 0x38) = rcx_23
    *(rdi + 0x3c) = rdx_14
    *(rdi + 0x40) = r8_6
    *(rdi + 0x44) = (_mm_unpacklo_ps(arg4, zmm2_1.q)).q
    *(rdi + 0x4c) = zmm4_1[0]
    int32_t rbx_5 = *(rdi + 0x40)
    int32_t rax_37 = *(rdi + 0x3c)
    int32_t rcx_24 = *(rdi + 0x38)
    var_1f8:8.d = rbx_5
    var_1e8.q = 0
    var_1f8.d = rcx_24
    var_1f8:4.d = rax_37
    int32_t i_8 = rbx_5 * rax_37 * rcx_24
    
    if (i_8 s> 0)
        i_7 = i_8
        sub_1405a4f90(&var_1e8)
        memset(var_1e8.q, 0, sx.q(i_8) << 4)
    else if (i_8 s< 0)
        r9_1.b = 1
        sub_140838580(&var_1e8, i_8, neg.d(i_8), r9_1.b)
    
    *(rdi + 0x50) = var_1f8.d
    *(rdi + 0x54) = var_1f8:4.d
    *(rdi + 0x58) = var_1f8:8.d
    sub_141707010(rdi + 0x60, &var_1e8)
    int64_t* r14_6 = var_1e8.q
    int32_t i_5 = i_7
    int64_t* rbx_7 = r14_6
    
    if (i_5 != 0)
        int32_t i_2
        
        do
            int64_t rcx_29 = *rbx_7
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            rbx_7 = &rbx_7[2]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    if (r14_6 != 0)
        sub_140a74f90(r14_6)
    
    uint128_t* rsi_6 = *r13_1
    zmm10_1 = (zx.o(0)).q
    result = &rsi_6[sx.q(r13_1[1].d) * 4]
    uint128_t* var_1d8_2 = rsi_6
    void* const* result_1 = result
    
    if (rsi_6 == result)
        result.b = 1
    else
        int64_t* r15_2 = nullptr
        
        do
            if (*(r12_2 + var_1d0) != 0)
                int32_t* r12_3 = var_198
                int64_t zmm0_2
                zmm0_2.d = var_1c0.d f+ 1f
                var_1c0 = zmm0_2.d
                int64_t zmm1_2
                zmm1_2.d = (*(r15_2 + r12_3)).d f- *(rdi + 0x20)
                zmm2_1.d = (*(r15_2 + r12_3 + 4)).d f- *(rdi + 0x24)
                arg4.d = (*(r15_2 + r12_3 + 8)).d f- *(rdi + 0x28)
                zmm0_2.d = zmm1_2.d f/ *(rdi + 0x44)
                int32_t rax_43 = int.d(zmm0_2.d)
                zmm0_2.d = zmm2_1.q.d f/ *(rdi + 0x48)
                var_1a8.d = rax_43
                int32_t rcx_31 = int.d(zmm0_2.d)
                zmm0_2.d = arg4.q.d f/ *(rdi + 0x4c)
                var_1a8:4.d = rcx_31
                int32_t rdx_18 = int.d(zmm0_2.d)
                int32_t var_1a0_1 = rdx_18
                
                if (not(zmm1_2.d f>= 0f))
                    var_1a8.d = rax_43 - 1
                
                if (not(zmm2_1.d f>= 0f))
                    var_1a8:4.d = rcx_31 - 1
                
                if (not(arg4.d f>= 0f))
                    int32_t var_1a0_2 = rdx_18 - 1
                
                sub_1417a90d0(rdi + 0x20, &var_1f8, &var_1a8)
                zmm1_2.d = (*(r15_2 + r12_3 + 0xc)).d f- *(rdi + 0x20)
                zmm2_1.d = (*(r15_2 + r12_3 + 0x10)).d f- *(rdi + 0x24)
                arg4.d = (*(r15_2 + r12_3 + 0x14)).d f- *(rdi + 0x28)
                zmm0_2.d = zmm1_2.d f/ *(rdi + 0x44)
                uint32_t rax_47 = int.d(zmm0_2.d)
                zmm0_2.d = zmm2_1.q.d f/ *(rdi + 0x48)
                var_210 = rax_47
                int32_t rcx_33 = int.d(zmm0_2.d)
                zmm0_2.d = arg4.q.d f/ *(rdi + 0x4c)
                int32_t var_20c_4 = rcx_33
                int32_t rdx_20 = int.d(zmm0_2.d)
                int32_t var_208_4 = rdx_20
                
                if (not(zmm1_2.d f>= 0f))
                    var_210 = rax_47 - 1
                
                if (not(zmm2_1.d f>= 0f))
                    int32_t var_20c_5 = rcx_33 - 1
                
                if (not(arg4.d f>= 0f))
                    int32_t var_208_5 = rdx_20 - 1
                
                int64_t var_1b8
                sub_1417a90d0(rdi + 0x20, &var_1b8, &var_210)
                void* r9_2 = rdi + 0x80
                zmm11_1 = rsi_6[1]
                int64_t r14_7 = sx.q(*(r9_2 + 8))
                int32_t var_1b0
                int32_t r8_13 = var_1b0
                zmm12_1 = *rsi_6
                int32_t r13_3 = var_1f8:8.d
                zmm13_1 = rsi_6[2].q
                int64_t rbx_8 = sx.q(zmm11_1.d)
                var_168.q = var_1f8.q
                var_15c.q = var_1b8
                int64_t* arg_10
                arg_10.d = r8_13
                
                if (rbx_8.d s>= r14_7.d)
                    int32_t i_6 = rbx_8.d - r14_7.d + 1
                    int32_t rax_51 = r14_7.d + i_6
                    *(r9_2 + 8) = rax_51
                    
                    if (rax_51 s> *(r9_2 + 0xc))
                        sub_140adefe0(r9_2)
                        r8_13 = arg_10.d
                        r9_2 = rdi + 0x80
                    
                    if (i_6 != 0)
                        char* rax_54 = *r9_2 + r14_7 * 0x24 + 0x20
                        int32_t i_3
                        
                        do
                            *rax_54 = 0
                            rax_54 = &rax_54[0x24]
                            i_3 = i_6
                            i_6 -= 1
                        while (i_3 != 1)
                    
                    rsi_6 = var_1d8_2
                
                int64_t rdx_23 = rbx_8 * 9
                *(*r9_2 + (rdx_23 << 2) + 0x20) = 1
                int64_t rcx_37 = *r9_2
                *(rcx_37 + (rdx_23 << 2)) = -1
                *(rcx_37 + (rdx_23 << 2) + 8) = var_168
                *(rcx_37 + (rdx_23 << 2) + 0xc) = var_164
                *(rcx_37 + (rdx_23 << 2) + 0x10) = r13_3
                *(rcx_37 + (rdx_23 << 2) + 0x14) = var_15c
                *(rcx_37 + (rdx_23 << 2) + 0x18) = var_158
                *(rcx_37 + (rdx_23 << 2) + 0x1c) = r8_13
                int32_t rdx_24 = var_1f8.d
                int32_t rcx_38 = var_1b8.d
                arg_10.d = rdx_24
                
                if (rdx_24 s<= rcx_38)
                    int32_t r13_4 = var_1b0
                    result = zx.q(var_1b8:4.d)
                    
                    do
                        int32_t i_4 = var_1f8:4.d
                        
                        if (i_4 s<= result.d)
                            do
                                int32_t rsi_9 = var_1f8:8.d
                                
                                if (rsi_9 s<= r13_4)
                                    do
                                        int32_t rax_59 = *(r15_2 + r12_3 + 8)
                                        zmm6_1 = zx.o(*(r15_2 + r12_3))
                                        zmm7_1 = *(r15_2 + r12_3 + 0xc)
                                        zmm8_1 = zx.o(var_1f8.q)
                                        zmm9_1 = zx.o(var_1b8)
                                        uint64_t* var_180
                                        var_180.d = *(r15_2 + r12_3 + 0x14)
                                        int64_t* var_188
                                        var_188.d = var_1f8:8.d
                                        int64_t* rbx_11 = (sx.q(
                                            (*(rdi + 0x54) * rdx_24 + i_4) * *(rdi + 0x58) + rsi_9)
                                            << 4) + *(rdi + 0x60)
                                        int64_t rdi_2 = sx.q(rbx_11[1].d)
                                        int32_t rax_67 = (rdi_2 + 1).d
                                        rbx_11[1].d = rax_67
                                        
                                        if (rax_67 s> *(rbx_11 + 0xc))
                                            sub_1407755b0(rbx_11)
                                            rdx_24 = arg_10.d
                                        
                                        zmm10_1.d = zmm10_1.d f+ 1f
                                        rdi = arg1
                                        rsi_9 += 1
                                        uint64_t* rcx_41 = rdi_2 * 0x58 + *rbx_11
                                        *rcx_41 = zmm6_1.q
                                        rcx_41[1].d = rax_59
                                        *(rcx_41 + 0xc) = zmm7_1
                                        *(rcx_41 + 0x14) = var_180.d
                                        *(rcx_41 + 0x18) = zmm12_1
                                        *(rcx_41 + 0x28) = zmm11_1
                                        rcx_41[8] = zmm8_1.q
                                        *(rcx_41 + 0x4c) = zmm9_1.q
                                        rcx_41[7] = zmm13_1
                                        rcx_41[9].d = var_188.d
                                        *(rcx_41 + 0x54) = r13_4
                                        r13_4 = var_1b0
                                    while (rsi_9 s<= r13_4)
                                    
                                    result = zx.q(var_1b8:4.d)
                                
                                i_4 += 1
                            while (i_4 s<= result.d)
                            
                            rcx_38 = var_1b8.d
                        
                        rdx_24 += 1
                        arg_10.d = rdx_24
                    while (rdx_24 s<= rcx_38)
                    
                    rsi_6 = var_1d8_2
                
                r12_2 = var_178
            
            r12_2 = &r12_2[1]
            rsi_6 = &rsi_6[4]
            r15_2 = &r15_2[3]
            var_178 = r12_2
            var_1d8_2 = rsi_6
        while (rsi_6 != result_1)
        
        if (zmm10_1.d f== 0f)
            result.b = 1
        else
            result.b = 0
    
    void** rcx_42 = var_1d0
    *(rdi + 0x94) = result.b
    
    if (rcx_42 != 0)
        result = sub_140a74f90(rcx_42)
    
    int32_t* rcx_43 = var_198
    
    if (rcx_43 != 0)
        return sub_140a74f90(rcx_43)

return result
