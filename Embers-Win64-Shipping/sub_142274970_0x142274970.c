// 函数: sub_142274970
// 地址: 0x142274970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r12 = arg1
int128_t zmm8 = arg2

if (arg1[0x53] != 0)
    int64_t r14
    int64_t var_30_1 = r14
    int64_t r15
    r15.b = 0
    int32_t zmm6
    int32_t var_48_1 = zmm6
    int128_t zmm7 = zx.o(0)
    int64_t rax = *arg1
    arg1[0x77] = 0
    *(arg1 + 0x3b4) = 0
    arg1[0x76].d = 0
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x30)
    char arg_20 = 0
    void* rax_1 = (*(rax + 0x150))()
    int32_t rsi_1 = r12[0x6b].d
    int32_t rsi_2 = rsi_1 - 1
    void* r9_1 = rax_1
    
    if (rsi_1 - 1 s>= 0)
        r14 = sx.q(rsi_2) * 0x18
        r15 = r14
        int32_t temp1_1
        
        do
            if (arg3 == 0 || *(r12[0x6a] + r14 + 0x12) != 0)
                char rax_3
                rax_3, zmm7, zmm8 = sub_142012840(r12[0x6a] + r15, zmm8, &arg1[0x76])
                
                if (rax_3 == 0)
                    int32_t rdx_1 = r12[0x6b].d
                    int32_t rcx_5 = rdx_1 - rsi_2 - 1
                    
                    if (rcx_5 s>= 1)
                        rcx_5 = 1
                    
                    if (rcx_5 != 0)
                        int64_t r9_2 = r12[0x6a]
                        memcpy(r15 + r9_2, r9_2 + sx.q(rdx_1 - rcx_5) * 0x18, rcx_5 * 0x18)
                        rdx_1 = r12[0x6b].d
                    
                    r12[0x6b].d = rdx_1 - 1
                    sub_1405fde90(&r12[0x6a])
            
            r15 -= 0x18
            r14 -= 0x18
            temp1_1 = rsi_2
            rsi_2 -= 1
        while (temp1_1 - 1 s>= 0)
        r12 = arg1
        r15.b = 0
        r9_1 = rax_1
    
    void* var_a8
    
    if (arg3 == 0)
        int32_t i_2 = 0
        var_a8 = &r12[0x6c]
        r14 = 1
        var_a8.o = var_a8.o
        void* rsi_3 = var_a8
        int32_t i = i_2
        int128_t zmm0
        
        while (i s>= 0)
            if (i s>= *(rsi_3 + 8))
                break
            
            int64_t r9_3 = *rsi_3
            void* rcx_11 = (sx.q(i) << 5) + r9_3
            zmm0.d = zmm8.d f+ *(rcx_11 + 0xc)
            arg2 = *(rcx_11 + 8)
            *(rcx_11 + 0xc) = zmm0.d
            
            if (not(arg2.d f< zmm7.d) && not(zmm0.d f< arg2.d))
                int32_t rdx_4 = *(rsi_3 + 8)
                int32_t rax_9 = rdx_4 - i
                
                if (rax_9 != 1)
                    memmove(rcx_11, (sx.q(r14.d) << 5) + r9_3, (rax_9 - 1) << 5)
                    rdx_4 = *(rsi_3 + 8)
                
                *(rsi_3 + 8) = rdx_4 - 1
                sub_1405dad20(rsi_3)
                r14 = zx.q(r14.d)
                continue
            
            sub_14227f430(rcx_11 + 0x10, &arg1[0x76])
            i += 1
            r14 = zx.q(r14.d + 1)
        
        void* i_1 = r12[0x6e]
        
        for (void* r8_7 = (sx.q(r12[0x6f].d) << 4) + i_1; i_1 != r8_7; i_1 += 0x10)
            int32_t* rcx_14 = *(i_1 + 8)
            char rax_12 = (*rcx_14).b
            
            if ((rax_12 & 1) != 0)
                arg2 = arg1[0x76].d
                zmm0 = rcx_14[1]
                
                if (not(zmm0.d f< arg2.d))
                    arg2 = _mm_min_ss(zmm0.d, 0x3f800000)
                
                arg1[0x76].d = arg2.d
                rax_12 = (*rcx_14).b
            
            if ((rax_12 & 2) != 0)
                arg2 = *(arg1 + 0x3b4)
                zmm0 = rcx_14[1]
                
                if (not(zmm0.d f< arg2.d))
                    arg2 = _mm_min_ss(zmm0.d, 0x3f800000)
                
                *(arg1 + 0x3b4) = arg2.d
                rax_12 = (*rcx_14).b
            
            if ((rax_12 & 4) != 0)
                arg2 = arg1[0x77].d
                zmm0 = rcx_14[1]
                
                if (not(zmm0.d f< arg2.d))
                    arg2 = _mm_min_ss(zmm0.d, 0x3f800000)
                
                arg1[0x77].d = arg2.d
                rax_12 = (*rcx_14).b
            
            if ((rax_12 & 8) != 0)
                arg2 = *(arg1 + 0x3bc)
                zmm0 = rcx_14[1]
                
                if (not(zmm0.d f< arg2.d))
                    arg2 = _mm_min_ss(zmm0.d, 0x3f800000)
                
                *(arg1 + 0x3bc) = arg2.d
        
        r9_1 = rax_1
    
    int32_t zmm6_1
    uint128_t zmm7_1
    uint128_t zmm8_1
    result, zmm6_1, zmm7_1, zmm8_1 = sub_141f12590(r9_1, 0)
    
    if (result != 0)
        int64_t r8_8 = *r12
        int64_t* rax_13 = (*(r8_8 + 0xd38))(r12, &var_a8, r8_8)
        int32_t var_b0_1 = rax_13[1].d
        uint64_t var_b8 = *rax_13
        result, zmm6_1, zmm7_1, zmm8_1 = sub_141f29a80(result, &var_b8, &arg1[0x76])
    
    uint128_t zmm0_1 = *(r12 + 0x43c)
    uint128_t zmm1
    zmm1.d = zmm0_1.d f* arg1[0x76].d
    
    if (zmm1.d f>= zmm7_1.d)
        zmm1 = _mm_min_ss(zmm1.d, zmm6_1)
    else
        zmm1 = zmm7_1
    
    arg1[0x76].d = zmm1.d
    float zmm2_1 = zmm0_1.d f* r12[0x77].d
    
    if (zmm2_1 f>= zmm7_1.d)
        zmm2_1 = _mm_min_ss(zmm2_1, zmm6_1)
    else
        zmm2_1 = zmm7_1.d
    
    r12[0x77].d = zmm2_1
    zmm1.d = zmm0_1.d f* *(r12 + 0x3b4)
    
    if (zmm1.d f>= zmm7_1.d)
        zmm1 = _mm_min_ss(zmm1.d, zmm6_1)
    else
        zmm1 = zmm7_1
    
    zmm0_1.d = zmm0_1.d f* *(r12 + 0x3bc)
    *(r12 + 0x3b4) = zmm1.d
    
    if (not(zmm0_1.d f< zmm7_1.d))
        zmm0_1 = _mm_min_ss(zmm0_1.d, zmm6_1)
        zmm7_1 = zmm0_1
    
    *(r12 + 0x3bc) = zmm7_1.d
    int64_t var_88
    int64_t* rcx_29
    
    if (arg3 == 0)
        int64_t* rcx_19 = r12[0x70]
        
        if (rcx_19 != 0)
            result, zmm0_1 = sub_1420128e0(rcx_19, zmm8_1, &var_98, zmm0_1.d)
            
            if (result.b != 0)
                r15.b = 1
            else
                int64_t* rcx_20 = r12[0x70]
                
                if (rcx_20[1].b == result.b)
                    result = &var_a8
                    
                    if (&r12[0x70] != &var_a8)
                        r12[0x70] = 0
                        int64_t* rbx_4 = r12[0x71]
                        
                        if (rbx_4 != 0)
                            r12[0x71] = 0
                            rbx_4[1].d -= 1
                            
                            if (rbx_4[1].d == 1)
                                result = (**rbx_4)(rbx_4)
                                int32_t temp4_1 = *(rbx_4 + 0xc)
                                *(rbx_4 + 0xc) -= 1
                                
                                if (temp4_1 == 1)
                                    result = (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    r15.b = 1
                else
                    *(rcx_20 + 0xc) = 0
                    int64_t* rcx_21 = *rcx_20
                    result = (*(*rcx_21 + 0x260))(rcx_21)
                    r15.b = 1
        
        int64_t* rcx_24 = r12[0x72]
        
        if (rcx_24 != 0)
            result, zmm0_1 = sub_1420128e0(rcx_24, zmm8_1, &var_88, zmm0_1.d)
            
            if (result.b == 0)
                int64_t* rcx_25 = r12[0x72]
                
                if (rcx_25[1].b == result.b)
                    result = &var_a8
                    
                    if (&r12[0x72] != &var_a8)
                        r12[0x72] = 0
                        int64_t* rbx_5 = r12[0x73]
                        
                        if (rbx_5 != 0)
                            r12[0x73] = 0
                            rbx_5[1].d -= 1
                            
                            if (rbx_5[1].d == 1)
                                result = (**rbx_5)(rbx_5)
                                int32_t temp7_1 = *(rbx_5 + 0xc)
                                *(rbx_5 + 0xc) -= 1
                                
                                if (temp7_1 == 1)
                                    result = (*(*rbx_5 + 8))(rbx_5, 1)
                else
                    *(rcx_25 + 0xc) = 0
                    int64_t* rcx_26 = *rcx_25
                    result = (*(*rcx_26 + 0x260))(rcx_26)
            
            arg_20 = 1
        
        rcx_29 = r12[0x74]
    
    int64_t var_78
    
    if (arg3 != 0 || rcx_29 == 0)
        r14.b = 0
    else
        result = sub_1420128e0(rcx_29, zmm8_1, &var_78, zmm0_1.d)
        
        if (result.b != 0)
            r14.b = 1
        else
            int64_t* rcx_30 = r12[0x74]
            
            if (rcx_30[1].b == result.b)
                result = &var_a8
                
                if (&r12[0x74] != &var_a8)
                    r12[0x74] = nullptr
                    int64_t* rbx_6 = r12[0x75]
                    
                    if (rbx_6 != 0)
                        r12[0x75] = 0
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            result = (**rbx_6)(rbx_6)
                            int32_t temp8_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                result = (*(*rbx_6 + 8))(rbx_6, 1)
                
                r14.b = 1
            else
                *(rcx_30 + 0xc) = 0
                int64_t* rcx_31 = *rcx_30
                result = (*(*rcx_31 + 0x260))(rcx_31)
                r14.b = 1
    
    if (data_143e29f28 != 0)
        result = (*(*r12 + 0xc78))(r12)
        int32_t rdi_5 = result.d
        
        if (result.d != 0xffffffff)
            int64_t* rcx_35 = data_143e20d18
            int64_t rdx_11 = *rcx_35
            result = (*(rdx_11 + 0xe0))(rcx_35, rdx_11)
            void* const* result_1 = result
            
            if (result != 0)
                if (sub_140a478a0(*(rax_1 + 0x188)) s> 1)
                    int64_t* rax_25 = sub_141520bd0()
                    void* rax_26 = rax_25[0x23]
                    
                    if (rax_26 == 0)
                        int64_t rdx_12 = *rax_25
                        (*(rdx_12 + 0x390))(rax_25, rdx_12)
                        rax_26 = rax_25[0x23]
                    
                    if (*(rax_26 + 0x54) != 0)
                        rdi_5 -= 1
                
                (*(*r12 + 0xc68))(r12, result_1, zx.q(rdi_5))
                result = data_143f525b8
                
                if (*result s<= 0 && (*(r12 + 0x56c) & 1) == 0)
                    if (r15.b != 0)
                        result = (*(*result_1 + 0x18))(result_1, zx.q(rdi_5), 0, &var_98, rax_1)
                    
                    if (arg_20 != 0)
                        result = (*(*result_1 + 0x18))(result_1, zx.q(rdi_5), 1, &var_88, rax_1)
                    
                    if (r14.b != 0)
                        result = (*(*result_1 + 0x18))(result_1, zx.q(rdi_5), 5, &var_78, rax_1)

return result
