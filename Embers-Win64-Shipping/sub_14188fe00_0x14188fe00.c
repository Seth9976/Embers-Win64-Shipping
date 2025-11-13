// 函数: sub_14188fe00
// 地址: 0x14188fe00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
r12.b = 1
int32_t arg_10 = 0

if (*(arg1 + 0x38) s> 0)
    int64_t rdi_1 = 0
    int64_t var_f0_1 = 0
    
    while (r12.b != 0)
        bool z_1
        
        if (0 == *(arg1 + 0xa0))
            *(arg1 + 0xa0) = 0
            z_1 = true
        else
            *(arg1 + 0xa0)
            z_1 = false
        
        if (not(z_1))
            break
        
        int64_t* rcx = *(arg1 + 0x18)
        char rax_3
        int32_t rdx_1
        rax_3, rdx_1 = (*(*rcx + 8))(rcx)
        
        if (rax_3 != 0)
            break
        
        int64_t var_1a8 = 0
        int64_t* r14_3 = (rdi_1 << 5) + *(arg1 + 0x30)
        int32_t rdi_2 = r14_3[1].d
        int64_t rsi_1 = *r14_3
        sub_1405a4c70(&var_1a8, sbb.d(rdx_1, rdx_1, rdi_2 != 0) + 4 + rdi_2, 0)
        memcpy(var_1a8, rsi_1, rdi_2 * 2)
        sub_140a20ba0(&var_1a8, &data_142fe4c20, 3)
        int64_t rax_6 = var_1a8
        int32_t var_19c
        int32_t var_bc_1 = var_19c
        int32_t var_1a0_1
        var_1a0_1.q = 0
        var_1a8 = 0
        int32_t var_c0_1 = rdi_2
        int64_t* rax_8 = j_sub_140a82f30(0x28)
        int64_t* rdi_3 = rax_8
        
        if (rax_8 == 0)
            rdi_3 = nullptr
        else
            int64_t var_138 = 0
            int32_t var_130_1 = rdi_2
            
            if (rdi_2 != 0)
                sub_1405a4c70(&var_138, rdi_2, 0)
                memcpy(var_138, rax_6, rdi_2 * 2)
            else
                int32_t var_12c_1 = 0
            
            sub_140596d10(rdi_3, &var_138)
            int64_t rcx_7 = var_138
            rdi_3[2] = -1
            rdi_3[3] = 0
            rdi_3[4] = 0
            
            if (rcx_7 != 0)
                arg2 = sub_140a74f90(rcx_7)
        
        void*** rax_9 = j_sub_140a82f30(0x18)
        
        if (rax_9 == 0)
            rax_9 = nullptr
        else
            rax_9[1].d = 1
            *rax_9 = &data_142fe8508
            *(rax_9 + 0xc) = 1
            rax_9[2] = rdi_3
        
        void*** var_180_1 = rax_9
        int64_t* rax_10 = j_sub_140a82f30(0x18)
        
        if (rax_10 != 0)
            *rax_10 = 0
            rax_10[1] = rdi_3
            rax_10[2] = var_180_1
            void** rcx_10 = *(arg1 + 0xb0)
            var_180_1 = nullptr
            int64_t var_188_2 = 0
            *(arg1 + 0xb0) = rax_10
            *rcx_10 = rax_10
        
        if (var_180_1 != 0)
            var_180_1[1].d -= 1
            
            if (var_180_1[1].d == 1)
                (**var_180_1)(var_180_1)
                int32_t rax_13 = *(var_180_1 + 0xc)
                *(var_180_1 + 0xc) -= 1
                
                if (rax_13 == 1)
                    (*var_180_1)[1](var_180_1, 1)
        
        int64_t* rcx_13 = *(arg1 + 0xc0)
        (*(*rcx_13 + 0x10))(rcx_13)
        void var_e8
        sub_141820450(&var_e8)
        int128_t* rdi_5 = r14_3[2]
        void* r14_6 = &rdi_5[sx.q(r14_3[3].d)]
        int64_t var_d8
        
        while (rdi_5 != r14_6)
            int32_t var_d0
            int64_t rsi_3 = sx.q(var_d0)
            int128_t zmm0_1 = *rdi_5
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            int32_t rax_16 = (rsi_3 + 1).d
            var_d0 = rax_16
            int32_t var_cc
            
            if (rax_16 s> var_cc)
                sub_1405c4e40(&var_d8)
            
            int64_t rax_17 = var_d8
            int64_t rcx_17 = rsi_3 << 5
            rdi_5 = &rdi_5[1]
            *(rcx_17 + rax_17) = zmm0_1
            *(rcx_17 + rax_17 + 0x10) = var_58_1.o
        
        void* rax_18 = j_sub_140a82f30(0x28)
        void* const r14_7 = rax_18
        
        if (rax_18 == 0)
            r14_7 = nullptr
        else
            __builtin_memset(rax_18, 0, 0x28)
            
            if (*(rax_18 + 0x24) != 0x200000)
                sub_1405c5510(rax_18 + 0x18, 0x200000)
        
        void*** rax_19 = j_sub_140a82f30(0xa8)
        void*** rsi_4 = rax_19
        
        if (rax_19 == 0)
            rsi_4 = nullptr
        else
            int32_t arg_18 = 0
            int64_t var_108_1 = 0
            memset(rax_19, 0, 0x90)
            sub_140b4c2a0(rsi_4)
            rsi_4[0x12] = 0
            *rsi_4 = &data_142d6ad48
            rsi_4[0x13] = r14_7 + 0x18
            rsi_4[0x14] = 0
            sub_140b552b0(rsi_4, 1)
            (*rsi_4)[0x1b](rsi_4, 0)
        
        sub_141824770(rsi_4, &var_e8, arg2)
        int64_t var_198_1 = sx.q(*(r14_7 + 0x20))
        void*** rax_23 = j_sub_140a82f30(0x18)
        
        if (rax_23 == 0)
            rax_23 = nullptr
        else
            rax_23[1].d = 1
            *rax_23 = &data_142fe8508
            *(rax_23 + 0xc) = 1
            rax_23[2] = r14_7
        
        void*** var_170_1 = rax_23
        int64_t* rax_24 = j_sub_140a82f30(0x18)
        
        if (rax_24 != 0)
            *rax_24 = 0
            rax_24[1] = r14_7
            rax_24[2] = var_170_1
            void** rcx_26 = *(arg1 + 0xb0)
            var_170_1 = nullptr
            int64_t var_178_2 = 0
            *(arg1 + 0xb0) = rax_24
            *rcx_26 = rax_24
        
        if (var_170_1 != 0)
            var_170_1[1].d -= 1
            
            if (var_170_1[1].d == 1)
                (**var_170_1)(var_170_1)
                int32_t rax_27 = *(var_170_1 + 0xc)
                *(var_170_1 + 0xc) -= 1
                
                if (rax_27 == 1)
                    (*var_170_1)[1](var_170_1, 1)
        
        int64_t* rcx_29 = *(arg1 + 0xc0)
        (*(*rcx_29 + 0x10))(rcx_29)
        int64_t* r14_8 = r14_3
        int32_t i = 0
        int32_t i_1 = 0
        
        if (r14_8[3].d s> 0)
            int128_t var_118
            var_118.q = 0
            
            do
                if (r12.b == 0)
                    goto label_141890746
                
                bool z_2
                
                if (0 == *(arg1 + 0xa0))
                    *(arg1 + 0xa0) = 0
                    z_2 = true
                else
                    *(arg1 + 0xa0)
                    z_2 = false
                
                if (not(z_2))
                    break
                
                int64_t* rcx_30 = *(arg1 + 0x18)
                
                if ((*(*rcx_30 + 8))(rcx_30) != 0)
                    break
                
                int64_t* rcx_31 = *(arg1 + 8)
                int64_t r15_3 = (sx.q(i) << 4) + r14_8[2]
                int64_t rax_34 = (*(*rcx_31 + 8))(rcx_31, r15_3)
                r12.b = rax_34 != 0
                
                if (rax_34 != 0)
                    int64_t* rax_35 = j_sub_140a82f30(0x28)
                    int64_t* rax_36
                    
                    if (rax_35 == 0)
                        rax_36 = nullptr
                    else
                        rax_36 = sub_1418618d0(rax_35, var_198_1)
                    
                    int64_t* rdi_8 = nullptr
                    
                    if (rax_36 != 0)
                        rdi_8 = rax_36
                    
                    void*** rax_37 = j_sub_140a82f30(0xa8)
                    void*** rax_38
                    
                    if (rax_37 == 0)
                        rax_38 = nullptr
                    else
                        int32_t arg_20 = 0
                        int64_t var_100_1 = 0
                        rax_38 = sub_1406698a0(rax_37, &rdi_8[3], 0, 0, 0)
                    
                    if (rsi_4 != rax_38)
                        void*** rcx_34 = rsi_4
                        rsi_4 = rax_38
                        
                        if (rcx_34 != 0)
                            (**rcx_34)(rcx_34, 1)
                    
                    int64_t* rcx_35 = *(arg1 + 0x28)
                    char rax_41 = (*(*rcx_35 + 0x30))(rcx_35, rsi_4, rax_34)
                    
                    if (rax_41 != 0)
                        void* r14_10
                        
                        if (rax_41 != 1)
                            r14_10 = data_1439c6810
                            
                            if (rax_41 == 3)
                                r14_10 = data_1439c6828
                        else
                            r14_10 = data_1439c6818
                        
                        arg2 = sub_1405d9400()
                        int64_t var_b0 = data_143cd6fd8
                        void* rcx_37 = data_143cd6fe0
                        void* var_a8_1 = rcx_37
                        
                        if (rcx_37 != 0)
                            *(rcx_37 + 8) += 1
                        
                        int64_t* rcx_38 = *(arg1 + 0x18)
                        int32_t var_a0_1 = data_143cd6fe8
                        (*(*rcx_38 + 0x38))(rcx_38, 2, r14_10, 0, &var_b0)
                    
                    void* rcx_40 = var_118.q + var_d8
                    *(rcx_40 + 0x10) = var_198_1
                    uint64_t rax_44 = zx.q(rdi_8[4].d)
                    *(rcx_40 + 0x18) = rax_44.d
                    var_198_1 += rax_44
                    int64_t* rax_45 = j_sub_140a82f30(0x18)
                    
                    if (rax_45 == 0)
                        rax_45 = nullptr
                    else
                        rax_45[1].d = 1
                        *rax_45 = &data_142fe8508
                        *(rax_45 + 0xc) = 1
                        rax_45[2] = rdi_8
                    
                    int64_t* var_160_1 = rax_45
                    int64_t* rax_46 = j_sub_140a82f30(0x18)
                    
                    if (rax_46 != 0)
                        *rax_46 = 0
                        rax_46[1] = rdi_8
                        rax_46[2] = var_160_1
                        void** rcx_43 = *(arg1 + 0xb0)
                        var_160_1 = nullptr
                        int64_t var_168_2 = 0
                        *(arg1 + 0xb0) = rax_46
                        *rcx_43 = rax_46
                    
                    if (var_160_1 != 0)
                        var_160_1[1].d -= 1
                        
                        if (var_160_1[1].d == 1)
                            (**var_160_1)(var_160_1)
                            int32_t rax_49 = *(var_160_1 + 0xc)
                            *(var_160_1 + 0xc) -= 1
                            
                            if (rax_49 == 1)
                                (*(*var_160_1 + 8))(var_160_1, 1)
                    
                    int64_t* rcx_46 = *(arg1 + 0xc0)
                    (*(*rcx_46 + 0x10))(rcx_46)
                    int64_t* rcx_47 = *(arg1 + 0x20)
                    char rax_53 = (*(*rcx_47 + 0x30))(rcx_47, r15_3)
                    r12 = zx.q(rax_53)
                    
                    if (rax_53 == 0)
                        sub_1405d9400()
                        int64_t var_98 = data_143cd6fd8
                        void* rcx_49 = data_143cd6fe0
                        void* var_90_1 = rcx_49
                        
                        if (rcx_49 != 0)
                            *(rcx_49 + 8) += 1
                        
                        int64_t* rcx_50 = *(arg1 + 0x18)
                        int32_t var_88_1 = data_143cd6fe8
                        (*(*rcx_50 + 0x38))(rcx_50, 9, data_1439c6800, 0, &var_98)
                        i = i_1
                        goto label_141890512
                    
                    i = i_1
                else if (r12.b == 0)
                label_141890512:
                    arg2 = sub_1405d9400()
                    int64_t var_80 = data_143cd6fd8
                    void* rcx_52 = data_143cd6fe0
                    void* var_78_1 = rcx_52
                    
                    if (rcx_52 != 0)
                        *(rcx_52 + 8) += 1
                    
                    int64_t* rcx_53 = *(arg1 + 0x18)
                    int32_t var_70_1 = data_143cd6fe8
                    (*(*rcx_53 + 0x38))(rcx_53, 2, data_1439c6810, 0, &var_80)
                
                r14_8 = r14_3
                i += 1
                var_118.q += 0x20
                i_1 = i
            while (i s< r14_8[3].d)
        
        if (r12.b != 0)
            int32_t var_e4
            int64_t var_e0_1 = var_198_1 - zx.q(var_e4)
            void* rax_59 = j_sub_140a82f30(0x28)
            void* r14_11 = rax_59
            
            if (rax_59 == 0)
                r14_11 = nullptr
            else
                __builtin_memset(rax_59, 0, 0x28)
                
                if (*(rax_59 + 0x24) != 0x200000)
                    sub_1405c5510(rax_59 + 0x18, 0x200000)
            
            void* const rdi_10 = nullptr
            
            if (r14_11 != 0)
                rdi_10 = r14_11
            
            void*** rax_60 = j_sub_140a82f30(0xa8)
            void*** r15_4 = rax_60
            
            if (rax_60 == 0)
                r15_4 = nullptr
            else
                int32_t var_b8_1 = 0
                int64_t var_f8_1 = 0
                memset(rax_60, 0, 0x90)
                sub_140b4c2a0(r15_4)
                r15_4[0x12] = 0
                *r15_4 = &data_142d6ad48
                r15_4[0x13] = rdi_10 + 0x18
                r15_4[0x14] = 0
                sub_140b552b0(r15_4, 1)
                (*r15_4)[0x1b](r15_4, 0)
            
            if (rsi_4 != r15_4)
                void*** rcx_61 = rsi_4
                rsi_4 = r15_4
                
                if (rcx_61 != 0)
                    (**rcx_61)(rcx_61, 1)
            
            sub_141824770(rsi_4, &var_e8, arg2)
            void*** rax_64 = j_sub_140a82f30(0x18)
            
            if (rax_64 == 0)
                rax_64 = nullptr
            else
                rax_64[1].d = 1
                *rax_64 = &data_142fe8508
                *(rax_64 + 0xc) = 1
                rax_64[2] = rdi_10
            
            void*** var_150_1 = rax_64
            int64_t* rax_65 = j_sub_140a82f30(0x18)
            
            if (rax_65 != 0)
                *rax_65 = 0
                rax_65[1] = rdi_10
                rax_65[2] = var_150_1
                void** rcx_65 = *(arg1 + 0xb0)
                var_150_1 = nullptr
                int64_t var_158_2 = 0
                *(arg1 + 0xb0) = rax_65
                *rcx_65 = rax_65
            
            if (var_150_1 != 0)
                var_150_1[1].d -= 1
                
                if (var_150_1[1].d == 1)
                    (**var_150_1)(var_150_1)
                    int32_t rax_68 = *(var_150_1 + 0xc)
                    *(var_150_1 + 0xc) -= 1
                    
                    if (rax_68 == 1)
                        (*var_150_1)[1](var_150_1, 1)
            
            int64_t* rcx_68 = *(arg1 + 0xc0)
            (*(*rcx_68 + 0x10))(rcx_68)
        
    label_141890746:
        int64_t* rax_71 = j_sub_140a82f30(0x28)
        int64_t* rdi_12 = rax_71
        
        if (rax_71 == 0)
            rdi_12 = nullptr
        else
            int64_t var_128 = 0
            int32_t r14_13 = r14_3[1].d
            int64_t r15_6 = *r14_3
            int32_t var_120_1 = r14_13
            
            if (r14_13 != 0)
                sub_1405a4c70(&var_128, r14_13, 0)
                memcpy(var_128, r15_6, r14_13 * 2)
            else
                int32_t var_11c_1 = 0
            
            sub_140596d10(rdi_12, &var_128)
            int64_t rcx_72 = var_128
            rdi_12[2] = -2
            rdi_12[3] = 0
            rdi_12[4] = 0
            
            if (rcx_72 != 0)
                arg2 = sub_140a74f90(rcx_72)
        
        void*** rax_72 = j_sub_140a82f30(0x18)
        
        if (rax_72 == 0)
            rax_72 = nullptr
        else
            rax_72[1].d = 1
            *rax_72 = &data_142fe8508
            *(rax_72 + 0xc) = 1
            rax_72[2] = rdi_12
        
        void*** var_140_1 = rax_72
        int64_t* rax_73 = j_sub_140a82f30(0x18)
        
        if (rax_73 != 0)
            *rax_73 = 0
            rax_73[1] = rdi_12
            rax_73[2] = var_140_1
            void** rcx_75 = *(arg1 + 0xb0)
            var_140_1 = nullptr
            int64_t var_148_2 = 0
            *(arg1 + 0xb0) = rax_73
            *rcx_75 = rax_73
        
        if (var_140_1 != 0)
            var_140_1[1].d -= 1
            
            if (var_140_1[1].d == 1)
                (**var_140_1)(var_140_1)
                int32_t rax_76 = *(var_140_1 + 0xc)
                *(var_140_1 + 0xc) -= 1
                
                if (rax_76 == 1)
                    (*var_140_1)[1](var_140_1, 1)
        
        int64_t* rcx_78 = *(arg1 + 0xc0)
        (*(*rcx_78 + 0x10))(rcx_78)
        
        if (rsi_4 != 0)
            (**rsi_4)(rsi_4, 1)
        
        int64_t rcx_80 = var_d8
        
        if (rcx_80 != 0)
            arg2 = sub_140a74f90(rcx_80)
        
        if (rax_6 != 0)
            arg2 = sub_140a74f90(rax_6)
        
        int32_t rax_81 = arg_10 + 1
        rdi_1 = var_f0_1 + 1
        arg_10 = rax_81
        var_f0_1 = rdi_1
        
        if (rax_81 s>= *(arg1 + 0x38))
            break

*(arg1 + 0xa4) = 1
jump(*(**(arg1 + 0xc0) + 0x10))
