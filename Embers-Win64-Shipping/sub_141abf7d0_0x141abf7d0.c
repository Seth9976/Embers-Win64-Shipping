// 函数: sub_141abf7d0
// 地址: 0x141abf7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* rbx = *(arg1 + 0x1e8)

if (rbx != 0)
    sub_14223c100(rbx)
    j_sub_140a74f90(rbx)

void* r13 = *(arg1 + 0xc8)
*(arg1 + 0x1e8) = 0
void* r14 = *(arg2 + 0x20)
void* var_230 = r13
void* rdi = *(r14 + 0x430)

if (r13 == 0)
    void* rax_3 = sub_141f64a80(r14)
    r13 = rax_3
    var_230 = rax_3

void* rbx_1 = *(arg2 + 0x28)
int32_t rax_4 = sub_141e41e60(rbx_1, rdi)
uint64_t i_11 = zx.q(*(rbx_1 + 0x80))
int64_t rax_7 = *(rbx_1 + 0x2f8)
*(arg1 + 0x230) = 0

if (i_11.d s> *(arg1 + 0x234))
    sub_1405dadb0(arg1 + 0x228, i_11.d)

*(arg1 + 0x230) = 0

if (*(arg1 + 0x234) != i_11.d)
    sub_1405dadb0(arg1 + 0x228, i_11.d)

if (i_11.d s> 0)
    uint64_t i_7 = i_11
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x230))
        int32_t rax_8 = (rdi_1 + 1).d
        *(arg1 + 0x230) = rax_8
        
        if (rax_8 s> *(arg1 + 0x234))
            sub_1405a4cf0(arg1 + 0x228)
        
        int32_t* rdx_5 = *(arg1 + 0x228) + (rdi_1 << 2)
        
        if (rdx_5 != 0)
            *rdx_5 = 0xffffffff
        
        i = i_7
        i_7 -= 1
    while (i != 1)

*(arg1 + 0x1a0) = *(r14 + 0x1c0)
*(arg1 + 0x1b0) = *(r14 + 0x1d0)
*(arg1 + 0x1c0) = *(r14 + 0x1e0)
int64_t* rax_10 = sub_142565030()
void* rcx_7 = rax_10[0x23]
char rax_11

if (rcx_7 != 0)
    *(arg1 + 0x1d4) = *(rcx_7 + 0xb8)
    rax_11 = *(rcx_7 + 0xbc)
else
    int64_t rdx_6 = *rax_10
    (*(rdx_6 + 0x390))(rax_10, rdx_6)
    rcx_7 = rax_10[0x23]
    
    if (rcx_7 == 0)
        *(arg1 + 0x1d4) = 0
        rax_11 = 0
    else
        *(arg1 + 0x1d4) = *(rcx_7 + 0xb8)
        rax_11 = *(rcx_7 + 0xbc)

*(arg1 + 0x1d8) = rax_11
int64_t rcx_9
int64_t rdi_3

if (r13 != 0 && (*(r14 + 0x71a) & 4) == 0)
    rdi_3 = data_143f2ba50
    
    if (data_143de5480 == 0)
        rcx_9 = 0
    else
        rcx_9.b = GetCurrentThreadId() != data_143de5470

if (r13 == 0 || (*(r14 + 0x71a) & 4) != 0 || *(rdi_3 + (rcx_9 << 2)) == 0)
    rcx_9 = 0
else
    rcx_9.b = 1

char result = (*(arg1 + 0x13d) & 0xfe) | rcx_9.b
*(arg1 + 0x13d) = result

if ((result & 1) != 0)
    int64_t* rax_14 = j_sub_140a82f30(0x20d0)
    int64_t* rax_15
    
    if (rax_14 == 0)
        rax_15 = nullptr
    else
        rax_15 = sub_14223af30(rax_14)
    
    *(arg1 + 0x1e8) = rax_15
    int32_t i_8 = *(r13 + 0x48)
    *(arg1 + 0x220) = 0
    
    if (*(arg1 + 0x224) != i_8)
        sub_1405c5570(arg1 + 0x218, i_8)
    
    sub_140908eb0(arg1 + 0x268)
    *(arg1 + 0x240) = 0
    
    if (i_8 s> *(arg1 + 0x244))
        sub_1405a52a0(arg1 + 0x238, i_8)
    
    int64_t rsi_1 = sx.q(*(arg1 + 0x240))
    int32_t rax_16 = rsi_1.d + i_8
    *(arg1 + 0x240) = rax_16
    
    if (rax_16 s> *(arg1 + 0x244))
        sub_1405c4fe0(arg1 + 0x238)
    
    int32_t* rcx_17 = (rsi_1 << 6) + *(arg1 + 0x238)
    uint64_t r12_2 = 0
    
    if (i_8 != 0)
        void* rax_17 = &rcx_17[6]
        int32_t i_1
        
        do
            *rcx_17 = 0
            rcx_17 = &rcx_17[0x10]
            *(rax_17 - 0x14) = 0
            *(rax_17 - 0xc) = 0x3f800000
            *(rax_17 - 4) = 0
            *(rax_17 + 0x18) &= 0xfc
            *(rax_17 + 4) = 2
            *(rax_17 + 8) = 2
            *(rax_17 + 0xc) = 2
            *(rax_17 + 0x14) = 0
            rax_17 += 0x40
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    bool cond:2_1 = *(arg1 + 0x121) != 1
    *(arg1 + 0x2d4) = 0
    void** i_5 = nullptr
    int32_t var_1f0_1 = 0
    void** var_1c8 = nullptr
    int32_t var_1c0_1 = 0
    int32_t var_228
    float var_1a0
    int32_t* rdi_4
    
    if (cond:2_1)
        var_228 = 0x3f800000
        rdi_4 = &var_228
        int32_t var_224_1 = 0x3f800000
        int32_t var_220_1 = 0x3f800000
    else
        float zmm1[0x4] = *(r14 + 0x1e0)
        rdi_4 = &var_1a0
        var_1a0 = zmm1[0]
        float zmm0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_198_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_19c_1 = zmm0_1[0]
    
    int64_t var_168
    int128_t zmm6_1 = sub_142318390(r14, r13, rdi_4, &i_5, &var_1c8, nullptr, nullptr, 0xffffffff, 
        RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
            &var_168), 
        0)
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    int32_t var_ec_1 = 0x80
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x1c)
    int32_t var_e8_1 = 0xffffffff
    int32_t var_e4_1 = 0
    void* var_d8_1 = nullptr
    int32_t var_d0_1 = 0
    int64_t var_1d8 = 0
    int64_t var_1d0_1 = 0
    uint64_t var_1b8 = 0
    int32_t var_1b0_1 = 0
    sub_141a99280(&var_1b8, r14)
    int64_t rsi_2 = sx.q(var_1b0_1)
    int64_t rax_19 = 0
    int64_t var_190 = 0
    int32_t var_184_1 = 0
    int32_t var_188_1 = rsi_2.d
    
    if (rsi_2.d s> 0)
        sub_1405a4d70(&var_190)
        rax_19 = var_190
    
    int64_t count = rsi_2 << 3
    var_168 = rsi_2
    int64_t r13_1 = rsi_2
    memset(rax_19, 0, count)
    uint64_t var_218 = 0
    int32_t var_20c_1 = 0
    int32_t var_210_1 = rsi_2.d
    
    if (rsi_2.d s> 0)
        sub_1405a4d70(&var_218)
        r12_2 = var_218
    
    memset(r12_2, 0, count)
    int64_t* i_10 = i_5
    int64_t r14_1 = 0
    void* rcx_25 = &i_10[sx.q(var_1f0_1)]
    uint64_t r15_4 = (rcx_25 - i_10 + 7) u>> 3
    
    if (i_10 u> rcx_25)
        r15_4 = 0
    
    if (r15_4 != 0)
        do
            void* rdi_5 = *i_10
            
            if (sub_14221b2f0(rdi_5) != 0)
                *(r12_2 + (sx.q(*(rdi_5 + 4)) << 3)) = rdi_5
            
            i_10 = &i_10[1]
            r14_1 += 1
        while (r14_1 != r15_4)
    
    uint64_t rdi_10 = var_1b8
    int64_t r15_5 = 0
    uint64_t r14_2 = rdi_10
    int64_t rax_23 = rdi_10 + (r13_1 << 1)
    uint64_t r12_6 = (rax_23 - rdi_10 + 1) u>> 1
    
    if (rdi_10 u> rax_23)
        r12_6 = 0
    
    bool var_238
    void* var_148
    void* var_98
    
    if (r12_6 != 0)
        uint64_t rax_24 = var_218
        int128_t var_48_1 = zmm6_1
        
        do
            uint64_t r13_2 = zx.q(*r14_2)
            int32_t* rsi_3 = *(rax_24 + (r13_2 << 3))
            
            if (rsi_3 != 0)
                void* rax_27 = *(*(var_230 + 0x40) + (sx.q(*rsi_3) << 3))
                var_1a0.q = rax_27
                char rdi_6 = *(rax_27 + 0x88)
                var_238 = rdi_6 == 2
                int128_t* rax_28 = sub_142218ad0(rsi_3, &var_98, 1, 0)
                int32_t rdx_15
                rdx_15.b = rdi_6 == 2
                int64_t* rax_30
                float zmm7_1
                rax_30, zmm6_1, zmm7_1 = sub_1422433e0(*(arg1 + 0x1e8), rdx_15 + 1, rsi_3, rax_28)
                var_228.q = rax_30
                int64_t* rcx_30 = rax_30
                
                if (rax_30 != 0)
                    if (rdi_6 == 2)
                        float zmm0_2 = sub_14224f430(rcx_30)
                        float zmm1_1
                        
                        if (zmm0_2 f<= zmm6_1.d)
                            zmm1_1 = zmm6_1.d
                        else
                            zmm1_1 = zmm7_1 / zmm0_2
                        
                        rcx_30 = var_228.q
                        *(arg1 + 0x2d4) = zmm1_1 f+ *(arg1 + 0x2d4)
                    
                    void* r8_6 = arg1 + 0x218
                    int64_t rdi_7 = sx.q(*(r8_6 + 8))
                    int32_t rax_32 = (rdi_7 + 1).d
                    *(r8_6 + 8) = rax_32
                    
                    if (rax_32 s> *(r8_6 + 0xc))
                        sub_1405a4d70(r8_6)
                        rcx_30 = var_228.q
                        r8_6 = arg1 + 0x218
                    
                    int64_t rdx_19 = rdi_7 << 6
                    *(*r8_6 + (rdi_7 << 3)) = rcx_30
                    *(*(arg1 + 0x228)
                        + (sx.q(*(*((sx.q(rax_4) << 5) + rax_7 + 0x10) + (r13_2 << 2))) << 2)) =
                        rdi_7.d
                    void* rdi_8 = var_1a0.q
                    int64_t rax_38 = *(arg1 + 0x238)
                    *(rdx_19 + rax_38 + 0x30) &= 0xfe
                    *(rdx_19 + rax_38 + 0x30) |= var_238
                    var_148 = rdi_8 + 0x80
                    int32_t* var_140_1 = &var_228
                    void var_160
                    sub_140a5c490(&var_118, &var_160, &var_148, nullptr)
                    *(var_190 + (sx.q(*rsi_3) << 3)) = var_228.q
                    
                    if (*(rdi_8 + 0x8b) == 1)
                        int64_t rdi_9 = sx.q(var_1d0_1.d)
                        int32_t rax_41 = (rdi_9 + 1).d
                        var_1d0_1.d = rax_41
                        
                        if (rax_41 s> var_1d0_1:4.d)
                            sub_1405a4d70(&var_1d8)
                        
                        *(var_1d8 + (rdi_9 << 3)) = var_228.q
                
                rax_24 = var_218
            
            r14_2 += 2
            r15_5 += 1
        while (r15_5 != r12_6)
        
        r13_1 = var_168
        rdi_10 = var_1b8
    
    void* const r14_3 = nullptr
    int64_t var_180 = 0
    int32_t var_174_1 = 0
    int32_t var_178_1 = var_1b0_1
    
    if (var_1b0_1 s> 0)
        sub_1405a4cf0(&var_180)
    
    int32_t r8_8 = 0
    
    if (r13_1 s> 0)
        int64_t rdx_24 = 0
        
        do
            uint64_t rcx_40 = zx.q(*(rdi_10 + (rdx_24 << 1)))
            rdx_24 += 1
            *(var_180 + (rcx_40 << 2)) = r8_8
            r8_8 += 1
        while (rdx_24 s< r13_1)
    
    void** rcx_41 = var_1c8
    var_148 = &var_180
    void* var_140_2 = rdi + 0x188
    sub_141a8a0d0(rcx_41, var_1c0_1, var_238, &var_148)
    float var_c8[0x4]
    void* r15_7
    float zmm2_1[0x4]
    
    if (var_110_1 - var_e4_1 s<= 0)
        r15_7 = arg1
    else
        int32_t r12_7 = 0
        
        if (var_1c0_1 s> 0)
            int64_t r15_6 = 0
            
            do
                void* rdi_11 = *(var_1c8 + r15_6)
                int64_t rbx_3 = *(rdi_11 + 0x20)
                void var_e0
                void* const i_3
                
                if (var_110_1 == var_e4_1)
                label_141abffb7:
                    i_3 = nullptr
                else
                    void* rcx_45 = &var_e0
                    int64_t rdx_28 = sx.q(var_d0_1 - 1) & sx.q(sub_140b5ead0(rbx_3.d) + rbx_3:4.d)
                    
                    if (var_d8_1 != 0)
                        rcx_45 = var_d8_1
                    
                    int32_t rax_54 = *(rcx_45 + (rdx_28 << 2))
                    
                    if (rax_54 == 0xffffffff)
                    label_141abffb7_1:
                        i_3 = nullptr
                    else
                        int64_t r8_10 = var_118
                        int64_t rcx_46
                        
                        while (true)
                            rcx_46 = sx.q(rax_54)
                            int64_t rdx_29 = rcx_46 * 3
                            
                            if (*(r8_10 + (rdx_29 << 3)) == rbx_3)
                                break
                            
                            rax_54 = *(r8_10 + (rdx_29 << 3) + 0x10)
                            
                            if (rax_54 == 0xffffffff)
                                goto label_141abffb7_3
                        
                        if (rax_54 == 0xffffffff)
                        label_141abffb7_2:
                            i_3 = nullptr
                        else
                            void* rsi_4 = r8_10 + rcx_46 * 0x18
                            
                            if (rsi_4 == 0)
                            label_141abffb7_3:
                                i_3 = nullptr
                            else
                                i_3 = *(rsi_4 + 8)
                
                int64_t rbx_4 = *(rdi_11 + 0x28)
                
                if (var_110_1 != var_e4_1)
                    void* rcx_50 = &var_e0
                    int64_t rdx_31 = sx.q(var_d0_1 - 1) & sx.q(sub_140b5ead0(rbx_4.d) + rbx_4:4.d)
                    
                    if (var_d8_1 != 0)
                        rcx_50 = var_d8_1
                    
                    int32_t i_2 = *(rcx_50 + (rdx_31 << 2))
                    
                    if (i_2 != 0xffffffff)
                        int64_t r8_11 = var_118
                        
                        do
                            int64_t i_6 = sx.q(i_2)
                            int64_t rdx_32 = i_6 * 3
                            
                            if (*(r8_11 + (rdx_32 << 3)) == rbx_4)
                                if (i_2 != 0xffffffff)
                                    r14_3 = r8_11 + i_6 * 0x18
                                    
                                    if (r14_3 != 0)
                                        r14_3 = *(r14_3 + 8)
                                
                                break
                            
                            i_2 = *(r8_11 + (rdx_32 << 3) + 0x10)
                        while (i_2 != 0xffffffff)
                
                if (i_3 != 0 && r14_3 != 0)
                    char rax_62 = sub_14224fe60(i_3)
                    char rax_63
                    
                    if (rax_62 == 0)
                        rax_63 = sub_14224fe60(r14_3)
                    
                    if (rax_62 != 0 || rax_63 != 0)
                        sub_142244610(*(arg1 + 0x1e8), rdi_11, i_3, r14_3)
                        
                        if (*(arg1 + 0x122) != 0)
                            int32_t rax_64 = sub_142249710(var_230, *(rdi_11 + 0x20))
                            int32_t rax_65 = sub_142249710(var_230, *(rdi_11 + 0x28))
                            
                            if (rax_64 != 0xffffffff && rax_65 != 0xffffffff)
                                sub_142246d20(var_230, rax_64, rax_65)
                        
                        int64_t* r8_14 = *(arg1 + 0x218)
                        int64_t* rcx_57 = r8_14
                        void* rdx_37 = &r8_14[sx.q(*(arg1 + 0x220))]
                        int32_t rcx_58
                        
                        if (r8_14 == rdx_37)
                        label_141ac0112:
                            rcx_58 = -1
                        else
                            while (*rcx_57 != i_3)
                                rcx_57 = &rcx_57[1]
                                
                                if (rcx_57 == rdx_37)
                                    goto label_141ac0112
                            
                            rcx_58 = ((rcx_57 - r8_14) s>> 3).d
                        
                        if (rcx_58 != 0xffffffff)
                            int64_t rbx_8 = sx.q(rcx_58) << 6
                            *(rbx_8 + *(arg1 + 0x238) + 0x1c) = zx.d(*(rdi_11 + 0xb4))
                            *(rbx_8 + *(arg1 + 0x238) + 0x20) = zx.d(*(rdi_11 + 0xb5))
                            *(rbx_8 + *(arg1 + 0x238) + 0x24) = zx.d(*(rdi_11 + 0xb6))
                            *(rbx_8 + *(arg1 + 0x238) + 0x28) = *(rdi_11 + 0xb0)
                            sub_14224f610(i_3, &var_c8)
                            sub_14224f610(r14_3, &var_98)
                            float zmm1_3[0x4] = sub_140ad7d70(&var_c8, &var_148, &var_98)[1]
                            int64_t rax_73 = *(arg1 + 0x238)
                            float zmm0_4 = zmm1_3[0] * zmm1_3[0]
                            zmm2_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                            zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                            zmm1_3 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)
                            zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
                            zmm2_1[0] = zmm2_1[0] + zmm0_4
                            zmm2_1[0] = zmm2_1[0] + zmm1_3[0]
                            *(rbx_8 + rax_73 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])
                
                sub_1422352a0(rdi_11)
                int32_t rax_74 = *(rdi_11 + 0x1b0)
                r14_3 = nullptr
                int64_t* rcx_63
                int64_t* r8_16
                
                if (rax_74 == 0)
                    r8_16 = *(rdi_11 + 0x1a8)
                    rcx_63 = nullptr
                else
                    rcx_63 = *(rdi_11 + 0x1a8)
                    r8_16 = rcx_63
                
                int64_t rax_75
                
                if (rcx_63 != 0)
                    rax_75 = *rcx_63
                label_141ac0224:
                    (*(rax_75 + 0x38))(rcx_63, 0)
                    int64_t rcx_65 = *(rdi_11 + 0x1a8)
                    
                    if (rcx_65 != 0)
                        *(rdi_11 + 0x1a8) = sub_140a84c80(rcx_65, 0, 0)
                    
                    *(rdi_11 + 0x1b0) = 0
                else if (rax_74 != 0 && r8_16 != 0)
                    rax_75 = *r8_16
                    rcx_63 = r8_16
                    goto label_141ac0224
                int64_t rcx_66 = *(rdi_11 + 0x1a8)
                
                if (rcx_66 != 0)
                    sub_140a74f90(rcx_66)
                
                j_sub_140a74f90(rdi_11)
                r12_7 += 1
                r15_6 += 8
            while (r12_7 s< var_1c0_1)
        
        r15_7 = arg1
        *(r15_7 + 0x13c) = 2
    
    for (void** i_4 = i_5; i_4 != &i_4[sx.q(var_1f0_1)]; i_4 = &i_4[1])
        void* rdi_12 = *i_4
        
        if (sub_14221b2f0(rdi_12) != 0)
            sub_142225820(rdi_12, 1)
        
        if (rdi_12 != 0)
            int64_t* rbx_9 = *(rdi_12 + 0x128)
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t temp5_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_9 + 8))(rbx_9, 1)
            
            int64_t* rcx_72 = *(rdi_12 + 0x108)
            
            if (rcx_72 != 0)
                sub_1419df960(rcx_72, 1)
            
            int32_t j_2 = *(rdi_12 + 0xe8)
            void* rcx_73 = *(rdi_12 + 0xe0)
            
            if (j_2 != 0)
                void* rbx_10 = rcx_73 + 0x50
                int32_t j
                
                do
                    int64_t rcx_74 = *(rbx_10 + 0x10)
                    
                    if (rcx_74 != 0)
                        sub_140a74f90(rcx_74)
                    
                    int64_t rcx_75 = *rbx_10
                    
                    if (rcx_75 != 0)
                        sub_140a74f90(rcx_75)
                    
                    rbx_10 += 0x70
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                rcx_73 = *(rdi_12 + 0xe0)
            
            if (rcx_73 != 0)
                sub_140a74f90(rcx_73)
            
            int32_t j_3 = *(rdi_12 + 0xd8)
            void* rcx_76 = *(rdi_12 + 0xd0)
            
            if (j_3 != 0)
                void* rbx_11 = rcx_76 + 0x50
                int32_t j_1
                
                do
                    int64_t rcx_77 = *(rbx_11 + 0x10)
                    
                    if (rcx_77 != 0)
                        sub_140a74f90(rcx_77)
                    
                    int64_t rcx_78 = *rbx_11
                    
                    if (rcx_78 != 0)
                        sub_140a74f90(rcx_78)
                    
                    rbx_11 += 0x70
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                rcx_76 = *(rdi_12 + 0xd0)
            
            if (rcx_76 != 0)
                sub_140a74f90(rcx_76)
            
            int64_t rcx_79 = *(rdi_12 + 0x48)
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            j_sub_140a74f90(rdi_12)
    
    var_1f0_1 = 0
    int32_t var_210_2 = 0
    
    if (var_20c_1 != 0)
        sub_1405c5570(&var_218, 0)
    
    int32_t rbx_12 = 0
    int64_t var_1e8 = 0
    int32_t rcx_83 = 0
    int32_t var_1e0_1 = 0
    int32_t r10_1 = 0
    int32_t var_1dc_1 = 0
    int32_t r8_17 = 0
    var_148.d = 0
    int32_t r11_1 = *(var_230 + 0xf8)
    void* r9_5 = var_230 + 0xe0
    var_148:4.d = 1
    void* var_140_3 = r9_5
    int32_t var_138_1 = 0xffffffff
    int64_t var_134_1 = 0
    
    if (r11_1 != 0)
        void* rax_81 = *(r9_5 + 0x10)
        
        if (rax_81 != 0)
            r9_5 = rax_81
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_49 = *r9_5
        
        if (rdx_49 != 0)
        label_141ac0498:
            int32_t rax_88 = neg.d(rdx_49) & rdx_49
            uint64_t rflags_1
            int32_t temp0_6
            temp0_6, rflags_1 = _bit_scan_reverse(rax_88)
            var_148:4.d = rax_88
            int32_t rax_89
            
            if (rax_88 == 0)
                rax_89 = 0x20
            else
                rax_89 = 0x1f - temp0_6
            
            var_134_1.d = r8_17 - rax_89 + 0x1f
            
            if (r8_17 - rax_89 + 0x1f s> r11_1)
                var_134_1.d = r11_1
        else
            while (true)
                int64_t rdx_50 = sx.q(rcx_83)
                r8_17 += 0x20
                rcx_83 += 1
                var_134_1:4.d = r8_17
                var_148.d = rcx_83
                
                if (rdx_50.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_49 = *(r9_5 + (rdx_50 << 2) + 4)
                var_138_1 = 0xffffffff
                
                if (rdx_49 != 0)
                    goto label_141ac0498
            
            var_134_1.d = r11_1
    
    zmm2_1 = var_138_1.o
    var_98 = var_230 + 0xd0
    int64_t rsi_6 = var_190
    float var_90_1[0x4] = var_148.o
    uint32_t rax_92 = (zmm2_1[0].q u>> 0x20).d
    float var_80_1[0x4] = zmm2_1
    var_c8 = var_98.o
    int64_t var_a8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0].q)).q
    
    if (rax_92 s< r11_1)
        float rcx_85 = var_90_1[3]
        
        while (true)
            int64_t r8_19 = sx.q(rcx_85) * 5
            int64_t rdx_51 = *var_c8[0].q
            int64_t rax_96 = sx.q(*(rdx_51 + (r8_19 << 2) + 4))
            var_148 = *(rsi_6 + (sx.q(*(rdx_51 + (r8_19 << 2))) << 3))
            int64_t var_140_4 = *(rsi_6 + (rax_96 << 3))
            
            if (rbx_12 + 1 s> r10_1)
                sub_1405a4f90(&var_1e8)
            
            *(var_1e8 + sx.q(rbx_12) * 0x10) = var_148.o
            var_90_1[2] &= not.d(var_c8[3])
            sub_14059bdd0(&var_c8[2])
            rcx_85 = var_90_1[3]
            
            if (rcx_85 s>= *(var_90_1[0].q + 0x18))
                break
            
            r10_1 = var_1dc_1
            rbx_12 += 1
    
    sub_1422521d0(*(r15_7 + 0x1e8), &var_1e8)
    sub_142251fe0(*(r15_7 + 0x1e8), &var_1d8)
    void* rcx_94 = *(r15_7 + 0x1e8)
    *(r15_7 + 0x1f0) = *(var_230 + 0x60)
    *(r15_7 + 0x200) = *(var_230 + 0x70)
    int64_t* var_258_1
    var_258_1.d = *(r15_7 + 0x204)
    void* const var_260_1
    var_260_1.d = *(r15_7 + 0x200)
    int64_t* var_268_1
    var_268_1.d = *(r15_7 + 0x1fc)
    sub_142252c50(rcx_94, *(r15_7 + 0x1f0), *(r15_7 + 0x1f4), *(r15_7 + 0x1f8), var_268_1.d, 
        var_260_1.d, var_258_1.d)
    int64_t rcx_95 = var_1e8
    
    if (rcx_95 != 0)
        sub_140a74f90(rcx_95)
    
    int64_t rcx_96 = var_180
    
    if (rcx_96 != 0)
        sub_140a74f90(rcx_96)
    
    uint64_t rax_105 = var_218
    
    if (rax_105 != 0)
        sub_140a74f90(rax_105)
    
    if (rsi_6 != 0)
        sub_140a74f90(rsi_6)
    
    uint64_t rcx_99 = var_1b8
    
    if (rcx_99 != 0)
        sub_140a74f90(rcx_99)
    
    int64_t rcx_100 = var_1d8
    
    if (rcx_100 != 0)
        sub_140a74f90(rcx_100)
    
    int32_t var_d0_2 = 0
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
    
    var_110_1 = 0
    int32_t var_e8_2 = 0xffffffff
    int32_t var_e4_2 = 0
    result = sub_14059a8e0(&var_108, 0)
    int64_t var_f8
    
    if (var_f8 != 0)
        result = sub_140a74f90(var_f8)
    
    int64_t rcx_105 = var_118
    
    if (rcx_105 != 0)
        result = sub_140a74f90(rcx_105)
    
    void** rcx_106 = var_1c8
    
    if (rcx_106 != 0)
        result = sub_140a74f90(rcx_106)
    
    void** i_9 = i_5
    
    if (i_9 != 0)
        result = sub_140a74f90(i_9)

__security_check_cookie(rax_1 ^ &var_288)
return result
