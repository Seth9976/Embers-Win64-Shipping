// 函数: sub_1416f00f0
// 地址: 0x1416f00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rbx = arg1
int64_t* rcx = *arg4
int64_t* r15 = arg3
int32_t* rax_3 = (*(*rcx + 0x20))(rcx)
uint128_t* rdi = *(rbx + 0x10)
void* r14_2 = &rdi[sx.q(*(rbx + 0x18)) * 4]
int32_t var_198
uint64_t var_168
int64_t var_15c
int32_t var_c0
int64_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
int32_t zmm4_1
int32_t zmm5_1

if (rdi != r14_2)
    void* rbx_1 = rdi + 0x3c
    
    do
        if (*(rbx_1 - 0x18) == 0 || rax_3 == 0 || *rax_3 == 0
                || test_bit(*(rbx_1 - 0x24) | *(rbx_1 - 0x20), rax_3[3] u>> 0x15 & 0x1f))
            zmm0.d = (*(rbx_1 - 0x14)).d f- *arg2
            zmm1.d = (*(rbx_1 - 0x10)).d f- arg2[1]
            int32_t r8 = 0
            void* rdx = r15 + 0x1c
            zmm3 = zx.o(0)
            var_c0 = zmm0.d
            int64_t rax_6 = 0
            zmm0.d = (*(rbx_1 - 0xc)).d f- arg2[2]
            int32_t var_bc_1 = zmm1.d
            zmm1.d = (*(rbx_1 - 8)).d f- *arg2
            int32_t var_b8_1 = zmm0.d
            zmm0.d = (*(rbx_1 - 4)).d f- arg2[1]
            var_198 = zmm1.d
            zmm1.d = (*rbx_1).d f- arg2[2]
            int32_t var_194_1 = zmm0.d
            zmm0 = 0x7f7fffff
            int32_t var_190_1 = zmm1.d
            
            while (true)
                zmm4_1 = zmm0.d
                void* rcx_4 = &var_c0 + rax_6
                zmm5_1 = zmm3.d
                zmm2 = *rcx_4
                
                if (*rdx == 0)
                    zmm0 = *(&r15[1] - &var_c0 + rcx_4)
                    zmm1 = zmm0
                    zmm0.d = zmm0.d f* *(&var_198 + rax_6)
                    zmm1.d = zmm1.d f* zmm2.d
                else
                    if (zmm2.d f> 0f)
                        goto label_1416f02e4
                    
                    if (0f f> *(&var_198 + rax_6))
                        goto label_1416f02e4
                    
                    zmm1 = zx.o(0)
                    zmm0 = 0x7f7fffff
                
                zmm3 = zmm0
                zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
                zmm3 = _mm_min_ss(zmm3.d, zmm1.d)
                zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
                zmm3 = _mm_max_ss(zmm3.d, zmm5_1)
                
                if (zmm3.d f> zmm0.d)
                    goto label_1416f02e4
                
                r8 += 1
                rdx += 1
                rax_6 += 4
                
                if (r8 s>= 3)
                    if (zmm3.d f> *(r15 + 0x14))
                        break
                    
                    if (zmm0.d f< 0f)
                        break
                    
                    int64_t* rcx_5 = *arg4
                    var_168.o = *rdi
                    uint64_t var_148_1 = rdi[2].q
                    var_15c:4.o = rdi[1]
                    
                    if ((*(*rcx_5 + 0x10))(rcx_5, &var_168, r15).b != 0)
                        break
                    
                label_1416f0496:
                    result.b = 0
                    goto label_1416f0ca1
        
    label_1416f02e4:
        rdi = &rdi[4]
        rbx_1 += 0x40
    while (rdi != r14_2)
    
    rbx = arg1

uint128_t* rdi_1 = *(rbx + 0x70)
void* r14_4 = sx.q(*(rbx + 0x78)) * 0x58 + rdi_1

if (rdi_1 != r14_4)
    void* rbx_2 = &rdi_1[3]
    
    while (true)
        if (*(rbx_2 + 0xc) != 0 && rax_3 != 0 && *rax_3 != 0
            && not(test_bit(*(rbx_2 + 4) | *rbx_2, rax_3[3] u>> 0x15 & 0x1f)))
        label_1416f0471:
            rdi_1 += 0x58
            rbx_2 += 0x58
            
            if (rdi_1 != r14_4)
                continue
            
            rbx = arg1
            break
        
        zmm0.d = (*rdi_1).d f- *arg2
        zmm1.d = (*(rbx_2 - 0x2c)).d f- arg2[1]
        int32_t r8_2 = 0
        void* rdx_2 = r15 + 0x1c
        zmm3 = zx.o(0)
        var_c0 = zmm0.d
        result = 0
        zmm0.d = (*(rbx_2 - 0x28)).d f- arg2[2]
        int32_t var_bc_2 = zmm1.d
        zmm1.d = (*(rbx_2 - 0x24)).d f- *arg2
        int32_t var_b8_2 = zmm0.d
        zmm0.d = (*(rbx_2 - 0x20)).d f- arg2[1]
        var_198 = zmm1.d
        zmm1.d = (*(rbx_2 - 0x1c)).d f- arg2[2]
        int32_t var_194_2 = zmm0.d
        zmm0 = 0x7f7fffff
        int32_t var_190_2 = zmm1.d
        
        while (true)
            zmm4_1 = zmm0.d
            void* rcx_9 = &var_c0 + result
            zmm5_1 = zmm3.d
            zmm2 = *rcx_9
            
            if (*rdx_2 == 0)
                zmm0 = *(&r15[1] - &var_c0 + rcx_9)
                zmm1 = zmm0
                zmm0.d = zmm0.d f* *(&var_198 + result)
                zmm1.d = zmm1.d f* zmm2.d
            else
                if (zmm2.d f> 0f)
                    goto label_1416f0471
                
                if (0f f> *(&var_198 + result))
                    goto label_1416f0471
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm3 = zmm0
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm4_1)
            zmm3 = _mm_max_ss(zmm3.d, zmm5_1)
            
            if (zmm3.d f> zmm0.d)
                goto label_1416f0471
            
            r8_2 += 1
            rdx_2 += 1
            result += 4
            
            if (r8_2 s>= 3)
                if (zmm3.d f> *(r15 + 0x14))
                    goto label_1416f0471
                
                if (zmm0.d f< 0f)
                    goto label_1416f0471
                
                int64_t* rcx_10 = *arg4
                var_168.o = *(rbx_2 - 0x18)
                uint64_t var_148_2 = *(rbx_2 + 8)
                var_15c:4.o = *(rbx_2 - 8)
                
                if ((*(*rcx_10 + 0x10))(rcx_10, &var_168, r15).b == 0)
                    break
                
                goto label_1416f0471
        
        goto label_1416f0496

if (*(rbx + 0x94) == 0)
    bool cond:0_1 = *(rbx + 0x68) == 0
    int32_t rax_10 = *(rbx + 0x28)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    var_168 = *(rbx + 0x20)
    int128_t zmm7
    int128_t var_58_1 = zmm7
    uint64_t var_15c_1 = *(rbx + 0x2c)
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    int32_t var_154_1 = *(rbx + 0x34)
    
    if (not(cond:0_1))
        zmm5_1 = *arg2
        void* rax_11 = r15 + 0x1c
        void* r13_1 = &r15[1]
        zmm6 = arg2[1]
        zmm0.d = var_168.d.d f- zmm5_1
        zmm7 = arg2[2]
        void* rdx_4 = rax_11
        int32_t* r10_1 = *r15
        zmm1.d = var_15c_1.d.d f- zmm5_1
        int32_t r8_4 = 0
        var_c0 = zmm0.d
        zmm0.d = var_168:4.d.d f- zmm6.d
        void* var_f8_1 = r13_1
        var_198 = zmm1.d
        int32_t* r14_5 = arg2
        zmm10 = zx.o(0)
        zmm1.d = var_154_1.d f- zmm7.d
        result = 0
        int32_t var_bc_3 = zmm0.d
        zmm0.d = rax_10.d f- zmm7.d
        int32_t var_190_3 = zmm1.d
        int32_t var_b8_3 = zmm0.d
        zmm0.d = var_15c_1:4.d.d f- zmm6.d
        int32_t var_194_3 = zmm0.d
        zmm0 = 0x7f7fffff
        
        while (true)
            zmm3 = zmm0
            void* rcx_11 = &var_c0 + result
            zmm4_1 = zmm10.d
            zmm2 = *rcx_11
            
            if (*rdx_4 == 0)
                zmm0 = *(r13_1 - &var_c0 + rcx_11)
                zmm1 = zmm0
                zmm0.d = zmm0.d f* *(&var_198 + result)
                zmm1.d = zmm1.d f* zmm2.d
            else
                if (zmm2.d f> 0f)
                    goto label_1416f0c7f
                
                if (0f f> *(&var_198 + result))
                    goto label_1416f0c7f
                
                zmm1 = zx.o(0)
                zmm0 = 0x7f7fffff
            
            zmm10 = zmm0
            zmm0 = _mm_max_ss(zmm0.d, zmm1.d)
            zmm10 = _mm_min_ss(zmm10.d, zmm1.d)
            zmm0 = _mm_min_ss(zmm0.d, zmm3.d)
            zmm10 = _mm_max_ss(zmm10.d, zmm4_1)
            
            if (zmm10.d f> zmm0.d)
                goto label_1416f0c7f
            
            r8_4 += 1
            rdx_4 += 1
            result += 4
            
            if (r8_4 s>= 3)
                if (zmm10.d f> *(r15 + 0x14))
                    break
                
                if (zmm0.d f< 0f)
                    break
                
                uint128_t zmm11
                zmm11.d = zmm10.d f* *r10_1
                uint128_t zmm12
                zmm12.d = zmm10.d f* r10_1[1]
                zmm10.d = zmm10.d f* r10_1[2]
                zmm11.d = zmm11.d f+ zmm5_1
                zmm12.d = zmm12.d f+ zmm6.d
                zmm10.d = zmm10.d f+ zmm7.d
                zmm1.d = zmm11.d f- *(rbx + 0x20)
                zmm2.d = zmm12.d f- *(rbx + 0x24)
                zmm3.d = zmm10.d f- *(rbx + 0x28)
                zmm0.d = zmm1.d f/ *(rbx + 0x44)
                int32_t rax_12 = int.d(zmm0.d)
                zmm0.d = zmm2.d f/ *(rbx + 0x48)
                var_c0 = rax_12
                int32_t rdx_5 = int.d(zmm0.d)
                zmm0.d = zmm3.d f/ *(rbx + 0x4c)
                int32_t var_bc_4 = rdx_5
                int32_t rcx_12 = int.d(zmm0.d)
                
                if (not(zmm1.d f>= 0f))
                    var_c0 = rax_12 - 1
                
                if (not(zmm2.d f>= 0f))
                    int32_t var_bc_5 = rdx_5 - 1
                
                if (not(zmm3.d f>= 0f))
                    rcx_12 -= 1
                
                int32_t var_180_1 = rcx_12
                uint64_t var_188 = var_c0.q
                int32_t* rax_15 = sub_1417a90d0(rbx + 0x20, &var_168, &var_188)
                int32_t rsi_1 = *(rbx + 0x40)
                int32_t var_178_1 = rsi_1
                var_188.d = *rax_15
                var_188:4.d = rax_15[1]
                int32_t rax_16 = rax_15[2]
                var_168 = *(rbx + 0x38)
                uint64_t r12_2 = var_168 u>> 0x20
                uint64_t var_138_1 = r12_2
                int32_t temp0_13
                int32_t temp1_1
                temp0_13:temp1_1 = sx.q(rsi_1 * var_168.d * r12_2.d)
                int64_t rbx_3 = sx.q((temp1_1 + (temp0_13 & 7)) s>> 3)
                int64_t rax_23 = j_sub_140a82f30(rbx_3 + 1)
                memset(rax_23, 0, rbx_3 + 1)
                int32_t rbx_4
                
                while (true)
                    void* r10_3 = arg1
                    int32_t rcx_18 = var_188.d
                    int32_t rdx_9 = var_188:4.d
                    int32_t r8_7 = rax_16
                    int64_t* rax_31 = (
                        sx.q((*(r10_3 + 0x54) * rcx_18 + rdx_9) * *(r10_3 + 0x58) + r8_7) << 4)
                        + *(r10_3 + 0x60)
                    float (* r9_6)[0x4] = *rax_31
                    float (* var_120_1)[0x4] = r9_6
                    void* rax_34 = sx.q(rax_31[1].d) * 0x58 + r9_6
                    var_198.q = rax_34
                    float zmm0_1[0x4]
                    float zmm4_2[0x4]
                    float zmm5_2
                    
                    if (r9_6 != rax_34)
                        void* r13_2 = &(*r9_6)[5]
                        void* var_108_1 = r13_2
                        
                        while (true)
                            int32_t rcx_19 = *(r13_2 + 0x38)
                            r15.b = 0
                            int32_t rdx_10 = *(r13_2 + 0x2c)
                            bool cond:6_1 = rdx_10 s> rcx_19
                            
                            if (rdx_10 != rcx_19)
                                goto label_1416f07e9
                            
                            if (*(r13_2 + 0x30) != *(r13_2 + 0x3c)
                                    || *(r13_2 + 0x34) != *(r13_2 + 0x40))
                                cond:6_1 = rdx_10 s> rcx_19
                            label_1416f07e9:
                                
                                if (not(cond:6_1))
                                    int32_t r14_6 = *(r13_2 + 0x3c)
                                    int32_t rax_37 = var_138_1.d
                                    rbx_4 = r12_2.d * rdx_10
                                    uint64_t i_2 = zx.q(rcx_19 - rdx_10 + 1)
                                    uint64_t i
                                    
                                    do
                                        int32_t r11_1 = *(r13_2 + 0x30)
                                        
                                        if (r11_1 s<= r14_6)
                                            int32_t rsi_2 = *(r13_2 + 0x34)
                                            int32_t r10_2 = *(r13_2 + 0x40)
                                            
                                            do
                                                int32_t r9_7 = rsi_2
                                                
                                                if (rsi_2 s<= r10_2)
                                                    int32_t r8_10 =
                                                        (rbx_4 + r11_1) * var_178_1 + rsi_2
                                                    
                                                    do
                                                        int32_t rax_38 = r8_10
                                                        int32_t rcx_22 = r8_10 & 7
                                                        
                                                        if (r8_10 s< 0)
                                                            rax_38 = r8_10 + 7
                                                            rcx_22 -= 8
                                                        
                                                        if ((*(sx.q(rax_38 s>> 3) + rax_23)
                                                                u>> rcx_22.b & 1) != 0)
                                                            r15.b = 1
                                                            break
                                                        
                                                        r9_7 += 1
                                                        r8_10 += 1
                                                    while (r9_7 s<= r10_2)
                                                
                                                r11_1 += 1
                                            while (r11_1 s<= r14_6)
                                            
                                            r13_2 = var_108_1
                                            rax_37 = var_138_1.d
                                        
                                        rbx_4 += rax_37
                                        i = i_2
                                        i_2 -= 1
                                    while (i != 1)
                                    r14_5 = arg2
                                    
                                    if (r15.b != 0)
                                    label_1416f09ef:
                                        r15 = arg3
                                    label_1416f09f8:
                                        r13_2 += 0x58
                                        r12_2 = var_138_1
                                        r9_6 = &(*var_120_1)[0x16]
                                        var_120_1 = r9_6
                                        var_108_1 = r13_2
                                        
                                        if (r9_6 != var_198.q)
                                            continue
                                        
                                        r8_7 = rax_16
                                        r13_1 = &r15[1]
                                        rdx_9 = var_188:4.d
                                        rcx_18 = var_188.d
                                        rsi_1 = var_178_1
                                        r10_3 = arg1
                                        break
                                    else
                                        r9_6 = var_120_1
                            
                            zmm0_1 = *r9_6
                            zmm0_1[0] = zmm0_1[0] f- *r14_5
                            int32_t r8_11 = 0
                            zmm1.d = (*(r13_2 - 0x10)).d f- r14_5[1]
                            zmm3 = zx.o(0)
                            void* rdx_12 = rax_11
                            float var_118 = zmm0_1[0]
                            int64_t rax_41 = 0
                            zmm0_1 = *(r13_2 - 0xc)
                            zmm0_1[0] = zmm0_1[0] f- r14_5[2]
                            int32_t var_114_1 = zmm1.d
                            zmm1.d = (*(r13_2 - 8)).d f- *r14_5
                            float var_110_1 = zmm0_1[0]
                            zmm0_1 = *(r13_2 - 4)
                            zmm0_1[0] = zmm0_1[0] f- r14_5[1]
                            var_168.d = zmm1.d
                            zmm1.d = (*r13_2).d f- r14_5[2]
                            var_168:4.d = zmm0_1[0]
                            zmm0_1 = 0x7f7fffff
                            int32_t var_160_2 = zmm1.d
                            
                            while (true)
                                zmm4_2 = zmm0_1
                                void* rcx_23 = &var_118 + rax_41
                                zmm5_2 = zmm3.d
                                zmm2 = *rcx_23
                                
                                if (*rdx_12 == 0)
                                    zmm0_1 = *(var_f8_1 - &var_118 + rcx_23)
                                    zmm0_1[0] = zmm0_1[0] f* *(&var_168 + rax_41)
                                    zmm1.d = zmm0_1.d f* zmm2.d
                                else
                                    if (zmm2.d f> 0f)
                                        goto label_1416f09ef
                                    
                                    if (0f f> *(&var_168 + rax_41))
                                        goto label_1416f09ef
                                    
                                    zmm1 = zx.o(0)
                                    zmm0_1 = 0x7f7fffff
                                
                                float temp0_14[0x4] = _mm_max_ss(zmm0_1[0], zmm1.d)
                                zmm3 = _mm_min_ss(zmm0_1.d, zmm1.d)
                                zmm0_1 = _mm_min_ss(temp0_14[0], zmm4_2[0])
                                zmm3 = _mm_max_ss(zmm3.d, zmm5_2)
                                
                                if (zmm3.d f> zmm0_1[0])
                                    goto label_1416f09ef
                                
                                r8_11 += 1
                                rdx_12 += 1
                                rax_41 += 4
                                
                                if (r8_11 s>= 3)
                                    r15 = arg3
                                    
                                    if (zmm3.d f> *(r15 + 0x14))
                                        goto label_1416f09f8
                                    
                                    if (zmm0_1[0] < 0f)
                                        goto label_1416f09f8
                                    
                                    zmm1 = *(r13_2 + 0x14)
                                    float var_e8[0x4] = *(r13_2 + 4)
                                    int64_t* rcx_24 = *arg4
                                    uint128_t var_d8_1 = zmm1
                                    int64_t var_c8_1 = *(r13_2 + 0x24)
                                    
                                    if ((*(*rcx_24 + 0x10))(rcx_24, &var_e8, r15) != 0)
                                        goto label_1416f09f8
                                    
                                    rbx_4.b = 0
                                    break
                            
                            goto label_1416f0c63
                    
                    int32_t rcx_28 = (rcx_18 * r12_2.d + rdx_9) * rsi_1 + r8_7
                    uint32_t rdx_15 = rcx_28 & 7
                    
                    if (rcx_28 s< 0)
                        rcx_28 += 7
                        rdx_15 -= 8
                    
                    int64_t rcx_30 = sx.q(rcx_28 s>> 3)
                    char rax_46 = *(rcx_30 + rax_23) | (1 << (rdx_15 u% 0x20)).b
                    rdx_15.b = 1
                    *(rcx_30 + rax_23) = rax_46
                    bool cond:5_1 = *(r15 + 0x1c) != 0
                    zmm3 = zx.o(var_188:4.d)
                    zmm4_2 = *(r15 + 0x14)
                    zmm1 = _mm_cvtepi32_ps(zx.o(var_188.d))
                    zmm3 = _mm_cvtepi32_ps(zmm3)
                    zmm2 = _mm_cvtepi32_ps(zx.o(rax_16))
                    zmm1.d = zmm1.d f+ 0.5f
                    zmm5_2 = zmm4_2[0]
                    zmm3.d = zmm3.d f+ 0.5f
                    zmm2.d = zmm2.d f+ 0.5f
                    zmm1.d = zmm1.d f* *(r10_3 + 0x44)
                    zmm3.d = zmm3.d f* *(r10_3 + 0x48)
                    zmm2.d = zmm2.d f* *(r10_3 + 0x4c)
                    zmm1.d = zmm1.d f+ *(r10_3 + 0x20)
                    zmm3.d = zmm3.d f+ *(r10_3 + 0x24)
                    zmm2.d = zmm2.d f+ *(r10_3 + 0x28)
                    
                    if (cond:5_1)
                        var_c0 = 0x7f7fffff
                    else
                        int32_t* rax_48 = *r15
                        zmm0_1 = *(r10_3 + 0x44)
                        zmm0_1[0] = zmm0_1[0] * 0.5f
                        
                        if (0f f>= *rax_48)
                            zmm1.d = zmm1.d f- zmm0_1[0]
                        else
                            zmm1.d = zmm1.d f+ zmm0_1[0]
                        
                        zmm1.d = zmm1.d f- zmm11.d
                        zmm1.d = zmm1.d f* *r13_1
                        var_c0 = zmm1.d
                        rdx_15.b = zmm5_2 f<= zmm1.d
                        zmm4_2 = _mm_min_ss(zmm1[0], zmm4_2[0])
                    
                    if (*(r15 + 0x1d) != 0)
                        int32_t var_bc_7 = 0x7f7fffff
                    else
                        void* rax_49 = *r15
                        zmm0_1 = *(r10_3 + 0x48)
                        zmm0_1[0] = zmm0_1[0] * 0.5f
                        
                        if (0f f>= *(rax_49 + 4))
                            zmm3.d = zmm3.d f- zmm0_1[0]
                        else
                            zmm3.d = zmm3.d f+ zmm0_1[0]
                        
                        zmm3.d = zmm3.d f- zmm12.d
                        char rcx_31 = 0
                        zmm3.d = zmm3.d f* *(r15 + 0xc)
                        int32_t var_bc_6 = zmm3.d
                        float temp0_22[0x4] = _mm_min_ss(zmm3[0], zmm4_2[0])
                        
                        if (zmm4_2.d f<= zmm3.d)
                            rcx_31 = rdx_15.b
                        
                        rdx_15 = zx.d(rcx_31)
                        zmm4_2 = temp0_22
                    
                    if (*(r15 + 0x1e) != 0)
                        int32_t var_b8_5 = 0x7f7fffff
                    else
                        void* rax_51 = *r15
                        zmm0_1 = *(r10_3 + 0x4c)
                        zmm0_1[0] = zmm0_1[0] * 0.5f
                        
                        if (0f f>= *(rax_51 + 8))
                            zmm2.d = zmm2.d f- zmm0_1[0]
                        else
                            zmm2.d = zmm2.d f+ zmm0_1[0]
                        
                        zmm2.d = zmm2.d f- zmm10.d
                        char rcx_32 = 0
                        zmm2.d = zmm2.d f* r15[2].d
                        int32_t var_b8_4 = zmm2.d
                        float temp0_23[0x4] = _mm_min_ss(zmm2[0], zmm4_2[0])
                        
                        if (zmm4_2.d f<= zmm2.d)
                            rcx_32 = rdx_15.b
                        
                        rdx_15 = zx.d(rcx_32)
                        zmm4_2 = temp0_23
                    
                    if (rdx_15.b != 0)
                        break
                    
                    int32_t i_1 = 0
                    int32_t* rcx_33 = nullptr
                    zmm4_2[0] = zmm4_2[0] + 0.00999999978f
                    
                    do
                        void* r10_4 = &var_c0 + rcx_33
                        int32_t rdx_16
                        
                        if (zmm4_2[0] f< *r10_4)
                            rdx_16 = 0
                        else
                            rdx_16 = -1
                            
                            if (0f f< *(rcx_33 + *r15))
                                rdx_16 = 1
                        
                        int32_t r8_13 = rdx_16 + *(&var_188 + rcx_33)
                        *(&var_188 + rcx_33) = r8_13
                        
                        if (r8_13 s< 0)
                            goto label_1416f0c5e
                        
                        if (r8_13 s>= *(r10_3 - &var_c0 + r10_4 + 0x38))
                            goto label_1416f0c5e
                        
                        i_1 += 1
                        rcx_33 = &rcx_33[1]
                    while (i_1 s< 3)
                    
                    int32_t* rax_55 = *r15
                    zmm4_2[0] = zmm4_2[0] f* *rax_55
                    zmm1.d = zmm4_2.d f* rax_55[1]
                    zmm4_2[0] = zmm4_2[0] f* rax_55[2]
                    zmm4_2[0] = zmm4_2[0] f+ zmm11.d
                    zmm1.d = zmm1.d f+ zmm12.d
                    zmm4_2[0] = zmm4_2[0] f+ zmm10.d
                    zmm11 = zmm4_2
                    zmm12 = zmm1
                    zmm10 = zmm4_2
                
            label_1416f0c5e:
                rbx_4.b = 1
            label_1416f0c63:
                j_sub_140a74f90(rax_23)
                result = zx.q(rbx_4.b)
                goto label_1416f0ca1
    
label_1416f0c7f:
    result.b = 1
else
    result.b = 1

label_1416f0ca1:
__security_check_cookie(rax_1 ^ &var_1b8)
return result
