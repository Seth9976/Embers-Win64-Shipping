// 函数: sub_141abe850
// 地址: 0x141abe850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* rbx = *(arg1 + 0x1f0)
void* r14 = arg1

if (rbx != 0)
    sub_14223c330(rbx)
    j_sub_140a74f90(rbx)

uint64_t r13 = 0
*(r14 + 0x1f0) = 0
void* r15 = *(arg2 + 0x20)
void* rdi = *(r15 + 0x430)
int64_t rax_3 = *(r14 + 0xc8)

if (rax_3 == 0)
    rax_3 = sub_141f64a80(r15)

*(r14 + 0x160) = rax_3
void* rbx_1 = *(arg2 + 0x28)
int32_t rax_4 = sub_141e41e60(rbx_1, rdi)
uint64_t i_11 = zx.q(*(rbx_1 + 0x80))
int64_t rax_7 = *(rbx_1 + 0x2f8)
*(r14 + 0x238) = 0

if (i_11.d s> *(r14 + 0x23c))
    sub_1405dadb0(r14 + 0x230, i_11.d)

*(r14 + 0x238) = 0

if (*(r14 + 0x23c) != i_11.d)
    sub_1405dadb0(r14 + 0x230, i_11.d)

if (i_11.d s> 0)
    uint64_t i_7 = i_11
    uint64_t i
    
    do
        int64_t rdi_1 = sx.q(*(r14 + 0x238))
        int32_t rax_8 = (rdi_1 + 1).d
        *(r14 + 0x238) = rax_8
        
        if (rax_8 s> *(r14 + 0x23c))
            sub_1405a4cf0(r14 + 0x230)
        
        int32_t* rdx_5 = *(r14 + 0x230) + (rdi_1 << 2)
        
        if (rdx_5 != 0)
            *rdx_5 = 0xffffffff
        
        i = i_7
        i_7 -= 1
    while (i != 1)

*(r14 + 0x130) = *(r15 + 0x1c0)
*(r14 + 0x140) = *(r15 + 0x1d0)
*(r14 + 0x150) = *(r15 + 0x1e0)
int64_t* rax_10 = sub_142565030()
void* rcx_7 = rax_10[0x23]
char rax_11

if (rcx_7 != 0)
    *(r14 + 0x1e0) = *(rcx_7 + 0xb8)
    rax_11 = *(rcx_7 + 0xbc)
else
    int64_t rdx_6 = *rax_10
    (*(rdx_6 + 0x390))(rax_10, rdx_6)
    rcx_7 = rax_10[0x23]
    
    if (rcx_7 == 0)
        *(r14 + 0x1e0) = 0
        rax_11 = 0
    else
        *(r14 + 0x1e0) = *(rcx_7 + 0xb8)
        rax_11 = *(rcx_7 + 0xbc)

*(r14 + 0x1e4) = rax_11
int64_t rcx_9
int64_t rdi_3

if (*(r14 + 0x160) != 0 && (*(r15 + 0x71a) & 4) == 0)
    rdi_3 = data_143f2ba50
    
    if (data_143de5480 == 0)
        rcx_9 = 0
    else
        rcx_9.b = GetCurrentThreadId() != data_143de5470

if (*(r14 + 0x160) == 0 || (*(r15 + 0x71a) & 4) != 0 || *(rdi_3 + (rcx_9 << 2)) == 0)
    rcx_9 = 0
else
    rcx_9.b = 1

char result = (*(r14 + 0x1d8) & 0xfe) | rcx_9.b
*(r14 + 0x1d8) = result

if ((result & 1) != 0)
    void* rax_14 = j_sub_140a82f30(0x2a0)
    void* const rax_15
    
    if (rax_14 == 0)
        rax_15 = nullptr
    else
        rax_15 = sub_14223b270(rax_14)
    
    *(r14 + 0x1f0) = rax_15
    int32_t i_8 = *(*(r14 + 0x160) + 0x48)
    *(r14 + 0x228) = 0
    
    if (*(r14 + 0x22c) != i_8)
        sub_1405c5570(r14 + 0x220, i_8)
    
    sub_140908eb0(r14 + 0x270)
    *(r14 + 0x248) = 0
    
    if (i_8 s> *(r14 + 0x24c))
        sub_1405a52a0(r14 + 0x240, i_8)
    
    int64_t rsi_1 = sx.q(*(r14 + 0x248))
    int32_t rax_17 = rsi_1.d + i_8
    *(r14 + 0x248) = rax_17
    
    if (rax_17 s> *(r14 + 0x24c))
        sub_1405c4fe0(r14 + 0x240)
    
    int32_t* rcx_17 = (rsi_1 << 6) + *(r14 + 0x240)
    
    if (i_8 != 0)
        void* rax_18 = &rcx_17[6]
        int32_t i_1
        
        do
            *rcx_17 = 0
            rcx_17 = &rcx_17[0x10]
            *(rax_18 - 0x14) = 0
            *(rax_18 - 0xc) = 0x3f800000
            *(rax_18 - 4) = 0
            *(rax_18 + 0x18) &= 0xfc
            *(rax_18 + 4) = 2
            *(rax_18 + 8) = 2
            *(rax_18 + 0xc) = 2
            *(rax_18 + 0x14) = 0
            rax_18 += 0x40
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    bool cond:2_1 = *(r14 + 0x1b9) != 1
    *(r14 + 0x2dc) = 0
    void** i_5 = nullptr
    int32_t var_208_1 = 0
    int64_t var_1d0 = 0
    int32_t var_1c8_1 = 0
    int32_t var_1c0
    float var_190
    int128_t* rdi_4
    
    if (cond:2_1)
        var_1c0 = 0x3f800000
        rdi_4 = &var_1c0
        int32_t var_1bc_1 = 0x3f800000
        int32_t var_1b8_1 = 0x3f800000
    else
        float zmm1[0x4] = *(r15 + 0x1e0)
        rdi_4 = &var_190
        var_190 = zmm1[0]
        float zmm0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_188_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        float var_18c_1 = zmm0_1[0]
    
    void* var_170
    int64_t* rax_19 = RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
        &var_170)
    int128_t zmm6_1 = sub_142318390(r15, *(r14 + 0x160), rdi_4, &i_5, &var_1d0, nullptr, nullptr, 
        0xffffffff, rax_19, 0)
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x2c)
    int32_t var_ec_1 = 0x80
    int32_t var_e8_1 = 0xffffffff
    int32_t var_e4_1 = 0
    void* var_d8_1 = nullptr
    int32_t var_d0_1 = 0
    int64_t var_1e0 = 0
    int64_t var_1d8_1 = 0
    uint64_t var_1a0 = 0
    int32_t var_198_1 = 0
    sub_141a99280(&var_1a0, r15)
    int64_t rdi_5 = sx.q(var_208_1)
    int64_t rax_20 = 0
    int64_t var_1b0 = 0
    int32_t var_1a4_1 = 0
    int32_t var_1a8_1 = rdi_5.d
    
    if (rdi_5.d s> 0)
        sub_1405a4d70(&var_1b0)
        rax_20 = var_1b0
    
    memset(rax_20, 0, rdi_5 << 3)
    int64_t rdi_6 = sx.q(var_198_1)
    uint64_t var_220 = 0
    int32_t var_214_1 = 0
    int32_t var_218_1 = rdi_6.d
    
    if (rdi_6.d s> 0)
        sub_1405a4d70(&var_220)
        r13 = var_220
    
    var_1c0.q = rdi_6
    memset(r13, 0, rdi_6 << 3)
    int64_t* i_10 = i_5
    int64_t r15_1 = 0
    void* rcx_25 = &i_10[sx.q(var_208_1)]
    uint64_t r12_5 = (rcx_25 - i_10 + 7) u>> 3
    
    if (i_10 u> rcx_25)
        r12_5 = 0
    
    if (r12_5 != 0)
        do
            void* rdi_7 = *i_10
            
            if (sub_14221b2f0(rdi_7) != 0)
                *(r13 + (sx.q(*(rdi_7 + 4)) << 3)) = rdi_7
            
            i_10 = &i_10[1]
            r15_1 += 1
        while (r15_1 != r12_5)
        
        rdi_6 = var_1c0.q
    
    uint64_t rsi_5 = var_1a0
    int64_t r12_6 = 0
    uint64_t r15_2 = rsi_5
    int64_t rax_24 = rsi_5 + (rdi_6 << 1)
    uint64_t r13_4 = (rax_24 - rsi_5 + 1) u>> 1
    
    if (rsi_5 u> rax_24)
        r13_4 = 0
    
    bool var_228
    void* var_148
    void* var_98
    
    if (r13_4 != 0)
        uint64_t rcx_27 = var_220
        int128_t var_48_1 = zmm6_1
        
        do
            uint64_t rax_25 = zx.q(*r15_2)
            var_190.q = rax_25
            int32_t* rdi_8 = *(rcx_27 + (rax_25 << 3))
            
            if (rdi_8 != 0)
                void* rax_27 = *(*(*(r14 + 0x160) + 0x40) + (sx.q(*rdi_8) << 3))
                var_170 = rax_27
                char rsi_2 = *(rax_27 + 0x88)
                var_228 = rsi_2 == 2
                int128_t* rax_28 = sub_142218ad0(rdi_8, &var_98, 1, 0)
                int32_t rdx_16
                rdx_16.b = rsi_2 == 2
                void* rax_29
                float zmm7_1
                rax_29, zmm6_1, zmm7_1 = sub_142243560(*(r14 + 0x1f0), rdx_16 + 1, rdi_8, rax_28)
                void* var_1f8 = rax_29
                void* r9_3 = rax_29
                
                if (rax_29 != 0)
                    if (rsi_2 == 2)
                        float zmm1_1 =
                            *(sx.q(*(rax_29 + 0x38)) * 0x60 + *(*(rax_29 + 0x30) + 0x50) + 0xc)
                        float zmm0_2
                        
                        if (zmm1_1 f<= zmm6_1.d)
                            zmm0_2 = zmm6_1.d
                        else
                            zmm0_2 = zmm7_1 / zmm1_1
                        
                        *(r14 + 0x2dc) = zmm0_2 f+ *(r14 + 0x2dc)
                    
                    void* rcx_33 = r14 + 0x220
                    int64_t rsi_3 = sx.q(*(rcx_33 + 8))
                    int32_t rax_30 = (rsi_3 + 1).d
                    *(rcx_33 + 8) = rax_30
                    
                    if (rax_30 s> *(rcx_33 + 0xc))
                        sub_1405a4d70(rcx_33)
                        r9_3 = var_1f8
                        rcx_33 = r14 + 0x220
                    
                    int64_t rdx_21 = rsi_3 << 6
                    *(*rcx_33 + (rsi_3 << 3)) = r9_3
                    *(*(r14 + 0x230) +
                        (sx.q(*(*((sx.q(rax_4) << 5) + rax_7 + 0x10) + (var_190.q << 2))) << 2)) =
                        rsi_3.d
                    int64_t rax_35 = *(r14 + 0x240)
                    void* rsi_4 = var_170
                    *(rdx_21 + rax_35 + 0x30) &= 0xfe
                    *(rdx_21 + rax_35 + 0x30) |= var_228
                    var_148 = rsi_4 + 0x80
                    void** var_140_1 = &var_1f8
                    void var_168
                    sub_140a5c490(&var_118, &var_168, &var_148, nullptr)
                    *(var_1b0 + (sx.q(*rdi_8) << 3)) = var_1f8
                    
                    if (*(rsi_4 + 0x8b) == 1)
                        int64_t rdi_9 = sx.q(var_1d8_1.d)
                        int32_t rax_38 = (rdi_9 + 1).d
                        var_1d8_1.d = rax_38
                        
                        if (rax_38 s> var_1d8_1:4.d)
                            sub_1405a4d70(&var_1e0)
                        
                        *(var_1e0 + (rdi_9 << 3)) = var_1f8
                
                rcx_27 = var_220
            
            r15_2 += 2
            r12_6 += 1
        while (r12_6 != r13_4)
        
        rdi_6 = var_1c0.q
        rsi_5 = var_1a0
    
    int128_t* r15_3 = nullptr
    int64_t var_180 = 0
    int32_t var_174_1 = 0
    int32_t var_178_1 = var_198_1
    
    if (var_198_1 s> 0)
        sub_1405a4cf0(&var_180)
    
    int32_t r8_10 = 0
    
    if (rdi_6 s> 0)
        int64_t rdx_26 = 0
        
        do
            uint64_t rcx_43 = zx.q(*(rsi_5 + (rdx_26 << 1)))
            rdx_26 += 1
            *(var_180 + (rcx_43 << 2)) = r8_10
            r8_10 += 1
        while (rdx_26 s< rdi_6)
    
    int64_t rcx_44 = var_1d0
    var_148 = &var_180
    void* var_140_2 = rdi + 0x188
    sub_141a8a0d0(rcx_44, var_1c8_1, var_228, &var_148)
    int64_t var_110
    float var_c8[0x4]
    float zmm2_1[0x4]
    
    if (var_110.d - var_e4_1 s> 0)
        int32_t r13_5 = 0
        
        if (var_1c8_1 s> 0)
            int64_t* r12_7 = nullptr
            
            do
                void* rdi_10 = *(r12_7 + var_1d0)
                int64_t rbx_3 = *(rdi_10 + 0x20)
                void var_e0
                int128_t* i_3
                
                if (var_110.d == var_e4_1)
                label_141abf027:
                    i_3 = nullptr
                else
                    void* rcx_48 = &var_e0
                    int64_t rdx_30 = sx.q(var_d0_1 - 1) & sx.q(sub_140b5ead0(rbx_3.d) + rbx_3:4.d)
                    
                    if (var_d8_1 != 0)
                        rcx_48 = var_d8_1
                    
                    int32_t rax_51 = *(rcx_48 + (rdx_30 << 2))
                    
                    if (rax_51 == 0xffffffff)
                    label_141abf027_1:
                        i_3 = nullptr
                    else
                        int64_t r8_12 = var_118
                        int64_t rcx_49
                        
                        while (true)
                            rcx_49 = sx.q(rax_51)
                            int64_t rdx_31 = rcx_49 * 3
                            
                            if (*(r8_12 + (rdx_31 << 3)) == rbx_3)
                                break
                            
                            rax_51 = *(r8_12 + (rdx_31 << 3) + 0x10)
                            
                            if (rax_51 == 0xffffffff)
                                goto label_141abf027_3
                        
                        if (rax_51 == 0xffffffff)
                        label_141abf027_2:
                            i_3 = nullptr
                        else
                            void* rsi_6 = r8_12 + rcx_49 * 0x18
                            
                            if (rsi_6 == 0)
                            label_141abf027_3:
                                i_3 = nullptr
                            else
                                i_3 = *(rsi_6 + 8)
                
                int64_t rbx_4 = *(rdi_10 + 0x28)
                
                if (var_110.d != var_e4_1)
                    void* rcx_53 = &var_e0
                    int64_t rdx_33 = sx.q(var_d0_1 - 1) & sx.q(sub_140b5ead0(rbx_4.d) + rbx_4:4.d)
                    
                    if (var_d8_1 != 0)
                        rcx_53 = var_d8_1
                    
                    int32_t i_2 = *(rcx_53 + (rdx_33 << 2))
                    
                    if (i_2 != 0xffffffff)
                        int64_t r8_13 = var_118
                        
                        do
                            int64_t i_6 = sx.q(i_2)
                            int64_t rdx_34 = i_6 * 3
                            
                            if (*(r8_13 + (rdx_34 << 3)) == rbx_4)
                                if (i_2 != 0xffffffff)
                                    r15_3 = r8_13 + i_6 * 0x18
                                    
                                    if (r15_3 != 0)
                                        r15_3 = *(r15_3 + 8)
                                
                                break
                            
                            i_2 = *(r8_13 + (rdx_34 << 3) + 0x10)
                        while (i_2 != 0xffffffff)
                
                if (i_3 != 0 && r15_3 != 0 && (*(i_3 + 0x38) s< *(i_3[3].q + 0x168)
                        || *(r15_3 + 0x38) s< *(r15_3[3].q + 0x168)))
                    sub_1422446b0(*(r14 + 0x1f0), rdi_10, i_3, r15_3)
                    
                    if (*(r14 + 0x1ba) != 0)
                        int32_t rax_61 = sub_142249710(*(r14 + 0x160), *(rdi_10 + 0x20))
                        int32_t rax_62 = sub_142249710(*(r14 + 0x160), *(rdi_10 + 0x28))
                        
                        if (rax_61 != 0xffffffff && rax_62 != 0xffffffff)
                            sub_142246d20(*(r14 + 0x160), rax_61, rax_62)
                    
                    int64_t* r8_16 = *(r14 + 0x220)
                    int64_t* rcx_60 = r8_16
                    void* rdx_39 = &r8_16[sx.q(*(r14 + 0x228))]
                    int32_t rcx_61
                    
                    if (r8_16 == rdx_39)
                    label_141abf192:
                        rcx_61 = -1
                    else
                        while (*rcx_60 != i_3)
                            rcx_60 = &rcx_60[1]
                            
                            if (rcx_60 == rdx_39)
                                goto label_141abf192
                        
                        rcx_61 = ((rcx_60 - r8_16) s>> 3).d
                    
                    if (rcx_61 != 0xffffffff)
                        int64_t rbx_7 = sx.q(rcx_61) << 6
                        *(rbx_7 + *(r14 + 0x240) + 0x1c) = zx.d(*(rdi_10 + 0xb4))
                        *(rbx_7 + *(r14 + 0x240) + 0x20) = zx.d(*(rdi_10 + 0xb5))
                        *(rbx_7 + *(r14 + 0x240) + 0x24) = zx.d(*(rdi_10 + 0xb6))
                        *(rbx_7 + *(r14 + 0x240) + 0x28) = *(rdi_10 + 0xb0)
                        sub_140ad8030(i_3, &var_c8, 
                            sub_1417cbc40(&var_148, 
                                sx.q(*(i_3 + 0x38)) * 0x60 + 0x30 + *(i_3[3].q + 0x50)))
                        sub_140ad8030(r15_3, &var_98, 
                            sub_1417cbc40(&var_148, 
                                sx.q(*(r15_3 + 0x38)) * 0x60 + 0x30 + *(r15_3[3].q + 0x50)))
                        float zmm1_3[0x4] = sub_140ad7d70(&var_c8, &var_148, &var_98)[1]
                        int64_t rax_75 = *(r14 + 0x240)
                        float zmm0_4 = zmm1_3[0] * zmm1_3[0]
                        zmm2_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_3 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)
                        zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
                        zmm2_1[0] = zmm2_1[0] + zmm0_4
                        zmm2_1[0] = zmm2_1[0] + zmm1_3[0]
                        *(rbx_7 + rax_75 + 0x2c) = _mm_sqrt_ss(0, zmm2_1[0])
                
                sub_1422352a0(rdi_10)
                int32_t rax_76 = *(rdi_10 + 0x1b0)
                r15_3 = nullptr
                int64_t* rcx_71
                int64_t* r8_20
                
                if (rax_76 == 0)
                    r8_20 = *(rdi_10 + 0x1a8)
                    rcx_71 = nullptr
                else
                    rcx_71 = *(rdi_10 + 0x1a8)
                    r8_20 = rcx_71
                
                int64_t rax_77
                
                if (rcx_71 != 0)
                    rax_77 = *rcx_71
                label_141abf2f7:
                    (*(rax_77 + 0x38))(rcx_71, 0)
                    int64_t rcx_73 = *(rdi_10 + 0x1a8)
                    
                    if (rcx_73 != 0)
                        *(rdi_10 + 0x1a8) = sub_140a84c80(rcx_73, 0, 0)
                    
                    *(rdi_10 + 0x1b0) = 0
                else if (rax_76 != 0 && r8_20 != 0)
                    rax_77 = *r8_20
                    rcx_71 = r8_20
                    goto label_141abf2f7
                int64_t rcx_74 = *(rdi_10 + 0x1a8)
                
                if (rcx_74 != 0)
                    sub_140a74f90(rcx_74)
                
                j_sub_140a74f90(rdi_10)
                r13_5 += 1
                r12_7 = &r12_7[1]
            while (r13_5 s< var_1c8_1)
        
        *(r14 + 0x1bb) = 2
    
    for (void** i_4 = i_5; i_4 != &i_4[sx.q(var_208_1)]; i_4 = &i_4[1])
        void* rdi_11 = *i_4
        
        if (sub_14221b2f0(rdi_11) != 0)
            sub_142225820(rdi_11, 1)
        
        if (rdi_11 != 0)
            int64_t* rbx_8 = *(rdi_11 + 0x128)
            
            if (rbx_8 != 0)
                rbx_8[1].d -= 1
                
                if (rbx_8[1].d == 1)
                    (**rbx_8)(rbx_8)
                    int32_t temp5_1 = *(rbx_8 + 0xc)
                    *(rbx_8 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_8 + 8))(rbx_8, 1)
            
            int64_t* rcx_80 = *(rdi_11 + 0x108)
            
            if (rcx_80 != 0)
                sub_1419df960(rcx_80, 1)
            
            int32_t j_2 = *(rdi_11 + 0xe8)
            void* rcx_81 = *(rdi_11 + 0xe0)
            
            if (j_2 != 0)
                void* rbx_9 = rcx_81 + 0x50
                int32_t j
                
                do
                    int64_t rcx_82 = *(rbx_9 + 0x10)
                    
                    if (rcx_82 != 0)
                        sub_140a74f90(rcx_82)
                    
                    int64_t rcx_83 = *rbx_9
                    
                    if (rcx_83 != 0)
                        sub_140a74f90(rcx_83)
                    
                    rbx_9 += 0x70
                    j = j_2
                    j_2 -= 1
                while (j != 1)
                rcx_81 = *(rdi_11 + 0xe0)
            
            if (rcx_81 != 0)
                sub_140a74f90(rcx_81)
            
            int32_t j_3 = *(rdi_11 + 0xd8)
            void* rcx_84 = *(rdi_11 + 0xd0)
            
            if (j_3 != 0)
                void* rbx_10 = rcx_84 + 0x50
                int32_t j_1
                
                do
                    int64_t rcx_85 = *(rbx_10 + 0x10)
                    
                    if (rcx_85 != 0)
                        sub_140a74f90(rcx_85)
                    
                    int64_t rcx_86 = *rbx_10
                    
                    if (rcx_86 != 0)
                        sub_140a74f90(rcx_86)
                    
                    rbx_10 += 0x70
                    j_1 = j_3
                    j_3 -= 1
                while (j_1 != 1)
                rcx_84 = *(rdi_11 + 0xd0)
            
            if (rcx_84 != 0)
                sub_140a74f90(rcx_84)
            
            int64_t rcx_87 = *(rdi_11 + 0x48)
            
            if (rcx_87 != 0)
                sub_140a74f90(rcx_87)
            
            j_sub_140a74f90(rdi_11)
    
    var_208_1 = 0
    int32_t var_218_2 = 0
    
    if (var_214_1 != 0)
        sub_1405c5570(&var_220, 0)
    
    int32_t rbx_11 = 0
    void* rsi_8 = *(r14 + 0x160) + 0xd0
    int64_t var_1f0 = 0
    int32_t* r9_6 = rsi_8 + 0x10
    int32_t var_1e8_1 = 0
    int32_t var_1e4_1 = 0
    int32_t rcx_91 = 0
    int32_t r11_1 = r9_6[6]
    int32_t r10_1 = 0
    var_148.d = 0
    int32_t r8_21 = 0
    var_148:4.d = 1
    int32_t* var_140_3 = r9_6
    int32_t var_138_1 = 0xffffffff
    int64_t var_134_1 = 0
    
    if (r11_1 != 0)
        int32_t* rax_83 = *(r9_6 + 0x10)
        
        if (rax_83 != 0)
            r9_6 = rax_83
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11_1 - 1)
        int32_t rdx_56 = *r9_6
        
        if (rdx_56 != 0)
        label_141abf568:
            int32_t rax_90 = neg.d(rdx_56) & rdx_56
            uint64_t rflags_1
            int32_t temp0_6
            temp0_6, rflags_1 = _bit_scan_reverse(rax_90)
            var_148:4.d = rax_90
            int32_t rax_91
            
            if (rax_90 == 0)
                rax_91 = 0x20
            else
                rax_91 = 0x1f - temp0_6
            
            var_134_1.d = r8_21 - rax_91 + 0x1f
            
            if (r8_21 - rax_91 + 0x1f s> r11_1)
                var_134_1.d = r11_1
        else
            while (true)
                int64_t rdx_57 = sx.q(rcx_91)
                r8_21 += 0x20
                rcx_91 += 1
                var_134_1:4.d = r8_21
                var_148.d = rcx_91
                
                if (rdx_57.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_56 = r9_6[rdx_57 + 1]
                var_138_1 = 0xffffffff
                
                if (rdx_56 != 0)
                    goto label_141abf568
            
            var_134_1.d = r11_1
    
    zmm2_1 = var_138_1.o
    var_98 = rsi_8
    float var_80_1[0x4] = zmm2_1
    double var_90_1[0x2] = var_148.o
    var_c8 = var_98.o
    uint32_t rax_94 = (zmm2_1[0].q u>> 0x20).d
    int64_t var_a8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0].q)).q
    
    if (rax_94 s< r11_1)
        int32_t rcx_93 = var_90_1[1]:4.d
        int64_t r14_1 = var_1b0
        
        while (true)
            int64_t rdx_58 = sx.q(rcx_93) * 5
            int64_t rcx_94 = *var_c8[0].q
            int64_t rax_97 = sx.q(*(rcx_94 + (rdx_58 << 2)))
            int64_t r8_23 = sx.q(*(rcx_94 + (rdx_58 << 2) + 4))
            
            if (rax_97.d s< var_1a8_1 && r8_23.d s< var_1a8_1)
                void* rdx_59 = *(r14_1 + (rax_97 << 3))
                
                if (rdx_59 != 0)
                    int64_t rcx_96 = *(r14_1 + (r8_23 << 3))
                    
                    if (rcx_96 != 0)
                        var_148 = rdx_59
                        int64_t var_140_4 = rcx_96
                        var_1e8_1 = rbx_11 + 1
                        
                        if (rbx_11 + 1 s> r10_1)
                            sub_1405a4f90(&var_1f0)
                        
                        *(var_1f0 + sx.q(rbx_11) * 0x10) = var_148.o
            
            var_90_1[1].d &= not.d(var_c8[3])
            sub_14059bdd0(&var_c8[2])
            rcx_93 = var_90_1[1]:4.d
            
            if (rcx_93 s>= *(var_90_1[0] i+ 0x18))
                break
            
            r10_1 = var_1e4_1
            rbx_11 = var_1e8_1
        
        r14 = arg1
    
    sub_142252610(*(r14 + 0x1f0), &var_1f0)
    sub_142252080(*(r14 + 0x1f0), &var_1e0)
    int64_t rcx_103 = var_1f0
    
    if (rcx_103 != 0)
        sub_140a74f90(rcx_103)
    
    int64_t rcx_104 = var_180
    
    if (rcx_104 != 0)
        sub_140a74f90(rcx_104)
    
    uint64_t rax_103 = var_220
    
    if (rax_103 != 0)
        sub_140a74f90(rax_103)
    
    int64_t rax_104 = var_1b0
    
    if (rax_104 != 0)
        sub_140a74f90(rax_104)
    
    uint64_t rcx_107 = var_1a0
    
    if (rcx_107 != 0)
        sub_140a74f90(rcx_107)
    
    int64_t rcx_108 = var_1e0
    
    if (rcx_108 != 0)
        sub_140a74f90(rcx_108)
    
    int32_t var_d0_2 = 0
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
    
    bool cond:4_1 = var_110:4.d == 0
    var_110.d = 0
    
    if (not(cond:4_1))
        sub_1405a5130(&var_118, 0)
    
    int32_t var_e8_2 = 0xffffffff
    int32_t var_e4_2 = 0
    int64_t var_108
    result = sub_14059a8e0(&var_108, 0)
    int64_t var_f8
    
    if (var_f8 != 0)
        result = sub_140a74f90(var_f8)
    
    int64_t rcx_113 = var_118
    
    if (rcx_113 != 0)
        result = sub_140a74f90(rcx_113)
    
    int64_t rcx_114 = var_1d0
    
    if (rcx_114 != 0)
        result = sub_140a74f90(rcx_114)
    
    void** i_9 = i_5
    
    if (i_9 != 0)
        result = sub_140a74f90(i_9)

__security_check_cookie(rax_1 ^ &var_278)
return result
