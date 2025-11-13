// 函数: sub_140679cc0
// 地址: 0x140679cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t* r13 = arg2
int32_t r12 = 0
int32_t arg_20 = 0

if (arg2[1].d s> 1)
    int64_t* r14_1 = *arg3
    void* var_c8 = nullptr
    int64_t var_c0_1 = 0
    void* r15_1 = &r14_1[sx.q(arg3[1].d)]
    
    if (r14_1 != r15_1)
        do
            void* rcx = *r14_1
            int64_t* rbx_1 = *(rcx + 0x30)
            int64_t* rsi_1 = *(rcx + 0x28)
            int64_t* rax_1 = rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rax_1 = *(rcx + 0x28)
            
            if (rax_1 != 0)
                int64_t rcx_1 = sx.q(rax_1[1].d)
                
                if (rcx_1.d u<= 6)
                    switch (rcx_1)
                        case 1
                            void*** rax_2 = j_sub_140a82f30(0x10)
                            void*** rdi_1 = rax_2
                            
                            if (rax_2 == 0)
                                rdi_1 = nullptr
                            else
                                rdi_1[1].d = 1
                                *rdi_1 = &data_142d84e10
                            
                            void*** rax_3 = j_sub_140a82f30(0x18)
                            
                            if (rax_3 == 0)
                                rax_3 = nullptr
                            else
                                rax_3[1].d = 1
                                *rax_3 = &data_142d86170
                                *(rax_3 + 0xc) = 1
                                rax_3[2] = rdi_1
                            
                            int64_t rdi_2 = sx.q(var_c0_1.d)
                            int32_t rax_4 = (rdi_2 + 1).d
                            var_c0_1.d = rax_4
                            
                            if (rax_4 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void* rcx_7 = (rdi_2 << 4) + var_c8
                            *rcx_7 = rdi_1
                            *(rcx_7 + 8) = rax_3
                            int64_t var_b0_2 = 0
                            int64_t var_b8_2 = 0
                        case 2
                            void*** rax_7 = j_sub_140a82f30(0x20)
                            void*** rdi_3 = rax_7
                            int64_t var_48
                            
                            if (rax_7 == 0)
                                rdi_3 = nullptr
                            else
                                r12 |= 1
                                int64_t* rax_8 = sub_140b74df0(rsi_1, &var_48)
                                *rdi_3 = &data_142d84ab0
                                rdi_3[1].d = 0
                                sub_140596d10(&rdi_3[2], rax_8)
                                rdi_3[1].d = 2
                            
                            void*** rax_9 = j_sub_140a82f30(0x18)
                            
                            if (rax_9 == 0)
                                rax_9 = nullptr
                            else
                                rax_9[1].d = 1
                                *rax_9 = &data_142d86170
                                *(rax_9 + 0xc) = 1
                                rax_9[2] = rdi_3
                            
                            int64_t rdi_4 = sx.q(var_c0_1.d)
                            int32_t rax_10 = (rdi_4 + 1).d
                            var_c0_1.d = rax_10
                            
                            if (rax_10 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void* rcx_13 = (rdi_4 << 4) + var_c8
                            *rcx_13 = rdi_3
                            *(rcx_13 + 8) = rax_9
                            int64_t var_a0_2 = 0
                            int64_t var_a8_2 = 0
                            
                            if ((r12.b & 1) != 0)
                                int64_t rcx_14 = var_48
                                r12 &= 0xfffffffe
                                
                                if (rcx_14 != 0)
                                    sub_140a74f90(rcx_14)
                        case 3
                            void*** rax_13 = j_sub_140a82f30(0x18)
                            void*** rdi_5 = rax_13
                            
                            if (rax_13 == 0)
                                rdi_5 = nullptr
                            else
                                rdi_5[2] = sub_140b74be0(rsi_1)
                                *rdi_5 = &data_142d84b38
                                rdi_5[1].d = 3
                            
                            void*** rax_14 = j_sub_140a82f30(0x18)
                            
                            if (rax_14 == 0)
                                rax_14 = nullptr
                            else
                                rax_14[1].d = 1
                                *rax_14 = &data_142d86170
                                *(rax_14 + 0xc) = 1
                                rax_14[2] = rdi_5
                            
                            int64_t rdi_6 = sx.q(var_c0_1.d)
                            int32_t rax_15 = (rdi_6 + 1).d
                            var_c0_1.d = rax_15
                            
                            if (rax_15 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void* rcx_19 = (rdi_6 << 4) + var_c8
                            *rcx_19 = rdi_5
                            *(rcx_19 + 8) = rax_14
                            int64_t var_90_2 = 0
                            int64_t var_98_2 = 0
                        case 4
                            void*** rax_18 = j_sub_140a82f30(0x18)
                            void*** rdi_7 = rax_18
                            
                            if (rax_18 == 0)
                                rdi_7 = nullptr
                            else
                                rdi_7[2].b = sub_140b74b60(rsi_1)
                                *rdi_7 = &data_142d84c78
                                rdi_7[1].d = 4
                            
                            void*** rax_20 = j_sub_140a82f30(0x18)
                            
                            if (rax_20 == 0)
                                rax_20 = nullptr
                            else
                                rax_20[1].d = 1
                                *rax_20 = &data_142d86170
                                *(rax_20 + 0xc) = 1
                                rax_20[2] = rdi_7
                            
                            int64_t rdi_8 = sx.q(var_c0_1.d)
                            int32_t rax_21 = (rdi_8 + 1).d
                            var_c0_1.d = rax_21
                            
                            if (rax_21 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void* rcx_24 = (rdi_8 << 4) + var_c8
                            *rcx_24 = rdi_7
                            *(rcx_24 + 8) = rax_20
                            int64_t var_80_2 = 0
                            int64_t var_88_2 = 0
                        case 5
                            void*** rax_24 = j_sub_140a82f30(0x20)
                            void*** rdi_10
                            
                            if (rax_24 == 0)
                                rdi_10 = nullptr
                            else
                                rdi_10 = sub_140669740(rax_24, sub_140b74a70(rsi_1))
                            
                            void*** rax_27 = j_sub_140a82f30(0x18)
                            
                            if (rax_27 == 0)
                                rax_27 = nullptr
                            else
                                rax_27[1].d = 1
                                *rax_27 = &data_142d86170
                                *(rax_27 + 0xc) = 1
                                rax_27[2] = rdi_10
                            
                            int64_t rdi_11 = sx.q(var_c0_1.d)
                            int32_t rax_28 = (rdi_11 + 1).d
                            var_c0_1.d = rax_28
                            
                            if (rax_28 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void**** rcx_30 = (rdi_11 << 4) + var_c8
                            *rcx_30 = rdi_10
                            rcx_30[1] = rax_27
                            int64_t var_70_2 = 0
                            int64_t var_78_2 = 0
                        case 6
                            void*** rax_31 = j_sub_140a82f30(0x20)
                            void*** rdi_13
                            
                            if (rax_31 == 0)
                                rdi_13 = nullptr
                            else
                                int64_t rdx_8 = *rsi_1
                                int64_t* rax_32 = (*rdx_8)(rsi_1, rdx_8)
                                int64_t var_58 = *rax_32
                                void* rcx_33 = rax_32[1]
                                void* var_50_1 = rcx_33
                                
                                if (rcx_33 != 0)
                                    *(rcx_33 + 8) += 1
                                
                                rdi_13 = sub_140669820(rax_31, &var_58)
                            
                            void*** rax_34 = j_sub_140a82f30(0x18)
                            
                            if (rax_34 == 0)
                                rax_34 = nullptr
                            else
                                rax_34[1].d = 1
                                *rax_34 = &data_142d86170
                                *(rax_34 + 0xc) = 1
                                rax_34[2] = rdi_13
                            
                            int64_t rdi_14 = sx.q(var_c0_1.d)
                            int32_t rax_35 = (rdi_14 + 1).d
                            var_c0_1.d = rax_35
                            
                            if (rax_35 s> var_c0_1:4.d)
                                sub_140610660(&var_c8)
                            
                            void**** rcx_38 = (rdi_14 << 4) + var_c8
                            *rcx_38 = rdi_13
                            rcx_38[1] = rax_34
                            int64_t var_60_2 = 0
                            int64_t var_68_2 = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            r14_1 = &r14_1[1]
        while (r14_1 != r15_1)
        
        r13 = arg2
    
    result = sub_140b75640(*(arg1 + 0x28), r13, &var_c8)
    int32_t i_1 = var_c0_1.d
    
    if (i_1 != 0)
        int64_t* rdi_16 = var_c8 + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rdi_16
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp2_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            rdi_16 = &rdi_16[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    void* rcx_45 = var_c8
    
    if (rcx_45 != 0)
        return sub_140a74f90(rcx_45)

return result
