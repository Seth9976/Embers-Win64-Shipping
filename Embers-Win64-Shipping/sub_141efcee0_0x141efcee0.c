// 函数: sub_141efcee0
// 地址: 0x141efcee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("CharacterMovement")
void var_48
(*(*arg1 + 0x570))(arg1, &var_48)

if ((*(*arg1 + 0x5c0))(arg1) != 0)
    int512_t zmm1
    zmm1.o = arg2
    
    if ((*(*arg1 + 0x428))(arg1, zmm1) == 0)
        zmm1.o = arg2
        int64_t zmm1_1
        int512_t zmm2_1
        int64_t zmm6_1
        zmm1_1, zmm2_1, zmm6_1 = sub_141f29460(arg1, zmm1, zx.q(arg3), arg4)
        
        if ((*(*arg1 + 0x5c0))(arg1) != 0)
            int64_t* rcx_5 = arg1[0x16]
            char rax_8 = (*(*rcx_5 + 0x3e8))(rcx_5, 0)
            int64_t* rcx_6 = arg1[0x29]
            char rax_9
            
            if (rcx_6[0x1e].b == 3 && ((arg1[0x71].b & 8) == 0 || rax_8 != 0))
                int64_t rdx_1 = *rcx_6
                rax_9 = (*(rdx_1 + 0x448))(rcx_6, rdx_1)
            
            if (rcx_6[0x1e].b != 3 || ((arg1[0x71].b & 8) != 0 && rax_8 == 0) || rax_9 != 0)
                void* rax_10 = arg1[0x29]
                
                if (rax_8 == 0)
                    int64_t zmm0_1
                    zmm0_1.d = arg1[0x73].d.d f- zmm6_1.d
                    arg1[0x73].d = zmm0_1.d
                    char rcx_10 = *(rax_10 + 0xf0)
                    
                    if (rcx_10 u> 1)
                        int32_t rsi
                        
                        if (rcx_10 != 2)
                            rsi.b = 0
                        else
                            int64_t* rcx_11 = arg1[0x14]
                            
                            if (rcx_11 == 0)
                                rsi.b = 0
                            else
                                int32_t rax_13
                                rax_13, zmm1_1, zmm2_1, zmm6_1 = sub_141dcdc50(rcx_11)
                                
                                if (rax_13 != 3)
                                    rsi.b = 0
                                else
                                    rsi.b = 1
                                    void* rax_14 = sub_141ee5d40(arg1)
                                    
                                    if (rax_14 != 0 && (*(rax_14 + 0xa0) & 1) != 0)
                                        (*(*arg1 + 0x968))(arg1)
                        
                        int64_t* rcx_14 = arg1[0x29]
                        
                        if ((*(*rcx_14 + 0x6b0))(rcx_14) != 0)
                        label_141efd11d:
                            int64_t* rcx_20 = arg1[0x29]
                            zmm1_1 = zmm6_1
                            (*(*rcx_20 + 0x838))(rcx_20, zmm1_1)
                            int64_t rbx_2 = *arg1
                            void var_38
                            void var_2c
                            int64_t* rax_26 = (*(rbx_2 + 0x900))(arg1, &var_2c, 
                                (*(rbx_2 + 0x8f8))(arg1, &var_38, &var_48))
                            zmm0_1 = *rax_26
                            *(arg1 + 0x22c) = zmm0_1
                            *(arg1 + 0x234) = rax_26[1].d
                            (*(*arg1 + 0x588))(arg1)
                            void* rax_29 = arg1[0x29]
                            *(arg1 + 0x28c) = zmm0_1.d
                            
                            if (*(rax_29 + 0xf0) == 3)
                                zmm1_1 = zmm6_1
                                (*(*arg1 + 0x928))(arg1, zmm1_1)
                            else if (rsi.b != 0)
                                zmm1_1 = zmm6_1
                                (*(*arg1 + 0x960))(arg1, zmm1_1, arg1 + 0x22c)
                        else
                            void* rcx_15 = arg1[0x29]
                            
                            if (*(rcx_15 + 0x258) == 0)
                                if ((*(arg1 + 0x1f1) & 4) != 0)
                                    goto label_141efd11d
                                
                                if (sub_141ea5ff0(rcx_15) != 0)
                                    goto label_141efd11d
                                
                                goto label_141efd0ac
                            
                        label_141efd0ac:
                            
                            if (*(arg1[0x29] + 0x5f) == 2)
                                zmm1_1 = zmm6_1
                                (*(*arg1 + 0x5f8))(arg1, zmm1_1)
                                (*(*arg1 + 0x610))(arg1)
                                
                                if (data_143a2d660 != 0 && *(arg1 + 0x1f1) s>= 0)
                                    int64_t* rcx_18 = arg1[0x14]
                                    
                                    if (rcx_18 != 0)
                                        int32_t rax_22
                                        rax_22, zmm1_1, zmm2_1, zmm6_1 = sub_141dcdc50(rcx_18)
                                        
                                        if (rax_22 == 2)
                                            zmm1_1 = zmm6_1
                                            (*(*arg1 + 0x958))(arg1, zmm1_1)
                    else if (rcx_10 == 1)
                        if ((*(arg1 + 0x1f1) & 0x10) != 0)
                            (*(*arg1 + 0x8f0))(arg1)
                        
                        zmm1_1 = zmm6_1
                        (*(*arg1 + 0x930))(arg1, zmm1_1)
                    
                    if ((*(arg1 + 0x389) & 0x10) != 0)
                        void* rax_34
                        float zmm0_2[0x4]
                        rax_34, zmm0_2 = sub_1405be820(arg1)
                        void* rbx_3 = *(rax_34 + 0x140)
                        
                        if (rbx_3 != 0 && (*(arg1 + 0x38a) & 8) == 0 && *(arg1[0x29] + 0x290) != 0)
                            sub_141ddbf20(rbx_3, arg1, zmm2_1, zmm0_2, zmm1_1)
                            zmm6_1 = sub_141ef4f80(arg1, rbx_3, *(rbx_3 + 0x38))
                        
                        *(arg1 + 0x38a) &= 0xf7
                    
                    if ((*(arg1 + 0x1f2) & 0x10) != 0)
                        (*(*arg1 + 0x6f8))(arg1, zmm6_1)
                        (*(*arg1 + 0x700))(arg1, zmm6_1)
                else
                    if (*(rax_10 + 0xf0) == 2)
                        int64_t* rcx_7 = arg1[0x14]
                        
                        if (rcx_7 != 0 && sub_141dcdc50(rcx_7) == 3)
                            sub_141f1eb40(arg1)
                    
                    (*(*arg1 + 0x710))(arg1)

return sub_140b37f60("CharacterMovement")
