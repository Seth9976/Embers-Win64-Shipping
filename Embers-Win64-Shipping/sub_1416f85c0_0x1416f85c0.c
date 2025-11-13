// 函数: sub_1416f85c0
// 地址: 0x1416f85c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
void* rbx = arg1
int128_t* r15 = arg4
uint128_t zmm7
uint128_t var_68 = zmm7
int64_t* r12 = arg3
uint128_t zmm8
uint128_t var_78 = zmm8
int32_t* r13 = arg2
int64_t* rcx_1 = *arg5
uint128_t zmm11
uint128_t var_a8 = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
float zmm14[0x4]
float var_d8[0x4] = zmm14
float zmm15[0x4]
float var_e8[0x4] = zmm15
int32_t* rax_1 = (*(*rcx_1 + 0x20))(rcx_1)
float (* rdi)[0x4] = *(rbx + 0x10)
void* r14_2 = &rdi[sx.q(*(rbx + 0x18)) * 4]
float var_228
float var_224
int32_t var_220
float var_218
float var_158[0x4]
int64_t result
float zmm0[0x4]
float zmm1[0x4]
uint128_t zmm2
float zmm3[0x4]
float zmm4_1[0x4]
uint128_t zmm5_1

if (rdi != r14_2)
    void* rbx_1 = &(*rdi)[0xe]
    
    do
        if (*(rbx_1 - 0x14) == 0 || rax_1 == 0 || *rax_1 == 0
                || (1 << ((rax_1[3] u>> 0x15).b & 0x1f) & (*(rbx_1 - 0x20) | *(rbx_1 - 0x1c)))
                != 0)
            zmm8 = *(r15 + 8)
            zmm7 = *(r15 + 4)
            zmm6 = *r15
            zmm0 = *(rbx_1 - 0x10)
            void* rcx_5 = r12 + 0x1c
            zmm5_1 = *(rbx_1 - 8)
            zmm0[0] = zmm0[0] f- zmm6.d
            zmm4_1 = *(rbx_1 - 0xc)
            zmm5_1.d = zmm5_1.d f- zmm8.d
            zmm8.d = zmm8.d f+ *(rbx_1 + 4)
            zmm6.d = zmm6.d f+ *(rbx_1 - 4)
            zmm4_1[0] = zmm4_1[0] f- zmm7.d
            int32_t rdx_1 = 0
            zmm0[0] = zmm0[0] f- *r13
            zmm7.d = zmm7.d f+ *rbx_1
            zmm8.d = zmm8.d f- r13[2]
            zmm6.d = zmm6.d f- *r13
            zmm5_1.d = zmm5_1.d f- r13[2]
            zmm4_1[0] = zmm4_1[0] f- r13[1]
            zmm7.d = zmm7.d f- r13[1]
            var_228 = zmm0[0]
            var_218 = zmm6.d
            int32_t* rax_4 = &var_218
            int32_t var_210_1 = zmm8.d
            zmm0 = zx.o(0)
            var_224 = zmm4_1[0]
            zmm1 = 0x7f7fffff
            int32_t var_214_1 = zmm7.d
            var_220 = zmm5_1.d
            
            while (true)
                void* r8 = &r12[1] - &var_218 + rax_4
                zmm2 = *(&var_228 - &r12[1] + r8)
                zmm3 = zmm1
                
                if (*rcx_5 == 0)
                    zmm1 = *rax_4
                    zmm1[0] = zmm1[0] f* *r8
                    zmm2.d = zmm2.d f* *r8
                else
                    if (zmm2.d f> 0f)
                        goto label_1416f8811
                    
                    if ((*rax_4)[0] < 0f)
                        goto label_1416f8811
                    
                    zmm2 = zx.o(0)
                    zmm1 = 0x7f7fffff
                
                float temp0_1[0x4] = _mm_max_ss(zmm1[0], zmm2.d)
                float temp0_2[0x4] = _mm_min_ss(zmm1[0], zmm2.d)
                zmm1 = _mm_min_ss(temp0_1[0], zmm3[0])
                zmm0 = _mm_max_ss(temp0_2[0], zmm0[0])
                
                if (zmm0[0] > zmm1[0])
                    goto label_1416f8811
                
                rdx_1 += 1
                rcx_5 += 1
                rax_4 = &rax_4[1]
                
                if (rdx_1 s>= 3)
                    if (zmm0[0] f> *(r12 + 0x14))
                        break
                    
                    if (zmm1[0] < 0f)
                        break
                    
                    zmm1 = rdi[1]
                    var_158 = *rdi
                    int64_t* rcx_6 = *arg5
                    float var_148_1[0x4] = zmm1
                    int64_t var_138_1 = rdi[2][0].q
                    
                    if ((*(*rcx_6 + 0x18))(rcx_6, &var_158, r12).b != 0)
                        break
                    
                label_1416f9a88:
                    result.b = 0
                    return result
        
    label_1416f8811:
        rdi = &rdi[4]
        rbx_1 += 0x40
    while (rdi != r14_2)
    
    rbx = arg1

float (* rdi_1)[0x4] = *(rbx + 0x70)
void* r14_4 = sx.q(*(rbx + 0x78)) * 0x58 + rdi_1

if (rdi_1 != r14_4)
    void* rbx_2 = &rdi_1[3]
    
    while (true)
        if (*(rbx_2 + 0xc) != 0 && rax_1 != 0 && *rax_1 != 0
            && ((*(rbx_2 + 4) | *rbx_2) & 1 << ((rax_1[3] u>> 0x15).b & 0x1f)) == 0)
        label_1416f89d2:
            rdi_1 = &(*rdi_1)[0x16]
            rbx_2 += 0x58
            
            if (rdi_1 == r14_4)
                break
            
            continue
        
        zmm8 = *(r15 + 8)
        zmm7 = *(r15 + 4)
        zmm6 = *r15
        zmm0 = *rdi_1
        void* rcx_10 = r12 + 0x1c
        zmm5_1 = *(rbx_2 - 0x28)
        zmm0[0] = zmm0[0] f- zmm6.d
        zmm4_1 = *(rbx_2 - 0x2c)
        zmm5_1.d = zmm5_1.d f- zmm8.d
        zmm8.d = zmm8.d f+ *(rbx_2 - 0x1c)
        zmm6.d = zmm6.d f+ *(rbx_2 - 0x24)
        zmm4_1[0] = zmm4_1[0] f- zmm7.d
        int32_t rdx_4 = 0
        zmm0[0] = zmm0[0] f- *r13
        zmm7.d = zmm7.d f+ *(rbx_2 - 0x20)
        zmm8.d = zmm8.d f- r13[2]
        zmm6.d = zmm6.d f- *r13
        zmm5_1.d = zmm5_1.d f- r13[2]
        zmm4_1[0] = zmm4_1[0] f- r13[1]
        zmm7.d = zmm7.d f- r13[1]
        var_228 = zmm0[0]
        var_218 = zmm6.d
        result = &var_218
        int32_t var_210_2 = zmm8.d
        zmm0 = zx.o(0)
        var_224 = zmm4_1[0]
        zmm1 = 0x7f7fffff
        int32_t var_214_2 = zmm7.d
        var_220 = zmm5_1.d
        
        while (true)
            int32_t* r8_2 = &r12[1] - &var_218 + result
            zmm2 = *(&var_228 - &r12[1] + r8_2)
            zmm3 = zmm1
            
            if (*rcx_10 == 0)
                zmm1 = *result
                zmm1[0] = zmm1[0] f* *r8_2
                zmm2.d = zmm2.d f* *r8_2
            else
                if (zmm2.d f> 0f)
                    goto label_1416f89d2
                
                if ((*result)[0] < 0f)
                    goto label_1416f89d2
                
                zmm2 = zx.o(0)
                zmm1 = 0x7f7fffff
            
            float temp0_5[0x4] = _mm_max_ss(zmm1[0], zmm2.d)
            float temp0_6[0x4] = _mm_min_ss(zmm1[0], zmm2.d)
            zmm1 = _mm_min_ss(temp0_5[0], zmm3[0])
            zmm0 = _mm_max_ss(temp0_6[0], zmm0[0])
            
            if (zmm0[0] > zmm1[0])
                goto label_1416f89d2
            
            rdx_4 += 1
            rcx_10 += 1
            result += 4
            
            if (rdx_4 s>= 3)
                if (zmm0[0] f> *(r12 + 0x14))
                    goto label_1416f89d2
                
                if (zmm1[0] < 0f)
                    goto label_1416f89d2
                
                zmm1 = *(rbx_2 - 8)
                var_158 = *(rbx_2 - 0x18)
                int64_t* rcx_11 = *arg5
                float var_148_2[0x4] = zmm1
                int64_t var_138_2 = *(rbx_2 + 8)
                
                if ((*(*rcx_11 + 0x18))(rcx_11, &var_158, r12).b == 0)
                    break
                
                goto label_1416f89d2
        
        goto label_1416f9a88

if (*(arg1 + 0x94) == 0)
    zmm3 = *(r15 + 8)
    zmm0 = *(arg1 + 0x28)
    zmm14 = zmm3
    zmm4_1 = *(r15 + 4)
    zmm5_1 = *r15
    zmm0[0] = zmm0[0] - zmm3[0]
    zmm1 = *(arg1 + 0x24)
    zmm15 = zmm4_1
    zmm2 = *(arg1 + 0x20)
    zmm13 = zmm1
    zmm7 = r13[2]
    zmm13[0] = zmm13[0] - zmm4_1[0]
    zmm7.d = zmm7.d f- zmm3[0]
    zmm3 = *r13
    zmm6.d = r13[1].d f- zmm4_1[0]
    zmm14[0] = zmm14[0] f+ *(arg1 + 0x34)
    zmm15[0] = zmm15[0] f+ *(arg1 + 0x30)
    zmm3[0] = zmm3[0] f- zmm5_1.d
    zmm7.d = zmm7.d f- zmm0[0]
    uint128_t zmm10
    zmm10.d = zmm5_1.d f+ *(arg1 + 0x2c)
    zmm6.d = zmm6.d f- zmm1[0]
    zmm11.d = zmm2.d f- zmm5_1.d
    zmm3[0] = zmm3[0] f- zmm2.d
    zmm2.d = zmm7.d f/ *(arg1 + 0x4c)
    bool cond:0_1 = zmm3[0] >= 0f
    zmm1 = zmm6
    zmm3[0] = zmm3[0] f/ *(arg1 + 0x44)
    zmm1[0] = zmm1[0] f/ *(arg1 + 0x48)
    int32_t rax_10 = int.d(zmm3[0])
    int32_t rcx_12 = int.d(zmm1[0])
    int32_t var_248 = rax_10
    int32_t rdx_6 = int.d(zmm2.d)
    int32_t var_244_1 = rcx_12
    int32_t var_240_1 = rdx_6
    
    if (not(cond:0_1))
        var_248 = rax_10 - 1
    
    if (not(zmm6.d f>= 0f))
        int32_t var_244_2 = rcx_12 - 1
    
    if (not(zmm7.d f>= 0f))
        int32_t var_240_2 = rdx_6 - 1
    
    float var_1d0
    sub_1417a90d0(arg1 + 0x20, &var_1d0, &var_248)
    zmm4_1 = *(r15 + 4)
    zmm3 = *r15
    zmm5_1.d = (*(r15 + 8)).d f+ r13[2]
    zmm4_1[0] = zmm4_1[0] f+ r13[1]
    zmm3[0] = zmm3[0] f+ *r13
    zmm5_1.d = zmm5_1.d f- *(arg1 + 0x28)
    zmm4_1[0] = zmm4_1[0] f- *(arg1 + 0x24)
    zmm3[0] = zmm3[0] f- *(arg1 + 0x20)
    zmm2.d = zmm5_1.d f/ *(arg1 + 0x4c)
    bool cond:2_1 = zmm3[0] >= 0f
    zmm4_1[0] = zmm4_1[0] f/ *(arg1 + 0x48)
    zmm3[0] = zmm3[0] f/ *(arg1 + 0x44)
    int32_t rcx_14 = int.d(zmm4_1[0])
    int32_t rax_14 = int.d(zmm3[0])
    int32_t var_244_3 = rcx_14
    int32_t rdx_8 = int.d(zmm2.d)
    var_248 = rax_14
    int32_t var_240_3 = rdx_8
    
    if (not(cond:2_1))
        var_248 = rax_14 - 1
    
    if (not(zmm4_1[0] >= 0f))
        int32_t var_244_4 = rcx_14 - 1
    
    if (not(zmm5_1.d f>= 0f))
        int32_t var_240_4 = rdx_8 - 1
    
    int32_t var_1c0
    sub_1417a90d0(arg1 + 0x20, &var_1c0, &var_248)
    int32_t var_1cc
    int32_t var_1c8
    int32_t var_1bc
    int32_t var_1b8
    int32_t var_1a0
    
    if (var_1d0 != var_1c0 || var_1cc != var_1bc || var_1c8 != var_1b8)
    label_1416f8f1e:
        int32_t rsi_3 = *(arg1 + 0x40)
        var_228.q = *(arg1 + 0x38)
        uint32_t rax_42 = (var_228.q u>> 0x20).d
        int32_t var_1e0_1 = rsi_3
        int32_t temp0_13
        int32_t temp1_1
        temp0_13:temp1_1 = sx.q(rax_42 * rsi_3 i* var_228)
        int64_t rbx_4 = sx.q((temp1_1 + (temp0_13 & 7)) s>> 3)
        int64_t rax_48 = j_sub_140a82f30(rbx_4 + 1)
        int64_t rdi_3 = rax_48
        memset(rax_48, 0, rbx_4 + 1)
        int32_t rcx_25 = *(arg1 + 0x40)
        var_228.q = *(arg1 + 0x38)
        uint32_t rax_50 = (var_228.q u>> 0x20).d
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rax_50 * rcx_25 i* var_228)
        int64_t rbx_5 = sx.q((temp3_1 + (temp2_1 & 7)) s>> 3)
        int64_t rax_56 = j_sub_140a82f30(rbx_5 + 1)
        int64_t r13_1 = rax_56
        memset(rax_56, 0, rbx_5 + 1)
        float r15_1 = var_1d0
        int32_t r9_6 = 0
        int32_t rdx_21 = var_1c0
        int64_t rbx_6 = 0
        int32_t r14_6 = 0
        int64_t var_208 = 0
        int32_t var_234_1 = 0
        int32_t var_1fc_1 = 0
        float var_238_1 = r15_1
        uint64_t var_1f8
        int32_t var_1f0
        
        if (r15_1 s<= rdx_21)
            int32_t rax_57 = var_1b8
            int32_t r12_2 = r15_1 i* rax_42
            int32_t r13_2 = 0
            int32_t rcx_28 = var_1bc
            int64_t r10_3 = 0
            uint32_t r8_13 = rax_42
            
            do
                int32_t r14_7 = var_1cc
                
                if (r14_7 s<= rcx_28)
                    do
                        int32_t rbx_7 = var_1c8
                        
                        if (rbx_7 s<= rax_57)
                            var_228 = r15_1
                            int32_t var_224_1 = r14_7
                            zmm6 = zx.o(var_228.q)
                            int32_t var_1ec_1 = 0
                            
                            do
                                int64_t rdi_4 = sx.q(r9_6)
                                var_1f8 = zmm6.q
                                var_1f0 = rbx_7
                                r9_6 = (rdi_4 + 1).d
                                
                                if (r9_6 s> r13_2)
                                    sub_1405a4f90(&var_208)
                                    r10_3 = var_208
                                    r13_2 = var_1fc_1
                                
                                *(r10_3 + rdi_4 * 0x10) = var_1f8.o
                                int32_t rax_60 = rbx_7 + (r14_7 + r12_2) * var_1e0_1
                                rbx_7 += 1
                                int32_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(rax_60)
                                int32_t rdx_24 = temp4_1 & 7
                                int32_t rax_62 = temp5_1 + rdx_24
                                int64_t rax_65 = sx.q(rax_62 s>> 3)
                                *(rax_65 + rax_48) |= 1 << ((rax_62.b & 7) - rdx_24.b)
                                rax_57 = var_1b8
                            while (rbx_7 s<= rax_57)
                            
                            rcx_28 = var_1bc
                            r15_1 = var_238_1
                            var_234_1 = r9_6
                        
                        r14_7 += 1
                    while (r14_7 s<= rcx_28)
                    
                    rdx_21 = var_1c0
                    r8_13 = rax_42
                
                r15_1 += 1
                r12_2 += r8_13
                var_238_1 = r15_1
            while (r15_1 s<= rdx_21)
            
            r13_1 = rax_56
            r14_6 = var_1fc_1
            rbx_6 = var_208
            rdi_3 = rax_48
            r12 = arg3
            rsi_3 = var_1e0_1
        
        int32_t* r11_1 = *r12
        int32_t r8_16 = 0
        zmm7 = *(arg2 + 8)
        uint128_t zmm9 = *arg2
        zmm0[0] = zmm0[0] f- zmm7.d
        zmm8 = *(arg2 + 4)
        zmm11.d = zmm11.d f- zmm9.d
        zmm6 = zx.o(0)
        zmm13[0] = zmm13[0] f- zmm8.d
        zmm14[0] = zmm14[0] f- zmm7.d
        void* rdx_26 = r12 + 0x1c
        zmm15[0] = zmm15[0] f- zmm8.d
        float var_220_1 = zmm0[0]
        zmm10.d = zmm10.d f- zmm9.d
        var_228 = zmm11.d
        float* rax_68 = &var_218
        zmm1 = 0x7f7fffff
        float var_224_2 = zmm13[0]
        float var_210_4 = zmm14[0]
        float var_214_4 = zmm15[0]
        var_218 = zmm10.d
        
        while (true)
            int32_t* rcx_32 = &r12[1] - &var_218 + rax_68
            zmm2 = *(rcx_32 + &var_228 - &r12[1])
            zmm3 = zmm1
            uint128_t zmm4_2 = zmm6
            
            if (*rdx_26 == 0)
                zmm1 = *rax_68
                zmm1[0] = zmm1[0] f* *rcx_32
                zmm2.d = zmm2.d f* *rcx_32
            else
                if (zmm2.d f> 0f)
                    break
                
                if ((*rax_68).d f< 0f)
                    break
                
                zmm2 = zx.o(0)
                zmm1 = 0x7f7fffff
            
            float temp0_14[0x4] = _mm_max_ss(zmm1[0], zmm2.d)
            zmm6 = _mm_min_ss(zmm1.d, zmm2.d)
            zmm1 = _mm_min_ss(temp0_14[0], zmm3[0])
            zmm6 = _mm_max_ss(zmm6.d, zmm4_2.d)
            
            if (zmm6.d f> zmm1[0])
                break
            
            r8_16 += 1
            rdx_26 += 1
            rax_68 = &rax_68[1]
            
            if (r8_16 s>= 3)
                if (not(zmm6.d f> *(r12 + 0x14)) && not(zmm1[0] < 0f))
                    uint128_t zmm5_2
                    zmm5_2.d = zmm6.d f* r11_1[2]
                    zmm4_2.d = zmm6.d f* r11_1[1]
                    zmm3 = zmm6
                    zmm3[0] = zmm3[0] f* *r11_1
                    zmm5_2.d = zmm5_2.d f+ zmm7.d
                    zmm4_2.d = zmm4_2.d f+ zmm8.d
                    zmm3[0] = zmm3[0] f+ zmm9.d
                    zmm5_2.d = zmm5_2.d f- *(arg1 + 0x28)
                    zmm4_2.d = zmm4_2.d f- *(arg1 + 0x24)
                    zmm3[0] = zmm3[0] f- *(arg1 + 0x20)
                    zmm2.d = zmm5_2.d f/ *(arg1 + 0x4c)
                    bool cond:7_1 = zmm3[0] >= 0f
                    zmm1 = zmm4_2
                    zmm1[0] = zmm1[0] f/ *(arg1 + 0x48)
                    uint128_t zmm0_2
                    zmm0_2.d = zmm3.d f/ *(arg1 + 0x44)
                    int32_t rcx_33 = int.d(zmm1[0])
                    int32_t rax_69 = int.d(zmm0_2.d)
                    int32_t var_244_10 = rcx_33
                    int32_t rdx_27 = int.d(zmm2.d)
                    var_248 = rax_69
                    int32_t var_240_10 = rdx_27
                    
                    if (not(cond:7_1))
                        var_248 = rax_69 - 1
                    
                    if (not(zmm4_2.d f>= 0f))
                        int32_t var_244_11 = rcx_33 - 1
                    
                    if (not(zmm5_2.d f>= 0f))
                        int32_t var_240_11 = rdx_27 - 1
                    
                    int32_t* rax_73 = sub_1417a90d0(arg1 + 0x20, &var_228, &var_248)
                    int64_t r15_3 = rax_48
                    int32_t rcx_35 = *rax_73
                    var_248 = rcx_35
                    int32_t rdx_29 = rax_73[1]
                    int32_t var_244_12 = rdx_29
                    int32_t r9_9 = rax_73[2]
                    int32_t var_240_12 = r9_9
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q((rax_42 * rcx_35 + rdx_29) * rsi_3 + r9_9)
                    int32_t rdx_31 = temp6_1 & 7
                    int32_t rax_80 = temp7_1 + rdx_31
                    int32_t r12_4
                    
                    if ((*(sx.q(rax_80 s>> 3) + r15_3) u>> ((rax_80.b & 7) - rdx_31.b) & 1) != 0)
                        r12_4 = var_234_1
                    else
                        int64_t r12_3 = sx.q(var_234_1)
                        r12_4 = r12_3.d + 1
                        int32_t var_1ec_2 = zmm6.d
                        var_1f8 = var_248.q
                        var_1f0 = r9_9
                        
                        if (r12_4 s> r14_6)
                            sub_1405a4f90(&var_208)
                            r14_6 = var_1fc_1
                        
                        rbx_6 = var_208
                        *((r12_3 << 4) + rbx_6) = var_1f8.o
                    
                    void* rsi_6 = arg1
                    int32_t rcx_38 = 0
                    zmm1 = *(rsi_6 + 0x44)
                    zmm14 = *(rsi_6 + 0x4c)
                    zmm15 = *(rsi_6 + 0x48)
                    zmm1[0] = zmm1[0] * 0.5f
                    zmm14[0] = zmm14[0] * 0.5f
                    zmm15[0] = zmm15[0] * 0.5f
                    float var_234_2 = zmm1[0]
                    
                    if (r12_4 s<= 0)
                        rdi_3 = r15_3
                    else
                        uint64_t r8_20 = zx.q(data_14401b1a0)
                        uint128_t* rdx_34 = nullptr
                        TEB* gsbase
                        void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                        int64_t* rax_87 = arg3
                        
                        while (true)
                            zmm0_2 = *(rdx_34 + rbx_6)
                            rcx_38 += 1
                            rdx_34 = &rdx_34[1]
                            var_1f8.o = zmm0_2
                            
                            if (not(_mm_shuffle_ps(zmm0_2, zmm0_2, 0xff).d f> *(rax_87 + 0x14)))
                                if (data_143ef7858
                                        s> *(0x14 + *(ThreadLocalStoragePointer + (r8_20 << 3))))
                                    _Init_thread_header(&data_143ef7858)
                                    
                                    if (data_143ef7858 == 0xffffffff)
                                        __builtin_memcpy(&data_143ef7720, 
                                            "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x"
                                        "00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x01\x00\x00\x00\xff"
                                        "ff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00"
                                        "ff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff"
                                        "ff\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff"
                                        "ff\xff\x01\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x01"
                                        "00\x00\x00\xff\xff\xff\xff\x01\x00\x00\x00\x01\x00\x00\x00"
                                        "ff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00"
                                        "00\x00\x00\x00\x00\xff\xff\xff\xff\x"
                                        "
                                            0x138)
                                        atexit(sub_142ce9b40)
                                        _Init_thread_footer(&data_143ef7858)
                                    
                                    zmm1 = var_234_2
                                
                                int32_t r9_10 = var_1f8.d
                                int64_t r13_3 = var_208
                                int128_t* i = &data_143ef7720
                                int32_t r8_21 = var_1f0
                                int32_t var_238_2 = r9_10
                                
                                do
                                    float* rax_90 = &var_218
                                    float r10_7 = *i + r9_10
                                    int32_t r11_3 = var_1f8:4.d + *(i + 4)
                                    int32_t rbx_10 = *(i + 8) + r8_21
                                    var_218 = r10_7
                                    int32_t var_214_5 = r11_3
                                    int32_t rcx_39 = 0
                                    int32_t var_210_5 = rbx_10
                                    
                                    while (true)
                                        float rdx_35 = *rax_90
                                        
                                        if (rdx_35 s< 0)
                                            break
                                        
                                        if (rdx_35 s>= *(rsi_6 - &var_218 + rax_90 + 0x38))
                                            break
                                        
                                        rcx_39 += 1
                                        rax_90 = &rax_90[1]
                                        
                                        if (rcx_39 s>= 3)
                                            int32_t temp8_1
                                            int32_t temp9_1
                                            temp8_1:temp9_1 =
                                                sx.q((r10_7 i* rax_42 + r11_3) * var_1e0_1 + rbx_10)
                                            int32_t rdx_37 = temp8_1 & 7
                                            int32_t rax_97 = temp9_1 + rdx_37
                                            int32_t rax_99 = (rax_97 & 7) - rdx_37
                                            int64_t r8_22 = sx.q(rax_97 s>> 3)
                                            uint8_t r9_11 = *(r8_22 + r15_3)
                                            
                                            if ((r9_11 u>> rax_99.b & 1) == 0)
                                                void* rdx_39 = r12 + 0x1c
                                                *(r8_22 + r15_3) = r9_11 | (1 << (rax_99 u% 0x20)).b
                                                int32_t r8_23 = 0
                                                zmm5_2 = *arg4
                                                zmm6 = *(arg4 + 4)
                                                zmm7 = *(arg4 + 8)
                                                zmm8 = _mm_cvtepi32_ps(zx.o(r10_7))
                                                zmm9 = _mm_cvtepi32_ps(zx.o(r11_3))
                                                zmm8.d = zmm8.d f+ 0.5f
                                                zmm10 = _mm_cvtepi32_ps(zx.o(rbx_10))
                                                zmm8.d = zmm8.d f* *(arg1 + 0x44)
                                                zmm9.d = zmm9.d f+ 0.5f
                                                zmm10.d = zmm10.d f+ 0.5f
                                                zmm8.d = zmm8.d f+ *(arg1 + 0x20)
                                                zmm9.d = zmm9.d f* *(arg1 + 0x48)
                                                zmm10.d = zmm10.d f* *(arg1 + 0x4c)
                                                zmm9.d = zmm9.d f+ *(arg1 + 0x24)
                                                zmm0_2 = zmm8
                                                zmm8.d = zmm8.d f+ zmm5_2.d
                                                zmm10.d = zmm10.d f+ *(arg1 + 0x28)
                                                zmm0_2.d = zmm0_2.d f- zmm5_2.d
                                                zmm8.d = zmm8.d f+ var_234_2
                                                zmm0_2.d = zmm0_2.d f- zmm1[0]
                                                zmm1 = zmm9
                                                zmm1[0] = zmm1[0] f- zmm6.d
                                                zmm9.d = zmm9.d f+ zmm6.d
                                                zmm8.d = zmm8.d f- *arg2
                                                zmm0_2.d = zmm0_2.d f- *arg2
                                                zmm1[0] = zmm1[0] - zmm15[0]
                                                zmm9.d = zmm9.d f+ zmm15[0]
                                                int32_t var_168 = zmm8.d
                                                int32_t var_178 = zmm0_2.d
                                                zmm1[0] = zmm1[0] f- *(arg2 + 4)
                                                zmm9.d = zmm9.d f- *(arg2 + 4)
                                                zmm0_2.d = zmm10.d f- zmm7.d
                                                zmm10.d = zmm10.d f+ zmm7.d
                                                float var_174_1 = zmm1[0]
                                                zmm1 = zx.o(0)
                                                int32_t var_164_1 = zmm9.d
                                                zmm0_2.d = zmm0_2.d f- zmm14[0]
                                                zmm10.d = zmm10.d f+ zmm14[0]
                                                zmm0_2.d = zmm0_2.d f- *(arg2 + 8)
                                                zmm10.d = zmm10.d f- *(arg2 + 8)
                                                int64_t rax_102 = 0
                                                int32_t var_170_1 = zmm0_2.d
                                                zmm0_2 = 0x7f7fffff
                                                int32_t var_160_1 = zmm10.d
                                                
                                                while (true)
                                                    zmm3 = zmm0_2
                                                    uint128_t* rcx_46 = &var_178 + rax_102
                                                    zmm4_2 = zmm1
                                                    zmm2 = *rcx_46
                                                    
                                                    if (*rdx_39 == 0)
                                                        zmm0_2 = *(rcx_46 + &r12[1] - &var_178)
                                                        zmm2.d = zmm2.d f* zmm0_2.d
                                                        zmm0_2.d = zmm0_2.d f* *(&var_168 + rax_102)
                                                    else
                                                        if (zmm2.d f> 0f)
                                                            break
                                                        
                                                        if (0f f> *(&var_168 + rax_102))
                                                            break
                                                        
                                                        zmm2 = zx.o(0)
                                                        zmm0_2 = 0x7f7fffff
                                                    
                                                    zmm1 = zmm0_2
                                                    zmm0_2 = _mm_max_ss(zmm0_2.d, zmm2.d)
                                                    float temp0_23[0x4] =
                                                        _mm_min_ss(zmm1[0], zmm2.d)
                                                    zmm0_2 = _mm_min_ss(zmm0_2.d, zmm3[0])
                                                    zmm1 = _mm_max_ss(temp0_23[0], zmm4_2.d)
                                                    
                                                    if (zmm1[0] f> zmm0_2.d)
                                                        break
                                                    
                                                    r8_23 += 1
                                                    rdx_39 += 1
                                                    rax_102 += 4
                                                    
                                                    if (r8_23 s>= 3)
                                                        if (not(zmm1[0] f> *(arg3 + 0x14))
                                                                && not(zmm0_2.d f< 0f))
                                                            int32_t var_f0_1 = rbx_10
                                                            int64_t rbx_11 = sx.q(r12_4)
                                                            float var_ec_1 = zmm1[0]
                                                            uint64_t var_f8_1 = var_218.q
                                                            r12_4 = (rbx_11 + 1).d
                                                            
                                                            if (r12_4 s> r14_6)
                                                                sub_1405a4f90(&var_208)
                                                                r14_6 = var_1fc_1
                                                                r13_3 = var_208
                                                            
                                                            *(r13_3 + rbx_11 * 0x10) = var_f8_1.o
                                                        
                                                        break
                                            
                                            r9_10 = var_238_2
                                            r8_21 = var_1f0
                                            break
                                    
                                    zmm1 = var_234_2
                                    i += 0xc
                                while (i != &data_143ef7858)
                                
                                rsi_6 = arg1
                                r13_1 = rax_56
                                void** rax_113 = (sx.q(
                                    (*(rsi_6 + 0x54) * r9_10 + var_1f8:4.d) * *(rsi_6 + 0x58)
                                    + r8_21) << 4) + *(rsi_6 + 0x60)
                                void* r8_24 = *rax_113
                                void* var_180_1 = r8_24
                                void* rax_116 = sx.q(rax_113[1].d) * 0x58 + r8_24
                                
                                if (r8_24 != rax_116)
                                    void* r14_8 = r8_24 + 0x14
                                    void* var_110_1 = r14_8
                                    
                                    do
                                        int32_t rcx_48 = *(r14_8 + 0x38)
                                        r15_3.b = 0
                                        int32_t rdx_41 = *(r14_8 + 0x2c)
                                        bool cond:8_1 = rdx_41 s> rcx_48
                                        
                                        if (rdx_41 != rcx_48)
                                            goto label_1416f9799
                                        
                                        if (*(r14_8 + 0x30) == *(r14_8 + 0x3c)
                                                && *(r14_8 + 0x34) == *(r14_8 + 0x40))
                                            goto label_1416f9863
                                        
                                        cond:8_1 = rdx_41 s> rcx_48
                                    label_1416f9799:
                                        
                                        if (cond:8_1)
                                            goto label_1416f9863
                                        
                                        int32_t rsi_8 = *(r14_8 + 0x3c)
                                        int32_t rbx_13 = rdx_41 * rax_50
                                        uint64_t i_2 = zx.q(rcx_48 - rdx_41 + 1)
                                        uint32_t rcx_50 = rax_50
                                        uint64_t i_3 = i_2
                                        uint64_t i_1
                                        
                                        do
                                            int32_t r11_4 = *(r14_8 + 0x30)
                                            
                                            if (r11_4 s<= rsi_8)
                                                int32_t rdi_5 = *(r14_8 + 0x34)
                                                int32_t r10_8 = *(r14_8 + 0x40)
                                                
                                                do
                                                    int32_t r9_14 = rdi_5
                                                    
                                                    if (rdi_5 s<= r10_8)
                                                        int32_t r8_27 =
                                                            (r11_4 + rbx_13) * rcx_25 + rdi_5
                                                        
                                                        do
                                                            int32_t rax_119 = r8_27
                                                            int32_t rcx_52 = r8_27 & 7
                                                            
                                                            if (r8_27 s< 0)
                                                                rax_119 = r8_27 + 7
                                                                rcx_52 -= 8
                                                            
                                                            if ((*(sx.q(rax_119 s>> 3) + r13_1)
                                                                    u>> rcx_52.b & 1) != 0)
                                                                r15_3.b = 1
                                                                break
                                                            
                                                            r9_14 += 1
                                                            r8_27 += 1
                                                        while (r9_14 s<= r10_8)
                                                    
                                                    r11_4 += 1
                                                while (r11_4 s<= rsi_8)
                                                
                                                r14_8 = var_110_1
                                                i_2 = i_3
                                                rcx_50 = rax_50
                                            
                                            rbx_13 += rcx_50
                                            i_1 = i_2
                                            i_2 -= 1
                                            i_3 = i_2
                                        while (i_1 != 1)
                                        
                                        if (r15_3.b == 0)
                                            r8_24 = var_180_1
                                        label_1416f9863:
                                            int32_t r8_28 = 0
                                            zmm1 = *(r14_8 - 0x10)
                                            zmm5_2 = *arg4
                                            zmm6 = *(arg4 + 4)
                                            zmm0_2.d = (*r8_24).d f- zmm5_2.d
                                            zmm7 = *(arg4 + 8)
                                            zmm1[0] = zmm1[0] f- zmm6.d
                                            int32_t* rax_123 = arg2
                                            zmm5_2.d = zmm5_2.d f+ *(r14_8 - 8)
                                            zmm6.d = zmm6.d f+ *(r14_8 - 4)
                                            void* rdx_43 = r12 + 0x1c
                                            zmm0_2.d = zmm0_2.d f- *rax_123
                                            zmm1[0] = zmm1[0] f- rax_123[1]
                                            zmm5_2.d = zmm5_2.d f- *rax_123
                                            zmm6.d = zmm6.d f- rax_123[1]
                                            var_1a0 = zmm0_2.d
                                            zmm0_2.d = (*(r14_8 - 0xc)).d f- zmm7.d
                                            float var_19c_1 = zmm1[0]
                                            zmm7.d = zmm7.d f+ *r14_8
                                            var_228 = zmm5_2.d
                                            zmm1 = zx.o(0)
                                            int32_t var_224_3 = zmm6.d
                                            zmm0_2.d = zmm0_2.d f- rax_123[2]
                                            zmm7.d = zmm7.d f- rax_123[2]
                                            int64_t rax_124 = 0
                                            int32_t var_198_1 = zmm0_2.d
                                            zmm0_2 = 0x7f7fffff
                                            int32_t var_220_2 = zmm7.d
                                            
                                            while (true)
                                                zmm4_2 = zmm0_2
                                                void* rcx_53 = &var_1a0 + rax_124
                                                zmm5_2 = zmm1
                                                zmm3 = *rcx_53
                                                
                                                if (*rdx_43 == 0)
                                                    zmm0_2 = *(&r12[1] - &var_1a0 + rcx_53)
                                                    zmm2 = zmm0_2
                                                    zmm0_2.d = zmm0_2.d f* *(&var_228 + rax_124)
                                                    zmm2.d = zmm2.d f* zmm3[0]
                                                else
                                                    if (zmm3[0] > 0f)
                                                        goto label_1416f99c4
                                                    
                                                    if (0f f> *(&var_228 + rax_124))
                                                        goto label_1416f99c4
                                                    
                                                    zmm2 = zx.o(0)
                                                    zmm0_2 = 0x7f7fffff
                                                
                                                zmm1 = zmm0_2
                                                zmm0_2 = _mm_max_ss(zmm0_2.d, zmm2.d)
                                                float temp0_27[0x4] = _mm_min_ss(zmm1[0], zmm2.d)
                                                zmm0_2 = _mm_min_ss(zmm0_2.d, zmm4_2.d)
                                                zmm1 = _mm_max_ss(temp0_27[0], zmm5_2.d)
                                                
                                                if (zmm1[0] f> zmm0_2.d)
                                                    goto label_1416f99c4
                                                
                                                r8_28 += 1
                                                rdx_43 += 1
                                                rax_124 += 4
                                                
                                                if (r8_28 s>= 3)
                                                    if (zmm1[0] f> *(arg3 + 0x14))
                                                        break
                                                    
                                                    if (zmm0_2.d f< 0f)
                                                        break
                                                    
                                                    zmm1 = *(r14_8 + 0x14)
                                                    var_158 = *(r14_8 + 4)
                                                    int64_t* rcx_54 = *arg5
                                                    float var_148_4[0x4] = zmm1
                                                    uint64_t var_138_4 = *(r14_8 + 0x24)
                                                    
                                                    if ((*(*rcx_54 + 0x18))(rcx_54, &var_158, arg3)
                                                            != 0)
                                                        break
                                                    
                                                    int64_t rax_130 = var_208
                                                    
                                                    if (rax_130 != 0)
                                                        sub_140a74f90(rax_130)
                                                    
                                                    j_sub_140a74f90(r13_1)
                                                    j_sub_140a74f90(rax_48)
                                                    goto label_1416f9a88
                                        
                                    label_1416f99c4:
                                        r14_8 += 0x58
                                        r8_24 = var_180_1 + 0x58
                                        var_110_1 = r14_8
                                        var_180_1 = r8_24
                                    while (r8_24 != rax_116)
                                    
                                    r15_3 = rax_48
                                    r9_10 = var_238_2
                                    rsi_6 = arg1
                                
                                int32_t r9_20 = (r9_10 * rax_50 + var_1f8:4.d) * rcx_25 + var_1f0
                                int32_t rdx_47 = r9_20 & 7
                                
                                if (r9_20 s< 0)
                                    r9_20 += 7
                                    rdx_47 -= 8
                                
                                zmm1 = var_234_2
                                rbx_6 = var_208
                                r8_20 = zx.q(data_14401b1a0)
                                int64_t rcx_55 = sx.q(r9_20 s>> 3)
                                ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                                *(rcx_55 + r13_1) |= (1 << (rdx_47 u% 0x20)).b
                                rax_87 = arg3
                            
                            if (rcx_38 s>= r12_4)
                                break
                            
                            r14_6 = var_1fc_1
                        
                        rdi_3 = rax_48
                
                break
        
        if (rbx_6 != 0)
            sub_140a74f90(rbx_6)
        
        j_sub_140a74f90(r13_1)
        j_sub_140a74f90(rdi_3)
    else
        int32_t* rax_21 = *r12
        zmm6 = *(r12 + 0x14)
        zmm7.d = zmm6.d f* rax_21[2]
        zmm8.d = zmm6.d f* rax_21[1]
        zmm6.d = zmm6.d f* *rax_21
        zmm7.d = zmm7.d f+ r13[2]
        zmm8.d = zmm8.d f+ r13[1]
        zmm6.d = zmm6.d f+ *r13
        zmm5_1.d = zmm7.d f- *(r15 + 8)
        zmm4_1 = zmm8
        zmm3 = zmm6
        zmm4_1[0] = zmm4_1[0] f- *(r15 + 4)
        zmm3[0] = zmm3[0] f- *r15
        zmm5_1.d = zmm5_1.d f- *(arg1 + 0x28)
        zmm4_1[0] = zmm4_1[0] f- *(arg1 + 0x24)
        zmm3[0] = zmm3[0] f- *(arg1 + 0x20)
        zmm2.d = zmm5_1.d f/ *(arg1 + 0x4c)
        bool cond:4_1 = zmm3[0] >= 0f
        zmm4_1[0] = zmm4_1[0] f/ *(arg1 + 0x48)
        zmm3[0] = zmm3[0] f/ *(arg1 + 0x44)
        int32_t rcx_16 = int.d(zmm4_1[0])
        int32_t rax_22 = int.d(zmm3[0])
        int32_t var_244_5 = rcx_16
        int32_t rdx_10 = int.d(zmm2.d)
        var_248 = rax_22
        int32_t var_240_5 = rdx_10
        
        if (not(cond:4_1))
            var_248 = rax_22 - 1
        
        if (not(zmm4_1[0] >= 0f))
            int32_t var_244_6 = rcx_16 - 1
        
        if (not(zmm5_1.d f>= 0f))
            int32_t var_240_6 = rdx_10 - 1
        
        sub_1417a90d0(arg1 + 0x20, &var_228, &var_248)
        zmm4_1 = *(r15 + 4)
        zmm5_1.d = (*(r15 + 8)).d f+ zmm7.d
        zmm3 = *r15
        zmm4_1[0] = zmm4_1[0] f+ zmm8.d
        zmm3[0] = zmm3[0] f+ zmm6.d
        zmm5_1.d = zmm5_1.d f- *(arg1 + 0x28)
        zmm4_1[0] = zmm4_1[0] f- *(arg1 + 0x24)
        zmm3[0] = zmm3[0] f- *(arg1 + 0x20)
        zmm2.d = zmm5_1.d f/ *(arg1 + 0x4c)
        bool cond:6_1 = zmm3[0] >= 0f
        zmm4_1[0] = zmm4_1[0] f/ *(arg1 + 0x48)
        zmm3[0] = zmm3[0] f/ *(arg1 + 0x44)
        int32_t rcx_18 = int.d(zmm4_1[0])
        int32_t rax_26 = int.d(zmm3[0])
        int32_t var_244_7 = rcx_18
        int32_t rdx_12 = int.d(zmm2.d)
        var_248 = rax_26
        int32_t var_240_7 = rdx_12
        
        if (not(cond:6_1))
            var_248 = rax_26 - 1
        
        if (not(zmm4_1[0] >= 0f))
            int32_t var_244_8 = rcx_18 - 1
        
        if (not(zmm5_1.d f>= 0f))
            int32_t var_240_8 = rdx_12 - 1
        
        sub_1417a90d0(arg1 + 0x20, &var_1a0, &var_248)
        float r8_8 = var_1d0
        int32_t var_19c
        int32_t var_198
        
        if (r8_8 != var_228 || var_1cc != var_224 || var_1c8 != var_220 || r8_8 != var_1a0
                || var_1cc != var_19c || var_1c8 != var_198)
            goto label_1416f8f1e
        
        int64_t* rax_37 = (sx.q((*(arg1 + 0x54) i* r8_8 + var_1cc) * *(arg1 + 0x58) + var_1c8) << 4)
            + *(arg1 + 0x60)
        float (* rdi_2)[0x4] = *rax_37
        void* rsi_2 = sx.q(rax_37[1].d) * 0x58 + rdi_2
        
        if (rdi_2 != rsi_2)
            int32_t* rbx_3 = &(*rdi_2)[5]
            
            while (true)
                zmm0 = *rdi_2
                void* rcx_21 = r12 + 0x1c
                zmm1 = rbx_3[-4]
                int32_t rdx_15 = 0
                zmm5_1 = *arg4
                zmm6 = *(arg4 + 4)
                zmm0[0] = zmm0[0] f- zmm5_1.d
                zmm7 = *(arg4 + 8)
                zmm1[0] = zmm1[0] f- zmm6.d
                zmm5_1.d = zmm5_1.d f+ rbx_3[-2]
                zmm6.d = zmm6.d f+ rbx_3[-1]
                zmm0[0] = zmm0[0] f- *r13
                zmm1[0] = zmm1[0] f- r13[1]
                zmm5_1.d = zmm5_1.d f- *r13
                zmm6.d = zmm6.d f- r13[1]
                var_218 = zmm0[0]
                result = 0
                zmm0 = rbx_3[-3]
                zmm0[0] = zmm0[0] f- zmm7.d
                float var_214_3 = zmm1[0]
                zmm7.d = zmm7.d f+ *rbx_3
                var_248 = zmm5_1.d
                zmm1 = zx.o(0)
                int32_t var_244_9 = zmm6.d
                zmm0[0] = zmm0[0] f- r13[2]
                zmm7.d = zmm7.d f- r13[2]
                float var_210_3 = zmm0[0]
                zmm0 = 0x7f7fffff
                int32_t var_240_9 = zmm7.d
                
                while (true)
                    zmm4_1 = zmm0
                    void* r8_9 = &var_218 + result
                    zmm3 = *r8_9
                    
                    if (*rcx_21 == 0)
                        zmm0 = *(&r12[1] - &var_218 + r8_9)
                        zmm0[0] = zmm0[0] f* *(&var_248 + result)
                        zmm2.d = zmm0.d f* zmm3[0]
                    else
                        if (zmm3[0] > 0f)
                            goto label_1416f8f08
                        
                        if (0f f> *(&var_248 + result))
                            goto label_1416f8f08
                        
                        zmm2 = zx.o(0)
                        zmm0 = 0x7f7fffff
                    
                    float temp0_9[0x4] = _mm_max_ss(zmm0[0], zmm2.d)
                    float temp0_10[0x4] = _mm_min_ss(zmm0[0], zmm2.d)
                    zmm0 = _mm_min_ss(temp0_9[0], zmm4_1[0])
                    zmm1 = _mm_max_ss(temp0_10[0], zmm1.d)
                    
                    if (zmm1[0] > zmm0[0])
                        goto label_1416f8f08
                    
                    rdx_15 += 1
                    rcx_21 += 1
                    result += 4
                    
                    if (rdx_15 s>= 3)
                        if (not(zmm1[0] f> *(r12 + 0x14)) && not(zmm0[0] < 0f))
                            zmm1 = *(rbx_3 + 0x14)
                            var_158 = *(rbx_3 + 4)
                            int64_t* rcx_22 = *arg5
                            float var_148_3[0x4] = zmm1
                            int64_t var_138_3 = *(rbx_3 + 0x24)
                            
                            if ((*(*rcx_22 + 0x18))(rcx_22, &var_158, r12).b == 0)
                                goto label_1416f9a88
                        
                    label_1416f8f08:
                        rdi_2 = &(*rdi_2)[0x16]
                        rbx_3 = &rbx_3[0x16]
                        
                        if (rdi_2 != rsi_2)
                            break
                        
                        goto label_1416f9ab2

label_1416f9ab2:
result.b = 1
return result
