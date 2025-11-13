// 函数: sub_142349f10
// 地址: 0x142349f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
void* r15 = arg2

if (*(arg1 + 0x20) != 0)
    if (data_143a2ff10 != 0)
        arg2 = 3
        result = sub_1405fba70(data_143f0f1a0, 3)
    
    if (data_143a2ff10 == 0 || result.b == 0)
        result.b = 0
    else
        result.b = 1
    
    if (*(arg1 + 0x50) != result.b)
        sub_1419ba620(arg1 + 0x10, arg2)
    
    void* rax = *(arg1 + 0x48)
    void* var_118 = rax
    
    if (rax != 0)
        *(rax + 8) += 1
        rax = var_118
    
    void* rdi_1 = r15 + 0x30
    void** rbx_3 = (*(r15 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_2 = &rbx_3[1]
    
    if (rcx_2 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x10)
        rbx_3 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rcx_2 = &rbx_3[1]
    
    *rdi_1 = rcx_2
    *rbx_3 = rax
    void*** rcx_6 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_6[6]
    
    if (rax_1 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x38)
        rcx_6 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_6[6]
    
    *rdi_1 = rax_1
    int64_t* rax_2 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_2 = rcx_6
    *(r15 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142da7798
    rcx_6[2].d = 1
    rcx_6[4] = 1
    rcx_6[3] = rbx_3
    rcx_6[5] = 0
    sub_1405d1550(&var_118)
    void* rbx_6 = *(arg1 + 0x48)
    int64_t var_f0_1 = 0
    int64_t var_e8_1 = 0
    void* var_c8 = rbx_6
    
    if (rbx_6 != 0)
        *(rbx_6 + 8) += 1
    
    void*** rcx_13 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_13[5]
    
    if (rax_4 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x30)
        rcx_13 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_13[5]
    
    *rdi_1 = rax_4
    void**** rax_5 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_5 = rcx_13
    *(r15 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142f115d8
    rcx_13[2] = rbx_6
    *(rcx_13 + 0x18) = var_f0_1.o
    sub_1405d1550(&var_c8)
    void* rax_7 = *(arg1 + 0x48)
    void* var_110 = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 8) += 1
        rax_7 = var_110
    
    void** rbx_9 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rcx_18 = &rbx_9[1]
    
    if (rcx_18 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x10)
        rbx_9 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rcx_18 = &rbx_9[1]
    
    *rdi_1 = rcx_18
    *rbx_9 = rax_7
    void*** rcx_22 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_22[6]
    
    if (rax_8 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x38)
        rcx_22 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_22[6]
    
    *rdi_1 = rax_8
    void**** rax_9 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_9 = rcx_22
    *(r15 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = &data_142da7798
    rcx_22[2].d = 1
    rcx_22[3] = rbx_9
    rcx_22[4].d = 2
    *(rcx_22 + 0x24) = 3
    rcx_22[5] = 0
    sub_1405d1550(&var_110, 1)
    void*** rcx_29 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_29[2]
    
    if (rax_11 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x18)
        rcx_29 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_29[2]
    
    *rdi_1 = rax_11
    int64_t* rax_12 = *(r15 + 8)
    *(r15 + 0x14) += 1
    float zmm0_2[0x4] = data_142d3f660
    int512_t zmm1_1
    zmm1_1.o = zmm0_2
    int64_t var_138 = 0
    *rax_12 = rcx_29
    *(r15 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142da7758
    float var_88[0x4] = zmm0_2
    uint128_t var_68 = zmm0_2
    int32_t var_12c_1 = 0
    int128_t zmm6_1
    int128_t zmm7_1
    zmm6_1, zmm7_1 = sub_142330f60(arg3, arg4, &var_88, &var_68)
    int32_t rax_14 = *(arg4 + 0xf0)
    int32_t* rbx_12 = nullptr
    int32_t* var_e0 = nullptr
    int32_t var_d4_1 = 0
    int32_t var_d8_1 = rax_14
    
    if (rax_14 s> 0)
        sub_1406105e0(&var_e0)
        rbx_12 = var_e0
    
    *rbx_12 = 0
    int32_t i = 0
    
    if (arg3[1].d s> 0)
        int64_t rcx_35 = 0
        
        do
            rcx_35 += 4
            i += 1
            *(rbx_12 + rcx_35) = _mm_and_ps(*(rcx_35 + *arg3 - 4), 0x7fffffff)[0]
        while (i s< arg3[1].d)
    
    int32_t* rdx_2 = *(arg4 + 0xe0)
    void* r8_1 = &rdx_2[sx.q(*(arg4 + 0xe8)) * 3]
    uint32_t zmm0_3[0x4]
    
    while (rdx_2 != r8_1)
        int64_t rcx_37 = sx.q(rdx_2[1])
        zmm0_3 = rbx_12[sx.q(rdx_2[2])]
        int64_t rax_18 = sx.q(*rdx_2)
        rdx_2 = &rdx_2[3]
        zmm0_3[0] = zmm0_3[0] f+ rbx_12[rcx_37]
        rbx_12[rax_18] = zmm0_3[0]
    
    int32_t rax_19 = *(arg4 + 0xb8)
    void* const rsi_1 = nullptr
    int32_t var_130_1 = 0
    
    if (rax_19 != 0)
        sub_1405dadb0(&var_138, rax_19)
        rax_19 = *(arg4 + 0xb8)
    
    int32_t i_1 = 0
    
    if (rax_19 s> 0)
        int128_t var_48_1 = zmm6_1
        int128_t var_58_1 = zmm7_1
        
        do
            zmm6_1 = 0x3f800000
            zmm0_3 = rbx_12[sx.q(*(arg4 + 0xa8) + i_1) + 1]
            
            if (not(zmm0_3[0] f<= 1f))
                zmm6_1.d = 1f f/ zmm0_3[0]
            
            int64_t rsi_2 = sx.q(var_130_1)
            int32_t rax_23 = (rsi_2 + 1).d
            var_130_1 = rax_23
            
            if (rax_23 s> var_12c_1)
                sub_1406105e0(&var_138)
            
            i_1 += 1
            *(var_138 + (rsi_2 << 2)) = zmm6_1.d
        while (i_1 s< *(arg4 + 0xb8))
        
        rsi_1 = nullptr
    
    sub_140a74f90(rbx_12)
    void* var_98
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_98, &data_143f58b10, 0)
    int32_t i_2 = 0
    void* r11_1 = var_98
    void* var_140_1 = r11_1
    int32_t i_3 = 0
    
    if (*(arg4 + 0xa8) u> 0)
        do
            int32_t rbx_13 = 0
            int32_t r14_1 = 0
            int32_t j = i_2
            
            while (j u< *(arg4 + 0xa8))
                int64_t j_1 = sx.q(j)
                int32_t r9_1
                
                if (j == 0xffffffff)
                    r9_1 = *(arg4 + 0xf4)
                else
                    r9_1 = *(*(arg4 + 0xa0) + (j_1 << 2))
                
                int32_t rcx_43 = -1
                int64_t rax_29 = sx.q(data_1439c7a6c) << 5
                
                if (rax_29 u<= 0xffffffff)
                    rcx_43 = rax_29.d
                
                if (r9_1 + rbx_13 u> rcx_43)
                    break
                
                int32_t rcx_44
                
                if (j == 0xffffffff)
                    rcx_44 = *(arg4 + 0xf4)
                else
                    rcx_44 = *(*(arg4 + 0xa0) + (j_1 << 2))
                
                rbx_13 += rcx_44
                r14_1 += 1
                j += 1
                
                if (r14_1 u>= 0x7f)
                    break
            
            rdi_1 = r15 + 0x30
            
            if (rbx_13 != 0)
                if (r11_1 != 0)
                    int64_t rdx_6 = sx.q(*(r11_1 + 0x10c))
                    void* var_90
                    int64_t* r14_2 = *(var_90 + 0x10)
                    int64_t rsi_3 = r14_2[3]
                    
                    if (*(rsi_3 + (rdx_6 << 3)) == 0)
                        sub_1419ccf30(r14_2, rdx_6.d)
                        rsi_3 = r14_2[3]
                    
                    rsi_1 = *(rsi_3 + (rdx_6 << 3))
                    i_2 = i_3
                
                *(r15 + 0x1b0) = rsi_1
                sub_14198aa60(rsi_1)
                void*** rcx_49 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_33 = &rcx_49[3]
                
                if (rax_33 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x20)
                    rcx_49 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_33 = &rcx_49[3]
                
                *rdi_1 = rax_33
                int64_t* rax_34 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_34 = rcx_49
                *(r15 + 8) = &rcx_49[1]
                rcx_49[1] = 0
                *rcx_49 = &data_142dd5b40
                rcx_49[2] = rsi_1
                sub_142347540(var_140_1, r15, &var_88, arg4, arg1 + 0x10)
                sub_142346fc0(var_140_1, r15, i_2, r14_1 + i_2, arg4, arg3)
                void*** rcx_57 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_38 = &rcx_57[4]
                
                if (rax_38 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x28)
                    rcx_57 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_38 = &rcx_57[4]
                
                *rdi_1 = rax_38
                void**** rax_39 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_39 = rcx_57
                *(r15 + 8) = &rcx_57[1]
                rcx_57[1] = 0
                *rcx_57 = &data_142ef57a8
                rcx_57[2].d = 1
                rcx_57[3].d = 1
                *(rcx_57 + 0x14) = (rbx_13 + 0x1f) u>> 5
                int64_t* rbx_16 = *(arg1 + 0x48)
                
                if (rbx_16 != 0)
                    rbx_16[1].d += 1
                
                int64_t* rax_42 = rbx_16
                void** rsi_6 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rcx_61 = &rsi_6[1]
                
                if (rcx_61 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x10)
                    rax_42 = rbx_16
                    rsi_6 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rcx_61 = &rsi_6[1]
                
                *rdi_1 = rcx_61
                *rsi_6 = rax_42
                void*** rcx_65 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_43 = &rcx_65[6]
                
                if (rax_43 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x38)
                    rcx_65 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_43 = &rcx_65[6]
                
                *rdi_1 = rax_43
                void**** rax_44 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_44 = rcx_65
                *(r15 + 8) = &rcx_65[1]
                rcx_65[1] = 0
                rcx_65[3] = rsi_6
                rsi_1 = nullptr
                *rcx_65 = &data_142da7798
                rcx_65[2].d = 1
                rcx_65[4].d = 3
                *(rcx_65 + 0x24) = 3
                rcx_65[5] = 0
                
                if (rbx_16 != 0)
                    rbx_16[1].d -= 1
                    
                    if (rbx_16[1].d == 1)
                        char rax_47
                        
                        if (rbx_16[2].b == 0 && data_143f0f1d0 == 0)
                            rax_47 = sub_1405949a0()
                        
                        if (rbx_16[2].b != 0 || (data_143f0f1d0 == 0 && rax_47 != 0))
                            (**rbx_16)(rbx_16, 1)
                        else
                            bool z_1
                            
                            if (0 == *(rbx_16 + 0xc))
                                *(rbx_16 + 0xc) = 1
                                z_1 = true
                            else
                                *(rbx_16 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_49 = sub_140a20af0()
                                uint64_t rdx_9 = zx.q(rax_49)
                                void* const rax_50
                                
                                if (rax_49 != 0)
                                    rax_50 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                                else
                                    rax_50 = nullptr
                                
                                *(rax_50 + 8) = rbx_16
                                sub_1405a42f0(&data_143f02390, rdx_9.d)
                
                r11_1 = var_140_1
            
            i_2 += r14_1
            i_3 = i_2
        while (i_2 u< *(arg4 + 0xa8))
    
    int64_t rbx_17 = *(r15 + 0x1b0)
    
    if (*(r11_1 + 0x11a) u> 0)
        uint32_t rsi_9 = zx.d(*(r11_1 + 0x118))
        void*** rcx_75 = (*rdi_1 + 7) & 0xfffffffffffffff8
        void* rax_55 = &rcx_75[5]
        
        if (rax_55 u> *(rdi_1 + 8))
            sub_140b0e3d0(rdi_1, 0x30)
            rcx_75 = (*rdi_1 + 7) & 0xfffffffffffffff8
            rax_55 = &rcx_75[5]
        
        *rdi_1 = rax_55
        void**** rax_56 = *(r15 + 8)
        *(r15 + 0x14) += 1
        *rax_56 = rcx_75
        *(r15 + 8) = &rcx_75[1]
        rcx_75[3].d = rsi_9
        rsi_1 = nullptr
        rcx_75[4] = 0
        rcx_75[1] = 0
        *rcx_75 = &data_142da77d8
        rcx_75[2] = rbx_17
    
    void*** rcx_81 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_58 = &rcx_81[2]
    
    if (rax_58 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x18)
        rcx_81 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_58 = &rcx_81[2]
    
    *rdi_1 = rax_58
    int64_t* rax_59 = *(r15 + 8)
    *(r15 + 0x14) += 1
    void* r14_3 = arg1
    *rax_59 = rcx_81
    *(r15 + 8) = &rcx_81[1]
    rcx_81[1] = 0
    *rcx_81 = &data_142da7768
    void* rax_61 = *(r14_3 + 0x48)
    void* var_108 = rax_61
    
    if (rax_61 != 0)
        *(rax_61 + 8) += 1
        rax_61 = var_108
    
    void** rbx_20 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rcx_85 = &rbx_20[1]
    
    if (rcx_85 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x10)
        rbx_20 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rcx_85 = &rbx_20[1]
    
    *rdi_1 = rcx_85
    *rbx_20 = rax_61
    void*** rcx_89 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_62 = &rcx_89[6]
    
    if (rax_62 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x38)
        rcx_89 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_62 = &rcx_89[6]
    
    *rdi_1 = rax_62
    void**** rax_63 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_63 = rcx_89
    *(r15 + 8) = &rcx_89[1]
    rcx_89[1] = 0
    *rcx_89 = &data_142da7798
    rcx_89[2].d = 1
    rcx_89[3] = rbx_20
    rcx_89[4].d = 2
    *(rcx_89 + 0x24) = 3
    rcx_89[5] = 0
    sub_1405d1550(&var_108)
    void* var_78
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[3]), &var_78, &data_143f58c30, 0)
    void* r11_2 = var_78
    int32_t r12_2 = 0
    int32_t r10_2 = *(arg4 + 0xb8)
    void* var_140_2 = r11_2
    int32_t var_148_1 = 0
    
    if (r10_2 != 0)
        do
            int32_t rbx_23 = 0
            int32_t r14_4 = 0
            int32_t r8_4 = r12_2
            
            while (r8_4 u< r10_2)
                int64_t rdx_12 = sx.q(data_1439c7a6c) << 5
                int32_t r9_5 = *(*(arg4 + 0xc0) + (sx.q(r8_4) << 2)) + rbx_23
                int32_t rax_68 = -1
                
                if (rdx_12 u<= 0xffffffff)
                    rax_68 = rdx_12.d
                
                if (r9_5 u> rax_68)
                    break
                
                r14_4 += 1
                r8_4 += 1
                rbx_23 = r9_5
                
                if (r14_4 u>= 0x7f)
                    break
            
            if (rbx_23 != 0)
                if (r11_2 != 0)
                    int64_t rdx_13 = sx.q(*(r11_2 + 0x10c))
                    int32_t var_128
                    var_128.q = rdx_13
                    void* var_70
                    int64_t* r12_3 = *(var_70 + 0x10)
                    int64_t rax_70 = rdx_13
                    int64_t rsi_10 = r12_3[3]
                    
                    if (*(rsi_10 + (rdx_13 << 3)) == 0)
                        sub_1419ccf30(r12_3, rdx_13.d)
                        rax_70 = var_128.q
                        rsi_10 = r12_3[3]
                    
                    rsi_1 = *(rsi_10 + (rax_70 << 3))
                    r12_2 = var_148_1
                
                *(r15 + 0x1b0) = rsi_1
                sub_14198aa60(rsi_1)
                void*** rcx_101 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_71 = &rcx_101[3]
                
                if (rax_71 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x20)
                    rcx_101 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_71 = &rcx_101[3]
                
                *rdi_1 = rax_71
                void**** rax_72 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_72 = rcx_101
                *(r15 + 8) = &rcx_101[1]
                rcx_101[1] = 0
                *rcx_101 = &data_142dd5b40
                rcx_101[2] = rsi_1
                sub_1423473b0(var_140_2, r15, &var_68, arg4, arg1 + 0x10)
                sub_1423469b0(var_140_2, r15, r12_2, r14_4 + r12_2, arg4, &var_138)
                void*** rcx_109 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_75 = &rcx_109[4]
                
                if (rax_75 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x28)
                    rcx_109 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_75 = &rcx_109[4]
                
                *rdi_1 = rax_75
                void**** rax_76 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_76 = rcx_109
                *(r15 + 8) = &rcx_109[1]
                rcx_109[1] = 0
                *rcx_109 = &data_142ef57a8
                rcx_109[2].d = 1
                rcx_109[3].d = 1
                *(rcx_109 + 0x14) = (rbx_23 + 0x1f) u>> 5
                int64_t* rbx_26 = *(arg1 + 0x48)
                
                if (rbx_26 != 0)
                    rbx_26[1].d += 1
                
                int64_t* rax_79 = rbx_26
                void** rsi_13 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rcx_113 = &rsi_13[1]
                
                if (rcx_113 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x10)
                    rax_79 = rbx_26
                    rsi_13 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rcx_113 = &rsi_13[1]
                
                *rdi_1 = rcx_113
                *rsi_13 = rax_79
                void*** rcx_117 = (*rdi_1 + 7) & 0xfffffffffffffff8
                void* rax_80 = &rcx_117[6]
                
                if (rax_80 u> *(rdi_1 + 8))
                    sub_140b0e3d0(rdi_1, 0x38)
                    rcx_117 = (*rdi_1 + 7) & 0xfffffffffffffff8
                    rax_80 = &rcx_117[6]
                
                *rdi_1 = rax_80
                void**** rax_81 = *(r15 + 8)
                *(r15 + 0x14) += 1
                *rax_81 = rcx_117
                *(r15 + 8) = &rcx_117[1]
                rcx_117[1] = 0
                rcx_117[3] = rsi_13
                rsi_1 = nullptr
                *rcx_117 = &data_142da7798
                rcx_117[2].d = 1
                rcx_117[4].d = 3
                *(rcx_117 + 0x24) = 3
                rcx_117[5] = 0
                
                if (rbx_26 != 0)
                    rbx_26[1].d -= 1
                    
                    if (rbx_26[1].d == 1)
                        char rax_84
                        
                        if (rbx_26[2].b == 0 && data_143f0f1d0 == 0)
                            rax_84 = sub_1405949a0()
                        
                        if (rbx_26[2].b != 0 || (data_143f0f1d0 == 0 && rax_84 != 0))
                            (**rbx_26)(rbx_26, 1)
                        else
                            bool z_2
                            
                            if (0 == *(rbx_26 + 0xc))
                                *(rbx_26 + 0xc) = 1
                                z_2 = true
                            else
                                *(rbx_26 + 0xc)
                                z_2 = false
                            
                            if (z_2)
                                int32_t rax_86 = sub_140a20af0()
                                uint64_t rdx_16 = zx.q(rax_86)
                                void* const rax_87
                                
                                if (rax_86 != 0)
                                    rax_87 = *((rdx_16 u>> 0xe << 3) + &data_143cf0bf8)
                                        + (zx.q(rdx_16.d) & 0x3fff) * 0x18
                                else
                                    rax_87 = nullptr
                                
                                *(rax_87 + 8) = rbx_26
                                sub_1405a42f0(&data_143f02390, rdx_16.d)
                
                r11_2 = var_140_2
            
            r10_2 = *(arg4 + 0xb8)
            r12_2 += r14_4
            var_148_1 = r12_2
        while (r12_2 u< r10_2)
        
        r14_3 = arg1
    
    int64_t rbx_27 = *(r15 + 0x1b0)
    
    if (*(r11_2 + 0x11a) u> 0)
        uint32_t rsi_16 = zx.d(*(r11_2 + 0x118))
        void*** rcx_127 = (*rdi_1 + 7) & 0xfffffffffffffff8
        void* rax_92 = &rcx_127[5]
        
        if (rax_92 u> *(rdi_1 + 8))
            sub_140b0e3d0(rdi_1, 0x30)
            rcx_127 = (*rdi_1 + 7) & 0xfffffffffffffff8
            rax_92 = &rcx_127[5]
        
        *rdi_1 = rax_92
        void**** rax_93 = *(r15 + 8)
        *(r15 + 0x14) += 1
        *rax_93 = rcx_127
        *(r15 + 8) = &rcx_127[1]
        rcx_127[1] = 0
        rcx_127[3].d = rsi_16
        *rcx_127 = &data_142da77d8
        rcx_127[4] = 0
        rcx_127[2] = rbx_27
    
    void* rax_95 = *(r14_3 + 0x48)
    void* var_f8 = rax_95
    
    if (rax_95 != 0)
        *(rax_95 + 8) += 1
        rax_95 = var_f8
    
    void** rbx_30 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rcx_131 = &rbx_30[1]
    
    if (rcx_131 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x10)
        rbx_30 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rcx_131 = &rbx_30[1]
    
    *rdi_1 = rcx_131
    *rbx_30 = rax_95
    void*** rcx_135 = (*rdi_1 + 7) & 0xfffffffffffffff8
    void* rax_96 = &rcx_135[6]
    
    if (rax_96 u> *(rdi_1 + 8))
        sub_140b0e3d0(rdi_1, 0x38)
        rcx_135 = (*rdi_1 + 7) & 0xfffffffffffffff8
        rax_96 = &rcx_135[6]
    
    *rdi_1 = rax_96
    void**** rax_97 = *(r15 + 8)
    *(r15 + 0x14) += 1
    *rax_97 = rcx_135
    *(r15 + 8) = &rcx_135[1]
    rcx_135[1] = 0
    *rcx_135 = &data_142da7798
    rcx_135[2].d = 1
    *(rcx_135 + 0x24) = 1
    rcx_135[3] = rbx_30
    rcx_135[4].d = 0
    rcx_135[5] = 0
    sub_1405d1550(&var_f8)
    int64_t rcx_140 = var_138
    
    if (rcx_140 != 0)
        sub_140a74f90(rcx_140)
    
    result = arg5
    
    if (r14_3 + 0x30 != result)
        int64_t rdi_2 = sx.q(result[1].d)
        void* const rsi_17 = *result
        int32_t r8_7 = *(r14_3 + 0x3c)
        *(r14_3 + 0x38) = rdi_2.d
        
        if (rdi_2.d != 0 || r8_7 != 0)
            sub_140638750(r14_3 + 0x30, rdi_2.d, r8_7)
            result = memcpy(*(r14_3 + 0x30), rsi_17, (rdi_2 << 2).d)
        else
            *(r14_3 + 0x3c) = rdi_2.d
    
    *(r14_3 + 0x28) = 1

return result
