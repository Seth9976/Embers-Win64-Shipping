// 函数: sub_1426474c0
// 地址: 0x1426474c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2[0xd].b)

if ((result.b & 2) == 0)
    result = sub_140d3c6e0(arg2)
    uint64_t result_1 = result
    
    if (result != 0)
        int32_t rax_1 = *(result + 0xc)
        int32_t rdi_1 = 0
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_1)
            uint32_t rdx_2 = zx.d(temp1_1)
            int32_t rax_3 = temp2_1 + rdx_2
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
        
        result = zx.q(*(rax_8 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0 && *(arg2 + 8) != 0)
            uint32_t zmm6[0x4]
            uint32_t var_28_1[0x4] = zmm6
            uint32_t zmm7[0x4]
            uint32_t var_38_1[0x4] = zmm7
            uint128_t zmm8
            uint128_t var_48_1 = zmm8
            uint32_t zmm9[0x4]
            uint32_t var_58_1[0x4] = zmm9
            uint32_t zmm10[0x4]
            uint32_t var_68_1[0x4] = zmm10
            int32_t var_d0
            sub_1426421c0(&var_d0, result_1)
            int64_t* rcx_7 = *(arg2 + 8)
            void var_88
            (*(*rcx_7 + 0x18))(rcx_7, &var_88)
            int64_t* rcx_8 = *(arg2 + 8)
            void* rax_12 = (*(*rcx_8 + 0x50))(rcx_8)
            uint128_t zmm0_1
            
            if (rax_12 == 0)
                sub_142648820(*(*arg1 + 0x50), result_1, *(arg2 + 8), &var_88, &var_d0)
            else
                void var_108
                sub_140d3a3a0(&var_108, rax_12)
                int32_t rcx_10 = data_143dbb200
                zmm0_1 = zx.o(data_143dbb1f8.q)
                char var_d4
                char var_d4_1 = var_d4 & 0xfc
                int32_t var_dc_1 = rcx_10
                int32_t var_e8_1 = rcx_10
                int64_t var_100_1 = 0
                int64_t var_f8_1 = 0
                uint64_t var_e4_1 = zmm0_1.q
                uint64_t var_f0_1 = zmm0_1.q
                char var_d8_1 = 0
                int32_t arg_10
                sub_1426524d0(*arg1, &arg_10, &var_108)
                void* r11_1 = *arg1
                void* r9_1 = *(r11_1 + 0x50)
                void* rcx_15
                
                if (r9_1 == 0)
                    rcx_15 = nullptr
                else
                    int32_t* rdx_11
                    
                    if (*(r9_1 + 0x458) == *(r9_1 + 0x484))
                        rdx_11 = nullptr
                    else
                        void* r8_3 = r9_1 + 0x488
                        void* rdx_8 = *(r8_3 + 8)
                        int64_t r10_1 = sx.q(*(rax_12 + 0xc))
                        
                        if (rdx_8 != 0)
                            r8_3 = rdx_8
                        
                        int32_t rax_14 = *(r8_3 + (((sx.q(*(r9_1 + 0x498)) - 1) & r10_1) << 2))
                        
                        if (rax_14 == 0xffffffff)
                            rdx_11 = nullptr
                        else
                            while (true)
                                rdx_11 = (sx.q(rax_14) << 5) + *(r9_1 + 0x450)
                                
                                if (*rdx_11 == r10_1.d)
                                    break
                                
                                rax_14 = rdx_11[6]
                                
                                if (rax_14 == 0xffffffff)
                                    rcx_15 = nullptr
                                    goto label_1426476bf
                            
                            if (rax_14 == 0xffffffff)
                                rdx_11 = nullptr
                    
                    rcx_15 = &rdx_11[2]
                    
                    if (rdx_11 == 0)
                        rcx_15 = nullptr
                
            label_1426476bf:
                int64_t rax_15 = sx.q(arg_10)
                
                if (rax_15.d == 0xffffffff)
                    if (rcx_15 == 0)
                        goto label_1426476f8
                    
                label_142647797:
                    void* r10_3 = *(*arg1 + 0x50)
                    
                    if (r10_3 != 0)
                        zmm0_1 = *rcx_15
                        void* rdx_17 = zmm0_1.q
                        uint128_t var_138_1 = zmm0_1
                        int32_t var_130
                        
                        if (rdx_17 != 0 && var_130 != 0xffffffff && var_130 s< *(rdx_17 + 0x388))
                            sub_142649310(r10_3, rcx_15, *(arg2 + 8), &var_88, &var_d0)
                else
                    if (rcx_15 != 0)
                        goto label_142647797
                    
                    void* rbx_3 = (rax_15 << 6) + *r11_1
                    sub_1426474c0(arg1, rbx_3)
                    *(rbx_3 + 0x34) |= 2
                label_1426476f8:
                    void* r9_2 = *(*arg1 + 0x50)
                    
                    if (r9_2 == 0)
                        rcx_15 = nullptr
                    else
                        int32_t* rdx_16
                        
                        if (*(r9_2 + 0x458) == *(r9_2 + 0x484))
                            rdx_16 = nullptr
                        else
                            void* r8_5 = r9_2 + 0x488
                            void* rdx_13 = *(r8_5 + 8)
                            int64_t r10_2 = sx.q(*(rax_12 + 0xc))
                            
                            if (rdx_13 != 0)
                                r8_5 = rdx_13
                            
                            int32_t rax_18 = *(r8_5 + (((sx.q(*(r9_2 + 0x498)) - 1) & r10_2) << 2))
                            
                            if (rax_18 == 0xffffffff)
                                rdx_16 = nullptr
                            else
                                while (true)
                                    rdx_16 = (sx.q(rax_18) << 5) + *(r9_2 + 0x450)
                                    
                                    if (*rdx_16 == r10_2.d)
                                        break
                                    
                                    rax_18 = rdx_16[6]
                                    
                                    if (rax_18 == 0xffffffff)
                                        rcx_15 = nullptr
                                        goto label_14264778f
                                
                                if (rax_18 == 0xffffffff)
                                    rdx_16 = nullptr
                        
                        rcx_15 = &rdx_16[2]
                        
                        if (rdx_16 == 0)
                            rcx_15 = nullptr
                    
                label_14264778f:
                    
                    if (rcx_15 != 0)
                        goto label_142647797
            
            zmm8 = var_d0
            int32_t var_cc
            zmm9 = var_cc
            uint128_t zmm5_1 = zmm8
            int32_t var_c4
            zmm8.d = zmm8.d f- var_c4
            zmm5_1.d = zmm5_1.d f+ var_c4
            int32_t var_c8
            zmm10 = var_c8
            int32_t var_c0
            zmm9[0] = zmm9[0] f- var_c0
            zmm9[0] = zmm9[0] f+ var_c0
            int32_t var_bc
            zmm10[0] = zmm10[0] f- var_bc
            zmm10[0] = zmm10[0] f+ var_bc
            zmm0_1 = _mm_unpacklo_ps(zmm8, zmm9[0].q)
            zmm9[0] = zmm9[0] f- zmm9[0]
            uint64_t var_128 = zmm0_1.q
            uint64_t var_11c_1 = (_mm_unpacklo_ps(zmm5_1, zmm9[0].q)).q
            zmm10[0] = zmm10[0] f- zmm10[0]
            zmm0_1.d = zmm5_1.d f- zmm8.d
            uint32_t var_120_1 = zmm10[0]
            result = zx.q(zmm10[0])
            int32_t var_114_1 = result.d
            char var_110_1 = 1
            
            if (_mm_and_ps(zmm0_1, 0x7fffffff).d f> 9.99999975e-05f)
            label_1426478ca:
                void* var_b0
                result = zx.q(*(var_b0 + 0x28))
                
                if (result.d != 0 || *(var_b0 + 0x18) != 0 || *(var_b0 + 0x90) != 0
                    || *(var_b0 + 0xa0) != 0 || *(var_b0 + 0xb0) != 0)
                label_142647915:
                    int32_t r8_9 = arg2[4]
                    
                    if (r8_9 == 0)
                        int32_t rdx_20
                        
                        if (result.d == 0 && *(var_b0 + 0x18) == 0)
                            rdx_20 = 0
                        
                        if (result.d != 0 || *(var_b0 + 0x18) != 0 || (*(var_b0 + 0xc8) & 1) != 0)
                            rdx_20 = 1
                        
                        if (*(var_b0 + 0x90) != 0 || *(var_b0 + 0xa0) != 0 || *(var_b0 + 0xb0) != 0
                                || ((*(var_b0 + 0xc8) u>> 1).b & 1) != 0)
                            rdi_1 = 2
                        
                        r8_9 = (*(var_b0 + 0xb8) u>> 1 & 1) << 2 | rdi_1 | rdx_20
                    
                    result = sub_142647430(arg1[1], &var_128, r8_9)
                else
                    zmm5_1.d = zmm5_1.d f- zmm8.d
                    zmm9[0] = zmm9[0] f- zmm9[0]
                    zmm10[0] = zmm10[0] f- zmm10[0]
                    
                    if (_mm_and_ps(zmm5_1, 0x7fffffff).d f> 9.99999975e-05f)
                        goto label_142647915
                    
                    if (_mm_and_ps(zmm9, 0x7fffffff)[0] f> 9.99999975e-05f)
                        goto label_142647915
                    
                    if (not(_mm_and_ps(zmm10, 0x7fffffff)[0] f<= 9.99999975e-05f))
                        goto label_142647915
            else
                if (_mm_and_ps(zmm9, 0x7fffffff)[0] f> 9.99999975e-05f)
                    goto label_1426478ca
                
                if (not(_mm_and_ps(zmm10, 0x7fffffff)[0] f<= 9.99999975e-05f))
                    goto label_1426478ca
            
            int64_t* var_a8
            
            if (var_a8 != 0)
                result = zx.q(var_a8[1].d)
                var_a8[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_a8)(var_a8)
                    int32_t rdi_2 = *(var_a8 + 0xc)
                    *(var_a8 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        return (*(*var_a8 + 8))(var_a8, zx.q(rdi_2))
else if ((result.b & 1) != 0)
    return sub_142647430(arg1[1], &arg2[6], arg2[5])

return result
