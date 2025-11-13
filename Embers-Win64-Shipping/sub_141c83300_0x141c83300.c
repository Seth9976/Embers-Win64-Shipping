// 函数: sub_141c83300
// 地址: 0x141c83300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rcx = arg1[1]
char* rax_3 = (*(*rcx + 0x48))(rcx)
void* rbx = *arg1
int32_t result_1
sub_141c88700(rbx + 8, &result_1, rax_3)
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t rdx_1 = result * 5
    result = *(rbx + 8)
    int64_t r15_1 = result + (rdx_1 << 3)
    
    if (r15_1 != 0)
        void* r13_1 = *(r15_1 + 0x10)
        int64_t* r15_2 = *(r15_1 + 0x18)
        void* var_110_1 = r13_1
        
        if (r15_2 != 0)
            r15_2[1].d += 1
        
        if (r13_1 != 0)
            int64_t* rax_4 = j_sub_140a82f30(0x98)
            int64_t* rbx_1 = rax_4
            
            if (rax_4 == 0)
                rbx_1 = nullptr
            else
                memset(&rax_4[3], 0, 0x80)
                int64_t* rcx_3 = &rbx_1[4]
                __builtin_memset(rbx_1, 0, 0x20)
                rcx_3[2] = 0
                rcx_3[3].d = 0
                *(rcx_3 + 0x1c) = 0x80
                int64_t* rax_5 = rcx_3[2]
                
                if (rax_5 != 0)
                    rcx_3 = rax_5
                
                *rcx_3 = 0
                rcx_3[1] = 0
                rbx_1[8].d = 0xffffffff
                *(rbx_1 + 0x44) = 0
                rbx_1[0xa] = 0
                rbx_1[0xb].d = 0
                rbx_1[0xd] = 0
                rbx_1[0xe] = 0
                rbx_1[0x11] = 0
                rbx_1[0x12] = 0
            
            void*** rax_6 = j_sub_140a82f30(0x18)
            
            if (rax_6 == 0)
                rax_6 = nullptr
            else
                rax_6[1].d = 1
                *rax_6 = &data_14320fd10
                *(rax_6 + 0xc) = 1
                rax_6[2] = rbx_1
            
            int64_t* rcx_4 = arg1[2]
            int64_t rdx_3 = arg1[1]
            int64_t var_100 = rdx_3
            int64_t* var_f8 = rcx_4
            
            if (rcx_4 != 0)
                rcx_4[1].d += 1
                rcx_4 = var_f8
            
            if (rbx_1 != &var_100)
                *rbx_1 = rdx_3
                var_100 = 0
                sub_1405aeff0(&rbx_1[1], &var_f8)
                rcx_4 = var_f8
            
            if (rcx_4 != 0)
                rcx_4[1].d -= 1
                
                if (rcx_4[1].d == 1)
                    int64_t* rbx_2 = var_f8
                    (**rbx_2)(rbx_2)
                    int32_t rax_10 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_10 == 1)
                        int64_t* rcx_7 = var_f8
                        (*(*rcx_7 + 8))(rcx_7, 1)
            
            void* var_d8 = r13_1
            rbx_1[0xc].b = 0
            
            if (r15_2 != 0)
                r15_2[1].d += 1
            
            if (&var_d8 != &rbx_1[0xd])
                int128_t zmm1 = var_d8.o
                int128_t var_48_1 = zmm1
                var_d8.o = *(rbx_1 + 0x68)
                *(rbx_1 + 0x68) = zmm1
            
            if (r15_2 != 0)
                r15_2[1].d -= 1
                
                if (r15_2[1].d == 1)
                    (**r15_2)(r15_2)
                    int32_t temp4_1 = *(r15_2 + 0xc)
                    *(r15_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*r15_2 + 8))(r15_2, 1)
            
            rbx_1[0xf] = 0
            rbx_1[0x10] = arg1[3]
            uint128_t zmm0_1 = rbx_1.o
            uint128_t var_78 = zmm0_1
            void* rax_19 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rax_19 != 0)
                *(rax_19 + 8) += 1
            
            int64_t var_a0 = arg1[1]
            int64_t* rax_21 = arg1[2]
            
            if (rax_21 != 0)
                rax_21[1].d += 1
            
            void* rcx_11 = *arg1
            int64_t* var_90 = &var_a0
            uint128_t* var_88_1 = &var_78
            void var_b8
            sub_141c801e0(rcx_11 + 0x118, &var_b8, &var_90, nullptr)
            
            if (rax_21 != 0)
                rax_21[1].d -= 1
                
                if (rax_21[1].d == 1)
                    (**rax_21)(rax_21)
                    int32_t rsi_1 = *(rax_21 + 0xc)
                    *(rax_21 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*rax_21 + 8))(rax_21, zx.q(rsi_1))
            
            int64_t* rbx_5 = var_78:8.q
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp6_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            int64_t* rbx_6 = arg1[1]
            int64_t rax_28 = (*(*rbx_6 + 0x18))(rbx_6)
            char rax_31
            
            if (rax_28 != 0)
                rax_31 = sub_140d3e170((*(*rbx_6 + 0x20))(rbx_6), 0, 1)
            
            int32_t var_118
            int64_t rcx_22
            int32_t rsi_2
            
            if (rax_28 == 0 || rax_31 == 0)
                rcx_22 = 0
                int32_t var_114_1 = 0
                var_118 = 0
                rsi_2 = 0
            else
                rcx_22 = *(sub_140d3c6e0((*(*rbx_6 + 0x20))(rbx_6)) + 0x18)
                var_118.q = rcx_22
                int32_t var_114
                rsi_2 = var_114
            
            void* rax_36 = sub_141c80dd0(*arg1 + 0x168, rsi_2 + sub_140b5ead0(rcx_22.d), &var_118)
            
            if (*rax_36 == 0)
                int64_t rax_37 = j_sub_140a82f30(0x18)
                int64_t rsi_3 = rax_37
                
                if (rax_37 == 0)
                    rsi_3 = 0
                else
                    __builtin_memset(rax_37, 0, 0x18)
                
                void*** rax_38 = j_sub_140a82f30(0x18)
                void*** rbx_8 = rax_38
                
                if (rax_38 == 0)
                    rbx_8 = nullptr
                else
                    rax_38[1].d = 1
                    *(rax_38 + 0xc) = 1
                    *rbx_8 = &data_14320fd00
                    rbx_8[2] = rsi_3
                
                int64_t var_e8 = rsi_3
                void*** var_e0_1 = rbx_8
                
                if (rax_36 == &var_e8)
                label_141c8379b:
                    
                    if (rbx_8 != 0)
                        rbx_8[1].d -= 1
                        
                        if (rbx_8[1].d == 1)
                            (**rbx_8)(rbx_8)
                            int32_t temp9_1 = *(rbx_8 + 0xc)
                            *(rbx_8 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*rbx_8)[1](rbx_8, 1)
                else
                    *rax_36 = rsi_3
                    int64_t* rsi_4 = *(rax_36 + 8)
                    var_e8 = 0
                    
                    if (rbx_8 == rsi_4)
                        goto label_141c8379b
                    
                    void*** var_e0_2 = nullptr
                    *(rax_36 + 8) = rbx_8
                    
                    if (rsi_4 != 0)
                        rsi_4[1].d -= 1
                        
                        if (rsi_4[1].d == 1)
                            (**rsi_4)(rsi_4)
                            int32_t temp13_1 = *(rsi_4 + 0xc)
                            *(rsi_4 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*rsi_4 + 8))(rsi_4, 1)
                        
                        rbx_8 = var_e0_2
                        goto label_141c8379b
                
                int64_t* rbx_9 = arg1[1]
                int64_t rax_44 = (*(*rbx_9 + 0x18))(rbx_9)
                char rax_47
                
                if (rax_44 != 0)
                    rax_47 = sub_140d3e170((*(*rbx_9 + 0x20))(rbx_9), 0, 1)
                
                int64_t rcx_33
                
                if (rax_44 == 0 || rax_47 == 0)
                    rcx_33 = 0
                else
                    rcx_33 = *(sub_140d3c6e0((*(*rbx_9 + 0x20))(rbx_9)) + 0x18)
                
                *(*rax_36 + 0x10) = rcx_33
                int64_t* rbx_10 = *(rax_36 + 8)
                int64_t rax_52 = *rax_36
                
                if (rbx_10 != 0)
                    rbx_10[1].d += 1
                
                r13_1.b = 0
                int64_t* r14_2 = *arg1 + 0x210
                *(r14_2 + 0x14) += 1
                int32_t rax_53 = r14_2[1].d
                int32_t rcx_34 = *(r14_2 + 0x14)
                int64_t rsi_5 = sx.q(rax_53 - 1)
                
                if (rax_53 - 1 s>= 0)
                    int64_t rdi_2 = rsi_5 << 4
                    int64_t temp22_1
                    
                    do
                        int64_t rcx_35 = *r14_2
                        
                        if (*(rdi_2 + rcx_35 + 8) == 0)
                            r13_1.b = 1
                        else
                            int64_t* rcx_36 = *(rdi_2 + rcx_35)
                            
                            if (rcx_36 == 0)
                                r13_1.b = 1
                            else
                                int64_t var_68 = rax_52
                                int64_t* var_60_1 = rbx_10
                                
                                if (rbx_10 != 0)
                                    rbx_10[1].d += 1
                                
                                if ((*(*rcx_36 + 0x50))(rcx_36, &var_68) == 0)
                                    r13_1.b = 1
                        
                        rdi_2 -= 0x10
                        temp22_1 = rsi_5
                        rsi_5 -= 1
                    while (temp22_1 - 1 s>= 0)
                    rcx_34 = *(r14_2 + 0x14)
                
                *(r14_2 + 0x14) = rcx_34 - 1
                
                if (r13_1.b != 0)
                    sub_140599630(r14_2, 0)
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        (**rbx_10)(rbx_10)
                        int32_t temp21_1 = *(rbx_10 + 0xc)
                        *(rbx_10 + 0xc) -= 1
                        
                        if (temp21_1 == 1)
                            (*(*rbx_10 + 8))(rbx_10, 1)
                
                r13_1 = var_110_1
            
            if (rax_6 != 0)
                rax_6[1].d += 1
            
            int64_t* rbx_11 = *rax_36
            int64_t rsi_6 = sx.q(rbx_11[1].d)
            int32_t rax_60 = (rsi_6 + 1).d
            rbx_11[1].d = rax_60
            
            if (rax_60 s> *(rbx_11 + 0xc))
                sub_1405a4f90(rbx_11)
            
            int64_t** rax_63 = (rsi_6 << 4) + *rbx_11
            *rax_63 = rbx_1
            rax_63[1] = rax_6
            
            if (rax_6 != 0)
                rax_6[1].d += 1
            
            int64_t rsi_7 = sx.q(*(r13_1 + 0x78))
            int32_t rax_64 = (rsi_7 + 1).d
            *(r13_1 + 0x78) = rax_64
            
            if (rax_64 s> *(r13_1 + 0x7c))
                sub_1405a4f90(r13_1 + 0x70)
            
            void** rax_67 = (rsi_7 << 4) + *(r13_1 + 0x70)
            *rax_67 = rbx_1
            rax_67[1] = rax_6
            int64_t* rbx_12 = *(rax_36 + 8)
            int64_t var_c8 = *rax_36
            
            if (rbx_12 != 0)
                rbx_12[1].d += 1
            
            if (&var_c8 != &rbx_1[0x11])
                var_c8.o = *(rbx_1 + 0x88)
                *(rbx_1 + 0x88) = var_c8.o
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    (**rbx_12)(rbx_12)
                    int32_t temp12_1 = *(rbx_12 + 0xc)
                    *(rbx_12 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        (*(*rbx_12 + 8))(rbx_12, 1)
            
            if (rax_6 != 0)
                rax_6[1].d += 1
            
            void* r12_1
            r12_1.b = 0
            void* r14_6 = *arg1 + 0x1e0
            *(r14_6 + 0x14) += 1
            int32_t rax_72 = *(r14_6 + 8)
            int32_t rcx_46 = *(r14_6 + 0x14)
            int64_t rsi_8 = sx.q(rax_72 - 1)
            
            if (rax_72 - 1 s>= 0)
                int64_t rdi_6 = rsi_8 << 4
                int64_t temp18_1
                
                do
                    int64_t rcx_47 = *r14_6
                    
                    if (*(rdi_6 + rcx_47 + 8) == 0)
                        r12_1.b = 1
                    else
                        int64_t* rcx_48 = *(rdi_6 + rcx_47)
                        
                        if (rcx_48 == 0)
                            r12_1.b = 1
                        else
                            int64_t* var_58 = rbx_1
                            void*** var_50_1 = rax_6
                            
                            if (rax_6 != 0)
                                rax_6[1].d += 1
                            
                            if ((*(*rcx_48 + 0x50))(rcx_48, &var_58) == 0)
                                r12_1.b = 1
                    
                    rdi_6 -= 0x10
                    temp18_1 = rsi_8
                    rsi_8 -= 1
                while (temp18_1 - 1 s>= 0)
                rcx_46 = *(r14_6 + 0x14)
            
            result = zx.q(rcx_46 - 1)
            *(r14_6 + 0x14) = result.d
            
            if (r12_1.b != 0)
                result = sub_140599630(r14_6, 0)
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    result = (**rax_6)(rax_6)
                    int32_t temp17_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (temp17_1 == 1)
                        result = (*rax_6)[1](rax_6, 1)
            
            if (rax_6 != 0)
                rax_6[1].d -= 1
                
                if (rax_6[1].d == 1)
                    result = (**rax_6)(rax_6)
                    int32_t temp20_1 = *(rax_6 + 0xc)
                    *(rax_6 + 0xc) -= 1
                    
                    if (temp20_1 == 1)
                        result = (*rax_6)[1](rax_6, 1)
        
        if (r15_2 != 0)
            r15_2[1].d -= 1
            
            if (r15_2[1].d == 1)
                result = (**r15_2)(r15_2)
                int32_t temp2_1 = *(r15_2 + 0xc)
                *(r15_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*r15_2 + 8))(r15_2, 1)

__security_check_cookie(rax_1 ^ &var_148)
return result
