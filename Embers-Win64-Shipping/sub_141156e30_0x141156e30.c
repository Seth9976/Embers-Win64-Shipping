// 函数: sub_141156e30
// 地址: 0x141156e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
bool cond:0 = data_143a2dd48 == 0
void* r12 = arg2
uint64_t result = *(arg1 + 8)
int64_t result_1 = result
int32_t* r13 = result + 0x18b0

if (not(cond:0))
    if (r13[0x4c] s<= 0 && r13[0x54] - r13[0x5f] s<= 0 && r13[0x68] s<= 0 && r13[0x50] s<= 0)
        result = zx.q(data_143a2de20)
    
    if (r13[0x4c] s> 0 || r13[0x54] - r13[0x5f] s> 0 || r13[0x68] s> 0 || r13[0x50] s> 0
            || r13[0x7e] != result.d)
        int32_t rbx_1 = *(arg2 + 0x8c)
        int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
        int64_t r14_1 = 0
        int32_t var_158_1 = rbx_1
        
        if (rbx_1 != rax_3)
            *(arg2 + 0x8c) = rax_3
            
            if (*(arg2 + 0x14) u> 0)
                void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_4 = &rdx_2[3]
                
                if (rax_4 u> *(r12 + 0x38))
                    sub_140b0e3d0(r12 + 0x30, 0x20)
                    rdx_2 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_4 = &rdx_2[3]
                
                *(r12 + 0x30) = rax_4
                int64_t* rax_5 = *(r12 + 8)
                *(r12 + 0x14) += 1
                *rax_5 = rdx_2
                int32_t rax_6 = *(r12 + 0x8c)
                *(r12 + 8) = &rdx_2[1]
                rdx_2[1] = 0
                *rdx_2 = &data_142f11588
                rdx_2[2].d = rax_6
            else
                *(arg2 + 0x90) = rax_3
        
        if (*(r13 + (sx.q(r13[8]) << 3) + 8) == 0)
            void* rax_8 = j_sub_140a82f30(0x48)
            void* const rcx_3 = rax_8
            
            if (rax_8 == 0)
                rcx_3 = nullptr
            else
                __builtin_memset(rax_8, 0, 0x24)
                *(rax_8 + 0x20) = 0
                *(rax_8 + 0x40) = 0
                __builtin_memset(rax_8 + 0x28, 0, 0x1c)
            
            *(r13 + (sx.q(r13[8]) << 3) + 8) = rcx_3
        
        if (*(r13 + 0x48) == 0)
            void* const rax_10 = j_sub_140a82f30(0x48)
            
            if (rax_10 == 0)
                rax_10 = nullptr
            else
                __builtin_memset(rax_10, 0, 0x24)
                *(rax_10 + 0x20) = 0
                *(rax_10 + 0x40) = 0
                __builtin_memset(rax_10 + 0x28, 0, 0x1c)
            
            *(r13 + 0x48) = rax_10
        
        if (*(r13 + 0xb8) == 0)
            void* const rax_11 = j_sub_140a82f30(0x28)
            
            if (rax_11 == 0)
                rax_11 = nullptr
            else
                __builtin_memset(rax_11, 0, 0x24)
                *(rax_11 + 0x20) = 0
            
            *(r13 + 0xb8) = rax_11
        
        int32_t rcx_4 = r13[0x4c]
        
        if (rcx_4 s> 0)
            int32_t rdx_6 = r13[0x50] + rcx_4
            
            if (rdx_6 s> r13[0x51])
                sub_1405c5570(&r13[0x4e], rdx_6)
        
        void* r15_1 = &r13[0x4e]
        int64_t rdi_1 = sx.q(*(r15_1 + 8))
        
        if (rdi_1.d != 0)
            int32_t rax_12 = r13[0x4c]
            int32_t rdx_7 = rdi_1.d + rax_12
            
            if (rdx_7 s> r13[0x4d])
                sub_1405c5570(&r13[0x4a], rdx_7)
                rax_12 = r13[0x4c]
            
            memcpy(*(r13 + 0x128) + (sx.q(rax_12) << 3), *r15_1, (rdi_1 << 3).d)
            r13[0x4c] += rdi_1.d
        
        *(r15_1 + 8) = 0
        
        if (*(r15_1 + 0xc) s<= 0xffffffff)
            sub_1405c5570(r15_1, 0)
        
        int32_t rax_14 = data_143a2de20
        int32_t var_150
        int32_t i_6
        int32_t arg_20
        
        if (r13[0x7e] != rax_14)
            int32_t i = 0
            r13[0x7e] = rax_14
            i_6 = 0
            
            if (r13[0xc] s> 0)
                void* rdi_2 = nullptr
                
                do
                    int64_t r9_1 = *(r13 + 0x28)
                    
                    if (*(rdi_2 + r9_1 + 0x18) == 0)
                        int32_t rdx_9 = r13[0x68]
                        int32_t rcx_10 = 0
                        
                        if (rdx_9 s> 0)
                            int64_t* rax_15 = *(r13 + 0x198)
                            
                            do
                                if (*rax_15 == *(rdi_2 + r9_1 + 0x10))
                                    goto label_1411571b9
                                
                                rcx_10 += 1
                                rax_15 = &rax_15[5]
                            while (rcx_10 s< rdx_9)
                            
                            i = i_6
                        
                        for (int64_t* j = *(r13 + 0x128); j != &j[sx.q(r13[0x4c])]; j = &j[1])
                            if (*j == *(rdi_2 + r9_1 + 0x10))
                                goto label_1411571c0
                        
                        if (*sub_1408296b0(&r13[0x52], &arg_20, *(rdi_2 + r9_1 + 0x10))
                                == 0xffffffff)
                            sub_141113900(&r13[0x52], &var_150, rdi_2 + r9_1 + 0x10, nullptr)
                        
                        r14_1 = 0
                    label_1411571b9:
                        i = i_6
                    
                label_1411571c0:
                    i += 1
                    rdi_2 += 0x20
                    i_6 = i
                while (i s< r13[0xc])
        
        uint128_t result_7 = sub_141158880(r12, *(arg_8 + 8))
        int64_t var_138_1 = 0
        bool cond:1_1 = data_1439b55dc == 0
        int64_t var_168 = 0
        uint64_t rdi_3 = 0
        int32_t var_178_1 = 0
        int32_t var_160_1 = 0
        uint64_t var_130_1 = 0
        uint64_t var_a8 = 0
        int32_t var_a0_1 = 0
        
        if (cond:1_1)
            i_6.b = 0
        else
            int64_t rcx_14 = sx.q(*(*(arg_8 + 8) + 8))
            
            if (data_143e5102c == 0 || rcx_14.d s< 3 || (*U"1111")[rcx_14] != 0)
                i_6.b = 0
            else
                char rax_22 = sub_1410f5e80(0)
                i_6.b = 1
                
                if (rax_22 == 0)
                    i_6.b = 0
        
        int32_t rcx_15 = r13[0x4c]
        
        if (rcx_15 s<= 0)
            result = zx.q(r13[0x54] - r13[0x5f])
        
        if (rcx_15 s> 0 || result.d s> 0)
            int32_t rdi_6 = r13[0x54] - r13[0x5f] + rcx_15
            int32_t rdx_15 = data_143e56e68 * rdi_6
            uint128_t result_8 = result_7
            int64_t var_98 = 0
            int64_t var_90_1 = 0
            
            if (rdx_15 != 0)
                sub_1405a5410(&var_a8, rdx_15)
                var_130_1 = var_a8
            
            if (rdi_6 != 0)
                sub_1405dadb0(&var_168, rdi_6)
                var_178_1 = var_160_1
                var_138_1 = var_168
            
            void* rax_27 = data_143a2dd48
            void* rdi_7 = &r13[0x14]
            char rdx_17 = i_6.b
            int32_t r8_6 = *r13
            uint128_t zmm1_1 = zx.o(*(rax_27 + 0x60))
            int32_t rcx_18 = *rdi_7
            arg_20 = r8_6
            var_150 = rcx_18
            uint128_t zmm0_1
            zmm0_1.d = 1f f/ _mm_cvtepi32_ps(zmm1_1).d
            zmm1_1 = zx.o(*(rax_27 + 0x64))
            int32_t var_f8 = zmm0_1.d
            int32_t rax_28 = r13[0x30]
            float zmm3_1 = 1f f/ _mm_cvtepi32_ps(zx.o(*(rax_27 + 0x68))).d
            uint128_t zmm2_1
            zmm2_1.d = 1f f/ _mm_cvtepi32_ps(zmm1_1).d
            int32_t var_f4_1 = zmm2_1.d
            char var_1a8
            int32_t var_e8
            int32_t* var_e0
            
            if (rdx_17 != 0)
                int32_t i_1 = 0
                uint64_t rax_29 = zx.q(rcx_18)
                int32_t var_170
                int32_t var_128
                int32_t var_120
                int32_t var_b8
                
                if (r13[0x4c] s> 0)
                    int64_t* rbx_2 = nullptr
                    
                    do
                        void* rdi_8 = *(rbx_2 + *(r13 + 0x128))
                        var_128 = 0
                        var_120 = 0
                        int64_t* rcx_19 = *(rdi_8 + 8)
                        (*(*rcx_19 + 0x90))(rcx_19, &var_128, &var_120)
                        sub_1414c55a0(var_120, &var_b8, &var_170)
                        int32_t r9_2 = var_b8
                        
                        if (r9_2 s> 0 && var_128 s> 0)
                            sub_14111d6b0(&r13[0x14], rdi_8, var_170, r9_2, 1)
                            sub_14111d6b0(&r13[0x30], rdi_8, var_170, var_b8, var_128)
                        
                        i_1 += 1
                        rbx_2 = &rbx_2[1]
                    while (i_1 s< r13[0x4c])
                    
                    r15_1 = &r13[0x4e]
                    rbx_1 = var_158_1
                    rdi_7 = &r13[0x14]
                    r12 = arg2
                    rax_29 = zx.q(*(result_1 + 0x1900))
                
                int32_t* r8_11 = *(r13 + 0x48)
                int32_t rcx_22 = *r8_11
                
                if (rcx_22 s< rax_29.d)
                    if (rcx_22 s<= 0)
                        int32_t temp2_1
                        int32_t temp3_1
                        temp2_1:temp3_1 = sx.q((rax_29 * 5).d)
                        *r8_11 = (temp3_1 + (temp2_1 & 3)) s>> 2
                        sub_141132000(*(r13 + 0x48))
                    else
                        int32_t* rax_34 = j_sub_140a82f30(0x48)
                        int32_t* r14_3 = rax_34
                        
                        if (rax_34 == 0)
                            r14_3 = nullptr
                        else
                            __builtin_memset(r14_3, 0, 0x24)
                            *(r14_3 + 0x20) = 0
                            *(r14_3 + 0x40) = 0
                            __builtin_memset(&r14_3[0xa], 0, 0x1c)
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(*rdi_7 * 5)
                        *r14_3 = (temp7_1 + (temp6_1 & 3)) s>> 2
                        sub_141132000(r14_3)
                        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(
                            *(*(arg_8 + 8) + 8))]), &var_b8, &data_143e57590, 0)
                        void* rax_42 = var_b8.q
                        void* rsi_2 = nullptr
                        var_170.q = rax_42
                        
                        if (rax_42 != 0)
                            int64_t result_4 = sx.q(*(rax_42 + 0x10c))
                            result_1 = result_4
                            void* var_b0
                            int64_t* rdi_9 = *(var_b0 + 0x10)
                            int64_t result_2 = result_4
                            int64_t rsi_3 = rdi_9[3]
                            
                            if (*(rsi_3 + (result_4 << 3)) == 0)
                                sub_1419ccf30(rdi_9, result_4.d)
                                result_2 = result_1
                                rsi_3 = rdi_9[3]
                            
                            rsi_2 = *(rsi_3 + (result_2 << 3))
                        
                        *(r12 + 0x1b0) = rsi_2
                        sub_14198aa60(rsi_2)
                        void*** rcx_32 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_44 = &rcx_32[3]
                        
                        if (rax_44 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x20)
                            rcx_32 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_44 = &rcx_32[3]
                        
                        *(r12 + 0x30) = rax_44
                        void**** rax_45 = *(r12 + 8)
                        *(r12 + 0x14) += 1
                        void* rdi_10 = var_170.q
                        *rax_45 = rcx_32
                        *(r12 + 8) = &rcx_32[1]
                        rcx_32[2] = rsi_2
                        int32_t rsi_4 = var_150
                        rcx_32[1] = 0
                        *rcx_32 = &data_142dd5b40
                        int64_t* var_1b0
                        var_1b0.d = rsi_4
                        int32_t var_1b8
                        var_1b8.q = r14_3
                        sub_141144980(rdi_10, r12, *(r13 + 0x48), *(r13 + 0xb8), var_1b8)
                        sub_1419cd1c0(r12, rdi_10, (rsi_4 + 0x3f) u>> 6, 1, 1)
                        int64_t rsi_5 = *(r12 + 0x1b0)
                        sub_14077cfd0(rdi_10 + 0x128, r12, rsi_5)
                        sub_14077cfd0(rdi_10 + 0x130, r12, rsi_5)
                        sub_14077cfd0(rdi_10 + 0x138, r12, rsi_5)
                        sub_14077cfd0(rdi_10 + 0x118, r12, *(r12 + 0x1b0))
                        sub_14077cfd0(rdi_10 + 0x120, r12, *(r12 + 0x1b0))
                        int64_t rax_47 = *(r14_3 + 0x30)
                        int64_t rcx_43 = *(r14_3 + 0x10)
                        int64_t* rsi_8 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_48 = &rsi_8[2]
                        
                        if (rax_48 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x18)
                            rsi_8 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_48 = &rsi_8[2]
                        
                        *(r12 + 0x30) = rax_48
                        *rsi_8 = rcx_43
                        rsi_8[1] = rax_47
                        void*** rcx_47 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_50 = &rcx_47[6]
                        
                        if (rax_50 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x38)
                            rcx_47 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_50 = &rcx_47[6]
                        
                        *(r12 + 0x30) = rax_50
                        void**** rax_51 = *(r12 + 8)
                        *(r12 + 0x14) += 1
                        *rax_51 = rcx_47
                        *(r12 + 8) = &rcx_47[1]
                        rcx_47[1] = 0
                        *rcx_47 = &data_142da7798
                        rcx_47[2].d = 2
                        rcx_47[3] = rsi_8
                        rcx_47[4].d = 0
                        *(rcx_47 + 0x24) = 3
                        rcx_47[5] = 0
                        void* rdi_11 = *(r13 + 0x48)
                        sub_1408081b0(rdi_11 + 8)
                        sub_1408081b0(rdi_11 + 0x28)
                        void* rsi_11 = *(r13 + 0x48)
                        
                        if (rsi_11 != 0)
                            sub_1408081b0(rsi_11 + 0x28)
                            sub_1405ec8a0(rsi_11 + 0x38)
                            sub_1405d1550(rsi_11 + 0x30)
                            sub_1405d1550(rsi_11 + 0x28)
                            sub_1408081b0(rsi_11 + 8)
                            sub_1405ec8a0(rsi_11 + 0x18)
                            sub_1405d1550(rsi_11 + 0x10)
                            sub_1405d1550(rsi_11 + 8)
                            j_sub_140a74f90(rsi_11)
                        
                        *(r13 + 0x48) = r14_3
                
                int32_t* r8_20 = *(r13 + 0xb8)
                uint64_t rax_57 = zx.q(r13[0x30])
                int32_t rcx_63 = *r8_20
                
                if (rcx_63 s< rax_57.d)
                    if (rcx_63 s<= 0)
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q((rax_57 * 5).d)
                        *r8_20 = (temp5_1 + (temp4_1 & 3)) s>> 2
                        int32_t* rcx_109 = *(r13 + 0xb8)
                        int32_t r8_35 = *rcx_109
                        
                        if (r8_35 s> 0)
                            var_1a8.q = 0
                            sub_1407b4d10(&rcx_109[2], 0x10, r8_35, 1, 1, 0, 0)
                    else
                        int32_t* rax_58 = j_sub_140a82f30(0x28)
                        void* r14_4 = nullptr
                        var_120.q = rax_58
                        int32_t* rsi_12 = rax_58
                        
                        if (rax_58 == 0)
                            rsi_12 = nullptr
                            var_120.q = 0
                        else
                            __builtin_memset(rax_58, 0, 0x24)
                            *(rax_58 + 0x20) = 0
                        
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(r13[0x30] * 5)
                        int32_t rax_63 = (temp9_1 + (temp8_1 & 3)) s>> 2
                        *rsi_12 = rax_63
                        
                        if (rax_63 s> 0)
                            var_1a8.q = 0
                            sub_1407b4d10(&rsi_12[2], 0x10, rax_63, 1, 1, 0, 0)
                        
                        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(
                            *(*(arg_8 + 8) + 8))]), &var_e8, &data_143e57690, 0)
                        void* r15_2 = var_e8.q
                        var_b8.q = r15_2
                        
                        if (r15_2 != 0)
                            int64_t rdx_38 = sx.q(*(r15_2 + 0x10c))
                            int64_t* rdi_12 = *(var_e0 + 0x10)
                            int64_t r14_5 = rdi_12[3]
                            
                            if (*(r14_5 + (rdx_38 << 3)) == 0)
                                sub_1419ccf30(rdi_12, rdx_38.d)
                                r14_5 = rdi_12[3]
                            
                            r14_4 = *(r14_5 + (rdx_38 << 3))
                            r15_2 = var_b8.q
                        
                        *(r12 + 0x1b0) = r14_4
                        sub_14198aa60(r14_4)
                        void*** rcx_72 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_68 = &rcx_72[3]
                        
                        if (rax_68 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x20)
                            rcx_72 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_68 = &rcx_72[3]
                        
                        *(r12 + 0x30) = rax_68
                        *(r12 + 0x14) += 1
                        **(r12 + 8) = rcx_72
                        *(r12 + 8) = &rcx_72[1]
                        rcx_72[2] = r14_4
                        rcx_72[1] = 0
                        *rcx_72 = &data_142dd5b40
                        int64_t r14_6 = *(r12 + 0x30)
                        var_150 = rax_28
                        void* rax_72 = *(r13 + 0xb8)
                        void** r14_8 = (r14_6 + 7) & 0xfffffffffffffff8
                        var_128.q = *(r13 + 0x48)
                        void* rcx_76 = &r14_8[1]
                        var_170.q = *(r12 + 0x1b0)
                        int64_t result_3 = *(rsi_12 + 0x10)
                        result_1 = result_3
                        
                        if (rcx_76 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x10)
                            result_3 = result_1
                            r14_8 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rcx_76 = &r14_8[1]
                        
                        *(r12 + 0x30) = rcx_76
                        *r14_8 = result_3
                        void*** rcx_80 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_75 = &rcx_80[6]
                        
                        if (rax_75 u> *(r12 + 0x38))
                            sub_140b0e3d0(r12 + 0x30, 0x38)
                            rcx_80 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_75 = &rcx_80[6]
                        
                        *(r12 + 0x30) = rax_75
                        void** rax_76 = *(r12 + 8)
                        *(r12 + 0x14) += 1
                        *rax_76 = rcx_80
                        *(r12 + 8) = &rcx_80[1]
                        rcx_80[1] = 0
                        rcx_80[5] = 0
                        *rcx_80 = &data_142da7798
                        rcx_80[2].d = 1
                        rcx_80[3] = r14_8
                        rcx_80[4].d = 2
                        *(rcx_80 + 0x24) = 3
                        sub_14077c370(r15_2 + 0x118, arg2, &var_170, &rsi_12[2])
                        void* rsi_13 = var_128.q
                        sub_14077c370(r15_2 + 0x120, arg2, &var_170, rsi_13 + 8)
                        sub_14077c370(r15_2 + 0x128, arg2, &var_170, rsi_13 + 0x28)
                        sub_14077c370(r15_2 + 0x130, arg2, &var_170, rax_72 + 8)
                        sub_140741e30(arg2, &var_170, var_b8.q + 0x138, &var_150, 0)
                        sub_1419cd1c0(arg2, var_b8.q, (rax_28 + 0x3f) u>> 6, 1, 1)
                        int64_t rdi_14 = *(arg2 + 0x1b0)
                        sub_14077cfd0(r15_2 + 0x120, arg2, rdi_14)
                        sub_14077cfd0(r15_2 + 0x128, arg2, rdi_14)
                        sub_14077cfd0(r15_2 + 0x130, arg2, rdi_14)
                        sub_14077cfd0(r15_2 + 0x118, arg2, *(arg2 + 0x1b0))
                        void* rsi_15 = var_120.q
                        int64_t* r14_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        int64_t rax_78 = *(rsi_15 + 0x10)
                        void* rcx_94 = &r14_14[1]
                        
                        if (rcx_94 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x10)
                            r14_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rcx_94 = &r14_14[1]
                        
                        *(arg2 + 0x30) = rcx_94
                        *r14_14 = rax_78
                        void*** rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_79 = &rcx_98[6]
                        
                        if (rax_79 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x38)
                            rcx_98 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_79 = &rcx_98[6]
                        
                        *(arg2 + 0x30) = rax_79
                        r12 = arg2
                        void**** rax_80 = *(r12 + 8)
                        *(r12 + 0x14) += 1
                        *rax_80 = rcx_98
                        *(r12 + 8) = &rcx_98[1]
                        rcx_98[1] = 0
                        *rcx_98 = &data_142da7798
                        rcx_98[2].d = 1
                        rcx_98[3] = r14_14
                        rcx_98[4].d = 0
                        *(rcx_98 + 0x24) = 3
                        rcx_98[5] = 0
                        sub_1408081b0(*(r13 + 0xb8) + 8)
                        void* r14_17 = *(r13 + 0xb8)
                        
                        if (r14_17 != 0)
                            sub_1408081b0(r14_17 + 8)
                            sub_1405ec8a0(r14_17 + 0x18)
                            sub_1405d1550(r14_17 + 0x10)
                            sub_1405d1550(r14_17 + 8)
                            j_sub_140a74f90(r14_17)
                        
                        *(r13 + 0xb8) = rsi_15
                        r15_1 = &r13[0x4e]
                
                r8_6 = arg_20
                rdx_17 = i_6.b
            
            result_7 = zx.o(var_f8.q)
            void* rsi_16 = &r13[0x4a]
            int32_t i_2 = 0
            char var_1a0
            int64_t* var_198
            int64_t* var_190
            uint64_t* var_188
            
            if (r13[0x4c] s> 0)
                void** rbx_3 = nullptr
                
                do
                    float var_140_1 = zmm3_1
                    var_188 = &var_a8
                    var_190 = &var_168
                    void* rax_87 = *(rbx_3 + *rsi_16)
                    var_198 = &var_98
                    var_1a0 = 1
                    var_1a8 = rdx_17
                    void* r8_36 = arg_8
                    result_1 = result_7.q
                    char rax_88
                    rax_88, result_7 = sub_141136540(1, r12, r8_36, rax_87, r8_6, &result_1, 
                        var_1a8, 1, var_198, var_190)
                    
                    if (rax_88 == 0)
                        int64_t rdi_15 = sx.q(*(r15_1 + 8))
                        int32_t rax_89 = (rdi_15 + 1).d
                        *(r15_1 + 8) = rax_89
                        
                        if (rax_89 s> *(r15_1 + 0xc))
                            sub_1405a4d70(r15_1)
                        
                        *(*r15_1 + (rdi_15 << 3)) = rax_87
                    
                    rdx_17 = i_6.b
                    i_2 += 1
                    r8_6 = arg_20
                    rbx_3 = &rbx_3[1]
                while (i_2 s< r13[0x4c])
                
                rbx_1 = var_158_1
                var_178_1 = var_160_1
                var_138_1 = var_168
                var_130_1 = var_a8
            
            int32_t rcx_114 = 0
            int32_t var_e4_1 = 1
            var_e8 = 0
            int32_t r10_1 = r13[0x5c]
            int32_t* r14_18 = &r13[0x56]
            int32_t r8_37 = 0
            var_e0 = r14_18
            int32_t var_d8_1 = 0xffffffff
            int64_t var_d4_1 = 0
            
            if (r10_1 != 0)
                int32_t* rax_94 = *(r14_18 + 0x10)
                int32_t* r9_12 = r14_18
                
                if (rax_94 != 0)
                    r9_12 = rax_94
                
                int32_t temp0_4
                int32_t temp1_1
                temp0_4:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_57 = *r9_12
                
                if (rdx_57 != 0)
                label_141157e18:
                    int32_t rax_101 = neg.d(rdx_57) & rdx_57
                    uint64_t rflags_1
                    int32_t temp0_5
                    temp0_5, rflags_1 = _bit_scan_reverse(rax_101)
                    int32_t var_e4_2 = rax_101
                    int32_t rax_102
                    
                    if (rax_101 == 0)
                        rax_102 = 0x20
                    else
                        rax_102 = 0x1f - temp0_5
                    
                    var_d4_1.d = r8_37 - rax_102 + 0x1f
                    
                    if (r8_37 - rax_102 + 0x1f s> r10_1)
                        var_d4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_58 = sx.q(rcx_114)
                        r8_37 += 0x20
                        rcx_114 += 1
                        var_d4_1:4.d = r8_37
                        var_e8 = rcx_114
                        
                        if (rdx_58.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                            break
                        
                        rdx_57 = r9_12[rdx_58 + 1]
                        var_d8_1 = 0xffffffff
                        
                        if (rdx_57 != 0)
                            goto label_141157e18
                    
                    var_d4_1.d = r10_1
            
            zmm2_1 = var_d8_1.o
            uint64_t* var_c0_1 = &r13[0x52]
            uint128_t var_70_1 = zmm2_1
            uint128_t var_80_1 = var_e8.o
            var_e8.o = (&r13[0x52]).o
            uint64_t var_c8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1.q)).q
            var_d8_1.o = var_80_1
            
            if ((zmm2_1.q u>> 0x20).d s< r10_1)
                int32_t i_5
                int32_t i_3 = i_5
                char r15_5 = i_6.b
                int32_t r14_19 = arg_20
                void* rsi_17 = arg_8
                
                do
                    var_f8.q = result_7.q
                    float var_f0_2 = zmm3_1
                    var_188 = &var_a8
                    var_190 = &var_168
                    var_198 = &var_98
                    var_1a0 = 1
                    var_1a8 = r15_5
                    result_7 = sub_141136540(0, r12, rsi_17, *(*var_e8.q + sx.q(i_3) * 0x10), 
                        r14_19, &var_f8, var_1a8, 1, var_198, var_190)
                    var_d4_1:4.d &= not.d(var_e0:4.d)
                    sub_14059bdd0(&var_e0)
                    i_3 = i_5
                while (i_3 s< *(var_d8_1.q + 0x18))
                
                r15_1 = &r13[0x4e]
                rbx_1 = var_158_1
                rsi_16 = &r13[0x4a]
                var_178_1 = var_160_1
                r14_18 = &r13[0x56]
                var_138_1 = var_168
                var_130_1 = var_a8
            
            int32_t rax_113 = *(rsi_16 + 0xc)
            *(rsi_16 + 8) = 0
            
            if (rax_113 s< 0 && rax_113 != 0)
                sub_1405c5570(rsi_16, 0)
            
            void* rsi_18 = nullptr
            r13[0x54] = 0
            
            if (r13[0x55] != 0)
                sub_1405a5410(&r13[0x52], 0)
            
            r13[0x5e] = 0xffffffff
            r13[0x5f] = 0
            sub_14059a8e0(r14_18, 0)
            int32_t i_8 = r13[0x64]
            
            if (i_8 s> 0)
                int64_t r8_40 = 0
                uint64_t i_7 = zx.q(i_8)
                uint64_t i_4
                
                do
                    void* rcx_122 = *(r13 + 0x188)
                    void* rax_114 = &r13[0x60]
                    int64_t rdx_62 = (sx.q(r13[0x64]) - 1) & r8_40
                    
                    if (rcx_122 != 0)
                        rax_114 = rcx_122
                    
                    r8_40 += 1
                    *(rax_114 + (rdx_62 << 2)) = 0xffffffff
                    i_4 = i_7
                    i_7 -= 1
                while (i_4 != 1)
            
            if (r13[0x50] == 0)
                *(r15_1 + 8) = 0
                
                if (*(r15_1 + 0xc) != 0)
                    sub_1405c5570(r15_1, 0)
            
            int64_t result_5 = sx.q(r13[8])
            result = zx.q(*r13)
            result_1 = result_5
            int32_t* r8_41 = *(r13 + (result_5 << 3) + 8)
            int32_t rdx_63 = *r8_41
            
            if (rdx_63 s< result.d)
                if (rdx_63 s<= 0)
                    int32_t temp11_1
                    int32_t temp12_1
                    temp11_1:temp12_1 = sx.q((result * 5).d)
                    *r8_41 = (temp12_1 + (temp11_1 & 3)) s>> 2
                    result = sub_141131c20(*(r13 + (result_5 << 3) + 8))
                else
                    int32_t* rax_115 = j_sub_140a82f30(0x48)
                    int32_t var_118_1
                    var_118_1.q = rax_115
                    int32_t* rdi_17 = rax_115
                    
                    if (rax_115 == 0)
                        rdi_17 = nullptr
                        var_118_1.q = 0
                    else
                        __builtin_memset(rax_115, 0, 0x24)
                        *(rax_115 + 0x20) = 0
                        *(rax_115 + 0x40) = 0
                        __builtin_memset(&rax_115[0xa], 0, 0x1c)
                    
                    int32_t temp15_1
                    int32_t temp16_1
                    temp15_1:temp16_1 = sx.q(*r13 * 5)
                    *rdi_17 = (temp16_1 + (temp15_1 & 3)) s>> 2
                    sub_141131c20(rdi_17)
                    sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(*(arg_8 + 8) + 8))]), 
                        &var_e8, &data_143e5a290, 0)
                    void* rax_123 = var_e8.q
                    void* r15_6 = nullptr
                    var_150.q = rax_123
                    
                    if (rax_123 != 0)
                        int64_t rdx_67 = sx.q(*(rax_123 + 0x10c))
                        i_6.q = rdx_67
                        int64_t* rsi_19 = *(var_e0 + 0x10)
                        int64_t rax_125 = rdx_67
                        int64_t r15_7 = rsi_19[3]
                        
                        if (*(r15_7 + (rdx_67 << 3)) == 0)
                            sub_1419ccf30(rsi_19, rdx_67.d)
                            rax_125 = i_6.q
                            r15_7 = rsi_19[3]
                        
                        r15_6 = *(r15_7 + (rax_125 << 3))
                    
                    *(r12 + 0x1b0) = r15_6
                    sub_14198aa60(r15_6)
                    void*** rcx_133 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_126 = &rcx_133[3]
                    
                    if (rax_126 u> *(r12 + 0x38))
                        sub_140b0e3d0(r12 + 0x30, 0x20)
                        rcx_133 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_126 = &rcx_133[3]
                    
                    *(r12 + 0x30) = rax_126
                    *(r12 + 0x14) += 1
                    **(r12 + 8) = rcx_133
                    *(r12 + 8) = &rcx_133[1]
                    rcx_133[1] = 0
                    *rcx_133 = &data_142dd5b40
                    rcx_133[2] = r15_6
                    void* rax_129 = *(r13 + (result_5 << 3) + 8)
                    int64_t rcx_137 = *(rdi_17 + 0x10)
                    int64_t* r14_22 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    i_6.q = *(r12 + 0x1b0)
                    int64_t rax_131 = *(rdi_17 + 0x30)
                    void* rax_132 = &r14_22[2]
                    var_168 = rcx_137
                    
                    if (rax_132 u> *(r12 + 0x38))
                        sub_140b0e3d0(r12 + 0x30, 0x18)
                        rcx_137 = var_168
                        r14_22 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_132 = &r14_22[2]
                    
                    *(r12 + 0x30) = rax_132
                    *r14_22 = rcx_137
                    r14_22[1] = rax_131
                    void*** rcx_141 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_134 = &rcx_141[6]
                    
                    if (rax_134 u> *(r12 + 0x38))
                        sub_140b0e3d0(r12 + 0x30, 0x38)
                        rcx_141 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_134 = &rcx_141[6]
                    
                    *(r12 + 0x30) = rax_134
                    void**** rax_135 = *(r12 + 8)
                    *(r12 + 0x14) += 1
                    void* rsi_20 = var_150.q
                    *rax_135 = rcx_141
                    *(r12 + 8) = &rcx_141[1]
                    rcx_141[1] = 0
                    rcx_141[5] = 0
                    *rcx_141 = &data_142da7798
                    rcx_141[2].d = 2
                    rcx_141[3] = r14_22
                    rcx_141[4].d = 2
                    *(rcx_141 + 0x24) = 3
                    sub_14077c370(rsi_20 + 0x118, r12, &i_6, &rdi_17[2])
                    sub_14077c370(rsi_20 + 0x120, r12, &i_6, &rdi_17[0xa])
                    int64_t* rcx_147 = data_143a2dd48
                    int32_t rdi_18 = arg_20
                    var_190.b = 0
                    var_198.d = rcx_147[0xd].d
                    var_1a0.d = *(rcx_147 + 0x64)
                    var_1a8.d = rcx_147[0xc].d
                    sub_14107ee50(rsi_20 + 0x128, r12, &i_6, rax_129, rdi_18, rcx_147.d, var_1a8, 
                        var_1a0, var_198.b)
                    sub_1419cd1c0(r12, rsi_20, (rdi_18 + 0x3f) u>> 6, 1, 1)
                    int64_t rdi_19 = *(r12 + 0x1b0)
                    sub_14077cfd0(rsi_20 + 0x128, r12, rdi_19)
                    sub_14077cfd0(rsi_20 + 0x130, r12, rdi_19)
                    sub_14077cfd0(rsi_20 + 0x118, r12, *(r12 + 0x1b0))
                    sub_14077cfd0(rsi_20 + 0x120, r12, *(r12 + 0x1b0))
                    void* rsi_21 = var_118_1.q
                    int64_t* r14_27 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    int64_t rax_140 = *(rsi_21 + 0x30)
                    int64_t rcx_154 = *(rsi_21 + 0x10)
                    void* rax_141 = &r14_27[2]
                    var_168 = rcx_154
                    
                    if (rax_141 u> *(r12 + 0x38))
                        sub_140b0e3d0(r12 + 0x30, 0x18)
                        rcx_154 = var_168
                        r14_27 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_141 = &r14_27[2]
                    
                    *(r12 + 0x30) = rax_141
                    *r14_27 = rcx_154
                    r14_27[1] = rax_140
                    void*** rcx_158 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_143 = &rcx_158[6]
                    
                    if (rax_143 u> *(r12 + 0x38))
                        sub_140b0e3d0(r12 + 0x30, 0x38)
                        rcx_158 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_143 = &rcx_158[6]
                    
                    *(r12 + 0x30) = rax_143
                    void**** rax_144 = *(r12 + 8)
                    *(r12 + 0x14) += 1
                    *rax_144 = rcx_158
                    *(r12 + 8) = &rcx_158[1]
                    rcx_158[3] = r14_27
                    int64_t result_6 = result_1
                    rcx_158[1] = 0
                    *rcx_158 = &data_142da7798
                    rcx_158[2].d = 2
                    rcx_158[4].d = 0
                    *(rcx_158 + 0x24) = 3
                    rcx_158[5] = 0
                    void* rdi_20 = *(r13 + (result_6 << 3) + 8)
                    sub_1408081b0(rdi_20 + 8)
                    result = sub_1408081b0(rdi_20 + 0x28)
                    void* rcx_164 = *(r13 + (result_6 << 3) + 8)
                    
                    if (rcx_164 != 0)
                        result = sub_14111ce20(rcx_164, 1)
                    
                    *(r13 + (result_6 << 3) + 8) = rsi_21
                    rsi_18 = nullptr
            
            int64_t rcx_166 = var_98
            
            if (rcx_166 != 0)
                result = sub_140a74f90(rcx_166)
            
            uint64_t r15_8 = zx.q(var_178_1)
            
            if (r15_8.d s> 0)
                int32_t rcx_167 = data_1439b5d08
                
                if (r15_8.d s> rcx_167)
                label_1411584d2:
                    int32_t temp13_1
                    int32_t temp14_1
                    temp13_1:temp14_1 = sx.q((r15_8 * 5).d)
                    int32_t rdi_22 = ((temp13_1 & 3) + temp14_1) s>> 2
                    data_1439b5d08 = rdi_22
                    sub_1405d16e0(&data_1439b5d10, nullptr)
                    sub_1405d16e0(&data_1439b5d18, nullptr)
                    sub_141131d40(&data_1439b5d00)
                    data_1439b5ca8 = rdi_22
                    sub_1405d16e0(&data_1439b5cb0, nullptr)
                    sub_1405d16e0(&data_1439b5cb8, nullptr)
                    sub_141131d40(&data_1439b5ca0)
                else if (rcx_167 s> 0x3e8 && rcx_167 s> (r15_8 * 2).d)
                    goto label_1411584d2
                
                int64_t* rcx_168 = data_143f0f180
                void* r8_51 = data_1439b5d10
                memcpy(
                    (*(*rcx_168 + 0x130))(rcx_168, &data_143f02b98, r8_51, 0, *(r8_51 + 0x18), 1, 
                        var_1a8, var_1a0, var_198, var_190, var_188), 
                    var_138_1, (r15_8 << 2).d)
                int64_t* rcx_170 = data_143f0f180
                (*(*rcx_170 + 0x138))(rcx_170, &data_143f02b98, data_1439b5d10)
                int64_t* rcx_171 = data_143f0f180
                void* r8_54 = data_1439b5cb0
                memcpy(
                    (*(*rcx_171 + 0x130))(rcx_171, &data_143f02b98, r8_54, 0, *(r8_54 + 0x18), 1), 
                    var_130_1, var_a0_1 << 4)
                int64_t* rcx_173 = data_143f0f180
                (*(*rcx_173 + 0x138))(rcx_173, &data_143f02b98, data_1439b5cb0)
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(*(arg_8 + 8) + 8))]), 
                    &var_e8, &data_143e59fd0, 0)
                void* r14_30 = var_e8.q
                
                if (r14_30 != 0)
                    int64_t rdx_83 = sx.q(*(r14_30 + 0x10c))
                    int64_t* rdi_23 = *(var_e0 + 0x10)
                    int64_t rsi_22 = rdi_23[3]
                    
                    if (*(rsi_22 + (rdx_83 << 3)) == 0)
                        sub_1419ccf30(rdi_23, rdx_83.d)
                        rsi_22 = rdi_23[3]
                    
                    rsi_18 = *(rsi_22 + (rdx_83 << 3))
                    r15_8 = zx.q(var_178_1)
                
                *(r12 + 0x1b0) = rsi_18
                sub_14198aa60(rsi_18)
                void*** rcx_182 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_162 = &rcx_182[3]
                
                if (rax_162 u> *(r12 + 0x38))
                    sub_140b0e3d0(r12 + 0x30, 0x20)
                    rcx_182 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_162 = &rcx_182[3]
                
                *(r12 + 0x30) = rax_162
                *(r12 + 0x14) += 1
                void* rdi_24 = arg_8
                **(r12 + 8) = rcx_182
                *(r12 + 8) = &rcx_182[1]
                rcx_182[1] = 0
                *rcx_182 = &data_142dd5b40
                rcx_182[2] = rsi_18
                int32_t var_1b8_5
                var_1b8_5.q = data_1439b5d18
                sub_141142f00(r14_30, r12, *(rdi_24 + 8), r15_8.d, var_1b8_5, data_1439b5cb8)
                sub_1419cd1c0(r12, r14_30, (r15_8 + 0x3f).d u>> 6, 1, 1)
                void* rdx_86 = *(rdi_24 + 8)
                arg_8 = *(r12 + 0x1b0)
                result = sub_14111a3f0(r14_30 + 0x126, r12, &arg_8, 
                    *(rdx_86 + (sx.q(*(rdx_86 + 0x18d0)) << 3) + 0x18b8), 1)
            
            rdi_3 = var_130_1
            r14_1 = var_138_1
        
        data_143e56df0
        
        if (rdi_3 != 0)
            result = sub_140a74f90(rdi_3)
        
        if (r14_1 != 0)
            result = sub_140a74f90(r14_1)
        
        if (*(r12 + 0x8c) != rbx_1)
            bool cond:4_1 = *(r12 + 0x14) u> 0
            *(r12 + 0x8c) = rbx_1
            
            if (cond:4_1)
                void*** rdx_90 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_168 = &rdx_90[3]
                
                if (rax_168 u> *(r12 + 0x38))
                    sub_140b0e3d0(r12 + 0x30, 0x20)
                    rdx_90 = (*(r12 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_168 = &rdx_90[3]
                
                *(r12 + 0x30) = rax_168
                void**** rax_169 = *(r12 + 8)
                *(r12 + 0x14) += 1
                *rax_169 = rdx_90
                result = zx.q(*(r12 + 0x8c))
                *(r12 + 8) = &rdx_90[1]
                rdx_90[1] = 0
                *rdx_90 = &data_142f11588
                rdx_90[2].d = result.d
            else
                *(r12 + 0x90) = rbx_1

return result
