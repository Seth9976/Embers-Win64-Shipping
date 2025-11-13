// 函数: sub_1424344d0
// 地址: 0x1424344d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
void* result = __security_cookie ^ &var_1c8
void* result_2 = result
void* rbx = arg2
int32_t i = 0
int32_t i_1 = 0
void* var_150 = arg1

if (*(arg1 + 0x20) s> 0)
    int64_t r8_1 = 0
    uint64_t r13
    uint64_t var_28_1 = r13
    int64_t var_e8_1 = 0
    
    do
        void* result_3 = *(arg1 + 0x18) + r8_1
        void* result_1 = result_3
        int32_t r10_1 = *(result_3 + 0x54)
        
        if (r10_1 != 0)
            int32_t r8_2 = *(result_3 + 0x4c)
            int64_t r11_1 = sx.q(*(result_3 + 0x48))
            int64_t r15_1 = r11_1 * 5
            int32_t rcx = *((r15_1 << 3) + 0x1439c85e8)
            uint32_t temp0_1 = divu.dp.d(0:(r8_2 - 1 + rcx), rcx)
            int32_t rcx_1 = *((r15_1 << 3) + &data_1439c85ec)
            uint64_t r9_1 = zx.q(*(result_3 + 0x50))
            uint32_t temp0_2 = divu.dp.d(0:(r8_2 - 1 + rcx_1), rcx_1)
            *(result_3 + 0x50) = (r9_1 + 1).d u% 3
            void* rsi_1 = result_3 + r9_1 * 0x18
            void* var_168_1 = rsi_1
            r13.b = data_143f01c92 == 0
            uint32_t var_188
            int128_t* var_180
            int32_t var_178
            int32_t j
            
            if (r10_1 u> *(rsi_1 + 0xc) || r13.b != *(rsi_1 + 0x10))
                uint128_t zmm1 = data_143dbb1e0
                char var_60_1 = 0
                uint32_t temp0_3 = divu.dp.d(0:data_1439c7a78, r8_2)
                int128_t var_88 = zx.o(0)
                uint128_t var_74_1 = zmm1
                int32_t rdi_3 = (divu.dp.d(0:(temp0_3 - 1 + r10_1), temp0_3) + 3) & 0xfffffffc
                uint32_t temp0_5 = divu.dp.d(0:(r10_1 - 1 + rdi_3), rdi_3)
                int32_t var_78_1 = 1
                int64_t* rcx_5 = data_143f0f180
                int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
                int64_t var_58_1 = 0
                int32_t var_50_1 = 0
                var_180 = &var_88
                var_188 = zx.d(r13.b) << 5
                int64_t* var_148
                (*(*rcx_5 + 0x560))(rcx_5, &var_148, rbx, zx.q(rdi_3 * r8_2), temp0_5 * r8_2, 
                    r11_1.b, 1, 1, var_188, var_180, var_178, j, var_168_1, arg2, r8_2, var_150)
                
                if (var_168_1 == &var_148)
                label_142434761:
                    int64_t* rbx_2 = var_148
                    
                    if (rbx_2 != 0)
                        rbx_2[1].d -= 1
                        
                        if (rbx_2[1].d == 1)
                            char rax_29
                            
                            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                                rax_29 = sub_1405949a0()
                            
                            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_29 != 0))
                                (**rbx_2)(rbx_2, 1)
                            else
                                bool z_2
                                
                                if (0 == *(rbx_2 + 0xc))
                                    *(rbx_2 + 0xc) = 1
                                    z_2 = true
                                else
                                    *(rbx_2 + 0xc)
                                    z_2 = false
                                
                                if (z_2)
                                    int32_t rax_31 = sub_140a20af0()
                                    uint64_t rdx_9 = zx.q(rax_31)
                                    void* const rax_32
                                    
                                    if (rax_31 != 0)
                                        rax_32 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                                            + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                                    else
                                        rax_32 = nullptr
                                    
                                    *(rax_32 + 8) = rbx_2
                                    sub_1405a42f0(&data_143f02390, rdx_9.d)
                else
                    int64_t* rbx_1 = *var_168_1
                    *var_168_1 = var_148
                    var_148 = nullptr
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            char rax_20
                            
                            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                                rax_20 = sub_1405949a0()
                            
                            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_20 != 0))
                                (**rbx_1)(rbx_1, 1)
                            else
                                bool z_1
                                
                                if (0 == *(rbx_1 + 0xc))
                                    *(rbx_1 + 0xc) = 1
                                    z_1 = true
                                else
                                    *(rbx_1 + 0xc)
                                    z_1 = false
                                
                                if (z_1)
                                    int32_t rax_22 = sub_140a20af0()
                                    uint64_t rdx_8 = zx.q(rax_22)
                                    void* const rax_23
                                    
                                    if (rax_22 != 0)
                                        rax_23 = *((rdx_8 u>> 0xe << 3) + &data_143cf0bf8)
                                            + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                                    else
                                        rax_23 = nullptr
                                    
                                    *(rax_23 + 8) = rbx_1
                                    sub_1405a42f0(&data_143f02390, rdx_8.d)
                        
                        goto label_142434761
                
                rbx = arg2
                *(var_168_1 + 8) = rdi_3
                result_3 = result_1
                *(var_168_1 + 0x10) = r13.b
                *(var_168_1 + 0xc) = temp0_5 * rdi_3
                rsi_1 = var_168_1
            
            int64_t* rcx_15 = data_143f0f180
            int32_t var_190
            var_190.b = 0
            int32_t var_174 = 0
            int32_t var_198
            var_198.b = 0
            char var_1a0
            var_1a0.q = &var_174
            int64_t rax_39 = (*(*rcx_15 + 0x510))(rcx_15, rbx, *rsi_1, 0, 1, var_1a0, var_198, 
                var_190, var_188, var_180, var_178, j, var_168_1, arg2, r8_2, var_150)
            int64_t rdx_11 = sx.q(*(result_3 + 0x5c))
            int64_t r8_8 = rax_39
            void* rbx_3 = var_150
            int64_t rax_41 = rdx_11 << 6
            j = rdx_11.d
            r13 = zx.q(*(rax_41 + *(rbx_3 + 0x28) + 0x38))
            
            if (r13.d != rdx_11.d)
                do
                    void* rdi_6 = (sx.q(r13.d) << 6) + *(rbx_3 + 0x28)
                    int32_t rbx_4 = 0
                    int32_t rax_42 = *(rdi_6 + 0x24)
                    int32_t temp2_6 = *(rsi_1 + 8)
                    r13 = zx.q(*(rdi_6 + 0x38))
                    int32_t var_178_1 = r13.d
                    int64_t rsi_5 =
                        zx.q(modu.dp.d(0:rax_42, temp2_6) * (&data_1439c85f4)[r15_1 * 2] * temp0_1)
                        + r8_8 + zx.q(divu.dp.d(0:rax_42, temp2_6) * var_174 * temp0_2)
                    
                    if (temp0_2 != 0)
                        do
                            memcpy(zx.q(rbx_4 * var_174) + rsi_5, 
                                zx.q(*(rdi_6 + 0x1c) * rbx_4) + *(rdi_6 + 0x10), 
                                (&data_1439c85f4)[r15_1 * 2] * temp0_1)
                            rbx_4 += 1
                        while (rbx_4 u< temp0_2)
                        
                        r13 = zx.q(var_178_1)
                        r8_8 = rax_39
                    
                    rsi_1 = var_168_1
                    rbx_3 = var_150
                while (r13.d != j)
            
            int64_t* rcx_21 = data_143f0f180
            int32_t var_1a8_2
            var_1a8_2.b = 0
            (*(*rcx_21 + 0x518))(rcx_21, arg2, *rsi_1, 0, var_1a8_2, 0)
            int32_t rdx_19 = *(rax_41 + *(rbx_3 + 0x28) + 0x38)
            var_178 = rdx_19
            
            if (rdx_19 != j)
                int32_t rax_49
                
                do
                    int64_t r9_4 = *(rbx_3 + 0x28)
                    uint64_t r8_13 = sx.q(rdx_19) << 6
                    int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    int32_t rcx_23 = *(r8_13 + r9_4 + 0x30)
                    rax_49 = *(r8_13 + r9_4 + 0x38)
                    int32_t rsi_7 = r8_2 - rcx_23 * 2
                    int32_t rax_51 = *(r8_13 + r9_4 + 0x24)
                    int32_t temp2_7 = *(var_168_1 + 8)
                    int32_t r12_3 = *(r8_13 + r9_4 + 0x28) * rsi_7
                    int32_t r13_2 = *(r8_13 + r9_4 + 0x2c) * rsi_7
                    int64_t rax_53 = *(r8_13 + r9_4 + 8)
                    int32_t r15_4 = divu.dp.d(0:rax_51, temp2_7) * r8_2 + rcx_23
                    void* rcx_24 = &rbx_7[1]
                    
                    if (rcx_24 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x10)
                        rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_24 = &rbx_7[1]
                    
                    *(arg2 + 0x30) = rcx_24
                    *rbx_7 = rax_53
                    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_54 = &rcx_28[5]
                    
                    if (rax_54 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_54 = &rcx_28[5]
                    
                    *(arg2 + 0x30) = rax_54
                    *(arg2 + 0x14) += 1
                    **(arg2 + 8) = rcx_28
                    *(arg2 + 8) = &rcx_28[1]
                    rcx_28[1] = 0
                    *rcx_28 = &data_142d549c8
                    rcx_28[2].d = 1
                    rcx_28[3] = rbx_7
                    rcx_28[4].d = 1
                    int32_t var_124_1 = rsi_7
                    int64_t rsi_8 = r9_4
                    int32_t var_10c_1 = r13_2
                    r13 = r8_13
                    int64_t* r15_5 = *var_168_1
                    int64_t var_104_1 = 0
                    int64_t var_fc_1 = 1
                    int32_t var_f4_1 = 0
                    int32_t var_f0_1 = 1
                    int32_t var_120_1 = 1
                    int32_t var_11c_1 = modu.dp.d(0:rax_51, temp2_7) * r8_2 + rcx_23
                    int32_t var_114_1 = 0
                    int32_t var_110_1 = r12_3
                    int32_t var_108_1 = 0
                    int64_t r12_4 = *(rsi_8 + r13 + 8)
                    void* r14_6
                    
                    if (data_143f0f19d == 0)
                        r14_6 = arg2
                        int32_t rsi_9 = 0
                        int32_t var_a8_1 = 1
                        int128_t var_e0_1 = rsi_7.o
                        uint128_t var_d0_1 = r15_4.o
                        int128_t var_c0_1 = var_108_1.o
                        uint64_t var_b0_1 = var_fc_1
                        
                        do
                            void*** rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_76 = &rbx_17[0xc]
                            
                            if (rax_76 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x68)
                                rbx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_76 = &rbx_17[0xc]
                            
                            *(arg2 + 0x30) = rax_76
                            void**** rax_77 = *(r14_6 + 8)
                            *(r14_6 + 0x14) += 1
                            *rax_77 = rbx_17
                            *(r14_6 + 8) = &rbx_17[1]
                            rbx_17[1] = 0
                            *rbx_17 = &data_142da7788
                            *(rbx_17 + 0x10) = var_e0_1
                            *(rbx_17 + 0x20) = var_d0_1
                            *(rbx_17 + 0x30) = var_c0_1
                            rbx_17[8] = var_b0_1
                            rbx_17[9].d = var_a8_1
                            rbx_17[0xa] = r15_5
                            rbx_17[0xb] = r12_4
                            
                            if ((*(*r15_5 + 8))(r15_5) == 0)
                                int64_t* rcx_43 = rbx_17[0xa]
                                
                                if ((*(*rcx_43 + 0x10))(rcx_43) == 0)
                                    int64_t* rcx_44 = rbx_17[0xa]
                                    
                                    if ((*(*rcx_44 + 0x18))(rcx_44) == 0)
                                        int64_t* rcx_45 = rbx_17[0xa]
                                        (*(*rcx_45 + 0x20))(rcx_45)
                            
                            int64_t* rcx_46 = rbx_17[0xb]
                            
                            if ((*(*rcx_46 + 8))(rcx_46) == 0)
                                int64_t* rcx_47 = rbx_17[0xb]
                                
                                if ((*(*rcx_47 + 0x10))(rcx_47) == 0)
                                    int64_t* rcx_48 = rbx_17[0xb]
                                    
                                    if ((*(*rcx_48 + 0x18))(rcx_48) == 0)
                                        int64_t* rcx_49 = rbx_17[0xb]
                                        (*(*rcx_49 + 0x20))(rcx_49)
                            
                            var_b0_1.d += 1
                            var_b0_1:4.d += 1
                            int32_t temp33_1
                            int32_t temp34_1
                            temp33_1:temp34_1 = sx.q(var_e0_1.d)
                            int32_t rax_97 = (temp34_1 - temp33_1) s>> 1
                            
                            if (rax_97 s<= 1)
                                rax_97 = 1
                            
                            var_e0_1.d = rax_97
                            int32_t temp35_1
                            int32_t temp36_1
                            temp35_1:temp36_1 = sx.q(var_e0_1:4.d)
                            int32_t rax_101 = (temp36_1 - temp35_1) s>> 1
                            
                            if (rax_101 s<= 1)
                                rax_101 = 1
                            
                            rsi_9 += 1
                            var_e0_1:4.d = rax_101
                        while (rsi_9 u< var_f0_1)
                        
                        r13 = r8_13
                        rsi_8 = r9_4
                    else
                        void*** rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_58 = &rbx_12[0xc]
                        
                        if (rax_58 u> *(arg2 + 0x38))
                            sub_140b0e3d0(arg2 + 0x30, 0x68)
                            rbx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_58 = &rbx_12[0xc]
                        
                        r14_6 = arg2
                        *(arg2 + 0x30) = rax_58
                        int64_t* rax_59 = *(r14_6 + 8)
                        *(r14_6 + 0x14) += 1
                        *rax_59 = rbx_12
                        *(r14_6 + 8) = &rbx_12[1]
                        rbx_12[1] = 0
                        *rbx_12 = &data_142da7788
                        *(rbx_12 + 0x10) = rsi_7.o
                        *(rbx_12 + 0x20) = r15_4.o
                        *(rbx_12 + 0x30) = var_108_1.o
                        rbx_12[8] = var_fc_1
                        rbx_12[9].d = var_f0_1
                        rbx_12[0xa] = r15_5
                        rbx_12[0xb] = r12_4
                        
                        if ((*(*r15_5 + 8))(r15_5, 0) == 0)
                            int64_t* rcx_34 = rbx_12[0xa]
                            
                            if ((*(*rcx_34 + 0x10))(rcx_34) == 0)
                                int64_t* rcx_35 = rbx_12[0xa]
                                
                                if ((*(*rcx_35 + 0x18))(rcx_35) == 0)
                                    int64_t* rcx_36 = rbx_12[0xa]
                                    (*(*rcx_36 + 0x20))(rcx_36)
                        
                        int64_t* rcx_37 = rbx_12[0xb]
                        
                        if ((*(*rcx_37 + 8))(rcx_37) == 0)
                            int64_t* rcx_38 = rbx_12[0xb]
                            
                            if ((*(*rcx_38 + 0x10))(rcx_38) == 0)
                                int64_t* rcx_39 = rbx_12[0xb]
                                
                                if ((*(*rcx_39 + 0x18))(rcx_39) == 0)
                                    int64_t* rcx_40 = rbx_12[0xb]
                                    (*(*rcx_40 + 0x20))(rcx_40)
                    
                    int64_t rax_102 = *(rsi_8 + r13 + 8)
                    int64_t* rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rcx_50 = &rbx_22[1]
                    
                    if (rcx_50 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x10)
                        rbx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_50 = &rbx_22[1]
                    
                    *(arg2 + 0x30) = rcx_50
                    *rbx_22 = rax_102
                    void*** rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_103 = &rcx_54[5]
                    
                    if (rax_103 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_54 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_103 = &rcx_54[5]
                    
                    *(arg2 + 0x30) = rax_103
                    *(r14_6 + 0x14) += 1
                    **(r14_6 + 8) = rcx_54
                    *(r14_6 + 8) = &rcx_54[1]
                    rcx_54[1] = 0
                    *rcx_54 = &data_142d549c8
                    rcx_54[2].d = 1
                    rcx_54[3] = rbx_22
                    rbx_3 = var_150
                    rcx_54[4].d = 0
                    *(rsi_8 + r13 + 8) = 0
                    *(rsi_8 + r13 + 0x24) = 0
                    *(rsi_8 + r13 + 0x2c) = 0
                    int64_t r8_14 = *(rbx_3 + 0x28)
                    *((sx.q(*(r8_14 + r13 + 0x3c)) << 6) + r8_14 + 0x38) = *(r8_14 + r13 + 0x38)
                    *((sx.q(*(r8_14 + r13 + 0x38)) << 6) + *(rbx_3 + 0x28) + 0x3c) =
                        *(r8_14 + r13 + 0x3c)
                    *(r8_14 + r13 + 0x3c) = var_178
                    *(r8_14 + r13 + 0x38) = var_178
                    int64_t rcx_61 = *(rbx_3 + 0x28)
                    int64_t rax_109 = sx.q(*(result_1 + 0x58))
                    *(rcx_61 + r13 + 0x38) = rax_109.d
                    void* rdx_28 = (rax_109 << 6) + rcx_61
                    *(rcx_61 + r13 + 0x3c) = *(rdx_28 + 0x3c)
                    *((sx.q(*(rdx_28 + 0x3c)) << 6) + *(rbx_3 + 0x28) + 0x38) = var_178
                    *(rdx_28 + 0x3c) = var_178
                    rdx_19 = rax_49
                    var_178 = rax_49
                while (rax_49 != j)
            
            result = result_1
            rbx = arg2
            arg1 = var_150
            i = i_1
            r8_1 = var_e8_1
            *(result + 0x54) = 0
        
        i += 1
        r8_1 += 0x60
        i_1 = i
        var_e8_1 = r8_1
    while (i s< *(arg1 + 0x20))

__security_check_cookie(result_2 ^ &var_1c8)
return result
