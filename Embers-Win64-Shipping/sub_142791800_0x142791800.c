// 函数: sub_142791800
// 地址: 0x142791800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_348
int64_t rax_1 = __security_cookie ^ &var_348
char r12 = 0
int32_t rbx = 0
uint64_t* r13 = arg2
void* rsi = arg1
int32_t var_318 = 0

if (*(arg1 + 0x660) != 0 || *(arg1 + 0x653) != 0 || *(arg1 + 0x654) != 0)
    arg1.b = 1
else
    arg1.b = 0

arg2[4].b = arg1.b
uint64_t result = zx.q(*(rsi + 0x661))
*(arg2 + 0x21) = result.b

if (*(rsi + 0x63c) == 0)
label_142792808:
    
    if (arg1.b != 0)
        if (*(rsi + 0x6a0) != 0)
            sub_140780a30(&arg2[2], rsi + 0x698)
            sub_14278e530(rsi)
            
            if (*(rsi + 0x6a0) != r13[3].d && &r13[2] != rsi + 0x698)
                int64_t r14_12 = sx.q(*(rsi + 0x6a0))
                int64_t r15_8 = *(rsi + 0x698)
                int32_t r8_17 = *(r13 + 0x1c)
                r13[3].d = r14_12.d
                
                if (r14_12.d != 0 || r8_17 != 0)
                    sub_1407c35c0(&r13[2], r14_12.d, r8_17)
                    memcpy(r13[2], r15_8, (r14_12 << 6).d)
                else
                    *(r13 + 0x1c) = 0
            
            sub_140780a30(r13, rsi + 0x698)
            int32_t rcx_78 = *(rsi + 0x868)
            int32_t temp1_5 = mods.dp.d(sx.q(rcx_78), *(rsi + 0x860))
            *(rsi + 0x868) = rcx_78 + 1
            int64_t rax_84 = sx.q(r13[3].d)
            int64_t rdi_6 = sx.q(temp1_5)
            
            if (rax_84.d == r13[1].d)
                if (rax_84.d s> 0)
                    uint64_t r10_1 = *r13
                    int64_t r11_1 = 0
                    int64_t rdx_48 = r13[2] - r10_1
                    
                    do
                        int64_t i = 0
                        uint64_t r9_3 = r10_1
                        
                        do
                            int64_t j = 0
                            uint64_t rax_85 = r9_3
                            
                            do
                                uint32_t zmm0_6[0x4] = *(rdx_48 + rax_85)
                                zmm0_6[0] = zmm0_6[0] f- *rax_85
                                
                                if (_mm_and_ps(zmm0_6, 0x7fffffff)[0] f> 9.99999997e-07f)
                                    goto label_14279293e
                                
                                j += 1
                                rax_85 += 4
                            while (j s< 4)
                            
                            i += 1
                            r9_3 += 0x10
                        while (i s< 4)
                        
                        r11_1 += 1
                        r10_1 += 0x40
                    while (r11_1 s< rax_84)
                
                result = *(rsi + 0x858)
                *(rdi_6 + result) = 1
            else
            label_14279293e:
                result = *(rsi + 0x858)
                *(rdi_6 + result) = 0
        else
            sub_14278e530(rsi)
            
            if (&arg2[2] != rsi + 0x698)
                int64_t r14_11 = sx.q(*(rsi + 0x6a0))
                int64_t r15_7 = *(rsi + 0x698)
                int32_t r8_14 = *(arg2 + 0x1c)
                arg2[3].d = r14_11.d
                
                if (r14_11.d != 0 || r8_14 != 0)
                    sub_1407c35c0(&arg2[2], r14_11.d, r8_14)
                    memcpy(arg2[2], r15_7, (r14_11 << 6).d)
                else
                    *(arg2 + 0x1c) = 0
            
            sub_140780a30(r13, rsi + 0x698)
            int32_t rcx_71 = *(rsi + 0x868)
            int32_t temp1_4 = mods.dp.d(sx.q(rcx_71), *(rsi + 0x860))
            *(rsi + 0x868) = rcx_71 + 1
            result = *(rsi + 0x858)
            *(sx.q(temp1_4) + result) = 0
else
    result = *(rsi + 0x5a8)
    
    if (result == 0)
        goto label_142792808
    
    uint64_t result_1 = result
    result += 0x28
    
    if (result_1 == -0x28)
        goto label_142792808
    
    int64_t* var_2e0
    int64_t* r14_1
    
    if (*(rsi + 0x4f8) != 0)
        r14_1 = var_2e0
    else
        rbx = 1
        r14_1 = *(*(rsi + 0x520) + 0xc8)
        
        if (r14_1 != 0)
            r14_1[1].d += 1
    
    if ((1 & rbx.b) != 0)
        rbx &= 0xfffffffe
        
        if (r14_1 != 0)
            r14_1[1].d -= 1
            
            if (r14_1[1].d == 1)
                (**r14_1)(r14_1)
                int32_t rax_5 = *(r14_1 + 0xc)
                *(r14_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*r14_1 + 8))(r14_1, 1)
    
    int64_t rax_7 = *(rsi + 0x500)
    int64_t var_308_1 = rax_7
    int64_t* r14_2
    
    if (rax_7 == 0)
        void* rax_8 = *(rsi + 0x520)
        rbx |= 2
        r14_2 = *(rax_8 + 0xc8)
        
        if (r14_2 != 0)
            r14_2[1].d += 1
        
        var_308_1 = *(rax_8 + 0xc0) + 0x110
    else
        r14_2 = var_2e0
    
    if ((rbx.b & 2) != 0)
        rbx &= 0xfffffffd
        
        if (r14_2 != 0)
            r14_2[1].d -= 1
            
            if (r14_2[1].d == 1)
                (**r14_2)(r14_2)
                int32_t rax_12 = *(r14_2 + 0xc)
                *(r14_2 + 0xc) -= 1
                
                if (rax_12 == 1)
                    (*(*r14_2 + 8))(r14_2, 1)
    
    void* rax_14 = *(rsi + 0x520)
    int64_t* r14_3 = *(rax_14 + 0xc8)
    int64_t rcx_5 = *(rax_14 + 0xc0)
    
    if (r14_3 != 0)
        r14_3[1].d += 1
    
    if (r14_3 != 0)
        r14_3[1].d -= 1
        
        if (r14_3[1].d == 1)
            (**r14_3)(r14_3)
            int32_t rax_18 = *(r14_3 + 0xc)
            *(r14_3 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*r14_3 + 8))(r14_3, 1)
    
    void* rax_20 = *(rsi + 0x520)
    int64_t* r14_4 = *(rax_20 + 0xc8)
    void* r15_1 = *(rax_20 + 0xc0)
    
    if (r14_4 != 0)
        r14_4[1].d += 1
    
    int64_t* var_300
    int64_t* rax_21 = sub_140b58170(&var_300, "MassToLocal", 1)
    data_143f37078
    int64_t rax_22 = sub_142780580(r15_1, *rax_21)
    
    if (r14_4 != 0)
        r14_4[1].d -= 1
        
        if (r14_4[1].d == 1)
            int64_t rdx_2 = *r14_4
            (*rdx_2)(r14_4, rdx_2)
            int32_t rax_23 = *(r14_4 + 0xc)
            *(r14_4 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*r14_4 + 8))(r14_4, 1)
    
    void* rax_25 = *(rsi + 0x5a8)
    float zmm13[0x4]
    
    if (*(rax_25 + 0x30) s<= 1)
        zmm13 = zx.o(0)
    else
        rax_25 = *(rax_25 + 0x28)
        zmm13 = *(rax_25 + 0x168)
        zmm13[0] = zmm13[0] f- *(rax_25 + 0xb0)
    
    float temp15_1 = *(rsi + 0x638)
    zmm13[0] - temp15_1
    int128_t zmm11 = 0x322bcc77
    rax_25.b = zmm13[0] < temp15_1
    r13[4].b = rax_25.b
    float zmm1_1[0x4] = *(rsi + 0x6e0)
    uint32_t zmm6_1[0x4] = *(rsi + 0x638)
    uint32_t zmm0_1[0x4] = zmm1_1
    zmm0_1[0] = zmm0_1[0] f- zmm6_1[0]
    zmm0_1 = _mm_and_ps(zmm0_1, 0x7fffffff)
    
    if (zmm0_1[0] f> 9.99999994e-09f || *(rsi + 0x6a0) == 0)
        if (not(zmm6_1[0] f<= zmm13[0]))
            zmm0_1 = zmm1_1
            zmm0_1[0] = zmm0_1[0] f- 3.40282347e+38f
            zmm0_1 = _mm_and_ps(zmm0_1, 0x7fffffff)
        
        void* r12_1
        int64_t* r14_6
        int64_t* r15_2
        bool cond:3_1
        
        if (zmm6_1[0] f<= zmm13[0] || zmm0_1[0] f<= 9.99999994e-09f)
            r12_1 = *(rsi + 0x4f8)
            *(rsi + 0x6e0) = zmm6_1[0]
            int64_t* r14_10
            
            if (r12_1 == 0)
                void* rax_63 = *(rsi + 0x520)
                rbx |= 4
                r14_10 = *(rax_63 + 0xc8)
                
                if (r14_10 != 0)
                    r14_10[1].d += 1
                
                r12_1 = *(rax_63 + 0xc0) + 0xf8
            else
                r14_10 = var_300
            
            if ((rbx.b & 4) != 0)
                rbx &= 0xfffffffb
                
                if (r14_10 != 0)
                    r14_10[1].d -= 1
                    
                    if (r14_10[1].d == 1)
                        (**r14_10)(r14_10)
                        int32_t rax_66 = *(r14_10 + 0xc)
                        *(r14_10 + 0xc) -= 1
                        
                        if (rax_66 == 1)
                            (*(*r14_10 + 8))(r14_10, 1)
            
            r15_2 = *(rsi + 0x4f0)
            
            if (r15_2 == 0)
                void* rax_68 = *(rsi + 0x520)
                r14_6 = *(rax_68 + 0xc8)
                
                if (r14_6 != 0)
                    r14_6[1].d += 1
                
                r15_2 = *(rax_68 + 0xc0) + 0xb0
                rbx = 8
            else
                r14_6 = var_300
            
            cond:3_1 = (rbx.b & 8) == 0
        label_142792748:
            
            if (not(cond:3_1) && r14_6 != 0)
                r14_6[1].d -= 1
                
                if (r14_6[1].d == 1)
                    (**r14_6)(r14_6)
                    int32_t rdi_4 = *(r14_6 + 0xc)
                    *(r14_6 + 0xc) -= 1
                    
                    if (rdi_4 == 1)
                        (*(*r14_6 + 8))(r14_6, zx.q(rdi_4))
            
            sub_141d17bb0(r15_2, r12_1, rsi + 0x698)
            sub_140780a30(&r13[2], rsi + 0x698)
            sub_140780a30(r13, rsi + 0x698)
            bool cond:2_1 = *(rsi + 0x6f4) == 0
            *(rsi + 0x6f0) = 0
            
            if (not(cond:2_1))
                sub_1405c5510(rsi + 0x6e8, 0)
            
            sub_1421ad750(rsi + 0x6e8, *(*(rsi + 0x5a8) + 0x30))
            int32_t rcx_65 = *(rsi + 0x868)
            int32_t temp1_3 = mods.dp.d(sx.q(rcx_65), *(rsi + 0x860))
            *(rsi + 0x868) = rcx_65 + 1
            result = *(rsi + 0x858)
            *(sx.q(temp1_3) + result) = 0
        else
            if (*(rsi + 0x6a0) == 0)
                r12_1 = *(rsi + 0x4f8)
                int64_t* r14_5
                
                if (r12_1 == 0)
                    void* rax_26 = *(rsi + 0x520)
                    rbx |= 0x10
                    r14_5 = *(rax_26 + 0xc8)
                    
                    if (r14_5 != 0)
                        r14_5[1].d += 1
                    
                    r12_1 = *(rax_26 + 0xc0) + 0xf8
                else
                    r14_5 = var_300
                
                if ((rbx.b & 0x10) != 0)
                    rbx &= 0xffffffef
                    
                    if (r14_5 != 0)
                        r14_5[1].d -= 1
                        
                        if (r14_5[1].d == 1)
                            (**r14_5)(r14_5)
                            int32_t rax_29 = *(r14_5 + 0xc)
                            *(r14_5 + 0xc) -= 1
                            
                            if (rax_29 == 1)
                                (*(*r14_5 + 8))(r14_5, 1)
                
                r15_2 = *(rsi + 0x4f0)
                
                if (r15_2 == 0)
                    void* rax_31 = *(rsi + 0x520)
                    r14_6 = *(rax_31 + 0xc8)
                    
                    if (r14_6 != 0)
                        r14_6[1].d += 1
                    
                    r15_2 = *(rax_31 + 0xc0) + 0xb0
                    cond:3_1 = ((rbx.b | 0x20) & 0x20) == 0
                else
                    r14_6 = var_300
                    cond:3_1 = (rbx.b & 0x20) == 0
                
                goto label_142792748
            
            if (zmm6_1[0] f< zmm1_1[0])
                goto label_142792644
            
            zmm6_1[0] = zmm6_1[0] f- zmm1_1[0]
            float zmm0_2[0x4]
            float zmm6_2[0x4]
            uint128_t zmm7_1
            uint128_t zmm8_1
            uint32_t zmm9_1[0x4]
            zmm0_2, zmm6_2, zmm7_1, zmm8_1, zmm9_1 = sub_140a454f0(zmm6_1, zmm13)
            zmm6_2[0] = zmm6_2[0] / zmm13[0]
            float zmm14[0x4] = zmm0_2
            int32_t rcx_14 = int.d(zmm6_2[0])
            
            if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14)).d f== zmm6_2[0]))
                zmm6_2 = _mm_cvtepi32_ps(zx.o(rcx_14
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6_2, zmm6_2[0].q)) & 1)))
            
            uint128_t zmm1_2 = *(rsi + 0x1d0)
            uint128_t var_58_1 = zmm7_1
            uint128_t var_68_1 = zmm8_1
            int32_t rdx_3 = int.d(zmm6_2[0])
            int32_t rax_34
            rax_34.b = zmm14[0] > 9.99999994e-09f
            float var_288[0x4] = *(rsi + 0x1c0)
            int32_t rdx_4 = rdx_3 + rax_34
            int32_t rax_35 = 0
            int128_t zmm10
            int128_t var_88_1 = zmm10
            int128_t zmm12
            int128_t var_a8_1 = zmm12
            uint128_t var_278_1 = zmm1_2
            float var_268_1[0x4] = *(rsi + 0x1e0)
            int32_t var_31c_1 = 0
            
            if (rdx_4 s<= 0)
            label_142792607:
                int32_t rcx_50 = *(rsi + 0x868)
                int32_t temp1_1 = mods.dp.d(sx.q(rcx_50), *(rsi + 0x860))
                *(rsi + 0x868) = rcx_50 + 1
                result = *(rsi + 0x858)
                *(sx.q(temp1_1) + result) = r12 == 0
            else
                zmm10 = 0x3727c5ac
                int64_t* rcx_16 = rsi + 0x698
                zmm12 = 0x3f800000
                void* r8_3 = &r13[2]
                int32_t rdx_5 = rdx_4 - 1
                int64_t* var_2d8_1 = rcx_16
                int32_t var_318_1 = rdx_5
                void* var_2e0_1 = r8_3
                
                while (true)
                    zmm0_2 = rax_35 != rdx_5 ? zmm13 : zmm14
                    
                    zmm0_2[0] = zmm0_2[0] f+ *(rsi + 0x6e0)
                    *(rsi + 0x6e0) = zmm0_2[0]
                    sub_140780a30(r8_3, rcx_16)
                    void* rdx_7 = *(rsi + 0x5a8)
                    zmm8_1 = *(rsi + 0x6e0)
                    int64_t* rbx_2 = *(rdx_7 + 0x28)
                    int64_t r14_7 = sx.q(*(rdx_7 + 0x30))
                    int64_t* rdi_1 = rbx_2
                    void* rcx_19 = r14_7 * 0xb8 + rbx_2
                    void* r15_4
                    float zmm0_3[0x4]
                    
                    if (rbx_2 == rcx_19)
                    label_142791d80:
                        int64_t rcx_21 = sx.q(sub_14278ff10(rdx_7 + 0x28, zmm8_1.d))
                        int32_t rax_37 = (r14_7 - 1).d
                        
                        if (rcx_21.d != rax_37)
                            rdi_1 = rcx_21 * 0xb8 + rbx_2
                            r15_4 = sx.q((rcx_21 + 1).d) * 0xb8 + rbx_2
                        else
                            rdi_1 = sx.q(rax_37) * 0xb8 + rbx_2
                            r15_4 = nullptr
                    else
                        while (true)
                            zmm0_3 = rdi_1[0x16].d
                            zmm0_3[0] = zmm0_3[0] f- zmm8_1.d
                            
                            if (_mm_and_ps(zmm0_3, zmm9_1)[0] f<= zmm11.d)
                                break
                            
                            rdi_1 = &rdi_1[0x17]
                            
                            if (rdi_1 == rcx_19)
                                goto label_142791d80
                        
                        r15_4 = nullptr
                    
                    if (rdi_1 != 0)
                        int64_t var_310
                        uint64_t* rcx_46
                        int64_t* rdx_21
                        
                        if (r15_4 != 0)
                            zmm1_2 = rdi_1[0x16].d
                            
                            if (not(zmm8_1.d f<= zmm1_2.d))
                                int64_t rcx_30 = sx.q(*(r15_4 + 0x18))
                                zmm8_1.d = zmm8_1.d f- zmm1_2.d
                                zmm0_3 = *(r15_4 + 0xb0)
                                char rax_46 = r12
                                zmm0_3[0] = zmm0_3[0] f- zmm1_2.d
                                
                                if (rcx_30.d s> 0)
                                    rax_46 = 1
                                
                                int32_t rdx_11 = 0
                                int64_t r12_5 = 0
                                int32_t var_320_1 = 0
                                zmm8_1.d = zmm8_1.d f/ zmm0_3[0]
                                
                                if (rcx_30.d s> 0)
                                    float (* r14_9)[0x4] = nullptr
                                    
                                    do
                                        int64_t r8_7 = sx.q(*(*(r15_4 + 0x10) + (r12_5 << 2)))
                                        int32_t var_324_1 = r8_7.d
                                        
                                        if (r8_7.d s>= *(rsi + 0x6a0))
                                            sub_140780a30(var_2e0_1, var_2d8_1)
                                            rdx_21 = var_2d8_1
                                            rcx_46 = arg2
                                            goto label_14279255f
                                        
                                        int32_t rcx_31
                                        
                                        if (rdx_11 s>= *(r15_4 + 0x28))
                                            rcx_31 = -1
                                        else
                                            rcx_31 = *(*(r15_4 + 0x20) + (r12_5 << 2))
                                        
                                        int64_t rax_52
                                        int64_t rbx_5
                                        void* r9_2
                                        float zmm0_5[0x4]
                                        float zmm1_4[0x4]
                                        float zmm2_3[0x4]
                                        float zmm3_2[0x4]
                                        float zmm4_3[0x4]
                                        float zmm5_3[0x4]
                                        float zmm6_4[0x4]
                                        
                                        if (rcx_31 == 0xffffffff)
                                            float (* rax_53)[0x4] = *r15_4
                                            rbx_5 = r8_7
                                            float var_198[0x4] = *(rax_53 + r14_9)
                                            uint128_t var_188_1 = *(rax_53 + r14_9 + 0x10)
                                            float var_178_1[0x4] = *(rax_53 + r14_9 + 0x20)
                                            float var_1f8[0x4]
                                            float var_108[0x3][0x4]
                                            zmm13, zmm14 = sub_140ad7d70(
                                                sub_140ad8030(r8_7 * 0x30 + *(rax_22 + 8), 
                                                    &var_108, &var_198), 
                                                &var_1f8, &var_288)
                                            zmm5_3 = var_1f8
                                            float zmm7_4[0x4] = data_143f880d0
                                            zmm1_4 = _mm_mul_ps(zmm5_3, zmm5_3)
                                            zmm1_4 = _mm_add_ps(zmm1_4, 
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                                            zmm4_3 = _mm_add_ps(
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                                            zmm1_4 = _mm_rsqrt_ps(zmm4_3)
                                            zmm3_2 = _mm_mul_ps(zmm4_3, zmm7_4)
                                            zmm2_3 = _mm_add_ps(
                                                _mm_mul_ps(
                                                    _mm_sub_ps(zmm7_4, 
                                                        _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), 
                                                            zmm3_2)), 
                                                    zmm1_4), 
                                                zmm1_4)
                                            zmm7_4 = _mm_sub_ps(zmm7_4, 
                                                _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_2))
                                            zmm0_5 = _mm_cmpeq_ps(data_143f880e0, zmm4_3, 2)
                                            zmm4_3 = data_143f880a0
                                            zmm7_4 = _mm_and_ps(
                                                _mm_mul_ps(
                                                    _mm_add_ps(_mm_mul_ps(zmm7_4, zmm2_3), zmm2_3), 
                                                    zmm5_3) ^ data_143f880c0, 
                                                zmm0_5) ^ data_143f880c0
                                            var_1f8 = zmm7_4
                                            zmm1_4 = _mm_add_ps(zmm7_4, zmm7_4)
                                            zmm3_2 = zmm7_4
                                            zmm2_3 = _mm_shuffle_ps(zmm7_4, zmm7_4, 4)
                                            zmm7_4 = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xff)
                                            zmm3_2 = _mm_mul_ps(zmm3_2, zmm1_4)
                                            zmm2_3 = _mm_mul_ps(zmm2_3, 
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x29))
                                            zmm7_4 = _mm_mul_ps(zmm7_4, 
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x12))
                                            zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a)
                                            zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 1)
                                            float var_1d8[0x4]
                                            zmm5_3 = _mm_shuffle_ps(var_1d8, var_1d8, 0xc9)
                                            zmm6_4 = _mm_add_ps(zmm7_4, zmm2_3)
                                            zmm2_3 = _mm_sub_ps(zmm2_3, zmm7_4)
                                            zmm0_5 = _mm_add_ps(zmm0_5, zmm3_2)
                                            zmm6_4 = _mm_mul_ps(zmm6_4, var_1d8)
                                            zmm5_3 = _mm_mul_ps(zmm5_3, zmm2_3)
                                            zmm2_3 = __andps_xmmxud_memxud(
                                                _mm_mul_ps(_mm_sub_ps(zmm4_3, zmm0_5), var_1d8), 
                                                data_143f880b0)
                                            rax_52 = *(rsi + 0x698)
                                            r9_2 = rsi + 0x698
                                            zmm0_5 = _mm_shuffle_ps(zmm5_3, zmm2_3, 0x32)
                                            zmm3_2 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zmm6_4, zmm2_3, 0), zmm0_5, 0x82)
                                            zmm0_5 = _mm_shuffle_ps(zmm6_4, zmm2_3, 0x31)
                                            zmm1_4 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zmm5_3, zmm2_3, 0x10), zmm0_5, 0x88)
                                            float var_1e8[0x4]
                                            zmm0_5 = var_1e8
                                        else
                                            zmm7_1 = data_143f880a0
                                            int64_t rdx_12 = *r15_4
                                            zmm1_2.q = zx.o(0) u>> 0x40
                                            zmm0_3 = _mm_shuffle_ps(zx.o(0), zmm1_2, 0xc4)
                                            zmm1_2 = __andps_xmmxud_memxud(zmm7_1, data_143f880b0)
                                            float var_2b8[0x4] = zmm0_3
                                            float (* rcx_34)[0x4] = sx.q(rcx_31) * 0x30 + *rdi_1
                                            var_310.d = zmm8_1.d
                                            int128_t var_2a8_1 = zx.o(0)
                                            uint128_t var_298_1 = zmm1_2
                                            
                                            if (_mm_and_ps(zmm8_1, zmm9_1)[0] f> zmm10.d)
                                                zmm0_3 = zmm8_1
                                                zmm0_3[0] = zmm0_3[0] f- zmm12.d
                                                
                                                if (_mm_and_ps(zmm0_3, zmm9_1)[0] f> zmm10.d)
                                                    zmm1_2 = __subps_xmmps_memps(
                                                        *(r14_9 + rdx_12 + 0x10), rcx_34[1])
                                                    float zmm5_1[0x4] = var_310.d
                                                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
                                                    zmm7_1 = _mm_sub_ps(zmm7_1, zmm5_1)
                                                    uint128_t var_2a8_4 = __addps_xmmps_memps(
                                                        _mm_mul_ps(zmm1_2, zmm5_1), rcx_34[1])
                                                    float var_298_4[0x4] = __addps_xmmps_memps(
                                                        _mm_mul_ps(
                                                            __subps_xmmps_memps(
                                                                *(r14_9 + rdx_12 + 0x20), rcx_34[2]), 
                                                            zmm5_1), 
                                                        rcx_34[2])
                                                    zmm5_1 = __mulps_xmmps_memps(zmm5_1, 
                                                        *(r14_9 + rdx_12))
                                                    float zmm3[0x4] = *rcx_34
                                                    zmm1_2 = *(r14_9 + rdx_12)
                                                    float zmm2_1[0x4] = _mm_sub_ps(zx.o(0), zmm3)
                                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm3)
                                                    zmm1_2 = _mm_add_ps(zmm1_2, 
                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                                    zmm6_2 = _mm_add_ps(
                                                        _mm_mul_ps(
                                                            _mm_and_ps(
                                                                _mm_cmpeq_ps(zx.o(0), 
                                                                    _mm_add_ps(
                                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), 
                                                                        zmm1_2), 
                                                                    2), 
                                                                zmm3 ^ zmm2_1) ^ zmm2_1, 
                                                            zmm7_1), 
                                                        zmm5_1)
                                                    zmm5_1 = data_143f880d0
                                                    zmm1_2 = _mm_mul_ps(zmm6_2, zmm6_2)
                                                    zmm1_2 = _mm_add_ps(zmm1_2, 
                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                                    float zmm4_1[0x4] = _mm_add_ps(
                                                        _mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), 
                                                        zmm1_2)
                                                    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                                                    zmm3 = _mm_mul_ps(zmm4_1, zmm5_1)
                                                    zmm2_1 = _mm_add_ps(
                                                        _mm_mul_ps(
                                                            _mm_sub_ps(zmm5_1, 
                                                                _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), 
                                                                    zmm3)), 
                                                            zmm1_2), 
                                                        zmm1_2)
                                                    zmm5_1 = _mm_sub_ps(zmm5_1, 
                                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), 
                                                            zmm3))
                                                    zmm0_3 = _mm_cmpeq_ps(data_143f880e0, zmm4_1, 2)
                                                    var_2b8 = _mm_and_ps(
                                                        _mm_mul_ps(
                                                            _mm_add_ps(_mm_mul_ps(zmm5_1, zmm2_1), 
                                                                zmm2_1), 
                                                            zmm6_2) ^ data_143f880c0, 
                                                        zmm0_3) ^ data_143f880c0
                                                else
                                                    var_2b8 = *(r14_9 + rdx_12)
                                                    uint128_t var_2a8_3 = *(r14_9 + rdx_12 + 0x10)
                                                    float var_298_3[0x4] = *(r14_9 + rdx_12 + 0x20)
                                            else
                                                var_2b8 = *rcx_34
                                                uint128_t var_2a8_2 = rcx_34[1]
                                                float var_298_2[0x4] = rcx_34[2]
                                            
                                            rbx_5 = r8_7
                                            float var_228[0x4]
                                            float var_138[0x3][0x4]
                                            zmm13, zmm14 = sub_140ad7d70(
                                                sub_140ad8030(r8_7 * 0x30 + *(rax_22 + 8), 
                                                    &var_138, &var_2b8), 
                                                &var_228, &var_288)
                                            zmm5_3 = var_228
                                            float zmm7_3[0x4] = data_143f880d0
                                            zmm1_4 = _mm_mul_ps(zmm5_3, zmm5_3)
                                            zmm1_4 = _mm_add_ps(zmm1_4, 
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                                            zmm4_3 = _mm_add_ps(
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                                            zmm1_4 = _mm_rsqrt_ps(zmm4_3)
                                            zmm3_2 = _mm_mul_ps(zmm4_3, zmm7_3)
                                            zmm2_3 = _mm_add_ps(
                                                _mm_mul_ps(
                                                    _mm_sub_ps(zmm7_3, 
                                                        _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), 
                                                            zmm3_2)), 
                                                    zmm1_4), 
                                                zmm1_4)
                                            zmm7_3 = _mm_sub_ps(zmm7_3, 
                                                _mm_mul_ps(_mm_mul_ps(zmm2_3, zmm2_3), zmm3_2))
                                            zmm0_5 = _mm_cmpeq_ps(data_143f880e0, zmm4_3, 2)
                                            zmm4_3 = data_143f880a0
                                            zmm7_3 = _mm_and_ps(
                                                _mm_mul_ps(
                                                    _mm_add_ps(_mm_mul_ps(zmm7_3, zmm2_3), zmm2_3), 
                                                    zmm5_3) ^ data_143f880c0, 
                                                zmm0_5) ^ data_143f880c0
                                            var_228 = zmm7_3
                                            zmm1_4 = _mm_add_ps(zmm7_3, zmm7_3)
                                            zmm3_2 = zmm7_3
                                            zmm2_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 4)
                                            zmm7_3 = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xff)
                                            zmm3_2 = _mm_mul_ps(zmm3_2, zmm1_4)
                                            zmm2_3 = _mm_mul_ps(zmm2_3, 
                                                _mm_shuffle_ps(zmm1_4, zmm1_4, 0x29))
                                            zmm1_4 = _mm_shuffle_ps(zmm1_4, zmm1_4, 0x12)
                                            zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a)
                                            zmm7_3 = _mm_mul_ps(zmm7_3, zmm1_4)
                                            zmm0_5 = _mm_add_ps(zmm0_5, 
                                                _mm_shuffle_ps(zmm3_2, zmm3_2, 1))
                                            float var_208[0x4]
                                            zmm5_3 = _mm_shuffle_ps(var_208, var_208, 0xc9)
                                            zmm6_4 = _mm_add_ps(zmm7_3, zmm2_3)
                                            zmm2_3 = _mm_sub_ps(zmm2_3, zmm7_3)
                                            zmm6_4 = _mm_mul_ps(zmm6_4, var_208)
                                            zmm5_3 = _mm_mul_ps(zmm5_3, zmm2_3)
                                            zmm2_3 = __andps_xmmxud_memxud(
                                                _mm_mul_ps(_mm_sub_ps(zmm4_3, zmm0_5), var_208), 
                                                data_143f880b0)
                                            zmm3_2 = _mm_shuffle_ps(
                                                _mm_shuffle_ps(zmm6_4, zmm2_3, 0), 
                                                _mm_shuffle_ps(zmm5_3, zmm2_3, 0x32), 0x82)
                                            zmm1_4 = _mm_shuffle_ps(zmm5_3, zmm2_3, 0x10)
                                            r9_2 = rsi + 0x698
                                            rax_52 = *r9_2
                                            zmm1_4 = _mm_shuffle_ps(zmm1_4, 
                                                _mm_shuffle_ps(zmm6_4, zmm2_3, 0x31), 0x88)
                                            float var_218[0x4]
                                            zmm0_5 = var_218
                                        
                                        int64_t rbx_6 = rbx_5 << 6
                                        zmm6_4 = _mm_shuffle_ps(zmm6_4, zmm5_3, 0x12)
                                        zmm4_3[0].q = zmm0_5 u>> 0x40
                                        zmm6_4 = _mm_shuffle_ps(zmm6_4, zmm2_3, 0xe8)
                                        *(rbx_6 + rax_52) = zmm3_2
                                        *(rbx_6 + rax_52 + 0x10) = zmm1_4
                                        zmm0_5 = _mm_shuffle_ps(zmm0_5, zmm4_3, 0xc4)
                                        *(rbx_6 + rax_52 + 0x20) = zmm6_4
                                        *(rbx_6 + rax_52 + 0x30) = zmm0_5
                                        zmm8_1, zmm9_1, zmm10, zmm11, zmm12 =
                                            sub_141d1cbd0(var_324_1, rcx_5 + 0xb0, var_308_1, r9_2)
                                        r12_5 += 1
                                        rdx_11 = var_320_1 + 1
                                        r14_9 = &r14_9[3]
                                        var_320_1 = rdx_11
                                    while (r12_5 s< rcx_30)
                                    
                                    r13 = arg2
                                
                            label_14279250d:
                                r12 = rax_46
                        else
                            int64_t rax_40 = sx.q(rdi_1[3].d)
                            char r12_3 = r12
                            
                            if (rax_40.d s> 0)
                                r12_3 = 1
                            
                            if (rax_40.d s> 0)
                                int64_t rcx_23 = 0
                                var_310 = 0
                                
                                while (true)
                                    int64_t r14_8 = sx.q(*(rdi_1[2] + (r15_4 << 2)))
                                    
                                    if (r14_8.d s>= *(rsi + 0x6a0))
                                        sub_140780a30(&r13[2], var_2d8_1)
                                        rdx_21 = var_2d8_1
                                        rcx_46 = r13
                                    label_14279255f:
                                        result = sub_140780a30(rcx_46, rdx_21)
                                        break
                                    
                                    float (* rax_42)[0x4] = *rdi_1
                                    float var_1c8[0x4] = *(rax_42 + rcx_23)
                                    uint128_t var_1b8_1 = *(rax_42 + rcx_23 + 0x10)
                                    float var_1a8_1[0x4] = *(rax_42 + rcx_23 + 0x20)
                                    float var_258[0x4]
                                    float var_168[0x3][0x4]
                                    zmm13, zmm14 = sub_140ad7d70(
                                        sub_140ad8030(r14_8 * 0x30 + *(rax_22 + 8), &var_168, 
                                            &var_1c8), 
                                        &var_258, &var_288)
                                    float zmm5_2[0x4] = var_258
                                    float zmm7_2[0x4] = data_143f880d0
                                    float zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                                    zmm1_3 =
                                        _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                                    float zmm4_2[0x4] =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                                    zmm1_3 = _mm_rsqrt_ps(zmm4_2)
                                    float zmm3_1[0x4] = _mm_mul_ps(zmm4_2, zmm7_2)
                                    float zmm2_2[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm7_2, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_1)), 
                                            zmm1_3), 
                                        zmm1_3)
                                    zmm7_2 = _mm_sub_ps(zmm7_2, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_1))
                                    float zmm0_4[0x4] = _mm_cmpeq_ps(data_143f880e0, zmm4_2, 2)
                                    zmm4_2 = data_143f880a0
                                    zmm7_2 = _mm_and_ps(
                                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm7_2, zmm2_2), zmm2_2), 
                                            zmm5_2) ^ data_143f880c0, 
                                        zmm0_4) ^ data_143f880c0
                                    var_258 = zmm7_2
                                    zmm1_3 = _mm_add_ps(zmm7_2, zmm7_2)
                                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 4), 
                                        _mm_shuffle_ps(zmm1_3, zmm1_3, 0x29))
                                    zmm3_1 = _mm_mul_ps(zmm1_3, zmm7_2)
                                    zmm1_3 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x12)
                                    zmm7_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm7_2, zmm7_2, 0xff), zmm1_3)
                                    zmm0_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1a)
                                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 1)
                                    float var_238[0x4]
                                    zmm5_2 = _mm_shuffle_ps(var_238, var_238, 0xc9)
                                    float zmm6_3[0x4] = _mm_add_ps(zmm7_2, zmm2_2)
                                    zmm2_2 = _mm_sub_ps(zmm2_2, zmm7_2)
                                    zmm0_4 = _mm_add_ps(zmm0_4, zmm3_1)
                                    zmm6_3 = _mm_mul_ps(zmm6_3, var_238)
                                    zmm5_2 = _mm_mul_ps(zmm5_2, zmm2_2)
                                    zmm2_2 = __andps_xmmxud_memxud(
                                        _mm_mul_ps(_mm_sub_ps(zmm4_2, zmm0_4), var_238), 
                                        data_143f880b0)
                                    int64_t rax_45 = *(rsi + 0x698)
                                    zmm0_4 = _mm_shuffle_ps(zmm5_2, zmm2_2, 0x32)
                                    int64_t rbx_4 = r14_8 << 6
                                    zmm3_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_3, zmm2_2, 0), 
                                        zmm0_4, 0x82)
                                    zmm0_4 = _mm_shuffle_ps(zmm6_3, zmm2_2, 0x31)
                                    zmm1_3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_2, zmm2_2, 0x10), 
                                        zmm0_4, 0x88)
                                    *(rbx_4 + rax_45) = zmm3_1
                                    *(rbx_4 + rax_45 + 0x10) = zmm1_3
                                    zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm5_2, 0x12)
                                    float var_248[0x4]
                                    zmm4_2[0].q = var_248 u>> 0x40
                                    zmm6_3 = _mm_shuffle_ps(zmm6_3, zmm2_2, 0xe8)
                                    zmm0_4 = _mm_shuffle_ps(var_248, zmm4_2, 0xc4)
                                    *(rbx_4 + rax_45 + 0x20) = zmm6_3
                                    *(rbx_4 + rax_45 + 0x30) = zmm0_4
                                    zmm9_1, zmm10, zmm11, zmm12 =
                                        sub_141d1cbd0(r14_8.d, rcx_5 + 0xb0, var_308_1, rsi + 0x698)
                                    r15_4 += 1
                                    rcx_23 = var_310 + 0x30
                                    var_310 = rcx_23
                                    
                                    if (r15_4 s>= rax_40)
                                        goto label_14279250d_1
                                
                                break
                            
                        label_14279250d_1:
                            r12 = r12_3
                    
                    sub_140780a30(r13, rsi + 0x698)
                    rax_35 = var_31c_1 + 1
                    var_31c_1 = rax_35
                    
                    if (rax_35 s>= rdx_4)
                        goto label_142792607
                    
                    rdx_5 = var_318_1
                    rcx_16 = rsi + 0x698
                    r8_3 = &r13[2]
    else
    label_142792644:
        sub_140780a30(&r13[2], rsi + 0x698)
        sub_140780a30(r13, rsi + 0x698)
        int32_t rcx_54 = *(rsi + 0x868)
        int32_t temp1_2 = mods.dp.d(sx.q(rcx_54), *(rsi + 0x860))
        *(rsi + 0x868) = rcx_54 + 1
        result = *(rsi + 0x858)
        *(sx.q(temp1_2) + result) = 1

__security_check_cookie(rax_1 ^ &var_348)
return result
